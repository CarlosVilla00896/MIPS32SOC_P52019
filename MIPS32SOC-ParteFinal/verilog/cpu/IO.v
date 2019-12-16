module IO(
    input [10:0] addr,
    input [31:0] milliSeconds,
    input [7:0] keypad,
    input en,
    output [31:0] outData 
);

reg [31:0] _outData;
assign outData = _outData;

always @ (*)
    begin
        if (en)
            begin
                if (addr == 11'd1)
                    _outData = {keypad, 24'h0};
                else if( addr == 11'd2)
                    _outData = milliSeconds;
                else 
                    _outData = 32'b0; 
            end
        else 
            begin
                _outData = 32'b0;
            end
    end

endmodule