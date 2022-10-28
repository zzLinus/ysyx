module timer(
	input clk,
	output reg timer_out
);

reg [31:0] count_clk = 32'b0;


always @(posedge clk) begin
	if(count_clk == 24999999999)
	begin
		count_clk <= 0;
		timer_out <= ~timer_out;
	end
	else
		count_clk <= count_clk + 1;
end

endmodule
