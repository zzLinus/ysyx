// NOTE: DPI-C functions

#pragma once
#include "defs.h"
#include "infrastructure.h"
#include "mem.h"

extern "C"
{
    void stop_npc();
    bool break_npc();
    void set_gpr_ptr(const svOpenArrayHandle r);
    void pmem_read(uint64_t raddr, uint64_t *rdata);
    void pmem_write(uint64_t waddr, uint64_t wdata, uint8_t wmask);
    void judge_jump();
}
