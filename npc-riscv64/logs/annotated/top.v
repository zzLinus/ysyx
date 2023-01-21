	// verilator_coverage annotation
	module top(
 000021		input _clk,
%000002		input _rst,
		input [31:0] _inst, // 32 bits instruction
		input [3:0] _exu_ctr,
		output [31:0] _exu_out,
		output [63:0] _pc_out // TODO : implement PC 
	);
	
	wire [4:0] w_ra;
	wire [4:0] w_rb;
	wire [4:0] w_rw;
	wire [31:0] w_busA;
	wire [31:0] w_busB;
	wire w_regWr;
	wire _exu_zero;
	wire _exu_less;
	wire _exu_carry;
	wire _exu_overflow;
	reg state_reg [3:0];
	
	always @(negedge _clk)begin
		state_reg[0] = _exu_zero;
		state_reg[1] = _exu_carry;
		state_reg[2] = _exu_overflow;
		state_reg[3] = _exu_less;
		$display("\nstate regs:");
		$display("zero %d"    ,_exu_zero);
		$display("carry %d"   ,_exu_carry);
		$display("overflow %d",_exu_overflow);
		$display("less %d"  ,_exu_less);
	end
	
	always @(posedge _clk) $display("inst : %x\n",_inst);
	
	IFU _ifu(
	); // fetch
	
	IDU _idu(
		.clk(_clk),
		.regWr(w_regWr),
		.inst(_inst),
		.ra(w_ra),
		.rb(w_rb),
		.rw(w_rw),
		.valC(w_busB[19:0])
	); // decode
	
	EXU #(
		.BITS(32)
	) _exu (
		.clk(_clk),
		.alu_ctr(_exu_ctr),
		.alu_a(w_busA),
		.alu_b(w_busB),
		.alu_out(_exu_out),
		.alu_zero(_exu_zero),
		.alu_carry(_exu_carry),
		.alu_less(_exu_less),
		.alu_overflow(_exu_overflow)
	); // execute
	
	
	
	PC #(
		.BITS(64),
		.DELTA(4),
		.BASE(64'h80000000)
	) pc (
		.clk(_clk),
		.w_en(1'b0), // TODO: for jump instruction
		.rst(_rst),
		.dpc(), // TODO: for jump instruction
		.pc_out(_pc_out)
	);
	
	RF _gpr(
		.clk(_clk),
		.ra(w_ra),
		.rb(w_rb),
		.rw(w_rw),
		.busW(_exu_out), // TODO:
		.busA(w_busA),
		.busB(w_busB),
		// .wrClk(),
		.regWr(w_regWr)
	);
	
	
	endmodule;
	
