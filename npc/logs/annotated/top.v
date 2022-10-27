	// verilator_coverage annotation
	module top (
 000019	    input clk,
%000001	    input rst,
%000000	    input [7:0] sw,
%000000	    input ps2_clk,
%000000	    input ps2_data,
%000000		input [7:0] a,
%000000		input [2:0] x,
%000001		input [7:0] ec_x,
 000019		input [2:0] seg_x,
%000000		input alu_c,
%000000		input alu_a,
%000000		input alu_b,
%000005		input en,
%000004		input ec_en,
%000008		input [1:0] s,
%000001	    output [15:0] ledr,
%000006	    output VGA_CLK,
%000003	    output VGA_HSYNC,
%000003	    output VGA_VSYNC,
%000004	    output VGA_BLANK_N,
%000003	    output [7:0] VGA_R,
%000002	    output [7:0] VGA_G,
%000005	    output [7:0] VGA_B,
%000000	    output [7:0] seg0,
	    output [7:0] seg1,
	    output [7:0] seg2,
	    output [7:0] seg3,
	    output [7:0] seg4,
	    output [7:0] seg5,
	    output [7:0] seg6,
	    output [7:0] seg7,
		output reg [1:0] y,
		output reg [2:0] ec_y,
		output reg [7:0] y_dec,
		output alu_s,
		output alu_c_out
%000000	);
%000000	
%000017	led led1(
	    .clk(clk),
	    .rst(rst),
	    .sw(sw),
	    .ledr(ledr)
	);
	
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
	
	encoder83 encoder(
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
%000000	    .valid(VGA_BLANK_N),
%000000	    .vga_r(VGA_R),
%000017	    .vga_g(VGA_G),
	    .vga_b(VGA_B)
	);
	
	ps2_keyboard my_keyboard(
%000002	    .clk(clk),
%000001	    .resetn(~rst),
	    .ps2_clk(ps2_clk),
	    .ps2_data(ps2_data)
	);
	
	adder_1bit adder(
		.c(alu_c),
		.a(alu_a),
		.b(alu_b),
		.s(alu_s),
		.c_out(alu_c_out)
	);
	
	seg mu_seg(
	    .clk(clk),
		.seg_x(seg_x),
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
	
