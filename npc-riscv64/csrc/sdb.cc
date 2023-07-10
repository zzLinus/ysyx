#include "dpifunc.h"
#include "infrastructure.h"
#include "mem.h"

static int cmd_help(char *args);
static int cmd_si(char *args);
static int cmd_info(char *args);
static int cmd_x(char *args);
static int cmd_p(char *args);
static int cmd_w(char *args);
static int cmd_d(char *args);
static int cmd_q(char *args);
static int cmd_c(char *args);
extern void cpu_exec(uint64_t n);
extern NPCState npc_s;
extern pmem *mem;

static struct
{
    const char *name;
    const char *description;
    int (*handler)(char *);
} cmd_table[] = {
    { "help", "Display information about all supported commands", cmd_help },
    { "c", "Continue the execution of the program", cmd_c },
    { "q", "Exit NPC", cmd_q },
    { "si", "Single step N times", cmd_si },
    { "info", "Print register value", cmd_info },
    { "x", "Value EXPR and store it's resalt in hex, print N bytes start with the resalt that's been store", cmd_x },
    { "p", "Evaluate EXPR", cmd_p },
    { "w", "Watch EXPR,if it change stop the program", cmd_w },
    { "d", "Delete watch point number N", cmd_d },
    //  TODO: Add more commands
};

static int cmd_help(char *args)
{
    /* extract the first argument */
    char *arg = strtok(NULL, " ");
    int i;

    if (arg == NULL)
    {
        /* no argument given */
        for (i = 0; i < NR_CMD; i++)
        {
            printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        }
    }
    else
    {
        for (i = 0; i < NR_CMD; i++)
        {
            if (strcmp(arg, cmd_table[i].name) == 0)
            {
                printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
                return 0;
            }
        }
        printf("Unknown command '%s'\n", arg);
    }
    return 0;
}

static int cmd_si(char *args)
{
    if (args == NULL)
    {
        printf("Not enought arguments,Need 1 provided 0\n");
        return 0;
    }
    if (npc_s.state == NPC_END || npc_s.state == NPC_ABORT)
    {
        printf("NPC is in halt stage, please restart npc\n");
        return 0;
    }
    cpu_exec(atoi(args));
    return 0;
}

static int cmd_info(char *args)
{
    if (strcmp(args, "r") == 0)
    {
        reg_display();
    }
    else if (strcmp(args, "w") == 0)
    {
        wp_disp();
        return 0;
    }
    else
    {
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
    if (arg == NULL)
    {
        printf("Unavaliable args\n");
        return 0;
    }
    arg0 = atoi(arg);
    arg = strtok(NULL, " ");
    // error handling
    if (arg == NULL)
    {
        printf("Too less args,need 2,only 1 provided\n");
        return 0;
    }
    arg1 = strtol(arg, NULL, 16);
    for (int i = 0; i < arg0; i++)
    {
        // TODO:display content in memory here
				uint64_t content;
        pmem_read((uint64_t)arg1, &content);
        printf("0x%08x\n", content);
        arg1 += 4;
    }
    return 0;
}

static int cmd_p(char *args)
{
    bool success = false;
    expr(args, &success);

    if (!success)
        printf("Can't rauate expression.\n");
    return 0;
}

static int cmd_w(char *args)
{
    bool success = false;
    if (args != NULL)
    {
        create_wp(args, &success);
    }
    else
        printf("Invalied arguments.\n");

    if (!success)
        printf("Watch point create failed.\n");
    return 0;
}

static int cmd_d(char *args)
{
    bool success = false;

    delete_wp(args, &success);
    if (!success)
        printf("Watch point delete failed.\n");
    return 0;
}

static int cmd_c(char *args)
{
    if (npc_s.state == NPC_END || npc_s.state == NPC_ABORT)
    {
        printf("NPC is in halt stage, please restart npc\n");
        return 0;
    }
    cpu_exec(-1);
    return 0;
}

static int cmd_q(char *args)
{
    return -1;
}

static char *rl_gets()
{
    static char *line_read = NULL;

    if (line_read)
    {
        free(line_read);
        line_read = NULL;
    }

    line_read = readline("(npc) ");

    if (line_read && *line_read)
    {
        add_history(line_read);
    }

    return line_read;
}

void sdb_mainloop()
{
    init_wp_pool();

    for (char *str; (str = rl_gets()) != NULL;)
    {
        char *str_end = str + strlen(str);
        char cpy[64];
        strcpy(cpy, str);

        /* extract the first token as the command */
        char *cmd = strtok(cpy, " ");
        if (cmd == NULL)
        {
            continue;
        }

        /* treat the remaining string as the arguments,
         * which may need further parsing
         */
        char *args = str + strlen(cmd) + 1;
        if (args >= str_end)
        {
            args = NULL;
        }

        int i;
        for (i = 0; i < NR_CMD; i++)
        {
            if (strcmp(cmd, cmd_table[i].name) == 0)
            {
                if (cmd_table[i].handler(args) < 0)
                {
                    return;
                }
                break;
            }
        }

        if (i == NR_CMD)
        {
            printf("Unknown command '%s'\n", cmd);
        }
    }
}
