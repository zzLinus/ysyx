#pragma once

#include <assert.h>
#include <stdlib.h>
#include <string.h>

#include <cstdio>

//
#include <readline/history.h>
#include <readline/readline.h>

#include "defs.h"

// macros
#define TODO() printf("please implement me")

extern void sdb_mainloop();

// Monitor
void welcome();

//  Watch Point
typedef struct watchpoint
{
    int NO;
    struct watchpoint *next;

    /* TODO: Add more members if necessary */
    char var_name[16];
    uint32_t value;
} WP;

WP *new_wp();
void free_wp(WP *);
bool check_wp();
void create_wp(char *, bool *);
void wp_disp();
void delete_wp(char *, bool *);
void init_wp_pool();

// Expr
int64_t eval_reg(char *str);
uint64_t expr(char *e, bool *success);
uint64_t reg_str2val(const char *s, bool *success);

// disam
void init_disasm(const char *triple);
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);

// fTrace
void init_ftrace(const char* p);
