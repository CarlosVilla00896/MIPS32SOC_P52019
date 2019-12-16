// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMIPS32SOC.h for the primary calling header

#include "VMIPS32SOC_DualPortVGARam.h"
#include "VMIPS32SOC__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VMIPS32SOC_DualPortVGARam) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VMIPS32SOC_DualPortVGARam::__Vconfigure(VMIPS32SOC__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VMIPS32SOC_DualPortVGARam::~VMIPS32SOC_DualPortVGARam() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VMIPS32SOC_DualPortVGARam::_sequent__TOP__MIPS32SOC__vgaTextCard__frameBuff__1(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMIPS32SOC_DualPortVGARam::_sequent__TOP__MIPS32SOC__vgaTextCard__frameBuff__1\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIG8(__Vdlyvlsb__memory__v0,4,0);
    VL_SIG8(__Vdlyvval__memory__v0,7,0);
    VL_SIG8(__Vdlyvset__memory__v0,0,0);
    VL_SIG8(__Vdlyvlsb__memory__v1,4,0);
    VL_SIG8(__Vdlyvval__memory__v1,7,0);
    VL_SIG8(__Vdlyvset__memory__v1,0,0);
    VL_SIG8(__Vdlyvlsb__memory__v2,4,0);
    VL_SIG8(__Vdlyvval__memory__v2,7,0);
    VL_SIG8(__Vdlyvset__memory__v2,0,0);
    VL_SIG8(__Vdlyvlsb__memory__v3,4,0);
    VL_SIG8(__Vdlyvval__memory__v3,7,0);
    VL_SIG8(__Vdlyvset__memory__v3,0,0);
    VL_SIG16(__Vdlyvdim0__memory__v0,10,0);
    VL_SIG16(__Vdlyvdim0__memory__v1,10,0);
    VL_SIG16(__Vdlyvdim0__memory__v2,10,0);
    VL_SIG16(__Vdlyvdim0__memory__v3,10,0);
    // Body
    __Vdlyvset__memory__v0 = 0U;
    __Vdlyvset__memory__v1 = 0U;
    __Vdlyvset__memory__v2 = 0U;
    __Vdlyvset__memory__v3 = 0U;
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/vga/DualPortVGARam.v:17
    if ((2U & (IData)(vlSymsp->TOP__MIPS32SOC.memEn))) {
	vlSymsp->TOP__MIPS32SOC__vgaTextCard__frameBuff.__PVT__rda 
	    = vlSymsp->TOP__MIPS32SOC__vgaTextCard__frameBuff.memory
	    [(0x7ffU & ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress) 
			>> 2U))];
    }
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/vga/DualPortVGARam.v:17
    if ((2U & (IData)(vlSymsp->TOP__MIPS32SOC.memEn))) {
	if ((8U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memWriteDataEncoder__DOT___encMW))) {
	    __Vdlyvval__memory__v0 = (0xffU & vlSymsp->TOP__MIPS32SOC.__PVT__memWriteDataEncoder__DOT___outData);
	    __Vdlyvset__memory__v0 = 1U;
	    __Vdlyvlsb__memory__v0 = 0U;
	    __Vdlyvdim0__memory__v0 = (0x7ffU & ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress) 
						 >> 2U));
	}
	if ((4U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memWriteDataEncoder__DOT___encMW))) {
	    __Vdlyvval__memory__v1 = (0xffU & (vlSymsp->TOP__MIPS32SOC.__PVT__memWriteDataEncoder__DOT___outData 
					       >> 8U));
	    __Vdlyvset__memory__v1 = 1U;
	    __Vdlyvlsb__memory__v1 = 8U;
	    __Vdlyvdim0__memory__v1 = (0x7ffU & ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress) 
						 >> 2U));
	}
	if ((2U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memWriteDataEncoder__DOT___encMW))) {
	    __Vdlyvval__memory__v2 = (0xffU & (vlSymsp->TOP__MIPS32SOC.__PVT__memWriteDataEncoder__DOT___outData 
					       >> 0x10U));
	    __Vdlyvset__memory__v2 = 1U;
	    __Vdlyvlsb__memory__v2 = 0x10U;
	    __Vdlyvdim0__memory__v2 = (0x7ffU & ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress) 
						 >> 2U));
	}
	if ((1U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memWriteDataEncoder__DOT___encMW))) {
	    __Vdlyvval__memory__v3 = (0xffU & (vlSymsp->TOP__MIPS32SOC.__PVT__memWriteDataEncoder__DOT___outData 
					       >> 0x18U));
	    __Vdlyvset__memory__v3 = 1U;
	    __Vdlyvlsb__memory__v3 = 0x18U;
	    __Vdlyvdim0__memory__v3 = (0x7ffU & ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress) 
						 >> 2U));
	}
    }
    // ALWAYSPOST at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/vga/DualPortVGARam.v:20
    if (__Vdlyvset__memory__v0) {
	vlSymsp->TOP__MIPS32SOC__vgaTextCard__frameBuff.memory[__Vdlyvdim0__memory__v0] 
	    = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__memory__v0))) 
		& vlSymsp->TOP__MIPS32SOC__vgaTextCard__frameBuff.memory
		[__Vdlyvdim0__memory__v0]) | ((IData)(__Vdlyvval__memory__v0) 
					      << (IData)(__Vdlyvlsb__memory__v0)));
    }
    if (__Vdlyvset__memory__v1) {
	vlSymsp->TOP__MIPS32SOC__vgaTextCard__frameBuff.memory[__Vdlyvdim0__memory__v1] 
	    = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__memory__v1))) 
		& vlSymsp->TOP__MIPS32SOC__vgaTextCard__frameBuff.memory
		[__Vdlyvdim0__memory__v1]) | ((IData)(__Vdlyvval__memory__v1) 
					      << (IData)(__Vdlyvlsb__memory__v1)));
    }
    if (__Vdlyvset__memory__v2) {
	vlSymsp->TOP__MIPS32SOC__vgaTextCard__frameBuff.memory[__Vdlyvdim0__memory__v2] 
	    = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__memory__v2))) 
		& vlSymsp->TOP__MIPS32SOC__vgaTextCard__frameBuff.memory
		[__Vdlyvdim0__memory__v2]) | ((IData)(__Vdlyvval__memory__v2) 
					      << (IData)(__Vdlyvlsb__memory__v2)));
    }
    if (__Vdlyvset__memory__v3) {
	vlSymsp->TOP__MIPS32SOC__vgaTextCard__frameBuff.memory[__Vdlyvdim0__memory__v3] 
	    = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__memory__v3))) 
		& vlSymsp->TOP__MIPS32SOC__vgaTextCard__frameBuff.memory
		[__Vdlyvdim0__memory__v3]) | ((IData)(__Vdlyvval__memory__v3) 
					      << (IData)(__Vdlyvlsb__memory__v3)));
    }
}

void VMIPS32SOC_DualPortVGARam::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMIPS32SOC_DualPortVGARam::_ctor_var_reset\n"); );
    // Body
    __PVT__clka = VL_RAND_RESET_I(1);
    __PVT__enablea = VL_RAND_RESET_I(1);
    __PVT__wea = VL_RAND_RESET_I(4);
    __PVT__addra = VL_RAND_RESET_I(11);
    __PVT__wda = VL_RAND_RESET_I(32);
    __PVT__rda = VL_RAND_RESET_I(32);
    __PVT__clkb = VL_RAND_RESET_I(1);
    __PVT__addrb = VL_RAND_RESET_I(11);
    __PVT__rdb = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<2048; ++__Vi0) {
	    memory[__Vi0] = VL_RAND_RESET_I(32);
    }}
}
