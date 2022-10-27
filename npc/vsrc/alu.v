// module adder_1bit (
// 	input c,
// 	input a,
// 	input b,
// 	output reg s,
// 	output reg c_out
// );
//
// reg tmp;
// always @(*) begin
// 	assign tmp = (a|b)&(~(a&b));
// 	assign s = (tmp|c)&(~(tmp&c));
// 	assign c_out = (a&b)|(c&tmp);
// end
//
// endmodule

// 000 | 加法     | A+B
//
// 001 | 减法     | A-B
//
// 010 | 取反     | Not A
//
// 011 | 与 A     | and B
//
// 100 | 或 A     | or B
//
// 101 | 异或     | A xor B
//
// 110 | 比较大小 | If A<B then out=1; else out=0;
//
// 111 | 判断相等 | If A==B then out=1; else out=0;

module alu_4bit( 
	input [2:0] alu_fnselec,
	input [3:0] alu_a,
	input [3:0] alu_b,
	output reg [3:0] alu_res ,
	output reg alu_zero,
	output reg alu_overflow,
	output reg alu_carry
);

reg [3:0] tmp = 4'b0000;

always @(*) begin
	case(alu_fnselec)
		3'b000 : begin
			alu_carry = 1'b0;
			{alu_carry,alu_res} = alu_a + alu_b;
			if(alu_res == 4'b0000)
				alu_zero = 1'b1;
			else
				alu_zero = 1'b0;
			alu_overflow = (alu_a[3] == alu_b[3]) && (alu_res[3] != alu_a[3]);
		end
		3'b001 : begin
			assign tmp = (~alu_b + 1);
			alu_carry = 1'b0;
			{alu_carry,alu_res} = alu_a + tmp;
			if(alu_res == 4'b0000)
				alu_zero = 1'b1;
			else
				alu_zero = 1'b0;
			alu_overflow = (alu_a[3] == tmp[3]) && (alu_res[3] != alu_a[3]);
		end
		3'b010 : begin
			alu_res = ~alu_a;
			alu_carry = 1'b0;
			alu_overflow = 1'b0;
			alu_zero = 1'b0;
		end
		3'b011 : begin
			alu_res = alu_a & alu_b;
			alu_carry = 1'b0;
			alu_overflow = 1'b0;
			alu_zero = 1'b0;
		end
		3'b100 : begin
			alu_res = alu_a | alu_b;
			alu_carry = 1'b0;
			alu_overflow = 1'b0;
			alu_zero = 1'b0;
		end
		3'b101 : begin
			alu_res = alu_a ^ alu_b;
			alu_carry = 1'b0;
			alu_overflow = 1'b0;
			alu_zero = 1'b0;
		end
		3'b110 : begin
			if(alu_a < alu_b)
				alu_res = 4'b0001;
			else
				alu_res = 4'b0000;
			alu_carry = 1'b0;
			alu_overflow = 1'b0;
			alu_zero = 1'b0;
		end
		3'b111 : begin
			if(alu_a == alu_b)
				alu_res = 4'b0001;
			else
				alu_res = 4'b0000;
			alu_carry = 1'b0;
			alu_overflow = 1'b0;
			alu_zero = 1'b0;
		end
		default: begin
			alu_res = 4'b0000;
			alu_carry = 1'b0;
			alu_overflow = 1'b0;
			alu_zero = 1'b0;
		end
	endcase
end

endmodule
