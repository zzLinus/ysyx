	// verilator_coverage annotation
	module vga_ctrl (
 000019	    input pclk,
%000001	    input reset,
%000017	    input [23:0] vga_data,
%000000	    output [9:0] h_addr,
%000000	    output [9:0] v_addr,
%000000	    output hsync,
%000000	    output vsync,
%000000	    output valid,
%000005	    output [7:0] vga_r,
%000004	    output [7:0] vga_g,
%000008	    output [7:0] vga_b
	);
	
	parameter h_frontporch = 96;
	parameter h_active = 144;
	parameter h_backporch = 784;
	parameter h_total = 800;
	
	parameter v_frontporch = 2;
	parameter v_active = 35;
	parameter v_backporch = 515;
	parameter v_total = 525;
	
%000001	reg [9:0] x_cnt;
%000001	reg [9:0] y_cnt;
%000000	wire h_valid;
%000000	wire v_valid;
	
 000020	always @(posedge pclk) begin
 000020	    if(reset == 1'b1) begin
%000000	    verilator_coverage: (next point on previous line)

 000010	        x_cnt <= 1;
 000010	        y_cnt <= 1;
	    end
%000000	    else begin
%000000	        if(x_cnt == h_total)begin
%000000	        verilator_coverage: (next point on previous line)

%000000	            x_cnt <= 1;
%000000	            if(y_cnt == v_total) y_cnt <= 1;
%000000	            verilator_coverage: (next point on previous line)

%000000	            else y_cnt <= y_cnt + 1;
	        end
%000000	        else x_cnt <= x_cnt + 1;
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
	//设置输出的颜色值
	assign {vga_r, vga_g, vga_b} = vga_data;
	
	endmodule
	
