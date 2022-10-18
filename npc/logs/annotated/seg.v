	// verilator_coverage annotation
	module seg(
 000019	  input clk,
%000001	  input rst,
%000001	  output [7:0] o_seg0,
%000006	  output [7:0] o_seg1,
%000003	  output [7:0] o_seg2,
%000003	  output [7:0] o_seg3,
%000004	  output [7:0] o_seg4,
%000003	  output [7:0] o_seg5,
%000002	  output [7:0] o_seg6,
%000005	  output [7:0] o_seg7
	);
	
%000037	wire [7:0] segs [7:0];
	assign segs[0] = 8'b11111101;
	assign segs[1] = 8'b01100000;
	assign segs[2] = 8'b11011010;
	assign segs[3] = 8'b11110010;
	assign segs[4] = 8'b01100110;
	assign segs[5] = 8'b10110110;
	assign segs[6] = 8'b10111110;
	assign segs[7] = 8'b11100000;
	
	parameter CLK_NUM = 5000000;
	
%000000	reg [31:0] count;
%000000	reg [2:0] offset;
	
 000020	always @(posedge clk) begin
 000020	  if(rst) begin count <= 0; offset <= 0; end
%000000	  verilator_coverage: (next point on previous line)

%000000	  else begin
%000000	    if(count == CLK_NUM) begin offset <= offset + 1; end
%000000	    verilator_coverage: (next point on previous line)

%000000	    count <= (count == CLK_NUM) ? 0 : count + 1;
	  end
	end
	
	assign o_seg0 = ~segs[offset + 3'd0];
	assign o_seg1 = ~segs[offset + 3'd1];
	assign o_seg2 = ~segs[offset + 3'd2];
	assign o_seg3 = ~segs[offset + 3'd3];
	assign o_seg4 = ~segs[offset + 3'd4];
	assign o_seg5 = ~segs[offset + 3'd5];
	assign o_seg6 = ~segs[offset + 3'd6];
	assign o_seg7 = ~segs[offset + 3'd7];
	
	endmodule
	
