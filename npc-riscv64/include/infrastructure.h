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

void cpu_exec(uint64_t n);

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
void init_regex();

// disam
void init_disasm(const char *triple);
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);

// fTrace
void init_ftrace(const char* p);

// reg
uint64_t reg_str2val(const char *s, bool *success);
void reg_display();


// trace
// NOTE: ftrace
#define CONFIG_FTRACE

#ifdef CONFIG_FTRACE

#define RET  call_ret = 1 << 2;
#define CALL call_ret = 1 << 1;
#define ELF_FUNC_MAX      30
#define ELF_FUNC_NAME_MAX 30
#define FTRACE_FLAGS      0b10000000
#define FMT_WORD  "0x%016lx"

typedef struct
{
    uint64_t addr;
    uint64_t size;
    char name[ELF_FUNC_NAME_MAX];
} ElfFuncInfo;

#define Elfw(type) Elf64_##type

#define PRINT_TAB(n)                     \
    if ((n) < 30)                        \
        for (size_t i = 0; i < (n); i++) \
            printf("  ");                \
    else                                 \
        for (size_t i = 0; i < 30; i++)  \
            printf("  ");

#endif

// NOTE: itrace
#define CONFIG_ITRACE
#ifdef CONFIG_ITRACE
#define RINGBUFSIZE 20
#define INSTLEN     80
typedef struct ring_buffer
{
    char insts[RINGBUFSIZE][INSTLEN];
    uint8_t cur_inst;
} ring_buffer;

static ring_buffer r;
#endif
