module ALU#(
	BITS = 64
)(
	input [BITS-1:0] alu_inX,
	input [BITS-1:0] alu_inY,
	output [BITS-1:0] alu_out,
	output alu_carry
);

ADDER #(
	.BITS(BITS)
) adder (
	.in_x(alu_inX),
	.in_y(alu_inY),
	.out_s(alu_out),
	.out_c(alu_carry)
);

endmodule;

module ADDER#(
	BITS = 1
)(
	input [BITS-1:0] in_x, in_y,
	output [BITS-1:0] out_s,
	output out_c
);

assign {out_c, out_s} = in_x + in_y;

endmodule
