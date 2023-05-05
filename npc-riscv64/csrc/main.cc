#include <Vtop.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <verilated.h>
#include <verilated_vcd_c.h>

#include "defs.h"
#include "infrastructure.h"

VerilatedContext *contextp = new VerilatedContext;
Vtop *top = new Vtop{ contextp };
NPCState npc_s = { NPC_STOP, 0, 0 };
bool is_halt = false;

static inline void single_cycle()
{
    top->clk = 1;
    top->eval();
    if (npc_s.state != NPC_RUNNING)
    {
        is_halt = true;
    }
    top->clk = 0;
    top->eval();
}

static inline void reset(int n)
{
    top->rst = 1;
    while (n-- > 0)
        single_cycle();
    top->rst = 0;
}

uint32_t img[INST_NUM] = {
    0x00000413,  // 80000000:	00000413          	li	s0,0
    0x00009117,  // 80000004:	00009117          	auipc	sp,0x9
    0xffc10113,  // 80000008:	ffc10113          	addi	sp,sp,-4 # 80009000 <_end>
    0x00c000ef,  // 8000000c:	00c000ef          	jal	ra,80000018 <_trm_init>

    0x00000513,  // 80000010:	00000513          	li	a0,0
    0x00008067,  // 80000014:	00008067          	ret(jalr)
                 //        000000000000 00001 000 00000 11001 11

    0xff010113,  // 80000018:	ff010113          	addi	sp,sp,-16
    0x00000517,  // 8000001c:	00000517          	auipc	a0,0x0
    0x01450513,  // 80000020:	01450513          	addi	a0,a0,20 # 80000030 <_etext>
    0x00113423,  //  TODO : 80000024:	00113423          	sd	ra,8(sp)

    0xfe9ff0ef,  // 80000028:	fe9ff0ef          	jal	ra,80000010 <main>
    0b00000000000000000000000001110011,  // 0000 0000 0000 00000 000 00000 1110011 -> ebreak
    0x0000006f,  // 8000002c:	0000006f          	j	8000002c <_trm_init+0x14>
                 //  WARN : infinet loop should not reach here

};

class pmem
{
   public:
    pmem() : fp(NULL)
    {
        FILE *fp = NULL;
        for (int i = 0; i < INST_NUM; i++)  // read in defualt img
        {
            memcpy(mem + i * 4, img + i * 1, sizeof(uint32_t));
        }
    }
    ~pmem(){};
    void read_img(const char *img_file)
    {
        fp = fopen(img_file, "rb");
        if (fp == NULL)
        {
            printf("failed to load img : %s\n", img_file);
            assert(0);
        }
        else
        {
            printf("Success to load img\n");
        }

        fseek(fp, 0, SEEK_END);
        long size = ftell(fp);
        printf("The image is %s, size = %ld", img_file, size);

        fseek(fp, 0, SEEK_SET);
        int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
        assert(ret == 1);
        fclose(fp);
    }
    uint64_t pmem_read(uint64_t addr, uint8_t instLen)
    {
        uint64_t ret = host_read(guest_to_host(addr), instLen);
        return ret;
    }

   private:
    uint8_t *guest_to_host(uint64_t paddr)
    {
        return mem + paddr - CONFIG_MBASE;
    }
    uint64_t host_read(void *addr, uint8_t len)
    {
        switch (len)
        {
            case 1:  // == *((type *)addr)
                return *(uint8_t *)addr;
            case 2: return *(uint16_t *)addr;
            case 4: return *(uint32_t *)addr;
            case 8: return *(uint64_t *)addr;
            default: assert(0);
        }
    }

   private:
    FILE *fp;
    uint8_t mem[CONFIG_MSIZE];
};

void print_alu()
{
    printf("alu state : out : 0d%u 0b%031b 0x%08x\n", top->alu_out, top->alu_out, top->alu_out);
}

extern "C"
{
    void stop_npc()
    {
        printf("\n\t\t\t    *************\n");
        printf("\t\t\t    ** EBREAK! **\n");
        printf("\t\t\t    *************\n");
        npc_s.state = NPC_STOP;
    }
}

int main(int argc, char **argv, char **env)
{
    int cycle = 0;
    paddr_t last_pc = 0;
    pmem *mem = new pmem();
    mem->read_img(__IMG_);

    contextp->commandArgs(argc, argv);
    contextp->traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;

    top->trace(tfp, 99);
    tfp->open("logs/vlt_dump.vcd");
    tfp->dumpvars(1, "top");

    npc_s.state = NPC_RUNNING;
    reset(2);
    printf("\n======== Reset Finished ========\n");

		welcome();

    while (1)
    {
        cycle++;
        contextp->timeInc(1);

        if (top->pc_out == last_pc)
        {
            printf("In a Infinet Loop NOW !!!\n");
            exit(-1);
        }
        top->inst = mem->pmem_read(top->pc_out, 4);
        last_pc = top->pc_out;
        single_cycle();
        tfp->dump(contextp->time());
        printf("\n\n\t================= CPU CYCLE DONE (NO:%d) =================\n\n", cycle);
        if (is_halt)
            break;
    }

    top->final();
    tfp->close();

    delete mem;

    if (is_halt)
        printf("\033[32;1;4mNPC exit with code : %d\033[0m\n", 0);
    else
        printf("\033[1;31mNPC exit with code : %d\033[0m\n", 0);
    return npc_s.state;
}
