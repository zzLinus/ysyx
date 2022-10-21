module mux41(a,s,y);
  input  [7:0] a;  // 声明一个wire型输入变量a，其变量宽度是4位的。
  input  [1:0] s;  // 声明一个wire型输入变量s，其变量宽度是2位的。
  output reg [1:0] y;   // 声明一个1位reg型的输出变量y。

  always @ (s or a)
    case (s)
      0: y = a[1:0];
      1: y = a[3:2];
      2: y = a[5:4];
      3: y = a[7:6];
      default: y = 1'b0;
    endcase

endmodule
