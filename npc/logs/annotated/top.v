	// verilator_coverage annotation
	module top (
 000019	    input clk,
%000001	    input rst,
%000000	    input [7:0] sw,
%000000	    input ps2_clk,
%000000	    input ps2_data,
%000000		input [3:0] a,
%000000		input [1:0] s,
%000001	    output [15:0] ledr,
 000019	    output VGA_CLK,
%000000	    output VGA_HSYNC,
%000000	    output VGA_VSYNC,
%000000	    output VGA_BLANK_N,
%000005	    output [7:0] VGA_R,
%000004	    output [7:0] VGA_G,
%000008	    output [7:0] VGA_B,
%000001	    output [7:0] seg0,
%000006	    output [7:0] seg1,
%000003	    output [7:0] seg2,
%000003	    output [7:0] seg3,
%000004	    output [7:0] seg4,
%000003	    output [7:0] seg5,
%000002	    output [7:0] seg6,
%000005	    output [7:0] seg7,
%000000		output reg y
	);
	
	led led1(
	    .clk(clk),
	    .rst(rst),
	    .sw(sw),
	    .ledr(ledr)
	);
	
	mux41 mux(
		.a(a),
		.s(s),
%000000		.y(y)
%000000	);
%000017	
	assign VGA_CLK = clk;
	
	wire [9:0] h_addr;
	wire [9:0] v_addr;
	wire [23:0] vga_data;
	
	vga_ctrl my_vga_ctrl(
	    .pclk(clk),
	    .reset(rst),
	    .vga_data(vga_data),
	    .h_addr(h_addr),
	    .v_addr(v_addr),
	    .hsync(VGA_HSYNC),
	    .vsync(VGA_VSYNC),
	    .valid(VGA_BLANK_N),
	    .vga_r(VGA_R),
	    .vga_g(VGA_G),
	    .vga_b(VGA_B)
	);
	
	ps2_keyboard my_keyboard(
	    .clk(clk),
	    .resetn(~rst),
	    .ps2_clk(ps2_clk),
	    .ps2_data(ps2_data)
	);
	
	seg mu_seg(
	    .clk(clk),
	    .rst(rst),
	    .o_seg0(seg0),
	    .o_seg1(seg1),
	    .o_seg2(seg2),
	    .o_seg3(seg3),
	    .o_seg4(seg4),
	    .o_seg5(seg5),
	    .o_seg6(seg6),
	    .o_seg7(seg7)
	);
	
	vmem my_vmem(
	    .h_addr(h_addr),
	    .v_addr(v_addr[8:0]),
	    .vga_data(vga_data)
%000000	);
%000000	
%000017	endmodule
	
	module vmem (
	    input [9:0] h_addr,
	    input [8:0] v_addr,
%000002	    output [23:0] vga_data
%000001	);
	
	reg [23:0] vga_mem [524287:0];
	
	initial begin
	    $readmemh("resource/picture.hex", vga_mem);
	end
	
	assign vga_data = vga_mem[{h_addr, v_addr}];
	
	endmodule
	
