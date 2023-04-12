module top(
	input clk,
	input rst,
	input reg [31:0] inst, // 32 bits instruction
	output [31:0] alu_out,
	output [63:0] pc_out
);


// NOTE : control signal wire
wire reg_write; // register write signal
wire mem2reg;
wire alu_src; // alu inputr src control
wire mem_write, mem_read; // memory r/w signal
wire [31:0] reg_w_data; // data that will need to write back to register
wire [3:0] alu_cc;  // 4 bits alu controler output
wire [6:0] opcode, funct7;
wire [2:0] funct3;
wire [1:0] alu_op;

// NOTE : reg address wire
wire [4:0] ra;
wire [4:0] rb;
wire [4:0] rw;

// NOTE : ALU input wire
wire [19:0] imm_value;
wire [31:0] reg_value;
wire [31:0] alu_inA;
wire [31:0] alu_inB;

// NOTE : ALU output wire
wire alu_zero;
wire alu_less;
wire alu_carry;
wire alu_overflow;
reg state_reg [3:0];

always @(negedge clk)begin // TODO : refector this pice of shit
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

IFU _ifu( // NOTE : implement with C code
); // fetch

IDU _idu( // TODO : refector decode unit
	.clk(clk),
	.inst(inst),
	.ra(ra),
	.rb(rb),
	.rw(rw),
	.opcode(opcode), // NOTE : fetch from inst to ALU
	.funct7(funct7),
	.funct3(funct3),
	.imm(imm_value)
); // decode

ALU #(
	.BITS(32)
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
	.w_en(1'b0), // FIXME : for jump instruction
	.rst(rst),
	.dpc(), // FIXME : for jump instruction
	.pc_out(pc_out)
);

RF _gpr(
	.clk(clk),
	.rst(rst),
	.reg_w_EN(reg_write),
	.ra(ra),
	.rb(rb),
	.rw(rw),
	.rw_data(reg_w_data),
	.ra_data(alu_inA),
	.rb_data(reg_value)
);

MuxKey #(
	.NR_KEY(2),
	.KEY_LEN(1),
	.DATA_LEN(32) 
) write_back_sel (
	.out(reg_w_data),
	.key(mem2reg),
	.lut({
		1'b0, alu_out,
		1'b1, mem_data  // TODO : 
	})
);

MuxKey #(
	.NR_KEY(2),
	.KEY_LEN(1),
	.DATA_LEN(32) 
) alu_input_sel (
	.out(alu_inB),
	.key(alu_src),
	.lut({
		1'b0, imm_value,
		1'b1, reg_value 
	})
);

ALU_CTR _alu_ctr(
		.alu_op(alu_op),
		.funct7(funct7),
		.funct3(funct3),
		.operation(alu_cc)
);

CTRLER _controler (
		.op_code(opcode),
		.alu_src(alu_src),
		.mem2reg(mem2reg),
		.reg_w(reg_write),
		.mem_w(mem_write), // TODO : control memory write back here
		.mem_r(mem_read), // TODO : control memory access(read) here
		.alu_op(alu_op)
);

endmodule;
