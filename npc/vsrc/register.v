module register_1bit(
	input load,
	input clr,
	input clk,
	input inp,
	output reg q
);

always @(posedge clk) begin
	if(clr == 1)
		q <= 0;
	else if(load == 1)
		q <= inp;
end

endmodule

module ram #(
	parameter RAM_WIDTH = 32,
	parameter RAM_ADDR_WIDTH = 10
)(
	input clk,
	input we,
	input [RAM_WIDTH-1:0] din,
	input [RAM_ADDR_WIDTH-1:0] inaddr,
	input [RAM_ADDR_WIDTH-1:0] outaddr,
	input [RAM_WIDTH-1:0] dout
);

reg [RAM_WIDTH-1:0] ram [(2**RAM_ADDR_WIDTH)-1:0];

always @(posedge clk) begin
	if(we)
		ram[inaddr] <= din;
end

assign dout = ram[outaddr];

endmodule
