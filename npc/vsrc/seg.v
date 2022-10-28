module seg(
  input clk,
  input rst,
  input [3:0] seg_x,
  input [3:0] seg_y,
  output [7:0] o_seg0,
  output [7:0] o_seg1,
  output [7:0] o_seg2,
  output [7:0] o_seg3,
  output [7:0] o_seg4,
  output [7:0] o_seg5,
  output [7:0] o_seg6,
  output [7:0] o_seg7
);

wire [7:0] segs [7:0];
assign segs[0] = 8'b11111101;
assign segs[1] = 8'b01100000;
assign segs[2] = 8'b11011010;
assign segs[3] = 8'b11110010;
assign segs[4] = 8'b01100110;
assign segs[5] = 8'b10110110;
assign segs[6] = 8'b10111110;
assign segs[7] = 8'b11100000;
assign segs[8] = 8'b11111111;
assign segs[9] = 8'b11100110;

parameter CLK_NUM = 5000000;

reg [31:0] count;
reg [2:0] offset;

integer x;

always @(posedge clk) begin
	if(rst) begin count <= 0; offset <= 0; end
		else begin
			if(count == CLK_NUM) begin offset <= offset + 1; end
				count <= (count == CLK_NUM) ? 0 : count + 1;
		end
	x = integer'(seg_x);
end

assign o_seg0 = ~segs[seg_x];
assign o_seg1 = ~segs[seg_y];
assign o_seg2 = ~segs[4'd7];
assign o_seg3 = ~segs[4'd6];
assign o_seg4 = ~segs[4'd4];
assign o_seg5 = ~segs[4'd5];
assign o_seg6 = ~segs[4'd3];
assign o_seg7 = ~segs[4'd2];

endmodule
