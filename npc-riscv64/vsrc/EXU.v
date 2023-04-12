module ALU_CTR(
		input [1:0] alu_op,
		input [6:0] funct7,
		input [2:0] funct3,
		output reg [3:0] operation 
);

always @(*) begin
		case ({funct3,alu_op})
				5'b11110 : operation = 4'b0000; // AND opp
				5'b11010 : operation = 4'b0001; // OR op
				5'b10010 : operation = 4'b1100; // NOR op
				5'b01010 : operation = 4'b0111; // SLT op
				5'b00010 : if(funct7 == 7'h00) operation = 4'b0010; // ADD op
									 else if(funct7 == 7'h20) operation = 4'b0110; // SUB op
									 else operation = 4'b0000;
				5'b11100 : operation = 4'b0000; // ANDI op
				5'b11000 : operation = 4'b0001; // ORI op
				5'b10000 : operation = 4'b1100; // NORI op
				5'b01000 : operation = 4'b0111; // SLTI op
				5'b00000 : operation = 4'b0010; // ADDI op
				5'b01001 : operation = 4'b0010; // LW or SW op // TODO :
				default  : operation = 4'b0000; // dufault to AND op
		endcase
end

endmodule


module ALU#( // TODO : refector ALU
	BITS = 32
)( 
	input [3:0] alu_ctr,
	input [BITS-1:0] alu_a,
	input [BITS-1:0] alu_b,
	output reg [BITS-1:0] alu_out,
	output alu_zero,
	output alu_carry,
	output alu_less,
	output alu_overflow
);

wire [BITS-1:0] adder_out;
wire [BITS-1:0] sft_out;

wire less_a = alu_overflow^ adder_out[BITS-1];
wire less_b = alu_ctr_sa ^ alu_carry;


wire [BITS-1:0] alu_and = alu_a & alu_b; 
wire [BITS-1:0] alu_or = alu_a | alu_b;
wire [BITS-1:0] alu_nor = ~(alu_a | alu_b);
wire [BITS-1:0] alu_xor = alu_a ^ alu_b; 
wire [BITS-1:0] alu_b_s = (alu_b ^ {32{alu_ctr[2]}}); // alu_b after xor

wire alu_ctr_al = alu_ctr[3];
wire alu_ctr_lr = ~alu_ctr[2];
wire alu_ctr_us = alu_ctr[3];
wire alu_ctr_sa = (alu_ctr[2:0] == 3'b010) ? 1'b1 : alu_ctr[3]; 

ADDER #(
	.BITS(32)
) adder(
	.in_a(alu_a),
	.in_b(alu_b_s),
	.cin(alu_ctr[2]),
	.out_s(adder_out),
	.out_c(alu_carry),
	.out_o(alu_overflow),
	.out_z(alu_zero)
);

MuxKey #(
	.NR_KEY(2),
	.KEY_LEN(1),
	.DATA_LEN(1) 
) less_MUX21 (
	.out(alu_less),
	.key(alu_ctr_us),
	.lut({
		1'b0, less_a,
		1'b1, less_b
	})
);

always @(*) begin
		case (alu_ctr)
				4'b0000 : alu_out = alu_and;
				4'b0001 : alu_out = alu_or;
				4'b1100 : alu_out = alu_nor; // TODO : nor
				4'b0111 : alu_out = sft_out; // shift left
				4'b0010 : alu_out = adder_out;
				4'b0110 : alu_out = adder_out;
				default : alu_out = adder_out;
		endcase
		$display("\nAlu module");
		$display("alu_ctr %d", alu_ctr);
		$display("alu_a %d", alu_a);
		$display("alu_b %d", alu_b);
		$display("alu_out %d", alu_out);
		$display("adder_out %d", adder_out);
end

BARRELSHIFTER #(
	.BITS(32)
) BRSFT (
	.din(alu_a),
	.shamt(alu_b[4:0]),
	.lr(alu_ctr_lr),
	.al(alu_ctr_al),
	.bs_out(sft_out)
);

endmodule

//
// submodules 
//
module ADDER #(
	BITS = 32
)(
	input [BITS-1:0] in_a,
	input [BITS-1:0] in_b,
	input cin,
	output [BITS-1:0] out_s,
	output out_c, // carry
	output out_z, // zero
	output out_o  // overflow
);

assign {out_c, out_s} = in_a + in_b + {31'b0,cin};
assign out_o = (in_a[BITS-1] == in_b[BITS-1]) && (out_s[BITS-1] != in_a[BITS-1]);
assign out_z = ~(|out_s);

endmodule;

// https://stackoverflow.com/questions/7543592/verilog-barrel-shifter
// NOTE :
// wire [HIGH_BIT:LOW_BIT] signalAdd,signaSub;
// signalAdd[some_expression +: some_range];
// signalSub[some_expression -: some_range];
// //Resolves to
// signalAdd[some_expression + (some_range - 1) : some_expression];
// signalSub[some_expression                    : some_expression - (some_range - 1)];

module BARRELSHIFTER #(
	BITS = 32
)(
	input [BITS-1:0] din,
	input [4:0] shamt,
	input lr, // left right
	input al, // arithmetic logic
	output reg [BITS-1:0] bs_out
);

wire [63:0] din_double_r = (al == 1) ? {{32{din[31]}},din} : {32'b0,din}; // for right shift 
wire [63:0] din_double_l = {din,32'b0}; // for left shift

always @(*) begin
	case({al,lr})
		2'b00: bs_out = din_double_r[shamt+31-:32]; // logit && right
		2'b10: bs_out = din_double_r[shamt+31-:32]; // arithmetic && right
	default: bs_out = din_double_l[31-shamt+1+:32]; // left shift
	endcase
end

endmodule
