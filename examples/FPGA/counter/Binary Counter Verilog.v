module binary_counter(clk, resetn, qa, qb, qc, qd);
 input clk, resetn;
 output qa, qb, qc, qd; 

 reg[3:0] q = 0;
 
 always@(posedge clk or negedge resetn)
 begin
  if (resetn == 1'b0)
   q <= 4'h0;
  else
   q <= q + 1;
 end

 assign qa = q[0];
 assign qb = q[1];
 assign qc = q[2];
 assign qd = q[3];

endmodule
