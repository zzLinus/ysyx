module mux41(a,s,y);
  input  [7:0] a;  
  input  [1:0] s;  
  output reg [1:0] y;   

  always @ (s or a)
    case (s)
      0: y = a[1:0];
      1: y = a[3:2];
      2: y = a[5:4];
      3: y = a[7:6];
      default: y = 2'b0;
    endcase

endmodule
