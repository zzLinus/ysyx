module ALU_CTR(
		input [1:0] alu_op,
		input [6:0] funct7,
		input [2:0] funct3,
		input [1:0] has_funct,
		output reg [3:0] operation 
);


// NOTE: operation[3] -> sign unsign flag bit
always @(alu_op or funct3 or funct7) begin
		if(has_funct == 2'b11) begin // NOTE :instruction has fucnt7 && funct3
				case ({funct7,funct3,alu_op}) // NOTE: mostly R-type instruction
						// FIXME: 32 bit (sub)operation needs sign extend
						12'b000000000010 : operation = 4'b0010; // ADD op
						12'b000000000011 : operation = 4'b0010; // ADDW op
						12'b010000000011 : operation = 4'b0110; // SUBW op
						12'b010000000010 : operation = 4'b0110; // SUB op
						12'b000000011011 : operation = 4'b0001; // ORW op
						12'b000000011010 : operation = 4'b0001; // OR op
						12'b000000001111 : operation = 4'b0011; // SLTU (sign)
						12'b000000100010 : operation = 4'b0101; // MULW op
						12'b000000100011: operation = 4'b1010; // MUL op
						12'b000000110010 : operation = 4'b0111; // DIVW op
						12'b000000111010 : operation = 4'b1001; // REMW op
            12'b010000010110 : operation = 4'b0100; // SRAW op
            12'b000000010110 : operation = 4'b0100; // SRLW op
						// FIXME: 32 bit operation needs sign extend
						12'b000000000110:  operation = 4'b1000; // SLLW 
						default  : operation = 4'b0000; // dufault to AND op
				endcase
		end else if(has_funct == 2'b01) begin // handle instruction has funct3
				case ({funct3,alu_op})
						5'b11110 : operation = 4'b0000; // AND opp
						5'b11010 : operation = 4'b0001; // OR op
						5'b00011 : operation = 4'b0010; // BEQ  op -> ADD op
						5'b00111 : operation = 4'b0010; // BNE  op -> ADD op
						5'b10011 : operation = 4'b0010; // BLT  op -> ADD op
						5'b10111 : operation = 4'b0010; // BGE  op -> ADD op
						5'b11011 : operation = 4'b0010; // BLTU op -> ADD op
						5'b11111 : operation = 4'b0010; // BGEU op -> ADD op
						5'b10100 : operation = 4'b0100; // SRAI SRLI op
						5'b00100 : operation = 4'b1000; // SLLI op
						5'b10110 : operation = 4'b0100; // SRAIW op
						5'b00110 : operation = 4'b1000; // SLLIW op
						5'b11100 : operation = 4'b0000; // ANDI op
						5'b01100 : operation = 4'b0011; // SLTIU op
						5'b11000 : operation = 4'b0001; // ORI op
						5'b10000 : operation = 4'b1100; // XOR op
						5'b00000 : operation = 4'b0010; // ADD op
						5'b00001 : operation = 4'b0010; // LB or SB op
						5'b00101 : operation = 4'b0010; // LH or SH op
						5'b01001 : operation = 4'b0010; // LW or SW op
						5'b01101 : operation = 4'b0010; // LD or SD op
						default  : operation = 4'b0010; // dufault to AND op
				endcase
		end else begin
				case (alu_op)
						2'b10   : operation = 4'b0010;
						default : operation = 4'b0000;
				endcase
		end

		$display("\n** ALU CTRL Module **");
		$display("alu_op    %d", alu_op);
		$display("funct3    %d %x", funct3, funct3);
		$display("funct7    %d %x", funct7, funct7);
		$display("operation %d %x", operation, operation);
end

endmodule


module ALU#(
	BITS = 64
)( 
	input [1:0] need_sext,
	input [6:0] funct7,
	input [3:0] alu_ctr,
	input [BITS-1:0] alu_a,
	input [BITS-1:0] alu_b,
	output reg [BITS-1:0] alu_out,
	output alu_zero,
	output alu_carry,
	output alu_overflow
);

wire [BITS-1:0] adder_out;
wire [BITS-1:0] sft_out;
wire [31:0] bs_out32;

wire [BITS-1:0] alu_and = alu_a & alu_b; 
wire [BITS-1:0] alu_or  = alu_a | alu_b;
wire [BITS-1:0] alu_xor = alu_a ^ alu_b; 
wire [BITS-1:0] alu_b_s = (alu_b ^ {64{alu_ctr[2]}}); // alu_b after xor
wire [BITS-1:0] alu_a_s = (need_sext == 2'b10) ? {32'b0, alu_a[31:0]} : alu_a;

wire [BITS-1:0] alu_mul = alu_a*alu_b;
wire [BITS-1:0] alu_mul32 = {32'b0, alu_a[31:0]*alu_b[31:0]};
wire [BITS-1:0] alu_div = alu_a/alu_b;
wire [BITS-1:0] alu_div32 = {32'b0, alu_a[31:0]/alu_b[31:0]};
wire [BITS-1:0] alu_rem = alu_a%alu_b;
wire [BITS-1:0] alu_rem32 = {32'b0, alu_a[31:0]%alu_b[31:0]};

// NOTE: alu_ctr[2] == 0 -> left shift alu_ctr[2] == 1 -> right shift
wire alu_ctr_al = alu_b[30] | funct7[5];  // NOTE: arithmetic or logic
wire alu_ctr_lr = ~alu_ctr[2]; // NOTE: left or right
wire alu_ctr_us = alu_ctr[3];  // NOTE: unsign or sign
wire alu_ctr_sa = (alu_ctr[2:0] == 3'b010) ? 1'b1 : alu_ctr[3]; // NOTE: sub or add

ADDER #(
	.BITS(64)
) adder(
	.in_a(alu_a_s),
	.in_b(alu_b_s),
	.cin(alu_ctr[2]),
	.out_s(adder_out),
	.out_c(alu_carry),
	.out_o(alu_overflow),
	.out_z(alu_zero)
);

always @(alu_ctr or alu_a or alu_b) begin
		case (alu_ctr)
				4'b0000 : alu_out = alu_and;
				4'b0001 : alu_out = alu_or;
				4'b0010 : alu_out = adder_out;
				4'b0110 : alu_out = adder_out;
				4'b0011 : alu_out = ($signed(alu_a) < $signed(alu_b)) ? 64'b1 : 64'b0;
				4'b1100 : alu_out = alu_xor;
				4'b0100 : alu_out = (need_sext == 2'b10) ? {bs_out32[31] ? {32{1'b1}} : 32'b0, bs_out32} : sft_out;
				4'b0101 : alu_out = alu_mul32;
				4'b0111 : alu_out = alu_div32;
				4'b1001 : alu_out = alu_rem32;
				4'b1010 : alu_out = alu_mul;
				4'b1000 : alu_out = (need_sext == 2'b10) ? {bs_out32[31] ? {32{1'b1}} : 32'b0, bs_out32} : sft_out;				default : alu_out = adder_out;
		endcase

		if(need_sext == 2'b1) alu_out = {alu_out[31] ? {32{1'b1}} : 32'b0, alu_out[31:0]};

		$display("\n** ALU Module **");
		$display("alu_ctr   %d", alu_ctr);
		$display("alu_a     %d %x", alu_a, alu_a);
		$display("alu_b     %d %x", alu_b, alu_b);
		$display("sft_out   %d %x", sft_out, sft_out);
		$display("adder_out %d %x", adder_out, adder_out);
		$display("alu_out   %d %x", alu_out, alu_out);
end

BARRELSHIFTER64 BRSFT64 (
	.din(alu_a_s),
	.shamt(alu_b[5:0]),
	.lr(alu_ctr_lr),
	.al(alu_ctr_al),
	.bs_out(sft_out)
);

BARRELSHIFTER32 BRSFT32 (
	.din(alu_a_s[31:0]),
	.shamt(alu_b[4:0]),
	.lr(alu_ctr_lr),
	.al(alu_ctr_al),
	.bs_out(bs_out32)
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
assign out_z = ~(|out_s);

endmodule;

// https://stackoverflow.com/questions/7543592/verilog-barrel-shifter
// NOTE :
// wire [HIGH_BIT:LOW_BIT] signalAdd,signaSub;
// signalAdd[some_expression +: some_range];
// signalSub[some_expression -: some_range];
// Resolves to
// signalAdd[some_expression + (some_range - 1) : some_expression];
// signalSub[some_expression                    : some_expression - (some_range - 1)];

module BARRELSHIFTER64 (
	input [63:0] din,
	input [5:0] shamt,
	input lr, // left right
	input al, // arithmetic logic
	output reg [63:0] bs_out
);

wire [127:0] din_double_r = (al == 1) ? {{64{din[63]}},din} : {64'b0,din}; // for right shift 
wire [127:0] din_double_l = {din,64'b0}; // for left shift

always @(*) begin
	case({al,lr})
		2'b00: bs_out = din_double_r[shamt+63-:64]; // logic && right
		2'b10: bs_out = din_double_r[shamt+63-:64]; // arithmetic && right
	default: bs_out = din_double_l[63-shamt+1+:64]; // left shift
	endcase

		$display("bs_out %d %x", bs_out, bs_out);
end

endmodule

module BARRELSHIFTER32 (
	input [31:0] din,
	input [4:0] shamt,
	input lr, // left right
	input al, // arithmetic logic
	output reg [31:0] bs_out
);

wire [63:0] din_double_r = (al == 1) ? {{32{din[31]}}, din} : {32'b0,din}; // for right shift 
wire [63:0] din_double_l = {din,32'b0}; // for left shift

always @(*) begin
	case({al,lr})
		2'b00: bs_out = din_double_r[shamt+31-:32]; // logic && right
		2'b10: bs_out = din_double_r[shamt+31-:32]; // arithmetic && right
	default: bs_out = din_double_l[31-shamt+1+:32]; // left shift
	endcase

	$display("bs_out %d %x", bs_out, bs_out);
end

endmodule
