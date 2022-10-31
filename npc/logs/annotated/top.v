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
 000019		input [2:0] alu_fnselec,
%000000		input [3:0] alu_a,
%000000		input [3:0] alu_b,
%000000		input counter_EN,
%000005		input en,
%000004		input rand_in,
%000008		input state_machine_clr,
%000001		input ec_en,
%000006		input [1:0] s,
%000003		input [31:0] sft_rgtr_data,
%000003		input [4:0] sft_rgtr_shamt,
%000004		input sft_rgtr_l_or_r,
%000003		input sft_rgtr_a_or_l,
%000002	    output [15:0] ledr,
%000005	    output VGA_CLK,
%000000	    output VGA_HSYNC,
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
%000000	    output [7:0] seg7,
%000000		output [31:0] sft_out_q,
%000017		output reg [1:0] y,
		output reg [2:0] ec_y,
		output reg [7:0] y_dec,
		output [3:0] alu_res,
		output alu_zero,
		output alu_overflow,
		output alu_carry,
		output state_machine_out,
		output reg [7:0] inc_counter_out,
		output reg [2:0] dec_counter_out,
		output timer_out
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
	
	encoder83 encoder(
		.x(ec_x),
		.EN(ec_en),
		.y(ec_y)
	);
	
%000000	inc_counter inc_counter(
%000000		.clk(timer_out),
%000017		.en(counter_EN),
		.out_q(inc_counter_out)
	);
	
	dec_counter dec_counter(
%000002		.clk(timer_out),
%000001		.en(counter_EN),
		.out_q(dec_counter_out)
	);
	
	shift_register sft_regstr (
		.data(sft_rgtr_data),
		.shamt(sft_rgtr_shamt),
		.l_or_r(sft_rgtr_l_or_r),
		.a_or_l(sft_rgtr_a_or_l),
		.out_q(sft_out_q)
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
	
	alu_4bit alu(
		.alu_fnselec(alu_fnselec),
		.alu_a(alu_a),
		.alu_b(alu_b),
		.alu_res(alu_res),
		.alu_zero(alu_zero),
		.alu_overflow(alu_overflow),
		.alu_carry(alu_carry)
	);
	
	state_machine state_machine(
		.clk(timer_out),
		.in(rand_in),
		.reset(state_machine_clr),
		.out(state_machine_out)
	);
	
	reg [7:0] seg_x;
	reg [7:0] seg_y;
	
	always @(inc_counter_out) begin
		seg_x = inc_counter_out % 10;
		seg_y = inc_counter_out / 10;
	end
	
	seg mu_seg(
	    .clk(clk),
		.seg_x(seg_x[3:0]),
		.seg_y(seg_y[3:0]),
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
	
	timer timer_1s(
		.clk(clk),
		.timer_out(timer_out)
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
	
