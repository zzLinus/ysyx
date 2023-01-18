	// verilator_coverage annotation
	module top(
 000021		input _clk,
%000002		input _rst,
		input _pcen, // programe conter enable
		input [63:0] _exu_inA,
		input [63:0] _exu_inB,
		input [31:0] _inst, // 32 bits instruction
		input [3:0] _exu_ctr,
		output [63:0] _exu_out,
		output _exu_zero,
		output _exu_less,
		output _exu_carry,
		output [63:0] _pc_out // TODO : implement PC 
	);
	
	wire [63:0] _genRegDout; // TODO :no connection here
	wire [63:0] _genRegDin;  // TODO :no connection here
	
	PC #(
		.BITS(64),
		.DELTA(4),
		.BASE(64'h80000000)
	) ctr (
		.clk(_clk),
		.en(_pcen),
		.rst(_rst),
		.ctr_out(_pc_out)
	);
	
	GPR _gpr(
		.clk(_clk),
		.rst(_rst),
		.select(1'b0), // didn't mean anything yet
		.din(_genRegDin),
		.dout(_genRegDout)
	);
	
	IFU _ifu(
	); // fetch
	
	IDU _idu(
	); // decode
	
	
	EXU #(
		.BITS(64)
	) _exu (
		.clk(_clk),
		.alu_ctr(_exu_ctr),
		.alu_a(_exu_inA),
		.alu_b(_exu_inB),
		.alu_out(_exu_out),
		.alu_zero(_exu_zero),
		.alu_less(_exu_less)
	); // execute
	
	endmodule;
	
