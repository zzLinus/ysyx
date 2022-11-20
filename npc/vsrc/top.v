module top (
    input clk,
    input rst,
    input [7:0] sw,
    input ps2_clk,
    input ps2_data,
	input [7:0] a,
	input [2:0] x,
	input [7:0] ec_x,
	input [2:0] alu_fnselec,
	input [3:0] alu_a,
	input [3:0] alu_b,
	input counter_EN,
	input en,
	input rand_in,
	input state_machine_clr,
	input ec_en,
	input [1:0] s,
	input [31:0] sft_rgtr_data,
	input [4:0] sft_rgtr_shamt,
	input sft_rgtr_l_or_r,
	input sft_rgtr_a_or_l,
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
	output [31:0] sft_out_q,
	output reg [1:0] y,
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

inc_counter inc_counter(
	.clk(timer_out),
	.en(counter_EN),
	.out_q(inc_counter_out)
);

dec_counter dec_counter(
	.clk(timer_out),
	.en(counter_EN),
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
wire [11:0] font_h;
wire [11:0] font_v;
wire [23:0] vga_data;

vga_ctrl my_vga_ctrl(
    .pclk(clk),
    .reset(rst),
    .vga_data(vga_data),
    .h_addr(h_addr),
    .v_addr(v_addr),
	.font_h(font_h),
	.font_v(font_v),
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
    .ps2_data(ps2_data),
	.key_code(key_code)
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
	.font_h(font_h),
	.font_v(font_v),
	.ascii_code(ascii_code),
    .vga_data(vga_data)
);

timer timer_1s(
	.clk(clk),
	.timer_out(timer_out)
);

wire [7:0] key_code;
wire [7:0] ascii_code;

lookup_table lookup(
	.key_code(key_code),
	.ascii_code(ascii_code)
);

endmodule

module vmem (
    input [9:0] h_addr,
    input [8:0] v_addr,
	input [11:0] font_h,
	input [11:0] font_v,
	input [7:0] ascii_code,
    output [23:0] vga_data
);

// reg [23:0] vga_mem [524287:0];
reg [7:0] vga_mem [2099:0];
reg [11:0] font_rom [4095:0];
reg [11:0] word_count;
wire [11:0] font_addr;
wire [11:0] word;
wire [11:0] font_cord_v;
wire [3:0] font_cord_h;
wire [11:0] font_data;

always @(ascii_code) begin
	if (ascii_code != 8'h00) begin
		if(ascii_code == 8'ha9) begin
			word_count = (word_count / 12'd127) + 12'b1;
			word_count = word_count * 12'd127;
			$display("word_count %d", word_count);
		end
		else
			vga_mem[word_count] = ascii_code;
		word_count = word_count + 1;
	end
end

initial begin
    $readmemh("resource/vga_font.txt", font_rom);
    // $readmemh("resource/test.txt", vga_mem);
    // $readmemh("resource/hhh2.txt", vga_mem);
end

// assign vga_data = vga_mem[{h_addr, v_addr}];
assign word = {{4'b0000},vga_mem[font_v*12'd71 + font_h]}; // get the 8 bit ascii value
assign font_cord_v = {{3'b000},{v_addr%9'd16}};
assign font_cord_h = {h_addr%10'd9}[3:0];
assign font_addr = word * 12'd16 + font_cord_v; 
assign font_data = font_rom[font_addr];
assign vga_data = font_data[font_cord_h] ? 24'b111111111111111111111111 : 24'b000000000000000000000000;

endmodule
