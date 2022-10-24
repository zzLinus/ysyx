module top (
    input clk,
    input rst,
    input [7:0] sw,
    input ps2_clk,
    input ps2_data,
	input [7:0] a,
	input [2:0] x,
	input [3:0] ec_x,
	input en,
	input ec_en,
	input [1:0] s,
    output [15:0] ledr,
    output VGA_CLK,
    output VGA_HSYNC,
    output VGA_VSYNC,
    output VGA_BLANK_N,
    output [7:0] VGA_R,
    output [7:0] VGA_G,
    output [7:0] VGA_B,
    output [7:0] seg0,
    output [7:0] seg1,
    output [7:0] seg2,
    output [7:0] seg3,
    output [7:0] seg4,
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

encoder24 encoder(
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
