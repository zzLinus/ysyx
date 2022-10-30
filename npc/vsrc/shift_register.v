// 置为1为左移，置为0为右移。 选择端A/L为算术逻辑选择，置为1为算术移位，置为0为逻辑移位。
//
module shift_register(
	input [31:0] data,
	input [4:0] shamt,
	input l_or_r,
	input a_or_l,
	output reg [31:0] out_q
);


always @(*) begin
	if(l_or_r == 1) begin // shift left
		out_q = data << shamt;
	end
	else begin // shift right
		if(a_or_l == 1) begin // algo shift
			out_q = data >>> shamt;
		end
		else begin // logical shift
			out_q = data >> shamt;
		end
	end
end

endmodule
