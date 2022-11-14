/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include "memory/paddr.h"
#include <isa.h>
#include <stdlib.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char *rl_gets()
{
	static char *line_read = NULL;

	if (line_read) {
		free(line_read);
		line_read = NULL;
	}

	line_read = readline("(nemu) ");

	if (line_read && *line_read) {
		add_history(line_read);
	}

	return line_read;
}

static int cmd_c(char *args)
{
	cpu_exec(-1);
	return 0;
}

static int cmd_q(char *args)
{
	return -1;
}

static int cmd_help(char *args);

static int cmd_si(char *args);

static int cmd_info(char *args);

static int cmd_x(char *args);

static int cmd_p(char *args);

static int cmd_w(char *args);

static int cmd_d(char *args);

static struct {
	const char *name;
	const char *description;
	int (*handler)(char *);
} cmd_table[] = {
	{ "help", "Display information about all supported commands", cmd_help },
	{ "c", "Continue the execution of the program", cmd_c },
	{ "q", "Exit NEMU", cmd_q },
	{ "si", "Single step N times", cmd_si },
	{ "info", "Print register value", cmd_info },
	{ "x", "Value EXPR and store it's resalt in hex, print N bytes start with the resalt that's been store",
	  cmd_x },
	{ "p", "Evaluate EXPR", cmd_p },
	{ "w", "Watch EXPR,if it change stop the program", cmd_w },
	{ "d", "Delete watch point number N", cmd_d },
	/* TODO: Add more commands */
};

static int cmd_si(char *args)
{
	if (args == NULL) {
		printf("Not enought arguments,Need 1 provided 0\n");
		return 0;
	}
	cpu_exec(atoi(args));
	return 0;
}

static int cmd_info(char *args)
{
	if (strcmp(args, "r") == 0) {
		isa_reg_display();
	} else if (strcmp(args, "w") == 0) {
		printf("watch point info display uninplemente now\n");
		return 0;
	} else {
		printf("Unavaliable args\n");
		return 0;
	}
	return 0;
}

static int cmd_x(char *args)
{
	uint32_t arg0 = 0, arg1 = 0;
	char *arg = strtok(args, " ");
	// error handling
	if (arg == NULL) {
		printf("Unavaliable args\n");
		return 0;
	}
	arg0 = atoi(arg);
	arg = strtok(NULL, " ");
	// error handling
	if (arg == NULL) {
		printf("Too less args,need 2,only 1 provided\n");
		return 0;
	}
	arg1 = strtol(arg, NULL, 16);
	unsigned i;
	for (i = 0; i < arg0 / 8; ++i) {
		if (i == 0)
			printf("Memory from %x to %x:\n", arg1, arg1 + (arg0 / 8) * 8);
		printf("0x%016lx\n", paddr_read(arg1, 8));
		arg1 += 8;
	}
	arg0 %= 8;
	for (i = 0; i < arg0 / 4; ++i) {
		if (i == 0)
			printf("Memory from %x to %x:\n", arg1, arg1 + (arg0 / 4) * 4);
		printf("0x%016lx\n", paddr_read(arg1, 4));
		arg1 += 4;
	}
	arg0 %= 4;
	for (i = 0; i < arg0 / 2; ++i) {
		if (i == 0)
			printf("Memory from %x to %x:\n", arg1, arg1 + (arg0 / 2) * 2);
		printf("0x%016lx\n", paddr_read(arg1, 2));
		arg1 += 2;
	}
	arg0 %= 2;
	for (i = 0; i < arg0 / 1; ++i) {
		if (i == 0)
			printf("Memory from %x to %x:\n", arg1, arg1 + (arg0 / 1) * 1);
		printf("0x%016lx\n", paddr_read(arg1, 1));
		arg1 += 1;
	}
	arg0 %= 2;
	return 0;
}

static int cmd_p(char *args)
{
	TODO();
	return 0;
}

static int cmd_w(char *args)
{
	TODO();
	return 0;
}

static int cmd_d(char *args)
{
	TODO();
	return 0;
}

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args)
{
	/* extract the first argument */
	char *arg = strtok(NULL, " ");
	int i;

	if (arg == NULL) {
		/* no argument given */
		for (i = 0; i < NR_CMD; i++) {
			printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
		}
	} else {
		for (i = 0; i < NR_CMD; i++) {
			if (strcmp(arg, cmd_table[i].name) == 0) {
				printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
				return 0;
			}
		}
		printf("Unknown command '%s'\n", arg);
	}
	return 0;
}

void sdb_set_batch_mode()
{
	is_batch_mode = true;
}

void sdb_mainloop()
{
	if (is_batch_mode) {
		cmd_c(NULL);
		return;
	}

	for (char *string; (string = rl_gets()) != NULL;) {
		char *str_end = string + strlen(string);
		char *str = malloc(32 * sizeof(char));
		do {
			if (*string != ' ')
				*str++ = *string;
		} while (*string++);
		printf("string len: %lu,string :%s\n", strlen(string), string);
		printf("string len: %lu,string :%s\n", strlen(str), str);

		/* extract the first token as the command */
		char *cmd = strtok(string, " ");
		if (cmd == NULL) {
			continue;
		}

		/* treat the remaining string as the arguments,
		 * which may need further parsing
		 */
		char *args = cmd + strlen(cmd) + 1;
		if (args >= str_end) {
			args = NULL;
		}

#ifdef CONFIG_DEVICE
		extern void sdl_clear_event_queue();
		sdl_clear_event_queue();
#endif

		int i;
		for (i = 0; i < NR_CMD; i++) {
			if (strcmp(cmd, cmd_table[i].name) == 0) {
				if (cmd_table[i].handler(args) < 0) {
					return;
				}
				break;
			}
		}

		if (i == NR_CMD) {
			bool *sucsess = false;
			expr(string, sucsess);
			if (!*sucsess)
				printf("Unknown command '%s'\n", cmd);
		}
	}
}

void init_sdb()
{
	/* Compile the regular expressions. */
	init_regex();

	/* Initialize the watchpoint pool. */
	init_wp_pool();
}
