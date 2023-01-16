	// verilator_coverage annotation
	module top(
 000021		input clk,
%000002		input rst,
		input [31:0] inst
	);
	
	wire [63:0] _genRegDout;
	wire [63:0] _genRegDin;
	
	REG #(
		.BITS(64),
		.RESET_VAL(64'b0)
	) _generalReg (
		.clk(clk),
		.rst(rst),
		.din(_genRegDin),
		.dout(_genRegDout),
		.wen(1'b1)
	);
	
	EXU _exu();
	IDU _idu();
	IFU _ifu();
	
	endmodule;
	
