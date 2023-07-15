#include "dpifunc.h"

extern NPCState npc_s;
extern CPU_state cpu_state;
extern pmem *mem;
extern Vtop *top;
extern uint8_t call_ret;

extern "C"
{
    void stop_npc()
    {
        printf("\n\t\t\t    *************\n");
        printf("\t\t\t    ** EBREAK! **\n");
        printf("\t\t\t    *************\n");
        npc_s.state = NPC_END;
    }

    bool break_npc()
    {
        if (npc_s.state == NPC_RESETTING)
            return 0;
        printf("\n\t\t    ***********************************************\n");
        printf("\t\t    ** NOT IMPLEMENTED OR JUMP TO WRONG ADDRESS! **\n");
        printf("\t\t    ***********************************************\n");
        npc_s.state = NPC_ABORT;
        return 1;
    }

    void set_gpr_ptr(const svOpenArrayHandle r)
    {
        cpu_state.gpr = (uint64_t *)(((VerilatedDpiOpenVar *)r)->datap());
    }

    void pmem_read(uint64_t raddr, uint64_t *rdata)
    {
        printf("pmem read : addr :%lx\n", raddr);
        *rdata = mem->host_read(mem->guest_to_host(raddr), sizeof(*rdata));
        printf("rdata : %lx\n", *rdata);
    }

    void pmem_write(uint64_t waddr, uint64_t wdata, uint8_t wmask)
    {
        printf("pmem write : addr[%lx] data[%lx] mask[%x]\n", waddr, wdata, wmask);
        mem->host_write(mem->guest_to_host(waddr), wdata, wmask);
    }

    void judge_jump()
    {
        uint8_t dest = BITS(top->inst, 11, 7);
        if ((top->inst & 0x7f) == 0b1100111)
            goto jalr;
        if ((top->inst & 0x7f) != 0b1101111)
            return;

        if (dest != 0)
        {
            CALL return;
        };

    jalr:
        if (BITS(top->inst, 19, 15) == 1 && dest == 0)
            RET else CALL

                printf("dest reg : %u\n", dest);
    }
}
