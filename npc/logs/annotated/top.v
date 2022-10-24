	// verilator_coverage annotation
	module top (
 000019	    input clk,
%000001	    input rst,
%000000	    input [7:0] sw,
%000000	    input ps2_clk,
%000000	    input ps2_data,
%000000		input [7:0] a,
%000000		input [2:0] x,
%000001		input en,
 000019		input [1:0] s,
%000000	    output [15:0] ledr,
%000000	    output VGA_CLK,
%000000	    output VGA_HSYNC,
%000005	    output VGA_VSYNC,
%000004	    output VGA_BLANK_N,
%000008	    output [7:0] VGA_R,
%000001	    output [7:0] VGA_G,
%000006	    output [7:0] VGA_B,
%000003	    output [7:0] seg0,
%000003	    output [7:0] seg1,
%000004	    output [7:0] seg2,
%000003	    output [7:0] seg3,
%000002	    output [7:0] seg4,
%000005	    output [7:0] seg5,
%000000	    output [7:0] seg6,
	    output [7:0] seg7,
		output reg [1:0] y,
		output reg [7:0] y_dec
	);
	
	led led1(
	    .clk(clk),
	    .rst(rst),
	    .sw(sw),
	    .ledr(ledr)
	);
	
%000000	mux41 mux(
%000000		.a(a),
%000017		.s(s),
		.y(y)
	);
	
	// decoder24 dec(
	// 	.x(x),
	// 	.EN(en),
	// 	.y(y_dec)
	// );
	
	decoder38 dec(
		.x(x),
		.EN(en),
		.y(y_dec)
	);
	
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
%000000	    .rst(rst),
%000000	    .o_seg0(seg0),
%000017	    .o_seg1(seg1),
	    .o_seg2(seg2),
	    .o_seg3(seg3),
	    .o_seg4(seg4),
	    .o_seg5(seg5),
%000002	    .o_seg6(seg6),
%000001	    .o_seg7(seg7)
	);
	
	vmem my_vmem(
	    .h_addr(h_addr),
	    .v_addr(v_addr[8:0]),
	    .vga_data(vga_data)
	);
	
	endmodule
	
	module vmem (
	    input [9:0] h_addr,
	    input [8:0] v_addr,
	    output [23:0] vga_data
	);
	
	reg [23:0] vga_mem [524287:0];
	
	initial begin
	    $readmemh("resource/picture.hex", vga_mem);
	end
	
	assign vga_data = vga_mem[{h_addr, v_addr}];
	
	endmodule
	
