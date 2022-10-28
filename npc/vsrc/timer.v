module timer(
	input clk,
	output reg timer_out
);

reg [31:0] count_clk = 32'b0;

initial begin
	if ($test$plusargs("trace") != 0) begin
		 $dumpfile("logs/vlt_dump.vcd");
		 $dumpvars();
	end
	$display("[%0t] Model running...\n", $time);
end

always @(posedge clk) begin
	if(count_clk == 24999999)
	begin
		count_clk <= 0;
		timer_out <= ~timer_out;
	end
	else
		count_clk <= count_clk + 1;
end

endmodule
