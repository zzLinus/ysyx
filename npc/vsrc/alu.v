// 101 | 异或     | A xor B
// 110 | 比较大小 | If A<B then out=1; else out=0;
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

reg [3:0] tmp;

always @(*) begin
	assign tmp = (alu_b^4'b1111) + 4'b0001;
	case(alu_fnselec)
		3'b000 : begin
			assign alu_carry = 1'b0;
			{ alu_carry,alu_res } = alu_a + alu_b;
			assign alu_overflow = (alu_a[3] == alu_b[3]) && (alu_res[3] != alu_a[3]);
			assign alu_zero = ~(|alu_res);
		end
		3'b001 : begin
			assign alu_carry = 1'b0;
			{ alu_carry,alu_res } = alu_a + tmp;
			assign alu_overflow = (alu_a[3] == tmp[3]) && (alu_res[3] != alu_a[3]);
			assign alu_zero = ~(|alu_res);
		end
		3'b010 : begin
			assign alu_res = ~alu_a;
			assign alu_carry = 1'b0;
			assign alu_overflow = 1'b0;
			assign alu_zero = 1'b0;
		end
		3'b011 : begin
			assign alu_res = alu_a & alu_b;
			assign alu_carry = 1'b0;
			assign alu_overflow = 1'b0;
			assign alu_zero = 1'b0;
		end
		3'b100 : begin
			assign alu_res = alu_a | alu_b;
			assign alu_carry = 1'b0;
			assign alu_overflow = 1'b0;
			assign alu_zero = 1'b0;
		end
		3'b101 : begin
			assign alu_res = alu_a ^ alu_b;
			assign alu_carry = 1'b0;
			assign alu_overflow = 1'b0;
			assign alu_zero = 1'b0;
		end
		3'b110 : begin
			if(alu_a < alu_b)
				assign alu_res = 4'b0001;
			else
				assign alu_res = 4'b0000;
			assign alu_carry = 1'b0;
			assign alu_overflow = 1'b0;
			assign alu_zero = 1'b0;
		end
		3'b111 : begin
			if(alu_a == alu_b)
				assign alu_res = 4'b0001;
			else
				assign alu_res = 4'b0000;
			assign alu_carry = 1'b0;
			assign alu_overflow = 1'b0;
			assign alu_zero = 1'b0;
		end
		default: begin
			assign alu_res = 4'b0000;
			assign alu_carry = 1'b0;
			assign alu_overflow = 1'b0;
			assign alu_zero = 1'b0;
		end
	endcase
end

endmodule
