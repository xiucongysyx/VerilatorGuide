module count (
    input clk,
    input rst_n,
    output reg flag_100
);

reg [7:0] cnt;

always@ (posedge clk or negedge rst_n) begin
    if(!rst_n) begin
        cnt <= 8'b0;
        flag_100 <= 1'b0;
    end  
    else if(cnt == 8'd100) begin
        cnt <= 8'b0;
        flag_100 <= 1'b1;
    end 
    else begin 
        cnt <= cnt + 1'b1;
        flag_100 <= 1'b0;
    end
end
    
endmodule
