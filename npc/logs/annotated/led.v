	// verilator_coverage annotation
	module led(
 000019	  input clk,
%000001	  input rst,
%000000	  input [7:0] sw,
%000001	  output [15:0] ledr
	);
%000000	  reg [31:0] count;
%000001	  reg [7:0] led;
 000020	  always @(posedge clk) begin
 000020	    if (rst) begin led <= 1; count <= 0; end
%000000	    verilator_coverage: (next point on previous line)

%000000	    else begin
%000000	      if (count == 0) led <= {led[6:0], led[7]};
%000000	      verilator_coverage: (next point on previous line)

%000000	      count <= (count >= 5000000 ? 32'b0 : count + 1);
	    end
	  end
	
	  assign ledr = {led, sw};
	endmodule
	
