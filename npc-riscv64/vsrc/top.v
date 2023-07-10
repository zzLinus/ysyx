import "DPI-C" function void pmem_read(
		input  longint raddr,
		output longint rdata
);

import "DPI-C" function void pmem_write(
		input longint waddr,
		input longint wdata,
		input byte wmask
);


module top(
	input clk,
	input rst,
	output [63:0] alu_out,
	output [63:0] pc_out,
	output wire [63:0] inst
);


// NOTE : control signal wire
wire reg_write; // register write signal
wire mem2reg,spc2reg;
wire pc2imm;
wire jump;
wire alu_src; // alu inputr src control
wire mem_write, mem_read; // memory r/w signal
wire [63:0] reg_w_data; // data that will need to write back to register
wire [63:0] spc;
wire [3:0] alu_cc;  // 4 bits alu controler output
wire [6:0] opcode, funct7;
wire [2:0] funct3;
wire [1:0] alu_op;
wire [1:0] has_funct;

// NOTE : reg address wire
wire [4:0] ra;
wire [4:0] rb;
wire [4:0] rw;

// NOTE : ALU input wire
wire [63:0] imm_value;
wire [63:0] reg_value;
wire [63:0] reg_value2;
wire [63:0] alu_inA;
wire [63:0] alu_inB;

// NOTE : ALU output wire
wire alu_zero;
wire alu_less;
wire alu_carry;
wire alu_overflow;
reg state_reg [3:0];

// NOTE : Memory data wire
wire [63:0] mem_data;

always @(negedge clk) begin
	state_reg[0] = alu_zero;
	state_reg[1] = alu_carry;
	state_reg[2] = alu_overflow;
	state_reg[3] = alu_less;

	$display("\n** TOP Module Negedge **");
	$display("zero     : %d",alu_zero);
	$display("carry    : %d",alu_carry);
	$display("overflow : %d",alu_overflow);
	$display("less     : %d",alu_less);
end

always @(posedge clk) begin
	$display("\n** TOP Module Posedge **");
	$display("inst : %b", inst);
	$display("pc   : %x", pc_out);
end

IFU _ifu( // NOTE : implement with C code
		.clk(clk),
		.pc(pc_out),
		.inst(inst)
); // fetch

IDU _idu (
	.clk(clk),
	.inst(inst[31:0]),
	.ra(ra),
	.rb(rb),
	.rw(rw),
	.opcode(opcode), // NOTE : fetch from inst to ALU
	.funct7(funct7),
	.funct3(funct3),
	.imm(imm_value)
); // decode

ALU #(
	.BITS(64)
) _alu (
	.alu_ctr(alu_cc),
	.alu_a(alu_inA),
	.alu_b(alu_inB),
	.alu_out(alu_out),
	.alu_zero(alu_zero),
	.alu_carry(alu_carry),
	.alu_less(alu_less),
	.alu_overflow(alu_overflow)
); // execute

PC _pc (
	.clk(clk),
	.w_en(jump),
	.rst(rst),
	.dpc(alu_out),
	.pc_out(pc_out)
);

DMEM _dmem (
		.mem_w_EN(mem_write),
		.mem_r_EN(mem_read),
		.funct3(funct3),
		.addr(alu_out),
		.write_data(reg_value),
		.mem_out(mem_data)
);

// FIXME :
assign spc = pc_out + 4;

MuxKey #(
	.NR_KEY(3),
	.KEY_LEN(2),
	.DATA_LEN(64) 
) write_back_sel (
	.out(reg_w_data),
	.key({spc2reg,mem2reg}),
	.lut({
		2'b00, alu_out,
		2'b01, mem_data,
		2'b10, spc
	})
);

MuxKey #(
	.NR_KEY(2),
	.KEY_LEN(1),
	.DATA_LEN(64) 
) alu_input_sel2 (
	.out(alu_inA),
	.key(pc2imm),
	.lut({
		1'b0, reg_value2,
		1'b1, pc_out 
	})
);

MuxKey #(
	.NR_KEY(2),
	.KEY_LEN(1),
	.DATA_LEN(64) 
) alu_input_sel (
	.out(alu_inB),
	.key(alu_src),
	.lut({
		1'b0, reg_value,
		1'b1, imm_value
	})
);

RF _gpr(
	.clk(clk),
	.rst(rst),
	.reg_w_EN(reg_write),
	.ra(ra),
	.rb(rb),
	.rw(rw),
	.rw_data(reg_w_data),
	.ra_data(reg_value2),
	.rb_data(reg_value)
);

ALU_CTR _alu_ctr (
		.alu_op(alu_op),
		.funct7(funct7),
		.funct3(funct3),
		.has_funct(has_funct),
		.operation(alu_cc)
);


CTRLER _controler (
		// INPUT
		.op_code(opcode),
		.func3(funct3),
		.reg1(reg_value2),
		.reg2(reg_value),
		// OUTPUT
		.alu_src(alu_src),
		.mem2reg(mem2reg),
		.has_funct(has_funct),
		.jump(jump),
		.pc2imm(pc2imm),
		.spc2reg(spc2reg),
		.reg_w(reg_write),
		.mem_w(mem_write),
		.mem_r(mem_read),
		.alu_op(alu_op)
);

endmodule;
