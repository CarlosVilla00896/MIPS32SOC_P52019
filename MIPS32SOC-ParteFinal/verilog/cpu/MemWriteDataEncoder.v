module MemWriteDataEncoder(
    input [31:0] inData,
    input [1:0] offSet,
    input memWrite,
    input [1:0] dataSize,
    output [31:0] outData,
    output [3:0] encMW 
);

reg [31:0] _outData;
reg [3:0] _encMW;

assign outData = _outData;
assign encMW = _encMW;

always @(*) 
    begin
        if (memWrite)
            begin
                if (dataSize == 2'd0)
                    begin
                        _outData = inData;
                        _encMW = 4'b1111;
                    end
                else if ( (dataSize == 2'd1) && (offSet == 2'd0) )
                    begin
                        _outData = { {inData[15:0]}, {16{1'b0}} };
                        _encMW = 4'b0011;
                    end
                else if ( (dataSize == 2'd1) && (offSet == 2'd2) )
                    begin
                        _outData = { {16{1'b0}}, {inData[15:0]} };
                        _encMW = 4'b1100;
                    end
                else if ( (dataSize == 2'd2) && (offSet == 2'd0) )
                    begin
                       _outData = { {inData[7:0]}, {24{1'b0}} } ;
                       _encMW = 4'b0001; 
                    end
                else if ( (dataSize == 2'd2) && (offSet == 2'd1) )
                    begin
                       _outData = { {8{1'b0}}, {inData[7:0]}, {16{1'b0}} } ;
                       _encMW = 4'b0010; 
                    end
                 else if ( (dataSize == 2'd2) && (offSet == 2'd2) )
                    begin
                       _outData = { {16{1'b0}}, {inData[7:0]}, {8{1'b0}} } ;
                       _encMW = 4'b0100; 
                    end
                else if ( (dataSize == 2'd2) && (offSet == 2'd3) )
                    begin
                       _outData = { {24{1'b0}}, {inData[7:0]} } ;
                       _encMW = 4'b1000; 
                    end
                else
                    begin
                        _outData = 32'h0;
                        _encMW = 4'h0;
                    end
            end
        else
            begin
                _outData = 32'h0;
                _encMW = 4'h0;
            end
    end

endmodule