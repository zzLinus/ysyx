#pragma once
#include <stddef.h>

#include "defs.h"

extern "C"
{
    void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction);
    void difftest_regcpy(void *dut, bool direction);
    void difftest_exec(uint64_t n);
    void difftest_raise_intr(uint64_t NO);
    void difftest_init(int port);
		void difftest_loadimg(uint32_t *img, long size);
}

void trace_and_difftest(CPU_state * cpu_s, Vtop *top);
void difftest_step(vaddr_t pc, vaddr_t npc);
void difftest_skip_ref();
void difftest_skip_dut(int nr_ref, int nr_dut);
bool difftest_checkregs(ref_CPU_state *ref_r, vaddr_t pc);
