#include "infrastructure.h"

#define NOTIMPLEMENT 0
#define gpr(idx)     (cpu.gpr[check_reg_idx(idx)])

// clang-format off
const char *regs[] = { // cpu_gpr[32]
	"$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
	"s0", "s1", "a0",  "a1",  "a2", "a3", "a4", "a5",
	"a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
	"s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};
// clang-format on

extern CPU_state cpu_state;

static inline int check_reg_idx(int idx)
{
    assert(idx >= 0 && idx < 32);
    return idx;
}

static inline const char *reg_name(int idx, int width)
{
    extern const char *regs[];
    return regs[check_reg_idx(idx)];
}

bool difftest_checkregs(ref_CPU_state *ref_r, vaddr_t pc)  // TODO:
{
    bool ret = true;
    for (int i = 0; i < 32; ++i)
    {
        if (cpu_state.gpr[i] != ref_r->gpr[i])
        {
            printf(
                "\nDifftest found register name: %s (NO.%d) is %s!\n",
                reg_name(i, NOTIMPLEMENT),
                i,
                ANSI_FMT("WRONG", ANSI_FG_RED));
            printf("stop at pc : %lx\n", pc);
            printf(ANSI_FMT("decimal : %14ld hex : %lx\n", ANSI_FG_RED), cpu_state.gpr[i], cpu_state.gpr[i]);
            printf(ANSI_FMT("decimal : %14ld hex : %lx\n\n", ANSI_FG_GREEN), ref_r->gpr[i], ref_r->gpr[i]);
            ret = false;
        }
    }
    return ret;
}

uint64_t reg_str2val(const char *s, bool *success)
{
    uint64_t reg_val;
    for (int i = 0; i < 31; i++)
    {
        if (strcmp(s, reg_name(i, NOTIMPLEMENT)) == 0)
        {
            printf("watch reg NO:%d\n", i);
            reg_val = cpu_state.gpr[i];
            *success = true;
        }
    }
    return reg_val;
}

void reg_display()
{
    for (int i = 0; i < 32; ++i)
    {
        printf("gpr[%d] = 0x%lx\n", i, cpu_state.gpr[i]);
    }
}
