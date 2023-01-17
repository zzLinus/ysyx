	// verilator_coverage annotation
	module vga_ctrl (
 000019	    input pclk,
%000001	    input reset,
%000017	    input [23:0] vga_data,
%000000	    output [9:0] h_addr,
%000000	    output [9:0] v_addr,
%000000		output [11:0] font_h,
%000000		output [11:0] font_v,
%000000	    output hsync,
%000005	    output vsync,
%000004	    output valid,
%000008	    output [7:0] vga_r,
	    output [7:0] vga_g,
	    output [7:0] vga_b
	);
	
	// uonst defination  (clock patch)
	parameter h_frontporch = 96;
	parameter h_active = 144;
	parameter h_backporch = 784;
	parameter h_total = 800;
	
	parameter v_frontporch = 2;
	parameter v_active = 35;
%000001	parameter v_backporch = 515;
%000001	parameter v_total = 525;
%000000	
%000000	// pixel counter
	reg [9:0] x_cnt;
 000020	reg [9:0] y_cnt;
 000020	wire h_valid;
%000000	verilator_coverage: (next point on previous line)

 000010	wire v_valid;
 000010	
	always @(posedge pclk) begin
%000000	    if(reset == 1'b1) begin
%000000	        x_cnt <= 1;
%000000	        verilator_coverage: (next point on previous line)

%000000	        y_cnt <= 1;
%000000	    end
%000000	    verilator_coverage: (next point on previous line)

%000000	    else begin
	        if(x_cnt == h_total)begin
%000000	            x_cnt <= 1;
	            if(y_cnt == v_total) y_cnt <= 1;
	            else y_cnt <= y_cnt + 1;
	        end
			else x_cnt <= x_cnt + 1;
	    end
	end
	
	//生成同步信号    
	assign hsync = (x_cnt > h_frontporch);
	assign vsync = (y_cnt > v_frontporch);
	//生成消隐信号
	assign h_valid = (x_cnt > h_active) & (x_cnt <= h_backporch);
	assign v_valid = (y_cnt > v_active) & (y_cnt <= v_backporch);
	assign valid = h_valid & v_valid;
	//计算当前有效像素坐标
	assign h_addr = h_valid ? (x_cnt - 10'd145) : 10'd0;
	assign v_addr = v_valid ? (y_cnt - 10'd36) : 10'd0;
	assign font_h = {{2'b0},h_addr / 10'd9};
	assign font_v = {{2'b0},v_addr / 10'd16};
	//设置输出的颜色值
	assign {vga_r, vga_g, vga_b} = vga_data;
	
	endmodule
	