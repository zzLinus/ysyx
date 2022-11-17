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

#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
	int NO;
	struct watchpoint *next;

	/* TODO: Add more members if necessary */
	char var_name[16];
	uint32_t value;
} WP;

static WP wp_pool[NR_WP] = {}; // allocate stright on stack
static WP *head = NULL, *free_ = NULL;

WP *new_wp();
void free_wp(WP *wp);
void check_wp();

void init_wp_pool()
{
	int i;
	for (i = 0; i < NR_WP; i++) {
		wp_pool[i].NO = i;
		wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
		strcpy(wp_pool[i].var_name, "INVAI");
		wp_pool[i].value = 0;
	}

	head = NULL;
	free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */

void create_wp(char *args, bool *success)
{
	WP *wp = new_wp();
	char reg[10] = { 0 };
	strcpy(reg, strtok(args, " "));
	if (strtok(NULL, " ") != NULL) {
	}
	memmove(args, args + 1, strlen(args));
	strcpy(wp->var_name, args);
	wp->value = eval_reg(args);
	*success = true;
	printf("create watch point\nvar_name: %s\nvar_value: %u\n", wp->var_name, wp->value);
}

WP *new_wp()
{
	assert(free_->next != NULL); // check if there is no enough watch point
	WP *tmp = free_;
	free_ = free_->next;
	if (head == NULL) {
		tmp->next = NULL;
		head = tmp;
	} else {
		tmp->next = head;
		head = tmp;
	}
	return tmp;
}

void free_wp(WP *wp)
{
	for (WP *tmp = head; tmp != NULL; tmp = tmp->next) {
		if (tmp == wp) {
			if (head->next != NULL)
				head = head->next;
			else
				head = NULL;
		} else if (tmp->next == wp)
			tmp->next = wp->next;
	}
	if (free_ == NULL)
		wp->next = NULL;
	else
		wp->next = free_;
	free_ = wp;
}

void check_wp()
{
	for (WP *tmp = head; tmp != NULL; tmp = tmp->next) {
		char tmp_name[10];
		strcpy(tmp_name, tmp->var_name);
		if (strcmp(tmp->var_name, "INVAI") != 0 && tmp->value != eval_reg(tmp_name)) {
			/* nemu_state.state = NEMU_STOP; */
			printf("Reg %s,old value %u\n", tmp->var_name, tmp->value);
			tmp->value = atoi(tmp_name);
			printf("Reg %s,new value %u\n", tmp->var_name, tmp->value);
			printf("Watchpoint value has changed\n");
			return;
		}
	}
}

void wp_disp()
{
	int count = 0;
	if (head == NULL) {
		printf("No watch point created.\n");
	}

	for (WP *tmp = head; tmp != NULL; tmp = tmp->next) {
		printf("watch point %d\nwatching: %s\ncurrent value: %u\n", count, tmp->var_name, tmp->value);
		count++;
	}
}

void delete_wp(char *args, bool *success)
{
	args = strtok(args, " ");
	memmove(args, args + 1, strlen(args));
	for (WP *tmp = head; tmp != NULL; tmp = tmp->next) {
		if (strcmp(tmp->var_name, args) == 0) {
			free_wp(tmp);
			*success = true;
			printf("Watchpoint deleted\n");
			return;
		}
	}
	*success = false;
	return;
}
