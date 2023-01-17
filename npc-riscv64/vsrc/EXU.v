module EXU#(
	BITS = 64
)(
	input [BITS-1:0] exu_inX,
	input [BITS-1:0] exu_inY,
	output [BITS-1:0] exu_out,
	output exu_carry
);

ALU #(
	.BITS(BITS)
) alu (
	.alu_inX(exu_inX),
	.alu_inY(exu_inY),
	.alu_out(exu_out),
	.alu_carry(exu_carry)
);

endmodule;
