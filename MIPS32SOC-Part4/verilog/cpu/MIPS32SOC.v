/* verilator lint_off UNUSED */
module MIPS32SOC (
    input clk, // Clock signal
    input reset,  // Reset signal
    // output invAddr,
    output invalidOpcode
);
    wire [31:0] inst /*verilator public*/;
    reg  [31:0] nextPC; // Should be 'reg' because it used in a always block
    reg  [31:0] PC /*verilator public*/; // The PC (Program Counter) register
    wire [31:0] pcPlus4;
    wire [5:0] func;
    wire [4:0] rd /*verilator public*/;
    wire [4:0] rt /*verilator public*/;
    wire [4:0] rs /*verilator public*/;
    wire [5:0] opcode;
    wire [1:0]aluSrc;
    wire rfWriteEnable; // Register File Write Enable
    wire [1:0] rfWriteAddrSel; // Register File Write Address Select
    wire [1:0] rfWriteDataSel; // Register File Write Data Select
    reg [4:0] rfWriteAddr; // Register File Write Address
    reg  [31:0] rfWriteData; // Register File Write Data
    wire [31:0] rfData1 /*verilator public*/;
    wire [31:0] rfData2 /*verilator public*/;
    wire [31:0] imm32;
    wire [15:0] imm16;
    wire [7:0] memAddr;
    wire memWrite;
    wire memRead;
    wire [31:0] memData;
    wire [3:0] aluFunc;
    reg [31:0] aluOperand2;
    reg [31:0] aluOperand1;
    wire [31:0] aluResult;
    wire [31:0] branchTargetAddr;
    wire [31:0] jmpTarget32;
    wire isJmp /*verilator public*/;
    wire isBeq /*verilator public*/;
    wire isBne /*verilator public*/;
    wire isZero /*verilator public*/;
    wire bitXtend;
    wire invalidOpcode /*verilator public*/;
    reg isBranch; //sera 1 si hay alguna branch instruction
    wire invalidPC /*verilator public*/;
    wire [9:0] physicalPC;
    wire invalidAddr /*verilator public*/;
    wire [12:0] physicalAddress;
    wire [2:0] memEnable;
    wire [1:0] memoryBank;
    wire [1:0] memoryDataSize;
    wire memoryBitExt;
    wire [31:0] memoryEncoderWriteData;
    wire [3:0] memoryEncoderMemWrite; 
    wire [31:0] readDataVGA;
    reg [31:0] inData_memRDDecoder;
    wire [31:0] memoryDecoderWriteData;
    wire [2:0] red;
    wire [2:0] green;
    wire [1:0] blue;
    wire hsync;
    wire vsync;
    wire branch_taken;
    wire [2:0] branchType;
    wire aluOperand1_source;
    wire isJal;
    wire isJr;
    wire jump;
    wire [1:0] j_jr;
    wire rst;
    reg reg_reset;
  
    assign func = inst[5:0];
    assign rd = inst[15:11];
    assign rt = inst[20:16];
    assign rs = inst[25:21];
    assign opcode = inst[31:26];
    assign imm16 = inst[15:0];
    assign memAddr = aluResult[9:2];

    assign pcPlus4 = PC + 32'd4;
    assign jmpTarget32 = {pcPlus4[31:28], inst[25:0], 2'b00};
    assign branchTargetAddr = pcPlus4 + {imm32[29:0], 2'b00};

    assign jump = (isJmp | isJal);
    assign j_jr = {isJr, jump};


    //register file Write Address 
    always @(*) begin
      case (rfWriteAddrSel)
        2'b00: rfWriteAddr = rt;
        2'b01: rfWriteAddr = rd;
        2'b10: rfWriteAddr = 5'd31;
        default: rfWriteAddr = rd;
      endcase
    end

    //register file write data
    always @ (*)
      begin
        case (rfWriteDataSel)
          2'h0: rfWriteData = aluResult;
          2'h1: rfWriteData = memoryDecoderWriteData;
          2'h2: rfWriteData = {imm16, 16'b0};
          2'h3: rfWriteData = pcPlus4;
          default: rfWriteData = aluResult;
        endcase
      end

    //Memory Bank, indicates the memory bank to acces
    always @ (*)
      begin
        case (memoryBank)
          2'd0: inData_memRDDecoder = memData;
          2'd1: inData_memRDDecoder = readDataVGA;
          2'd2: inData_memRDDecoder = 32'h0;
          2'd3: inData_memRDDecoder = 32'h0;
          default: inData_memRDDecoder = 32'hx;
        endcase
      end

    //ALU operand 1
    always @(*) begin
      case (aluOperand1_source)
        1'b0: aluOperand1 = rfData1; //rs
        1'b1: aluOperand1 = rfData2; //rt
        default: aluOperand1 = 32'bx;
      endcase

    end

    //ALU operand 2 
    always @(*) begin
      case (aluSrc)
        2'h0: aluOperand2 = rfData2; //rt
        2'h1: aluOperand2 = imm32; 
        2'h2: aluOperand2 = rfData1; //rs 
        2'h3: aluOperand2 = {27'h0, inst[10:6]};
        default: aluOperand2 = 32'hx;
      endcase
    end


  // Next PC value
    always @ (*) 
    begin
      case(reset)
        1'b0:
          begin
            reg_reset = 1'b1;
            if(invalidOpcode | invalidAddr | invalidPC)
              nextPC = nextPC;
            else
              begin
                case (j_jr)
                  2'h0: 
                    begin
                      case (branch_taken)
                        1'b0: nextPC = pcPlus4;
                        1'b1: nextPC = branchTargetAddr; 
                        default: nextPC = 32'bx;
                      endcase
                    end
                  2'h1: nextPC = jmpTarget32;
                  2'h2: nextPC = rfData1;
                  2'h3: nextPC = 32'h0;
                  default: nextPC = 32'bx;
                endcase
              end
          end
        1'b1:
        begin 
          nextPC = 32'h400000;
          reg_reset = 1'b0;
        end
        default: nextPC = 32'hx;  
      endcase
    end
    

    // PC
    always @ (posedge clk) begin
      PC <= nextPC;
    end
  

    //PC Decoder
    PCDecoder pcDec(
      .virtualPC (PC),
      .physicalPC(physicalPC),
      .invalidPC (invalidPC)
    );

    // Instruction Memory
    InstMemory instMem (
        .addr( physicalPC ),
        .en( 1'b1 ),
        .readData( inst )
    );
    //Memory Decoder
    MemDecoder memDec(
      .memWrite( memWrite ),
      .memRead ( memRead ),
      .virtualAddress(aluResult),
      .physicalAddress( physicalAddress ),
      .memEn( memEnable ),
      .memBank( memoryBank ),
      .invalidAddress( invalidAddr )
    );

    //Memory Write Data Encoder
    MemWriteDataEncoder memWriteDataEncoder(
      .inData(rfData2),
      .offSet( physicalAddress[1:0] ),
      .memWrite( memWrite ),
      .dataSize (memoryDataSize),
      .outData ( memoryEncoderWriteData ),
      .encMW ( memoryEncoderMemWrite )
    );

    // Data Memory
    DataMemory dataMem (
        .clk( clk ),
        .en( memEnable[0] ),
        .memWrite( memoryEncoderMemWrite ),
        .addr( physicalAddress[12:2] ),
        .wdata( memoryEncoderWriteData ),
        .rdata ( memData )
    );

    //Memory Read Data Decoder
    MemReadDataDecoder memReadDataDecoder(
      .inData( inData_memRDDecoder ),
      .offSet( physicalAddress[1:0] ),
      .bitExt( memoryBitExt ),
      .dataSize( memoryDataSize ),
      .outData ( memoryDecoderWriteData)
    );

    VGATextCard vgaTextCard (
      .vclk( clk ),
      .clk( clk ),
      .rst( reset ),
      .en( memEnable[1] ),
      .memWrite( memoryEncoderMemWrite ),
      .addr( physicalAddress [12:2] ),
      .wdata( memoryEncoderWriteData ),
      .rdata ( readDataVGA ),
      .red( red ),
      .green( green ),
      .blue( blue ),
      .hsync( hsync ),
      .vsync( vsync )
    );

    //Register File
    RegisterFile regFile (
        .reg_reset( reg_reset ),
        .ra1( rs ),
        .ra2( rt ),
        .wa( rfWriteAddr ),
        .wd( rfWriteData ),
        .we( rfWriteEnable ),
        .clk( clk ),
        .rd1( rfData1 ),
        .rd2( rfData2 )
    );

    // ALU
    ALU alu (
      .a( aluOperand1 ),
      .b( aluOperand2 ),
      .func( aluFunc ),
      .res( aluResult ),
      .isZero( isZero )
    );
    //Branch Resolver
    BranchResolver branchResolver (
      .branch( branchType ),
      .zero ( isZero ),
      .sign( aluResult[31] ),
      .branchTaken( branch_taken )
    );

    // BitExtender
    BitExtender BitExtender_i12 (
      .extend( bitXtend ),
      .in( imm16 ),
      .out( imm32 )
    );

    // Control Unit
    ControlUnit controlUnit (
      .opc( opcode ),
      .func( func ),
      .bgez_bltz (rt),
      .isJmp( isJmp ),
      .rfWriteDataSel( rfWriteDataSel ),
      .rfWriteAddrSel( rfWriteAddrSel ),
      .rfWriteEnable( rfWriteEnable ),
      .memWrite( memWrite ),
      .memRead( memRead ),
      .aluSrc( aluSrc ),    
      .aluFunc( aluFunc ),
      .bitXtend( bitXtend ),
      .invOpcode( invalidOpcode ),
      .memDataSize ( memoryDataSize ),
      .memBitExt ( memoryBitExt ),
      .branch( branchType ),
      .aluOp1_source( aluOperand1_source ),
      .isJal( isJal ),
      .isJr( isJr )
    );
endmodule
