`include "alu_defines.vh"
`include "mips32_opcodes.vh" 

module ControlUnit(
    input [5:0] opc, //! Opcode
    input [5:0] func, //! Function
    input [4:0] bgez_bltz,
    output isJmp, //! Jump signal
    output isJal,
    output isJr,
    // output isBeq, //! BEQ signal
    // output isBne, //! BNE signal
    output [1:0] rfWriteDataSel, //! Register File Write Data Select
    output rfWriteAddrSel, //! Register File Write Address Select
    output rfWriteEnable, //! Register Write Enable
    output memWrite, //! Memory Write
    output memRead, //! Memory Read
    output [1:0] aluSrc, //! ALU source
    output [3:0] aluFunc, //! ALU operation
    output bitXtend, //! Bit extension, 0 = sign extend, 1 = zero extend
    output invOpcode, //! Invalid opcode or function
    output isLui,
    output [1:0] memDataSize,
    output memBitExt,
    output [2:0] branch,
    output aluOp1_source
); 

always @ (opc or func)
begin
    isLui = 0;
    isJmp = 1'b0;
    // isBeq = 1'b0;
    // isBne = 1'b0;
    rfWriteDataSel = 2'b00;
    rfWriteAddrSel = 1'b0;
    rfWriteEnable = 1'b0;
    memWrite = 1'b0;
    memRead = 1'b0;
    aluSrc = 2'h0;
    aluFunc = 4'b000;
    bitXtend = 1'b0; 
    branch = 3'd0;
    aluOp1_source = 1'b0;
    // invOpcode = 1'b1;

    case (opc)
        6'h0:
            case (func)
                `MIPS_ADD:
                    begin
                        rfWriteAddrSel = 1'b1;
                        rfWriteEnable = 1'b1;
                        aluSrc = 2'b0;
                        aluFunc = `ALU_ADD;
                        rfWriteDataSel = 2'b0;
                        invOpcode = 1'b0;
                    end 
                    
                `MIPS_SUB:
                    begin
                        rfWriteEnable = 1'b1;
                        aluSrc = 2'b0;
                        rfWriteAddrSel = 1'b1;
                        rfWriteDataSel = 2'b00;
                        aluFunc = `ALU_SUB;
                        invOpcode = 1'b0;
                    end

                `MIPS_AND:
                    begin
                       rfWriteAddrSel = 1'b1;
                       rfWriteEnable = 1'b1;
                       aluSrc = 2'b0;
                       aluFunc = `ALU_AND;
                       rfWriteDataSel = 2'b00;
                       invOpcode = 1'b0;
                    end

                `MIPS_OR:
                    begin
                        rfWriteEnable = 1'b1;
                        aluSrc = 2'b0;
                        rfWriteAddrSel = 1'b1;
                        rfWriteDataSel = 2'b00;
                        aluFunc = `ALU_OR;
                        invOpcode = 1'b0;
                    end

                `MIPS_SLT:
                    begin
                        rfWriteEnable = 1'b1;
                        aluSrc = 2'b0;
                        rfWriteAddrSel = 1'b1;
                        rfWriteDataSel = 2'b00;
                        aluFunc = `ALU_SLT;
                        invOpcode = 1'b0;
                    end 

                `MIPS_XOR:
                    begin
                        rfWriteAddrSel = 1'b1;
                        rfWriteEnable = 1'b1;
                        aluSrc = 2'b0;
                        aluFunc = `ALU_XOR;
                        invOpcode = 1'b0;
                        rfWriteDataSel = 2'b00;
                    end

                `MIPS_ADDU:
                    begin
                        rfWriteAddrSel = 1'b1;
                        rfWriteEnable = 1'b1;
                        bitXtend = 1'b0;
                        aluSrc = 2'b0;
                        aluFunc = `ALU_ADD;
                        rfWriteDataSel = 2'b0;
                        invOpcode = 1'b0;
                    end

                `MIPS_SUBU:
                    begin
                        rfWriteEnable = 1'b1;
                        aluSrc = 2'b0;
                        rfWriteAddrSel = 1'b1;
                        bitXtend = 1'b1;
                        rfWriteDataSel = 2'b00;
                        aluFunc = `ALU_SUB;
                        invOpcode = 1'b0;
                    end

                `MIPS_SLTU:
                    begin
                        rfWriteEnable = 1'b1;
                        aluSrc = 2'h0;
                        rfWriteAddrSel = 1'b1;
                        bitXtend = 1'b1;
                        rfWriteDataSel = 2'b00;
                        aluFunc = `ALU_SLTU;
                        invOpcode = 1'b0;
                    end 
                    
                `MIPS_SLL:
                    begin
                        rfWriteEnable = 1;
                        rfWriteAddrSel = 1;
                        aluSrc = 2'h2;
                        aluOp1_source = 1;
                        aluFunc = `ALU_SLL;
                        invOpcode = 1'b0;
                    end  

                `MIPS_SRL:
                    begin
                        rfWriteEnable = 1;
                        rfWriteAddrSel = 1;
                        aluSrc = 2'h2;
                        aluOp1_source = 1;
                        aluFunc = `ALU_SRL;
                        invOpcode = 1'b0;
                    end  

                `MIPS_SLLV:
                    begin
                        rfWriteEnable = 1;
                        rfWriteAddrSel = 1;
                        aluSrc = 2'h3;
                        aluOp1_source = 1;
                        aluFunc = `ALU_SLL;
                        invOpcode = 1'b0;
                    end 

                `MIPS_SRLV:
                    begin
                        rfWriteEnable = 1;
                        rfWriteAddrSel = 1;
                        aluSrc = 2'h3;
                        aluOp1_source = 1;
                        aluFunc = `ALU_SRL;
                        invOpcode = 1'b0;
                    end 

                `MIPS_SRA:
                    begin
                        rfWriteEnable = 1;
                        rfWriteAddrSel = 1;
                        aluOp1_source = 1;
                        aluSrc = 2'h2;
                        aluFunc = `ALU_SRA;
                        invOpcode = 1'b0;
                    end

                `MIPS_SRAV:
                    begin
                        rfWriteEnable = 1;
                        rfWriteAddrSel = 1;
                        aluOp1_source = 1;
                        aluSrc = 2'h3;
                        aluFunc = `ALU_SRA;
                        invOpcode = 1'b0;
                    end

                default:
                    begin
                        
                    end 
            endcase

        `MIPS_ADDI:
            begin
                rfWriteAddrSel = 1'b0;
                rfWriteEnable = 1'b1;
                aluSrc = 2'b1;
                bitXtend = 1'b0;
                aluFunc = `ALU_ADD;
                rfWriteDataSel = 2'b0;
                invOpcode = 1'b0;
            end

        `MIPS_ADDIU:
            begin
                rfWriteAddrSel = 1'b0;
                rfWriteEnable = 1'b1;
                aluSrc = 2'b1;
                bitXtend = 1'b0;
                aluFunc = `ALU_ADD;
                rfWriteDataSel = 2'b0;
                invOpcode = 1'b0;
            end

        `MIPS_ANDI:
            begin
                rfWriteAddrSel = 1'b0;
                rfWriteEnable = 1'b1;
                aluSrc = 2'b1;
                bitXtend = 1'b1;
                aluFunc = `ALU_AND;
                rfWriteDataSel = 2'b00;
                invOpcode = 1'b0;    
            end

        `MIPS_ORI:
            begin
                rfWriteAddrSel = 1'b0;
                rfWriteEnable = 1'b1;
                aluSrc = 2'b1;
                bitXtend = 1'b1;
                aluFunc = `ALU_OR;
                rfWriteDataSel = 2'b00;
                invOpcode = 1'b0;    
            end

        `MIPS_XORI:
            begin
                rfWriteAddrSel = 1'b0;
                rfWriteEnable = 1'b1;
                aluSrc = 2'b1;
                bitXtend = 1'b1;
                aluFunc = `ALU_XOR;
                rfWriteDataSel = 2'b00;
                invOpcode = 1'b0;    
            end

        `MIPS_SLTI:
            begin
                rfWriteAddrSel = 1'b0;
                rfWriteEnable = 1'b1;
                aluSrc = 2'b1;
                bitXtend = 1'b0;
                aluFunc = `ALU_SLT;
                rfWriteDataSel = 2'b0;
                invOpcode = 1'b0;
            end

        `MIPS_SLTIU:
            begin
                rfWriteAddrSel = 1'b0;
                rfWriteEnable = 1'b1;
                aluSrc = 2'b1;
                bitXtend = 1'b0;
                aluFunc = `ALU_SLTU;
                rfWriteDataSel = 2'b00;
                invOpcode = 1'b0;
            end

        `MIPS_LUI:
            begin
                isLui = 1;
                rfWriteAddrSel = 1'b0;
                rfWriteEnable = 1'b1;
                aluSrc = 2'b1;
                bitXtend = 1'b1;
                aluFunc = `ALU_ADD;
                rfWriteDataSel = 2'b0; 
                invOpcode = 1'b0;
            end

        `MIPS_LW:
            begin
                rfWriteAddrSel = 1'b0;
                rfWriteEnable = 1'b1;
                aluSrc = 2'b1;
                bitXtend = 1'b0;
                aluFunc = `ALU_ADD;
                memRead = 1'b1;
                rfWriteDataSel = 2'b01;
                memDataSize = 2'b0;
                memBitExt = 1'b0;
                invOpcode = 1'b0;
            end

        `MIPS_LB:
            begin
                rfWriteEnable = 1;
                bitXtend = 0;
                aluSrc = 1;
                aluFunc = `ALU_ADD;
                memRead = 1;
                rfWriteDataSel = 1;
                memDataSize = 2'b10;
                memBitExt = 1'b0;
                invOpcode = 0;
            end

        `MIPS_LBU:
            begin
                rfWriteEnable = 1;
                bitXtend = 1;
                aluSrc = 1;
                aluFunc = `ALU_ADD;
                memRead = 1;
                rfWriteDataSel = 1;
                memDataSize = 2'b10;
                memBitExt = 1'b1;
                invOpcode = 0;
            end
        
        `MIPS_LH:
            begin
                rfWriteEnable = 1;
                bitXtend = 0;
                aluSrc = 1;
                aluFunc = `ALU_ADD;
                memRead = 1;
                rfWriteDataSel = 1;
                memDataSize = 2'b01;
                memBitExt = 1'b0;
                invOpcode = 0;
            end
        
        `MIPS_LHU:
            begin
                rfWriteEnable = 1;
                bitXtend = 1;
                aluSrc = 1;
                aluFunc = `ALU_ADD;
                memRead = 1;
                rfWriteDataSel = 1;
                memDataSize = 2'b01;
                memBitExt = 1'b1;
                invOpcode = 0;
            end
        
        `MIPS_SW:
            begin
                rfWriteAddrSel = 1'b0;
                rfWriteEnable = 1'b0;
                aluSrc = 2'b1;
                bitXtend = 1'b0;
                aluFunc = `ALU_ADD;
                memWrite = 1'b1;
                memDataSize = 2'b0;
                invOpcode = 1'b0;
            end

        `MIPS_SB:
            begin
                aluSrc = 2'b1;
                aluFunc = `ALU_ADD;
                memWrite = 1;
                memDataSize = 2'd2;
                invOpcode = 1'b0;
            end

        `MIPS_SH:
            begin
                aluSrc = 1;
                aluFunc = `ALU_ADD;
                memWrite = 1;
                memDataSize = 2'b1;
                invOpcode = 0;
            end

        6'h1:
            if(bgez_bltz == 5'b1)
                begin
                    aluFunc = `ALU_SUB;
                    branch = 3'd5;
                    invOpcode = 0;
                end
            else if(bgez_bltz == 5'b0)
                begin
                    aluFunc = `ALU_SUB;
                    branch = 3'd6;
                    invOpcode = 0;
                end

        `MIPS_BEQ:
            begin
                aluFunc = `ALU_SUB;
                branch = 3'd1;
                // isBeq = 1;
                invOpcode = 1'b0;
            end

        `MIPS_BNE:
            begin
                aluFunc = `ALU_SUB;
                branch = 3'd2;
                // isBne = 1;
                invOpcode = 1'b0;
            end

        `MIPS_JUMP:
            begin
                isJmp = 1'b1;
                invOpcode = 1'b0;
            end

        default:
            begin
                invOpcode = 1'b1;
            end 
    endcase
end


endmodule

