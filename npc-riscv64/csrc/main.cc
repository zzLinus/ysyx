#include <verilated_vcd_c.h>

#include <Vtop.h>
#include <assert.h>
#include <stdlib.h>
#include <verilated.h>

VerilatedContext *contextp = new VerilatedContext;
Vtop *top = new Vtop{contextp};

static void single_cycle() {
  top->clk = 0;
  top->eval();
  top->clk = 1;
  top->eval();
}

static void reset(int n) {
  top->rst = 1;
  while (n-- > 0)
    single_cycle();
  top->rst = 0;
}

int main(int argc, char **argv, char **env) {
  uint32_t counter = 0;
  uint32_t shamt = 0;
  contextp->commandArgs(argc, argv);
  contextp->traceEverOn(true);
  VerilatedVcdC *tfp = new VerilatedVcdC;
  top->trace(tfp, 99);
  tfp->open("logs/vlt_dump.vcd");
  tfp->dumpvars(1, "top");

  reset(10);

  do {
    contextp->timeInc(1);
    if (counter == 1)
      counter = 0;
    else {
      counter++;
    }

    top->eval();
    single_cycle();
    tfp->dump(contextp->time());
  } while (0);

  Verilated::mkdir("logs");
  contextp->coveragep()->write("logs/coverage.dat");
  top->final();
  tfp->close();
}
