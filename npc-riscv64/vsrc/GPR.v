module GPR#(
	BITS = 64,
	RESET_VAL = 64'b0
)(
	input clk,
	input rst,
	input [63:0] din,
	input select,
	output [63:0] dout
);

localparam GPR_NUM = 2;

wire [BITS-1:0] dout_list [1:0];
wire [BITS-1:0] din_list [1:0];

REG #(
	.BITS(BITS),
	.RESET_VAL(RESET_VAL)
) ra (
	.clk(clk),
	.rst(rst),
	.din(din),
	.dout(dout_list[0]),
	.wen(select)
);

REG #(
	.BITS(BITS),
	.RESET_VAL(RESET_VAL)
) rb (
	.clk(clk),
	.rst(rst),
	.din(din),
	.dout(dout_list[1]),
	.wen(~select)
);

MuxKey #(
	.NR_KEY(2),
	.KEY_LEN(1),
	.DATA_LEN(BITS) 
) out_mux21 (
	.out(dout),
	.key(1'b0),
	.lut({
		1'b0, dout_list[0],
		1'b1, dout_list[1]
	})
);
 
endmodule;
