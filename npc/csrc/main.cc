#include <verilated_vcd_c.h>

#include <Vtop.h>
#include <assert.h>
#include <nvboard.h>
#include <stdlib.h>
#include <verilated.h>

#include "auto_bind.hpp"

VerilatedContext* contextp = new VerilatedContext;
Vtop* top = new Vtop { contextp };

void nvboard_bind_all_pins(Vtop* top);

static void single_cycle()
{
    top->clk = 0;
    top->eval();
    top->clk = 1;
    top->eval();
}

static void reset(int n)
{
    top->rst = 1;
    while (n-- > 0)
        single_cycle();
    top->rst = 0;
}

int main(int argc, char** argv, char** env)
{
    contextp->commandArgs(argc, argv);
    contextp->traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    nvboard_bind_all_pins(top);
    nvboard_init();
    tfp->open("logs/vlt_dump.vcd");
    tfp->dumpvars(1, "top");

    reset(10);

    while (1) {
        contextp->timeInc(1);
        top->a = rand() & 1;
        top->b = rand() & 1;
        top->eval();
        nvboard_update();
        single_cycle();
        tfp->dump(contextp->time());
    }

    Verilated::mkdir("logs");
    contextp->coveragep()->write("logs/coverage.dat");
    top->final();
    tfp->close();
}
