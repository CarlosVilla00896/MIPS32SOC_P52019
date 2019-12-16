module MemReadDataDecoder(
    input [31:0] inData,
    input [1:0] offSet,
    input bitExt,
    input [1:0] dataSize,
    output [31:0] outData
);
reg [31:0] _outData;

assign outData = _outData;

always @ (*)
    begin
        if(dataSize == 2'd0)
            begin
                _outData = inData;
            end
        else if ( (dataSize == 2'd1) && (offSet == 0) )
            begin
                if(bitExt)
                    _outData = { {16'h0}, {inData[31:16]}};
                else
                    _outData = { {16{inData[31]}}, {inData[31:16]}};
            end
        else if ( (dataSize == 2'd1) && (offSet == 2))
            begin
                if(bitExt)
                    _outData = { {16'h0}, {inData[15:0]}};
                else
                    _outData = { {16{inData[15]}}, {inData[15:0]}};
            end
        else if ( (dataSize == 2'd2) && (offSet == 0))
            begin
                if(bitExt)
                    _outData = { {24'h0}, {inData[31:24]}};
                else
                    _outData = { {24{inData[31]}}, {inData[31:24]}};
            end
        else if ( (dataSize == 2'd2) && (offSet == 1))
            begin
                if(bitExt)
                    _outData = { {24'h0}, {inData[23:16]}};
                else
                    _outData = { {24{inData[23]}}, {inData[23:16]}};
            end
        else if ( (dataSize == 2'd2) && (offSet == 2))
            begin
                if(bitExt)
                    _outData = { {24'h0}, {inData[15:8]}};
                else
                    _outData = { {24{inData[15]}}, {inData[15:8]}};
            end
        else if ( (dataSize == 2'd2) && (offSet == 3))
            begin
                if(bitExt)
                    _outData = { {24'h0}, {inData[7:0]}};
                else
                    _outData = { {24{inData[7]}}, {inData[7:0]}};
            end             
        else
            begin
                _outData = 32'b0;
            end
    end

endmodule