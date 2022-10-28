	// verilator_coverage annotation
	module ps2_keyboard(
 000019		clk,
%000000		verilator_coverage: (next point on previous line)

%000000		verilator_coverage: (next point on previous line)

%000000		verilator_coverage: (next point on previous line)

		resetn,
%000000		ps2_clk,
%000000		ps2_data
%000000	);
	
 000020	input clk,resetn,ps2_clk,ps2_data;
 000010	
	reg [9:0] buffer;        // ps2_data bits
	reg [3:0] count;  // count ps2_data bits
%000000	reg [2:0] ps2_clk_sync;
	
 000020	always @(posedge clk) begin
 000020		ps2_clk_sync <=  {ps2_clk_sync[1:0],ps2_clk};
%000000		verilator_coverage: (next point on previous line)

 000010	end
	
%000000	wire sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1];
%000000	
%000000	verilator_coverage: (next point on previous line)

%000000	always @(posedge clk) begin
%000000	verilator_coverage: (next point on previous line)

%000000		if (resetn == 0) begin // reset
%000000		verilator_coverage: (next point on previous line)

			count <= 0;
%000000		end
%000000		else begin
			if (sampling) begin
%000000			  if (count == 4'd10) begin
%000000				if ((buffer[0] == 0) &&  // start bit
%000000					(ps2_data)       &&  // stop bit
%000000					(^buffer[9:1])) begin      // odd  parity
					$display("receive %x", buffer[8:1]);
				end
				count <= 0;     // for next
			  end else begin
				buffer[count] <= ps2_data;  // store ps2_data
				count <= count + 3'b1;
			  end
			end
		end
	end
	
	endmodule
	
