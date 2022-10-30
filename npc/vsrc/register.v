module register#(
	BITS = 1
)(
	input load,
	input clr,
	input clk,
	input inp,
	output reg out_q
);

always @(posedge clk) begin
	if(clr == 1)
		out_q <= 0;
	else if(load == 1)
		out_q <= inp;
end

endmodule
