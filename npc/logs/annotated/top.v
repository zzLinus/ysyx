	// verilator_coverage annotation
	module top (
 000019	    input clk,
%000001	    input rst,
%000000	    input [7:0] sw,
%000000	    input ps2_clk,
%000000	    input ps2_data,
%000000		input [7:0] a,
%000000		input [2:0] x,
%000001		input [3:0] ec_x,
 000019		input en,
%000000		input ec_en,
%000000		input [1:0] s,
%000000	    output [15:0] ledr,
%000005	    output VGA_CLK,
%000004	    output VGA_HSYNC,
%000008	    output VGA_VSYNC,
%000001	    output VGA_BLANK_N,
%000006	    output [7:0] VGA_R,
%000003	    output [7:0] VGA_G,
%000003	    output [7:0] VGA_B,
%000004	    output [7:0] seg0,
%000003	    output [7:0] seg1,
%000002	    output [7:0] seg2,
%000005	    output [7:0] seg3,
%000000	    output [7:0] seg4,
	    output [7:0] seg5,
	    output [7:0] seg6,
	    output [7:0] seg7,
		output reg [1:0] y,
		output reg [1:0] ec_y,
		output reg [7:0] y_dec
	);
	
	led led1(
	    .clk(clk),
	    .rst(rst),
	    .sw(sw),
%000000	    .ledr(ledr)
%000000	);
%000017	
	mux41 mux(
		.a(a),
		.s(s),
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
	
	encoder42 encoder(
		.x(ec_x),
		.EN(ec_en),
		.y(ec_y)
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
	
%000000	ps2_keyboard my_keyboard(
%000000	    .clk(clk),
%000017	    .resetn(~rst),
	    .ps2_clk(ps2_clk),
	    .ps2_data(ps2_data)
	);
	
%000002	seg mu_seg(
%000001	    .clk(clk),
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
	
