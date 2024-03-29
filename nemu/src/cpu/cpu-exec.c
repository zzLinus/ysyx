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

#include <cpu/cpu.h>
#include <cpu/decode.h>
#include <cpu/difftest.h>
#include <locale.h>

/* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */
#define MAX_INST_TO_PRINT 50

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

CPU_state cpu = {};
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0;  // unit: us
static bool g_print_step = false;

#ifdef CONFIG_FTRACE
extern uint8_t call_ret;
extern uint32_t elf_nums;
extern ElfFuncInfo elf_funcs[ELF_FUNC_MAX];
uint64_t fs_size = 0;  // function stack size
#define PRINT_TAB(n)                     \
    if ((n) < 30)                        \
        for (size_t i = 0; i < (n); i++) \
            printf("  ");                \
    else                                 \
        for (size_t i = 0; i < 30; i++)  \
            printf("  ");
#endif

void device_update();
void check_wp();

static void trace_and_difftest(Decode *_this, vaddr_t dnpc)
{
#ifdef CONFIG_ITRACE_COND
    if (ITRACE_COND)
    {
        log_write("%s\n", _this->logbuf);
    }
#endif
    if (g_print_step)
    {
        IFDEF(CONFIG_ITRACE, puts(_this->logbuf));
    }
    IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));
    check_wp();
}

static void exec_once(Decode *s, vaddr_t pc)
{
    s->pc = pc;
    s->snpc = pc;
    isa_exec_once(s);  // fetch decode execute (mem access) (write back)
    cpu.pc = s->dnpc;  // pc + x
#ifdef CONFIG_ITRACE
    char *p = s->logbuf;
    p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);
    int ilen = s->snpc - s->pc;
    int i;
    uint8_t *inst = (uint8_t *)&s->isa.inst.val;
    for (i = ilen - 1; i >= 0; i--)
    {
        p += snprintf(p, 4, " %02x", inst[i]);
    }
    int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
    int space_len = ilen_max - ilen;
    if (space_len < 0)
        space_len = 0;
    space_len = space_len * 3 + 1;
    memset(p, ' ', space_len);
    p += space_len;

    void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
    disassemble(
        p, s->logbuf + sizeof(s->logbuf) - p, MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst.val, ilen);

    if (nemu_state.state == true)
        strcpy(r.insts[r.cur_inst++], s->logbuf);
    else
        strcpy(r.insts[r.cur_inst++], s->logbuf);
    r.cur_inst %= RINGBUFSIZE;

#endif
#ifdef CONFIG_FTRACE
    if (call_ret == 2)
    {
        fs_size++;
        printf("%lx :", pc);
        PRINT_TAB(fs_size);
        printf("%s  ", ANSI_FMT("call", ANSI_FG_BLUE));
        for (int i = 0; i < elf_nums; i++)
        {
            if (s->dnpc == elf_funcs[i].addr)
                printf("[%s@%lx]\n", elf_funcs[i].name, elf_funcs[i].addr);
        }
    }
    else if (call_ret == 4)
    {
        printf("%lx :", pc);
        PRINT_TAB(fs_size);
        fs_size--;
        printf("%s  ", ANSI_FMT("return", ANSI_FG_GREEN));
        for (int i = 0; i < elf_nums; i++)
        {
            if (elf_funcs[i].addr <= s->dnpc && s->dnpc <= elf_funcs[i].addr + elf_funcs[i].size)
                printf("[%s@%lx]\n", elf_funcs[i].name, s->dnpc);
        }
    }
    call_ret = 0;
#endif
}

static void execute(uint64_t n)
{
    Decode s;
    for (; n > 0; n--)
    {
        exec_once(&s, cpu.pc);
        g_nr_guest_inst++;
        trace_and_difftest(&s, cpu.pc);
        if (nemu_state.state != NEMU_RUNNING)
            break;
        IFDEF(CONFIG_DEVICE, device_update());
    }
}

static void statistic()
{
    IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%", "%'") PRIu64
    Log("host time spent = " NUMBERIC_FMT " us", g_timer);
    Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
    if (g_timer > 0)
        Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
    else
        Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

static void disp_ringbuf()
{
#ifdef CONFIG_ITRACE
    printf("itrace : \n");
    for (int i = 0; i < RINGBUFSIZE; i++)
    {
        if (i == RINGBUFSIZE - 1)
            printf("--> ");
        else
            printf("    ");

        printf("%s\n", r.insts[(r.cur_inst + i) % RINGBUFSIZE]);
    }
#endif
}

void assert_fail_msg()
{
    isa_reg_display();
    disp_ringbuf();
statistic();
}

/* Simulate how the CPU works. */
void cpu_exec(uint64_t n)
{
    g_print_step = (n < MAX_INST_TO_PRINT);
    switch (nemu_state.state)
    {
        case NEMU_END:
        case NEMU_ABORT: printf("Program execution has ended. To restart the program, exit NEMU and run again.\n"); return;
        default: nemu_state.state = NEMU_RUNNING;
    }

    uint64_t timer_start = get_time();

    execute(n);

    uint64_t timer_end = get_time();
    g_timer += timer_end - timer_start;

    switch (nemu_state.state)
    {
        case NEMU_RUNNING: nemu_state.state = NEMU_STOP; break;

        case NEMU_END:
        case NEMU_ABORT:
            Log("nemu: %s at pc = " FMT_WORD,
                (nemu_state.state == NEMU_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED)
                                                : (nemu_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN)
                                                                            : ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
                nemu_state.halt_pc);
            // fall through
        case NEMU_QUIT: statistic();
    }
}
