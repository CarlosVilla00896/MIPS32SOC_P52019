// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMIPS32SOC.h for the primary calling header

#include "VMIPS32SOC_RomColorPalette.h"
#include "VMIPS32SOC__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VMIPS32SOC_RomColorPalette) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VMIPS32SOC_RomColorPalette::__Vconfigure(VMIPS32SOC__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VMIPS32SOC_RomColorPalette::~VMIPS32SOC_RomColorPalette() {
}

//--------------------
// Internal Methods

void VMIPS32SOC_RomColorPalette::_initial__TOP__MIPS32SOC__vgaTextCard__palRom__1(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMIPS32SOC_RomColorPalette::_initial__TOP__MIPS32SOC__vgaTextCard__palRom__1\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/vga/RomColorPalette.v:13
    vlSymsp->TOP__MIPS32SOC__vgaTextCard__palRom.memory[0U] = 0U;
    vlSymsp->TOP__MIPS32SOC__vgaTextCard__palRom.memory[1U] = 2U;
    vlSymsp->TOP__MIPS32SOC__vgaTextCard__palRom.memory[2U] = 0x14U;
    vlSymsp->TOP__MIPS32SOC__vgaTextCard__palRom.memory[3U] = 0x16U;
    vlSymsp->TOP__MIPS32SOC__vgaTextCard__palRom.memory[4U] = 0xa0U;
    vlSymsp->TOP__MIPS32SOC__vgaTextCard__palRom.memory[5U] = 0xa2U;
    vlSymsp->TOP__MIPS32SOC__vgaTextCard__palRom.memory[6U] = 0xa8U;
    vlSymsp->TOP__MIPS32SOC__vgaTextCard__palRom.memory[7U] = 0xb6U;
    vlSymsp->TOP__MIPS32SOC__vgaTextCard__palRom.memory[8U] = 0x49U;
    vlSymsp->TOP__MIPS32SOC__vgaTextCard__palRom.memory[9U] = 0x4bU;
    vlSymsp->TOP__MIPS32SOC__vgaTextCard__palRom.memory[0xaU] = 0x5dU;
    vlSymsp->TOP__MIPS32SOC__vgaTextCard__palRom.memory[0xbU] = 0x5fU;
    vlSymsp->TOP__MIPS32SOC__vgaTextCard__palRom.memory[0xcU] = 0xe9U;
    vlSymsp->TOP__MIPS32SOC__vgaTextCard__palRom.memory[0xdU] = 0xebU;
    vlSymsp->TOP__MIPS32SOC__vgaTextCard__palRom.memory[0xeU] = 0xfdU;
    vlSymsp->TOP__MIPS32SOC__vgaTextCard__palRom.memory[0xfU] = 0xffU;
}

void VMIPS32SOC_RomColorPalette::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMIPS32SOC_RomColorPalette::_ctor_var_reset\n"); );
    // Body
    __PVT__addr1 = VL_RAND_RESET_I(4);
    __PVT__addr2 = VL_RAND_RESET_I(4);
    __PVT__color1 = VL_RAND_RESET_I(8);
    __PVT__color2 = VL_RAND_RESET_I(8);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
	    memory[__Vi0] = VL_RAND_RESET_I(8);
    }}
}
