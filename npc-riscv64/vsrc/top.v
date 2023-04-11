module top(
	input clk,
	input rst,
	input [31:0] inst, // 32 bits instruction
	output [31:0] alu_out,
	output [63:0] pc_out
);

wire [4:0] w_ra;
wire [4:0] w_rb;
wire [4:0] w_rw;
wire [31:0] w_busA;
wire [31:0] w_busB;

// NOTE : control signal
wire reg_write; // register write signal
wire mem2reg; // memory to register
wire alu_src; // alu inputr src control
wrie mem_write, mem_read; // memory r/w signal
wire [3:0] alu_cc;  // 4 bits alu controler output
wire [6:0] opcode, funct7;
wire [2:0] funct3;
wire [1:0] alu_op;

wire alu_zero;
wire alu_less;
wire alu_carry;
wire alu_overflow;
reg state_reg [3:0];

always @(negedge clk)begin
	state_reg[0] = alu_zero;
	state_reg[1] = alu_carry;
	state_reg[2] = alu_overflow;
	state_reg[3] = alu_less;
	$display("\nstate regs:");
	$display("zero %d"    ,alu_zero);
	$display("carry %d"   ,alu_carry);
	$display("overflow %d",alu_overflow);
	$display("less %d"    ,alu_less);
end

always @(posedge clk) $display("inst : %x\n",inst);

IFU _ifu(
); // fetch

IDU _idu(
	.clk(clk),
	.regWr(reg_write),
	.inst(inst),
	.ra(w_ra),
	.rb(w_rb),
	.rw(w_rw),
	.valC(w_busB[19:0])
); // decode

ALU #(
	.BITS(32)
) _alu (
	.alu_ctr(alu_ctr),
	.alu_a(w_busA),
	.alu_b(w_busB),
	.alu_out(alu_out),
	.alu_zero(alu_zero),
	.alu_carry(alu_carry),
	.alu_less(alu_less),
	.alu_overflow(alu_overflow)
); // execute



PC #(
	.BITS(64),
	.DELTA(4),
	.BASE(64'h80000000)
) pc (
	.clk(clk),
	.w_en(1'b0), // TODO: for jump instruction
	.rst(rst),
	.dpc(), // TODO: for jump instruction
	.pc_out(pc_out)
);

RF _gpr(
	.clk(clk),
	.ra(w_ra),
	.rb(w_rb),
	.rw(w_rw),
	.busW(alu_out), // TODO:
	.busA(w_busA),
	.busB(w_busB),
	.regWr(reg_write)
);


CTRLER _controler (
		.op_code(opcode),
		.alu_src(alu_src), // select alu source by a mux21
		.mem2reg(mem2reg),
		.reg_w(reg_write),
		.mem_w(mem_write),
		.mem_r(mem_read),
		.alu_op(alu_op)
);

endmodule;
