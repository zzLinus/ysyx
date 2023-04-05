#include <Vtop.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <verilated.h>
#include <verilated_vcd_c.h>

#include "defs.h"

VerilatedContext *contextp = new VerilatedContext;
Vtop *top = new Vtop{ contextp };
bool NPC_RUN = true;

static inline void single_cycle()
{
    top->_clk = 1;
    top->eval();
    if (!NPC_RUN)
    {
        printf("\033[32;1;4mNPC exit with code : %d\033[0m\n", 0);
        exit(0);
    }
    top->_clk = 0;
    top->eval();
}

static inline void reset(int n)
{
    top->_rst = 1;
    while (n-- > 0)
        single_cycle();
    top->_rst = 0;
}

uint32_t img[INST_NUM] = {
    0b00000000000100000000000010010011,  // 0000 0000 0001 00000 000 00001 0010011 -> addi ra,$0,1
    0b00000000000100001000000010010011,  // 0000 0000 0001 00001 000 00001 0010011 -> addi ra,ra,1
    0b00000000000100001000000010010011,  // 0000 0000 0001 00001 000 00001 0010011 -> addi ra,ra,1
    0b00000000000100001000000010010011,  // 0000 0000 0001 00001 000 00001 0010011 -> addi ra,ra,1
    0b00000000000100001000000010010011,  // 0000 0000 0001 00001 000 00001 0010011 -> addi ra,ra,1
    0b00000000000000000000000001110011,  // 0000 0000 0000 00000 000 00000 1110011 -> ebreak
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

void print_exu()
{
    printf("exu state : out : 0d%u 0b%031b 0x%08x\n", top->_exu_out, top->_exu_out, top->_exu_out);
}

extern "C"
{
    void stop_npc()
    {
        printf("hi!~``\n");
        NPC_RUN = false;
    }
}

int main(int argc, char **argv, char **env)
{
    pmem *mem = new pmem();
    // mem->read_img(__IMG_);

    contextp->commandArgs(argc, argv);
    contextp->traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;

    top->trace(tfp, 99);
    tfp->open("logs/vlt_dump.vcd");
    tfp->dumpvars(1, "top");

    reset(10);

    top->_exu_ctr = 0b0000;

    while (true)
    {
        contextp->timeInc(1);

        printf("~~~~~~~~~~~~~~~~~~~~~~~~\n");
        top->_inst = mem->pmem_read(top->_pc_out, 4);
        single_cycle();
        tfp->dump(contextp->time());
    }

    top->final();
    tfp->close();

    delete mem;
}
