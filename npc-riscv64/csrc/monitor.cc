#include "defs.h"
#include <stdio.h>

void welcome()
{
    printf("Build time: %s, %s\n", __TIME__, __DATE__);
    printf("Welcome to %s-NPC!\n", ANSI_FMT(_str(riscv), ANSI_FG_YELLOW ANSI_BG_RED));
    printf("For help, type \"help\"\n");
}
