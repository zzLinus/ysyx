	// verilator_coverage annotation
	module top(
 000021		input _clk,
%000002		input _rst,
		input _pcen,
		input [63:0] _exu_inX,
		input [63:0] _exu_inY,
		output [63:0] _exu_out,
		output _exu_carry,
		input [31:0] _inst, // 32 bits instruction
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
		.exu_inX(_exu_inX),
		.exu_inY(_exu_inY),
		.exu_out(_exu_out),
		.exu_carry(_exu_carry)
	); // execute
	
	endmodule;
	
