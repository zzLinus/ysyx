#include <Vtop.h>
#include <assert.h>
#include <stdlib.h>
#include <verilated.h>
#include <verilated_vcd_c.h>

#define CONFIG_MBASE 0x80000000
#define INST_NUM     2

VerilatedContext *contextp = new VerilatedContext;
Vtop *top = new Vtop{ contextp };

static void single_cycle()
{
    top->_clk = 0;
    top->eval();
    top->_clk = 1;
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
    0xaabbccdd,
    0x11223344,
};

class pmem
{
   public:
    pmem()
    {
        memcpy(mem, inst, sizeof(uint32_t));
        memcpy(mem + 4, inst + 1, sizeof(uint32_t));
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
    printf(
        "exu state : less : %u zero : %d\nout : 0d%ld 0b%064lb 0b%08lx\n\n",
        top->_exu_less,
        top->_exu_zero,
        top->_exu_out,
        top->_exu_out,
        top->_exu_out);
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
    top->_pcen = 1;

    int step = 5;

    top->_exu_ctr = 0b0010;

    top->_exu_inA = 0b0111;
    // top->_exu_inA = 0b10010110;
    top->_exu_inB = 0b0100;

    while (step--)
    {
        contextp->timeInc(1);

        top->_inst = mem->pmem_read(top->_pc_out, 4);
        // top->_pcen = !top->_pcen;
        printf("pc : 0x%08lx\n", top->_pc_out);
        printf(
            "inst : %02x %02x %02x %02x\n",
            (top->_inst >> 24) & 0xff,
            (top->_inst >> 16) & 0xff,
            (top->_inst >> 8) & 0xff,
            (top->_inst) & 0xff);
        single_cycle();
        // top->_exu_inB++;
        print_exu();

        tfp->dump(contextp->time());
    }

    top->final();
    tfp->close();

    delete mem;
}
