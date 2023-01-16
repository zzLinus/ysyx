module top(
	input _clk,
	input _rst,
	input _pcen,
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

EXU _exu(
); // execute

endmodule;
