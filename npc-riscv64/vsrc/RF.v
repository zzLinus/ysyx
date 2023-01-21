module RF(
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

always @(ra or rb) begin
	if (ra == 0) busA = 32'b0;
	else busA = regs[32*ra+:32];
	if (rb == 0) busB = 32'b0;
	else busB = regs[32*rb+:32];
end

// always @(posedge wrClk) begin

always @(regWr == 1) regs[32*rw+:32] = busW;

endmodule;
