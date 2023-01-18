module EXU#(
	BITS = 64
)( 
	input clk,
	input [3:0] alu_ctr,
	input [BITS-1:0] alu_a,
	input [BITS-1:0] alu_b,
	output reg [BITS-1:0] alu_out,
	output reg alu_zero,
	output reg alu_less
);

reg [BITS-1:0] alu_and;
reg [BITS-1:0] alu_or;
reg [BITS-1:0] alu_xor;
reg [BITS-1:0] alu_b_s; // alu_b after xor

wire [BITS-1:0] adder_out;
wire adder_carry;
wire adder_zero;
wire adder_overflow;
wire [BITS-1:0] bs_out;
reg less_a;
reg less_b;

always @ (posedge clk) begin
	alu_b_s = (alu_b ^ {64{alu_ctr[3]}});
	less_a = adder_overflow & adder_out[BITS-1];
	less_b = alu_ctr[3] & adder_carry;
	alu_and = alu_a & alu_b; 
	alu_or = alu_a | alu_b;
	alu_xor = alu_a ^ alu_b; 
end

ADDER #(
	.BITS(64)
)adder(
	.in_a(alu_a),
	.in_b(alu_b_s),
	.cin(alu_ctr[3]),
	.out_s(adder_out),
	.out_c(adder_carry),
	.out_z(adder_zero),
	.out_o(adder_overflow)
);

MuxKey #(
	.NR_KEY(2),
	.KEY_LEN(1),
	.DATA_LEN(1) 
) less_MUX21 (
	.out(alu_less),
	.key(alu_ctr[2]),
	.lut({
		1'b0, less_a,
		1'b1, less_b
	})
);

MuxKey #(
	.NR_KEY(8),
	.KEY_LEN(3),
	.DATA_LEN(BITS) 
) alu_out_MUX81 (
	.out(alu_out),
	.key(alu_ctr[2:0]),
	.lut({
		3'b000, adder_out, // add sub
		3'b001, bs_out, // shift
		3'b010, {63'b0, alu_less}, // sub 
		3'b011, alu_b, // out b
		3'b100, bs_out, // shift
		3'b101, alu_xor,// xor
		3'b110, alu_or, // or
		3'b111, alu_and // and
	})
);

BARRELSHIFTER #(
	.BITS(64)
) BRSFT (
	.din(alu_a),
	.shamt(alu_b[4:0]),
	.l_or_r(alu_ctr[1]),
	.a_or_l(alu_ctr[0]),
	.bs_out(bs_out)
);

endmodule

//
// submodules 
//
module ADDER #(
	BITS = 64
)(
	input [BITS-1:0] in_a,
	input [BITS-1:0] in_b,
	input cin,
	output [BITS-1:0] out_s,
	output out_c, // carry
	output out_z, // zero
	output out_o  // overflow
);

assign {out_c, out_s} = in_a + in_b + {63'b0,cin};
assign out_o = (in_a[BITS-1] == in_b[BITS-1]) && (out_s[BITS-1] != in_a[BITS-1]);
assign out_z = ~(|out_o);

endmodule;

module BARRELSHIFTER #(
	BITS = 64
)(
	input [BITS-1:0] din,
	input [4:0] shamt,
	input l_or_r,
	input a_or_l,
	output [BITS-1:0] bs_out
);

endmodule
