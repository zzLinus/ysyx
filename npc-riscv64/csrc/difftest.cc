#include "difftest.h"

#include "defs.h"
#include "infrastructure.h"
#define NOTIMPLEMENT 0

extern NPCState npc_s;
extern CPU_state cpu_state;

static bool is_skip_ref = false;
static int skip_dut_nr_inst = 0;

static void checkregs(ref_CPU_state *ref, vaddr_t pc)
{
    if (!difftest_checkregs(ref, pc))
    {
        npc_s.state = NPC_ABORT;
        npc_s.halt_pc = pc;
        reg_display();
    }
}

void difftest_skip_ref()
{
    is_skip_ref = true;
    skip_dut_nr_inst = 0;
}

void difftest_skip_dut(int nr_ref, int nr_dut)
{
    skip_dut_nr_inst += nr_dut;

    while (nr_ref-- > 0)
    {
        difftest_exec(1);
    }
}

void trace_and_difftest(CPU_state *cpu_s, Vtop *top)
{
    difftest_step(cpu_s->pc, top->pc_out);
}

void difftest_step(vaddr_t pc, vaddr_t npc)
{
    if (npc_s.state == NPC_RESETTING)
        return;

    ref_CPU_state ref_r;

    if (skip_dut_nr_inst > 0)
    {
        difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
        if (ref_r.pc == npc)
        {
            skip_dut_nr_inst = 0;
            checkregs(&ref_r, npc);
            return;
        }
        skip_dut_nr_inst--;
        if (skip_dut_nr_inst == 0)
            printf("can not catch up with ref.pc = " FMT_WORD " at pc = " FMT_WORD, ref_r.pc, pc);
        return;
    }

    if (is_skip_ref)
    {
        // to skip the checking of an instruction, just copy the reg state to reference design
        difftest_regcpy(&cpu_state, DIFFTEST_TO_REF);
        is_skip_ref = false;
        return;
    }

    difftest_exec(1);
    difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);

    checkregs(&ref_r, pc);
}
