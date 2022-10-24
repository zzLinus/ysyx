	// verilator_coverage annotation
	module ps2_keyboard(clk,resetn,ps2_clk,ps2_data);
 000019	    input clk,resetn,ps2_clk,ps2_data;
%000000	    verilator_coverage: (next point on previous line)

%000000	    verilator_coverage: (next point on previous line)

%000000	    verilator_coverage: (next point on previous line)

	
%000000	    reg [9:0] buffer;        // ps2_data bits
%000000	    reg [3:0] count;  // count ps2_data bits
%000000	    reg [2:0] ps2_clk_sync;
	
 000020	    always @(posedge clk) begin
 000010	        ps2_clk_sync <=  {ps2_clk_sync[1:0],ps2_clk};
	    end
	
%000000	    wire sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1];
	
 000020	    always @(posedge clk) begin
 000020	        if (resetn == 0) begin // reset
%000000	        verilator_coverage: (next point on previous line)

 000010	            count <= 0;
	        end
%000000	        else begin
%000000	            if (sampling) begin
%000000	            verilator_coverage: (next point on previous line)

%000000	              if (count == 4'd10) begin
%000000	              verilator_coverage: (next point on previous line)

%000000	                if ((buffer[0] == 0) &&  // start bit
%000000	                verilator_coverage: (next point on previous line)

	                    (ps2_data)       &&  // stop bit
%000000	                    (^buffer[9:1])) begin      // odd  parity
%000000	                    $display("receive %x", buffer[8:1]);
	                end
%000000	                count <= 0;     // for next
%000000	              end else begin
%000000	                buffer[count] <= ps2_data;  // store ps2_data
%000000	                count <= count + 3'b1;
	              end
	            end
	        end
	    end
	
	endmodule
	
