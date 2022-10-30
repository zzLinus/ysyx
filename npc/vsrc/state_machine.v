module state_machine(
	input clk,
	input in,
	input reset,
	output reg out
);

parameter [3:0] S0 = 0,
				S1 = 1,
				S2 = 2,
				S3 = 3,
				S4 = 4,
				S5 = 5,
				S6 = 6,
				S7 = 7,
				S8 = 8;

wire [3:0] state_din,state_dout;
wire state_wen;

assign state_wen = 1;

register #(
	.BITS(4)
)(
	.load(in),
	.clr(reset),
	.clk(clk),
	.inp(state_din),
	.out_q(state_dout)
)

MuxKeyWithDefault #(9,4,1) outMux (
	.out(out),
	.key(state_dout),
	.default_out(0),
	.lut({
		S0, 1'b0,
		S1, 1'b0,
		S2, 1'b0,
		S3, 1'b0,
		S4, 1'b0,
		S5, 1'b0,
		S6, 1'b0,
		S7, 1'b0,
		S8, 1'b0
	})
);

MuxKeyWithDefault #(9,4,4) stateMux (
	.out(state_din),
	.key(state_dout),
	.default_out(S0),
	.lut({
		S0, 1'b0,
		S1, 1'b0,
		S2, 1'b0,
		S3, 1'b0,
		S4, 1'b0,
		S5, 1'b0,
		S6, 1'b0,
		S7, 1'b0,
		S8, 1'b0
	})
);

endmodule
