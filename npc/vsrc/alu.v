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



always @(*) begin
	case(alu_fnselec)
		3'b000 : begin
		end
		3'b001 : begin
		end
		3'b010 : begin
		end
		3'b011 : begin
		end
		3'b100 : begin
		end
		3'b101 : begin
		end
		3'b110 : begin
		end
		3'b111 : begin
		end
	endcase
end

endmodule
