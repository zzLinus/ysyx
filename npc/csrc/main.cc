#include <verilated_vcd_c.h>

#include <Vtop.h>
#include <assert.h>
#include <nvboard.h>
#include <stdlib.h>
#include <verilated.h>

#include "auto_bind.hpp"

VerilatedContext *contextp = new VerilatedContext;
Vtop *top = new Vtop{contextp};

void nvboard_bind_all_pins(Vtop *top);

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
  nvboard_bind_all_pins(top);
  nvboard_init();
  tfp->open("logs/vlt_dump.vcd");
  tfp->dumpvars(1, "top");

  reset(10);

  while (1) {
    top->en = !top->en;
    top->ec_en = !top->ec_en;
    top->counter_EN = 0b1;
    contextp->timeInc(1);
    top->a = 0b11100100;
    top->alu_fnselec = 0b111;
    if (counter == 1)
      counter = 0;
    else {
      top->rand_in = rand() & 1;
      counter++;
    }
    top->alu_a = rand() & 1 + (rand() & 1) * 2 + (rand() & 1) * 4;
    top->alu_b = rand() & 1 + (rand() & 1) * 2 + (rand() & 1) * 4;
    // top->seg_x = top->ec_x;
    // shift register
    // 置为1为左移，置为0为右移。
    // 选择端A/L为算术逻辑选择，置为1为算术移位，置为0为逻辑移位。
    top->sft_rgtr_data = 0b11110000101010100000000000000000;
    top->sft_rgtr_shamt = shamt++;
    top->sft_rgtr_a_or_l = 0b0;
    top->sft_rgtr_l_or_r = 0b0;
    // endshift register
    top->s = rand() & 1 + (rand() & 1) * 2;
    nvboard_update();
    single_cycle();
    tfp->dump(contextp->time());
  }

  Verilated::mkdir("logs");
  contextp->coveragep()->write("logs/coverage.dat");
  top->final();
  tfp->close();
}
