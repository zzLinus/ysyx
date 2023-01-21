#include <Vtop.h>
#include <assert.h>
#include <stdlib.h>
#include <verilated.h>
#include <verilated_vcd_c.h>

#define CONFIG_MBASE 0x80000000
#define INST_NUM     5

VerilatedContext *contextp = new VerilatedContext;
Vtop *top = new Vtop{ contextp };

static void single_cycle()
{
    top->_clk = 1;
    top->eval();
    top->_clk = 0;
    top->eval();
}

static void reset(int n)
{
    top->_rst = 1;
    while (n-- > 0)
        single_cycle();
    top->_rst = 0;
}

uint32_t inst[INST_NUM] = {
    0b00000000000100000000000010010011,  // 0000 0000 0001 00000 000 00001 0010011 -> addi ra,$0,1
    0b00000000000100001000000010010011,  // 0000 0000 0001 00001 000 00001 0010011 -> addi ra,ra,1
    0b00000000000100001000000010010011,  // 0000 0000 0001 00001 000 00001 0010011 -> addi ra,ra,1
    0b00000000000100001000000010010011,  // 0000 0000 0001 00001 000 00001 0010011 -> addi ra,ra,1
    0b00000000000100001000000010010011,  // 0000 0000 0001 00001 000 00001 0010011 -> addi ra,ra,1
};

class pmem
{
   public:
    pmem()
    {
        for (int i = 0; i < INST_NUM; i++)
        {
            memcpy(mem + i * 4, inst + i * 1, sizeof(uint32_t));
        }
    };
    ~pmem(){};
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
    uint8_t mem[2048];
};

void print_exu()
{
    printf("exu state : out : 0d%u 0b%031b 0x%08x\n", top->_exu_out, top->_exu_out, top->_exu_out);
}

int main(int argc, char **argv, char **env)
{
    pmem *mem = new pmem();

    contextp->commandArgs(argc, argv);
    contextp->traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;

    top->trace(tfp, 99);
    tfp->open("logs/vlt_dump.vcd");
    tfp->dumpvars(1, "top");

    reset(10);

    int step = INST_NUM;
    top->_exu_ctr = 0b0000;  // TODO :decode ctr from IDU

    while (step--)  // TODO : DPI-C ebreak
    {
        contextp->timeInc(1);

        top->_inst = mem->pmem_read(top->_pc_out, 4);

        single_cycle();

        tfp->dump(contextp->time());
    }

    top->final();
    tfp->close();

    delete mem;
}
