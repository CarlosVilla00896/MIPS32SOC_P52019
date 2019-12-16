// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMIPS32SOC.h for the primary calling header

#include "VMIPS32SOC_VGATextCard.h"
#include "VMIPS32SOC__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VMIPS32SOC_VGATextCard) {
    VL_CELL(palRom, VMIPS32SOC_RomColorPalette);
    VL_CELL(frameBuff, VMIPS32SOC_DualPortVGARam);
    VL_CELL(fontRom, VMIPS32SOC_FontRom);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VMIPS32SOC_VGATextCard::__Vconfigure(VMIPS32SOC__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VMIPS32SOC_VGATextCard::~VMIPS32SOC_VGATextCard() {
}

//--------------------
// Internal Methods

void VMIPS32SOC_VGATextCard::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMIPS32SOC_VGATextCard::_ctor_var_reset\n"); );
    // Body
    __PVT__vclk = VL_RAND_RESET_I(1);
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__rst = VL_RAND_RESET_I(1);
    __PVT__en = VL_RAND_RESET_I(1);
    __PVT__memWrite = VL_RAND_RESET_I(4);
    __PVT__addr = VL_RAND_RESET_I(11);
    __PVT__wdata = VL_RAND_RESET_I(32);
    __PVT__rdata = VL_RAND_RESET_I(32);
    __PVT__red = VL_RAND_RESET_I(3);
    __PVT__green = VL_RAND_RESET_I(3);
    __PVT__blue = VL_RAND_RESET_I(2);
    __PVT__hsync = VL_RAND_RESET_I(1);
    __PVT__vsync = VL_RAND_RESET_I(1);
}
