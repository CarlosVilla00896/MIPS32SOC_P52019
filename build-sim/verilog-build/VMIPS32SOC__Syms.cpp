// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VMIPS32SOC__Syms.h"
#include "VMIPS32SOC.h"
#include "VMIPS32SOC_MIPS32SOC.h"
#include "VMIPS32SOC_DataMemory.h"
#include "VMIPS32SOC_InstMemory.h"
#include "VMIPS32SOC_RegisterFile.h"
#include "VMIPS32SOC_VGATextCard.h"
#include "VMIPS32SOC_DualPortVGARam.h"
#include "VMIPS32SOC_FontRom.h"
#include "VMIPS32SOC_RomColorPalette.h"

// FUNCTIONS
VMIPS32SOC__Syms::VMIPS32SOC__Syms(VMIPS32SOC* topp, const char* namep)
	// Setup locals
	: __Vm_namep(namep)
	, __Vm_didInit(false)
	// Setup submodule names
	, TOP__MIPS32SOC                 (Verilated::catName(topp->name(),"MIPS32SOC"))
	, TOP__MIPS32SOC__dataMem        (Verilated::catName(topp->name(),"MIPS32SOC.dataMem"))
	, TOP__MIPS32SOC__instMem        (Verilated::catName(topp->name(),"MIPS32SOC.instMem"))
	, TOP__MIPS32SOC__regFile        (Verilated::catName(topp->name(),"MIPS32SOC.regFile"))
	, TOP__MIPS32SOC__vgaTextCard    (Verilated::catName(topp->name(),"MIPS32SOC.vgaTextCard"))
	, TOP__MIPS32SOC__vgaTextCard__fontRom (Verilated::catName(topp->name(),"MIPS32SOC.vgaTextCard.fontRom"))
	, TOP__MIPS32SOC__vgaTextCard__frameBuff (Verilated::catName(topp->name(),"MIPS32SOC.vgaTextCard.frameBuff"))
	, TOP__MIPS32SOC__vgaTextCard__palRom (Verilated::catName(topp->name(),"MIPS32SOC.vgaTextCard.palRom"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->MIPS32SOC                 = &TOP__MIPS32SOC;
    TOPp->MIPS32SOC->dataMem        = &TOP__MIPS32SOC__dataMem;
    TOPp->MIPS32SOC->instMem        = &TOP__MIPS32SOC__instMem;
    TOPp->MIPS32SOC->regFile        = &TOP__MIPS32SOC__regFile;
    TOPp->MIPS32SOC->vgaTextCard    = &TOP__MIPS32SOC__vgaTextCard;
    TOPp->MIPS32SOC->vgaTextCard->fontRom  = &TOP__MIPS32SOC__vgaTextCard__fontRom;
    TOPp->MIPS32SOC->vgaTextCard->frameBuff  = &TOP__MIPS32SOC__vgaTextCard__frameBuff;
    TOPp->MIPS32SOC->vgaTextCard->palRom  = &TOP__MIPS32SOC__vgaTextCard__palRom;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__MIPS32SOC.__Vconfigure(this, true);
    TOP__MIPS32SOC__dataMem.__Vconfigure(this, true);
    TOP__MIPS32SOC__instMem.__Vconfigure(this, true);
    TOP__MIPS32SOC__regFile.__Vconfigure(this, true);
    TOP__MIPS32SOC__vgaTextCard.__Vconfigure(this, true);
    TOP__MIPS32SOC__vgaTextCard__fontRom.__Vconfigure(this, true);
    TOP__MIPS32SOC__vgaTextCard__frameBuff.__Vconfigure(this, true);
    TOP__MIPS32SOC__vgaTextCard__palRom.__Vconfigure(this, true);
    // Setup scope names
    __Vscope_MIPS32SOC.configure(this,name(),"MIPS32SOC");
    __Vscope_MIPS32SOC__dataMem.configure(this,name(),"MIPS32SOC.dataMem");
    __Vscope_MIPS32SOC__instMem.configure(this,name(),"MIPS32SOC.instMem");
    __Vscope_MIPS32SOC__regFile.configure(this,name(),"MIPS32SOC.regFile");
    __Vscope_MIPS32SOC__vgaTextCard__fontRom.configure(this,name(),"MIPS32SOC.vgaTextCard.fontRom");
    __Vscope_MIPS32SOC__vgaTextCard__frameBuff.configure(this,name(),"MIPS32SOC.vgaTextCard.frameBuff");
    __Vscope_MIPS32SOC__vgaTextCard__palRom.configure(this,name(),"MIPS32SOC.vgaTextCard.palRom");
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
	__Vscope_MIPS32SOC.varInsert(__Vfinal,"PC", &(TOP__MIPS32SOC.PC), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
	__Vscope_MIPS32SOC.varInsert(__Vfinal,"aluResult", &(TOP__MIPS32SOC.aluResult), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
	__Vscope_MIPS32SOC.varInsert(__Vfinal,"inst", &(TOP__MIPS32SOC.inst), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
	__Vscope_MIPS32SOC.varInsert(__Vfinal,"isBeq", &(TOP__MIPS32SOC.isBeq), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
	__Vscope_MIPS32SOC.varInsert(__Vfinal,"isBne", &(TOP__MIPS32SOC.isBne), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
	__Vscope_MIPS32SOC.varInsert(__Vfinal,"isJmp", &(TOP__MIPS32SOC.isJmp), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
	__Vscope_MIPS32SOC.varInsert(__Vfinal,"isZero", &(TOP__MIPS32SOC.isZero), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
	__Vscope_MIPS32SOC.varInsert(__Vfinal,"memEn", &(TOP__MIPS32SOC.memEn), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
	__Vscope_MIPS32SOC.varInsert(__Vfinal,"memWrite", &(TOP__MIPS32SOC.memWrite), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
	__Vscope_MIPS32SOC.varInsert(__Vfinal,"rd", &(TOP__MIPS32SOC.rd), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
	__Vscope_MIPS32SOC.varInsert(__Vfinal,"rfData1", &(TOP__MIPS32SOC.rfData1), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
	__Vscope_MIPS32SOC.varInsert(__Vfinal,"rfData2", &(TOP__MIPS32SOC.rfData2), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
	__Vscope_MIPS32SOC.varInsert(__Vfinal,"rs", &(TOP__MIPS32SOC.rs), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
	__Vscope_MIPS32SOC.varInsert(__Vfinal,"rt", &(TOP__MIPS32SOC.rt), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
	__Vscope_MIPS32SOC__dataMem.varInsert(__Vfinal,"memory", &(TOP__MIPS32SOC__dataMem.memory), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,2047,0);
	__Vscope_MIPS32SOC__instMem.varInsert(__Vfinal,"memory", &(TOP__MIPS32SOC__instMem.memory), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,2047,0);
	__Vscope_MIPS32SOC__regFile.varInsert(__Vfinal,"memory", &(TOP__MIPS32SOC__regFile.memory), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,31,0);
	__Vscope_MIPS32SOC__vgaTextCard__fontRom.varInsert(__Vfinal,"memory", &(TOP__MIPS32SOC__vgaTextCard__fontRom.memory), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,2 ,7,0 ,4095,0);
	__Vscope_MIPS32SOC__vgaTextCard__frameBuff.varInsert(__Vfinal,"memory", &(TOP__MIPS32SOC__vgaTextCard__frameBuff.memory), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,2047,0);
	__Vscope_MIPS32SOC__vgaTextCard__palRom.varInsert(__Vfinal,"memory", &(TOP__MIPS32SOC__vgaTextCard__palRom.memory), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,2 ,7,0 ,15,0);
    }
}
