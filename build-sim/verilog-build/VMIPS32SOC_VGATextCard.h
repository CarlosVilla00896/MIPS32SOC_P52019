// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMIPS32SOC.h for the primary calling header

#ifndef _VMIPS32SOC_VGATextCard_H_
#define _VMIPS32SOC_VGATextCard_H_

#include "verilated.h"
#include "VMIPS32SOC__Dpi.h"

class VMIPS32SOC__Syms;
class VMIPS32SOC_RomColorPalette;
class VMIPS32SOC_DualPortVGARam;
class VMIPS32SOC_FontRom;

//----------

VL_MODULE(VMIPS32SOC_VGATextCard) {
  public:
    // CELLS
    VMIPS32SOC_RomColorPalette*	palRom;
    VMIPS32SOC_DualPortVGARam*	frameBuff;
    VMIPS32SOC_FontRom*	fontRom;
    
    // PORTS
    // Begin mtask footprint  all: 
    VL_IN8(__PVT__vclk,0,0);
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__en,0,0);
    VL_IN8(__PVT__memWrite,3,0);
    VL_OUT8(__PVT__red,2,0);
    VL_OUT8(__PVT__green,2,0);
    VL_OUT8(__PVT__blue,1,0);
    VL_OUT8(__PVT__hsync,0,0);
    VL_OUT8(__PVT__vsync,0,0);
    VL_IN16(__PVT__addr,10,0);
    VL_IN(__PVT__wdata,31,0);
    VL_OUT(__PVT__rdata,31,0);
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    VMIPS32SOC__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VMIPS32SOC_VGATextCard);  ///< Copying not allowed
  public:
    VMIPS32SOC_VGATextCard(const char* name="TOP");
    ~VMIPS32SOC_VGATextCard();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VMIPS32SOC__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
} VL_ATTR_ALIGNED(128);

#endif // guard
