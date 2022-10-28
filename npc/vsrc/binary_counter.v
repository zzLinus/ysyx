module inc_counter(
	input clk,
	input en,

	output reg [7:0] out_q
);

always @(posedge clk)
	if(en) begin
		if (out_q > 99)
			out_q <= 0;
		else
			out_q <= out_q + 1;
	end
	else
		out_q <= 0;
endmodule

module dec_counter(
	input clk,
	input en,

	output reg [2:0] out_q
);

always @(posedge clk)
	if(en)
		out_q <= out_q - 1;
	else
		out_q <= 0;
endmodule
