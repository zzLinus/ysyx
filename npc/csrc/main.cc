#include <stdlib.h>
#include <assert.h>
#include <Vtop.h>
#include <verilated.h>
#include <nvboard.h>

VerilatedContext* contextp = new VerilatedContext;
Vtop* top = new Vtop{contextp};

// static TOP_NAME dut;

void nvboard_bind_all_pins(Vtop* top);

static void single_cycle() {
  top->clk = 0; top->eval();
  top->clk = 1; top->eval();
}

static void reset(int n) {
  top->rst = 1;
  while (n-- > 0) single_cycle();
  top->rst = 0;
}

int main(int argc, char** argv, char** env) {
contextp->commandArgs(argc, argv);
while (!contextp->gotFinish()) { 
	int a = rand() & 1;
	int b = rand() & 1;
	top->a = a;
	top->b = b;
	top->eval(); 
	printf("a = %d, b = %d, f = %d\n", a, b, top->f);
	assert(top->f == (a ^ b));
}
delete top;
delete contextp;
return 0;
}
