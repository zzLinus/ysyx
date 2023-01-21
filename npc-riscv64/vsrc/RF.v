module RF(
	input clk,
	input [4:0] ra,
	input [4:0] rb,
	input [4:0] rw,
	input [31:0] busW,
	output reg [31:0] busA,
	output reg [31:0] busB,
	// input wrClk,
	input regWr
);

reg [32*32-1:0] regs;

always @(posedge clk) begin
	if (ra == 0) busA = 32'b0;
	else if(ra != 5'b11111) busA = regs[32*ra+:32];
	if (rb == 0) busB = 32'b0;
	else if(rb != 5'b11111) busB = regs[32*rb+:32];

	$display("rf ra value: %d", busA);
	$display("rf rb value: %d", busB);
end

// always @(posedge wrClk) begin

always @(negedge clk) regs[32*rw+:32] = (regWr) ? busW : regs[32*rw+:32];

endmodule;

