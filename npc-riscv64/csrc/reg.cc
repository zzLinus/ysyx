#include "infrastructure.h"

#define NOTIMPLEMENT 0
#define gpr(idx) (cpu.gpr[check_reg_idx(idx)])


// clang-format off
const char *regs[] = { // cpu_gpr[32]
	"$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
	"s0", "s1", "a0",  "a1",  "a2", "a3", "a4", "a5",
	"a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
	"s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};
// clang-format on

extern uint64_t *cpu_gpr;


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


uint64_t reg_str2val(const char *s, bool *success)
{
    uint64_t  reg_val;
    for (int i = 0; i < 31; i++)
    {
        if (strcmp(s, reg_name(i, NOTIMPLEMENT)) == 0)
        {
						printf("watch reg NO:%d\n",i);
            reg_val = cpu_gpr[i];
            *success = true;
        }
    }
    return reg_val;
}
