// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMIPS32SOC.h for the primary calling header

#include "VMIPS32SOC_MIPS32SOC.h"
#include "VMIPS32SOC__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VMIPS32SOC_MIPS32SOC) {
    VL_CELL(instMem, VMIPS32SOC_InstMemory);
    VL_CELL(dataMem, VMIPS32SOC_DataMemory);
    VL_CELL(vgaTextCard, VMIPS32SOC_VGATextCard);
    VL_CELL(regFile, VMIPS32SOC_RegisterFile);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VMIPS32SOC_MIPS32SOC::__Vconfigure(VMIPS32SOC__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VMIPS32SOC_MIPS32SOC::~VMIPS32SOC_MIPS32SOC() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VMIPS32SOC_MIPS32SOC::__Vdpiimwrap_millisCounter__DOT__millis_TOP__MIPS32SOC(IData& millis__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VMIPS32SOC_MIPS32SOC::__Vdpiimwrap_millisCounter__DOT__millis_TOP__MIPS32SOC\n"); );
    // Body
    int millis__Vfuncrtn__Vcvt = millis();
    millis__Vfuncrtn = millis__Vfuncrtn__Vcvt;
}

void VMIPS32SOC_MIPS32SOC::_initial__TOP__MIPS32SOC__1(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VMIPS32SOC_MIPS32SOC::_initial__TOP__MIPS32SOC__1\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/ClockGenerator.v:42
    vlSymsp->TOP__MIPS32SOC.__PVT__slowClk = 0U;
}

void VMIPS32SOC_MIPS32SOC::_settle__TOP__MIPS32SOC__2(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VMIPS32SOC_MIPS32SOC::_settle__TOP__MIPS32SOC__2\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__MIPS32SOC.inst = vlSymsp->TOP__MIPS32SOC__instMem.__PVT__rdata;
    vlSymsp->TOP__MIPS32SOC.rd = (0x1fU & (vlSymsp->TOP__MIPS32SOC.inst 
					   >> 0xbU));
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/ControlUnit.v:26
    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteEnable = 0U;
    if ((0x80000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			  >> 0x1dU)))) {
		if ((0x10000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				  >> 0x1bU)))) {
			vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteEnable = 1U;
		    }
		} else {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteEnable = 1U;
			}
		    } else {
			vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteEnable = 1U;
		    }
		}
	    }
	}
    } else {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((0x20000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteEnable = 1U;
	    } else {
		if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			      >> 0x1cU)))) {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteEnable = 1U;
			}
		    } else {
			if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				      >> 0x1aU)))) {
			    if ((0x20U & vlSymsp->TOP__MIPS32SOC.inst)) {
				if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
					      >> 4U)))) {
				    if ((8U & vlSymsp->TOP__MIPS32SOC.inst)) {
					if ((1U & (~ 
						   (vlSymsp->TOP__MIPS32SOC.inst 
						    >> 2U)))) {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteEnable = 1U;
					    }
					}
				    } else {
					if ((4U & vlSymsp->TOP__MIPS32SOC.inst)) {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						if (
						    (1U 
						     & (~ vlSymsp->TOP__MIPS32SOC.inst))) {
						    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteEnable = 1U;
						}
					    } else {
						vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteEnable = 1U;
					    }
					} else {
					    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteEnable = 1U;
					}
				    }
				}
			    } else {
				if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
					      >> 4U)))) {
				    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
						  >> 3U)))) {
					if ((4U & vlSymsp->TOP__MIPS32SOC.inst)) {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteEnable = 1U;
					    } else {
						if (
						    (1U 
						     & (~ vlSymsp->TOP__MIPS32SOC.inst))) {
						    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteEnable = 1U;
						}
					    }
					} else {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteEnable = 1U;
					    } else {
						if (
						    (1U 
						     & (~ vlSymsp->TOP__MIPS32SOC.inst))) {
						    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteEnable = 1U;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/ControlUnit.v:26
    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteDataSel = 0U;
    if ((0x80000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			  >> 0x1dU)))) {
		if ((0x10000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				  >> 0x1bU)))) {
			vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteDataSel = 1U;
		    }
		} else {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteDataSel = 1U;
			}
		    } else {
			vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteDataSel = 1U;
		    }
		}
	    }
	}
    } else {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((0x20000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteDataSel 
		    = ((0x10000000U & vlSymsp->TOP__MIPS32SOC.inst)
		        ? ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)
			    ? ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)
			        ? 2U : 0U) : 0U) : 0U);
	    } else {
		if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			      >> 0x1cU)))) {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteDataSel = 3U;
			}
		    } else {
			if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				      >> 0x1aU)))) {
			    if ((0x20U & vlSymsp->TOP__MIPS32SOC.inst)) {
				if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
					      >> 4U)))) {
				    if ((8U & vlSymsp->TOP__MIPS32SOC.inst)) {
					if ((1U & (~ 
						   (vlSymsp->TOP__MIPS32SOC.inst 
						    >> 2U)))) {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteDataSel = 0U;
					    }
					}
				    } else {
					if ((4U & vlSymsp->TOP__MIPS32SOC.inst)) {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						if (
						    (1U 
						     & (~ vlSymsp->TOP__MIPS32SOC.inst))) {
						    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteDataSel = 0U;
						}
					    } else {
						vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteDataSel = 0U;
					    }
					} else {
					    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteDataSel = 0U;
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/ControlUnit.v:26
    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteAddrSel = 0U;
    if ((0x80000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((0x20000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			      >> 0x1cU)))) {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteAddrSel = 0U;
			}
		    }
		}
	    } else {
		if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			      >> 0x1cU)))) {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteAddrSel = 0U;
			}
		    }
		}
	    }
	}
    } else {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((0x20000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteAddrSel = 0U;
	    } else {
		if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			      >> 0x1cU)))) {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteAddrSel = 2U;
			}
		    } else {
			if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				      >> 0x1aU)))) {
			    if ((0x20U & vlSymsp->TOP__MIPS32SOC.inst)) {
				if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
					      >> 4U)))) {
				    if ((8U & vlSymsp->TOP__MIPS32SOC.inst)) {
					if ((1U & (~ 
						   (vlSymsp->TOP__MIPS32SOC.inst 
						    >> 2U)))) {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteAddrSel = 1U;
					    }
					}
				    } else {
					if ((4U & vlSymsp->TOP__MIPS32SOC.inst)) {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						if (
						    (1U 
						     & (~ vlSymsp->TOP__MIPS32SOC.inst))) {
						    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteAddrSel = 1U;
						}
					    } else {
						vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteAddrSel = 1U;
					    }
					} else {
					    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteAddrSel = 1U;
					}
				    }
				}
			    } else {
				if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
					      >> 4U)))) {
				    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
						  >> 3U)))) {
					if ((4U & vlSymsp->TOP__MIPS32SOC.inst)) {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteAddrSel = 1U;
					    } else {
						if (
						    (1U 
						     & (~ vlSymsp->TOP__MIPS32SOC.inst))) {
						    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteAddrSel = 1U;
						}
					    }
					} else {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteAddrSel = 1U;
					    } else {
						if (
						    (1U 
						     & (~ vlSymsp->TOP__MIPS32SOC.inst))) {
						    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteAddrSel = 1U;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/ControlUnit.v:26
    vlSymsp->TOP__MIPS32SOC.__PVT__memoryBitExt = 0U;
    if ((0x80000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			  >> 0x1dU)))) {
		if ((0x10000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				  >> 0x1bU)))) {
			vlSymsp->TOP__MIPS32SOC.__PVT__memoryBitExt = 1U;
		    }
		} else {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    vlSymsp->TOP__MIPS32SOC.__PVT__memoryBitExt = 0U;
			}
		    } else {
			vlSymsp->TOP__MIPS32SOC.__PVT__memoryBitExt = 0U;
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/ControlUnit.v:26
    vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize = 0U;
    if ((0x80000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((0x20000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			      >> 0x1cU)))) {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize = 0U;
			}
		    } else {
			vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize 
			    = ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)
			        ? 1U : 2U);
		    }
		}
	    } else {
		if ((0x10000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				  >> 0x1bU)))) {
			vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize 
			    = ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)
			        ? 1U : 2U);
		    }
		} else {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize = 0U;
			}
		    } else {
			vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize 
			    = ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)
			        ? 1U : 2U);
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/ControlUnit.v:26
    vlSymsp->TOP__MIPS32SOC.__PVT__isJal = 0U;
    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst >> 0x1fU)))) {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			  >> 0x1dU)))) {
		if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			      >> 0x1cU)))) {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    vlSymsp->TOP__MIPS32SOC.__PVT__isJal = 1U;
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/ControlUnit.v:26
    vlSymsp->TOP__MIPS32SOC.isJmp = 0U;
    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst >> 0x1fU)))) {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			  >> 0x1dU)))) {
		if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			      >> 0x1cU)))) {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				      >> 0x1aU)))) {
			    vlSymsp->TOP__MIPS32SOC.isJmp = 1U;
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/ControlUnit.v:26
    vlSymsp->TOP__MIPS32SOC.__PVT__isJr = 0U;
    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst >> 0x1fU)))) {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			  >> 0x1dU)))) {
		if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			      >> 0x1cU)))) {
		    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				  >> 0x1bU)))) {
			if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				      >> 0x1aU)))) {
			    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
					  >> 5U)))) {
				if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
					      >> 4U)))) {
				    if ((8U & vlSymsp->TOP__MIPS32SOC.inst)) {
					if ((1U & (~ 
						   (vlSymsp->TOP__MIPS32SOC.inst 
						    >> 2U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__MIPS32SOC.inst 
						     >> 1U)))) {
						if (
						    (1U 
						     & (~ vlSymsp->TOP__MIPS32SOC.inst))) {
						    vlSymsp->TOP__MIPS32SOC.__PVT__isJr = 1U;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/ControlUnit.v:26
    vlSymsp->TOP__MIPS32SOC.__PVT__memRead = 0U;
    if ((0x80000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			  >> 0x1dU)))) {
		if ((0x10000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				  >> 0x1bU)))) {
			vlSymsp->TOP__MIPS32SOC.__PVT__memRead = 1U;
		    }
		} else {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    vlSymsp->TOP__MIPS32SOC.__PVT__memRead = 1U;
			}
		    } else {
			vlSymsp->TOP__MIPS32SOC.__PVT__memRead = 1U;
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/ControlUnit.v:26
    vlSymsp->TOP__MIPS32SOC.memWrite = 0U;
    if ((0x80000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((0x20000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			      >> 0x1cU)))) {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    vlSymsp->TOP__MIPS32SOC.memWrite = 1U;
			}
		    } else {
			vlSymsp->TOP__MIPS32SOC.memWrite = 1U;
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/ControlUnit.v:26
    vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand1_source = 0U;
    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst >> 0x1fU)))) {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			  >> 0x1dU)))) {
		if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			      >> 0x1cU)))) {
		    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				  >> 0x1bU)))) {
			if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				      >> 0x1aU)))) {
			    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
					  >> 5U)))) {
				if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
					      >> 4U)))) {
				    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
						  >> 3U)))) {
					if ((4U & vlSymsp->TOP__MIPS32SOC.inst)) {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand1_source = 1U;
					    } else {
						if (
						    (1U 
						     & (~ vlSymsp->TOP__MIPS32SOC.inst))) {
						    vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand1_source = 1U;
						}
					    }
					} else {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand1_source = 1U;
					    } else {
						if (
						    (1U 
						     & (~ vlSymsp->TOP__MIPS32SOC.inst))) {
						    vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand1_source = 1U;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/ControlUnit.v:26
    vlSymsp->TOP__MIPS32SOC.__PVT__aluSrc = 0U;
    if ((0x80000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((0x20000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			      >> 0x1cU)))) {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    vlSymsp->TOP__MIPS32SOC.__PVT__aluSrc = 1U;
			}
		    } else {
			vlSymsp->TOP__MIPS32SOC.__PVT__aluSrc = 1U;
		    }
		}
	    } else {
		if ((0x10000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				  >> 0x1bU)))) {
			vlSymsp->TOP__MIPS32SOC.__PVT__aluSrc = 1U;
		    }
		} else {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    vlSymsp->TOP__MIPS32SOC.__PVT__aluSrc = 1U;
			}
		    } else {
			vlSymsp->TOP__MIPS32SOC.__PVT__aluSrc = 1U;
		    }
		}
	    }
	}
    } else {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((0x20000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		vlSymsp->TOP__MIPS32SOC.__PVT__aluSrc = 1U;
	    } else {
		if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			      >> 0x1cU)))) {
		    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				  >> 0x1bU)))) {
			if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				      >> 0x1aU)))) {
			    if ((0x20U & vlSymsp->TOP__MIPS32SOC.inst)) {
				if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
					      >> 4U)))) {
				    if ((8U & vlSymsp->TOP__MIPS32SOC.inst)) {
					if ((1U & (~ 
						   (vlSymsp->TOP__MIPS32SOC.inst 
						    >> 2U)))) {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						vlSymsp->TOP__MIPS32SOC.__PVT__aluSrc = 0U;
					    }
					}
				    } else {
					if ((4U & vlSymsp->TOP__MIPS32SOC.inst)) {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						if (
						    (1U 
						     & (~ vlSymsp->TOP__MIPS32SOC.inst))) {
						    vlSymsp->TOP__MIPS32SOC.__PVT__aluSrc = 0U;
						}
					    } else {
						vlSymsp->TOP__MIPS32SOC.__PVT__aluSrc = 0U;
					    }
					} else {
					    vlSymsp->TOP__MIPS32SOC.__PVT__aluSrc = 0U;
					}
				    }
				}
			    } else {
				if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
					      >> 4U)))) {
				    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
						  >> 3U)))) {
					if ((4U & vlSymsp->TOP__MIPS32SOC.inst)) {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						vlSymsp->TOP__MIPS32SOC.__PVT__aluSrc = 2U;
					    } else {
						if (
						    (1U 
						     & (~ vlSymsp->TOP__MIPS32SOC.inst))) {
						    vlSymsp->TOP__MIPS32SOC.__PVT__aluSrc = 2U;
						}
					    }
					} else {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						vlSymsp->TOP__MIPS32SOC.__PVT__aluSrc = 3U;
					    } else {
						if (
						    (1U 
						     & (~ vlSymsp->TOP__MIPS32SOC.inst))) {
						    vlSymsp->TOP__MIPS32SOC.__PVT__aluSrc = 3U;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/ControlUnit.v:26
    vlSymsp->TOP__MIPS32SOC.__PVT__bitXtend = 0U;
    if ((0x80000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((0x20000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			      >> 0x1cU)))) {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    vlSymsp->TOP__MIPS32SOC.__PVT__bitXtend = 0U;
			}
		    }
		}
	    } else {
		if ((0x10000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				  >> 0x1bU)))) {
			vlSymsp->TOP__MIPS32SOC.__PVT__bitXtend = 1U;
		    }
		} else {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    vlSymsp->TOP__MIPS32SOC.__PVT__bitXtend = 0U;
			}
		    } else {
			vlSymsp->TOP__MIPS32SOC.__PVT__bitXtend = 0U;
		    }
		}
	    }
	}
    } else {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((0x20000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		vlSymsp->TOP__MIPS32SOC.__PVT__bitXtend 
		    = (1U & (vlSymsp->TOP__MIPS32SOC.inst 
			     >> 0x1cU));
	    } else {
		if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			      >> 0x1cU)))) {
		    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				  >> 0x1bU)))) {
			if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				      >> 0x1aU)))) {
			    if ((0x20U & vlSymsp->TOP__MIPS32SOC.inst)) {
				if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
					      >> 4U)))) {
				    if ((8U & vlSymsp->TOP__MIPS32SOC.inst)) {
					if ((1U & (~ 
						   (vlSymsp->TOP__MIPS32SOC.inst 
						    >> 2U)))) {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						if (
						    (1U 
						     & vlSymsp->TOP__MIPS32SOC.inst)) {
						    vlSymsp->TOP__MIPS32SOC.__PVT__bitXtend = 1U;
						}
					    }
					}
				    } else {
					if ((1U & (~ 
						   (vlSymsp->TOP__MIPS32SOC.inst 
						    >> 2U)))) {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						if (
						    (1U 
						     & vlSymsp->TOP__MIPS32SOC.inst)) {
						    vlSymsp->TOP__MIPS32SOC.__PVT__bitXtend = 1U;
						}
					    } else {
						if (
						    (1U 
						     & vlSymsp->TOP__MIPS32SOC.inst)) {
						    vlSymsp->TOP__MIPS32SOC.__PVT__bitXtend = 0U;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    vlSymsp->TOP__MIPS32SOC.rs = (0x1fU & (vlSymsp->TOP__MIPS32SOC.inst 
					   >> 0x15U));
    vlSymsp->TOP__MIPS32SOC.rt = (0x1fU & (vlSymsp->TOP__MIPS32SOC.inst 
					   >> 0x10U));
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/BitExtender.v:9
    vlSymsp->TOP__MIPS32SOC.__PVT__BitExtender_i12__DOT___out 
	= ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__bitXtend)
	    ? (0xffffU & vlSymsp->TOP__MIPS32SOC.inst)
	    : ((0xffff0000U & (VL_NEGATE_I((IData)(
						   (1U 
						    & (vlSymsp->TOP__MIPS32SOC.inst 
						       >> 0xfU)))) 
			       << 0x10U)) | (0xffffU 
					     & vlSymsp->TOP__MIPS32SOC.inst)));
    vlSymsp->TOP__MIPS32SOC.rfData1 = vlSymsp->TOP__MIPS32SOC__regFile.memory
	[vlSymsp->TOP__MIPS32SOC.rs];
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/ControlUnit.v:26
    vlSymsp->TOP__MIPS32SOC.invalidOpcode = (1U & (
						   (0x80000000U 
						    & vlSymsp->TOP__MIPS32SOC.inst)
						    ? 
						   ((vlSymsp->TOP__MIPS32SOC.inst 
						     >> 0x1eU) 
						    | ((0x20000000U 
							& vlSymsp->TOP__MIPS32SOC.inst)
						        ? 
						       ((vlSymsp->TOP__MIPS32SOC.inst 
							 >> 0x1cU) 
							| ((vlSymsp->TOP__MIPS32SOC.inst 
							    >> 0x1bU) 
							   & (~ 
							      (vlSymsp->TOP__MIPS32SOC.inst 
							       >> 0x1aU))))
						        : 
						       ((0x10000000U 
							 & vlSymsp->TOP__MIPS32SOC.inst)
							 ? 
							(vlSymsp->TOP__MIPS32SOC.inst 
							 >> 0x1bU)
							 : 
							((vlSymsp->TOP__MIPS32SOC.inst 
							  >> 0x1bU) 
							 & (~ 
							    (vlSymsp->TOP__MIPS32SOC.inst 
							     >> 0x1aU))))))
						    : 
						   ((vlSymsp->TOP__MIPS32SOC.inst 
						     >> 0x1eU) 
						    | ((~ 
							(vlSymsp->TOP__MIPS32SOC.inst 
							 >> 0x1dU)) 
						       & ((~ 
							   (vlSymsp->TOP__MIPS32SOC.inst 
							    >> 0x1cU)) 
							  & ((~ 
							      (vlSymsp->TOP__MIPS32SOC.inst 
							       >> 0x1bU)) 
							     & ((0x4000000U 
								 & vlSymsp->TOP__MIPS32SOC.inst)
								 ? 
								((1U 
								  != (IData)(vlSymsp->TOP__MIPS32SOC.rt)) 
								 & (0U 
								    != (IData)(vlSymsp->TOP__MIPS32SOC.rt)))
								 : 
								((0x20U 
								  & vlSymsp->TOP__MIPS32SOC.inst)
								  ? 
								 ((vlSymsp->TOP__MIPS32SOC.inst 
								   >> 4U) 
								  | ((8U 
								      & vlSymsp->TOP__MIPS32SOC.inst)
								      ? 
								     ((vlSymsp->TOP__MIPS32SOC.inst 
								       >> 2U) 
								      | (~ 
									 (vlSymsp->TOP__MIPS32SOC.inst 
									  >> 1U)))
								      : 
								     ((vlSymsp->TOP__MIPS32SOC.inst 
								       >> 2U) 
								      & ((vlSymsp->TOP__MIPS32SOC.inst 
									  >> 1U) 
									 & vlSymsp->TOP__MIPS32SOC.inst))))
								  : 
								 ((vlSymsp->TOP__MIPS32SOC.inst 
								   >> 4U) 
								  | ((8U 
								      & vlSymsp->TOP__MIPS32SOC.inst)
								      ? 
								     ((vlSymsp->TOP__MIPS32SOC.inst 
								       >> 2U) 
								      | ((vlSymsp->TOP__MIPS32SOC.inst 
									  >> 1U) 
									 | vlSymsp->TOP__MIPS32SOC.inst))
								      : 
								     ((4U 
								       & vlSymsp->TOP__MIPS32SOC.inst)
								       ? 
								      ((~ 
									(vlSymsp->TOP__MIPS32SOC.inst 
									 >> 1U)) 
								       & vlSymsp->TOP__MIPS32SOC.inst)
								       : 
								      ((~ 
									(vlSymsp->TOP__MIPS32SOC.inst 
									 >> 1U)) 
								       & vlSymsp->TOP__MIPS32SOC.inst))))))))))));
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/ControlUnit.v:26
    vlSymsp->TOP__MIPS32SOC.__PVT__branchType = 0U;
    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst >> 0x1fU)))) {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			  >> 0x1dU)))) {
		if ((0x10000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		    vlSymsp->TOP__MIPS32SOC.__PVT__branchType 
			= ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)
			    ? ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)
			        ? 4U : 5U) : ((0x4000000U 
					       & vlSymsp->TOP__MIPS32SOC.inst)
					       ? 2U
					       : 1U));
		} else {
		    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				  >> 0x1bU)))) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    if ((1U == (IData)(vlSymsp->TOP__MIPS32SOC.rt))) {
				vlSymsp->TOP__MIPS32SOC.__PVT__branchType = 3U;
			    } else {
				if ((0U == (IData)(vlSymsp->TOP__MIPS32SOC.rt))) {
				    vlSymsp->TOP__MIPS32SOC.__PVT__branchType = 6U;
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/ControlUnit.v:26
    vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc = 0U;
    if ((0x80000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((0x20000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			      >> 0x1cU)))) {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc = 1U;
			}
		    } else {
			vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc = 1U;
		    }
		}
	    } else {
		if ((0x10000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				  >> 0x1bU)))) {
			vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc = 1U;
		    }
		} else {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc = 1U;
			}
		    } else {
			vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc = 1U;
		    }
		}
	    }
	}
    } else {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((0x20000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc 
		    = ((0x10000000U & vlSymsp->TOP__MIPS32SOC.inst)
		        ? ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)
			    ? ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)
			        ? 1U : 6U) : ((0x4000000U 
					       & vlSymsp->TOP__MIPS32SOC.inst)
					       ? 4U
					       : 3U))
		        : ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)
			    ? ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)
			        ? 7U : 5U) : 1U));
	    } else {
		if ((0x10000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		    vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc = 2U;
		} else {
		    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				  >> 0x1bU)))) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    if ((1U == (IData)(vlSymsp->TOP__MIPS32SOC.rt))) {
				vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc = 2U;
			    } else {
				if ((0U == (IData)(vlSymsp->TOP__MIPS32SOC.rt))) {
				    vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc = 2U;
				}
			    }
			} else {
			    if ((0x20U & vlSymsp->TOP__MIPS32SOC.inst)) {
				if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
					      >> 4U)))) {
				    if ((8U & vlSymsp->TOP__MIPS32SOC.inst)) {
					if ((1U & (~ 
						   (vlSymsp->TOP__MIPS32SOC.inst 
						    >> 2U)))) {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc 
						    = 
						    ((1U 
						      & vlSymsp->TOP__MIPS32SOC.inst)
						      ? 7U
						      : 5U);
					    }
					}
				    } else {
					if ((4U & vlSymsp->TOP__MIPS32SOC.inst)) {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						if (
						    (1U 
						     & (~ vlSymsp->TOP__MIPS32SOC.inst))) {
						    vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc = 6U;
						}
					    } else {
						vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc 
						    = 
						    ((1U 
						      & vlSymsp->TOP__MIPS32SOC.inst)
						      ? 4U
						      : 3U);
					    }
					} else {
					    vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc 
						= (
						   (2U 
						    & vlSymsp->TOP__MIPS32SOC.inst)
						    ? 2U
						    : 1U);
					}
				    }
				}
			    } else {
				if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
					      >> 4U)))) {
				    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
						  >> 3U)))) {
					if ((4U & vlSymsp->TOP__MIPS32SOC.inst)) {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc 
						    = 
						    ((1U 
						      & vlSymsp->TOP__MIPS32SOC.inst)
						      ? 0xaU
						      : 9U);
					    } else {
						if (
						    (1U 
						     & (~ vlSymsp->TOP__MIPS32SOC.inst))) {
						    vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc = 8U;
						}
					    }
					} else {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc 
						    = 
						    ((1U 
						      & vlSymsp->TOP__MIPS32SOC.inst)
						      ? 0xaU
						      : 9U);
					    } else {
						if (
						    (1U 
						     & (~ vlSymsp->TOP__MIPS32SOC.inst))) {
						    vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc = 8U;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    vlSymsp->TOP__MIPS32SOC.rfData2 = vlSymsp->TOP__MIPS32SOC__regFile.memory
	[vlSymsp->TOP__MIPS32SOC.rt];
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/MIPS32SOC.v:141
    vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand1 = ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand1_source)
						   ? 
						  ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand1_source)
						    ? vlSymsp->TOP__MIPS32SOC.rfData2
						    : vlSymsp->TOP__MIPS32SOC.rfData1)
						   : vlSymsp->TOP__MIPS32SOC.rfData1);
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/MIPS32SOC.v:151
    vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand2 = ((2U 
						   & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluSrc))
						   ? 
						  ((1U 
						    & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluSrc))
						    ? 
						   (0x1fU 
						    & (vlSymsp->TOP__MIPS32SOC.inst 
						       >> 6U))
						    : vlSymsp->TOP__MIPS32SOC.rfData1)
						   : 
						  ((1U 
						    & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluSrc))
						    ? vlSymsp->TOP__MIPS32SOC.__PVT__BitExtender_i12__DOT___out
						    : vlSymsp->TOP__MIPS32SOC.rfData2));
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/ALU.v:13
    vlSymsp->TOP__MIPS32SOC.aluResult = ((8U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc))
					  ? ((4U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc))
					      ? 0U : 
					     ((2U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc))
					       ? ((1U 
						   & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc))
						   ? 0U
						   : 
						  ((0x1fU 
						    >= vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand2)
						    ? 
						   VL_SHIFTRS_III(32,32,32, vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand1, vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand2)
						    : 
						   VL_NEGATE_I(
							       (vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand1 
								>> 0x1fU))))
					       : ((1U 
						   & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc))
						   ? 
						  ((0x1fU 
						    >= vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand2)
						    ? 
						   (vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand1 
						    >> vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand2)
						    : 0U)
						   : 
						  ((0x1fU 
						    >= vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand2)
						    ? 
						   (vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand1 
						    << vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand2)
						    : 0U))))
					  : ((4U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc))
					      ? ((2U 
						  & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc))
						  ? 
						 ((1U 
						   & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc))
						   ? 
						  (vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand1 
						   < vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand2)
						   : 
						  (vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand1 
						   ^ vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand2))
						  : 
						 ((1U 
						   & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc))
						   ? 
						  VL_LTS_III(32,32,32, vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand1, vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand2)
						   : 
						  (vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand1 
						   | vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand2)))
					      : ((2U 
						  & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc))
						  ? 
						 ((1U 
						   & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc))
						   ? 
						  (vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand1 
						   & vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand2)
						   : 
						  (vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand1 
						   - vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand2))
						  : 
						 ((1U 
						   & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc))
						   ? 
						  (vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand1 
						   + vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand2)
						   : 0U))));
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/MemDecoder.v:22
    vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___invalidAddress = 0U;
    if (((IData)(vlSymsp->TOP__MIPS32SOC.memWrite) 
	 | (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memRead))) {
	vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___invalidAddress 
	    = (1U & ((~ ((0x10010000U <= vlSymsp->TOP__MIPS32SOC.aluResult) 
			 & (0x10010fffU >= vlSymsp->TOP__MIPS32SOC.aluResult))) 
		     & ((~ ((0x7fffeffcU <= vlSymsp->TOP__MIPS32SOC.aluResult) 
			    & (0x7ffffffbU >= vlSymsp->TOP__MIPS32SOC.aluResult))) 
			& ((~ ((0xb800U <= vlSymsp->TOP__MIPS32SOC.aluResult) 
			       & (0xcacfU >= vlSymsp->TOP__MIPS32SOC.aluResult))) 
			   & (~ ((0xffff0000U <= vlSymsp->TOP__MIPS32SOC.aluResult) 
				 & (0xffff000cU >= vlSymsp->TOP__MIPS32SOC.aluResult)))))));
    }
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/MemDecoder.v:22
    vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___memBank = 0U;
    if (((IData)(vlSymsp->TOP__MIPS32SOC.memWrite) 
	 | (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memRead))) {
	vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___memBank 
	    = (((0x10010000U <= vlSymsp->TOP__MIPS32SOC.aluResult) 
		& (0x10010fffU >= vlSymsp->TOP__MIPS32SOC.aluResult))
	        ? 0U : (((0x7fffeffcU <= vlSymsp->TOP__MIPS32SOC.aluResult) 
			 & (0x7ffffffbU >= vlSymsp->TOP__MIPS32SOC.aluResult))
			 ? 0U : (((0xb800U <= vlSymsp->TOP__MIPS32SOC.aluResult) 
				  & (0xcacfU >= vlSymsp->TOP__MIPS32SOC.aluResult))
				  ? 1U : (((0xffff0000U 
					    <= vlSymsp->TOP__MIPS32SOC.aluResult) 
					   & (0xffff000cU 
					      >= vlSymsp->TOP__MIPS32SOC.aluResult))
					   ? 2U : 0U))));
    }
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/MemDecoder.v:22
    if (((IData)(vlSymsp->TOP__MIPS32SOC.memWrite) 
	 | (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memRead))) {
	if (((0x10010000U <= vlSymsp->TOP__MIPS32SOC.aluResult) 
	     & (0x10010fffU >= vlSymsp->TOP__MIPS32SOC.aluResult))) {
	    vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT__temp 
		= (vlSymsp->TOP__MIPS32SOC.aluResult 
		   - (IData)(0x10010000U));
	    vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress 
		= (0x1fffU & vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT__temp);
	} else {
	    if (((0x7fffeffcU <= vlSymsp->TOP__MIPS32SOC.aluResult) 
		 & (0x7ffffffbU >= vlSymsp->TOP__MIPS32SOC.aluResult))) {
		vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT__temp 
		    = (vlSymsp->TOP__MIPS32SOC.aluResult 
		       - (IData)(0x7fffeffcU));
		vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress 
		    = (0x1fffU & vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT__temp);
	    } else {
		if (((0xb800U <= vlSymsp->TOP__MIPS32SOC.aluResult) 
		     & (0xcacfU >= vlSymsp->TOP__MIPS32SOC.aluResult))) {
		    vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT__temp 
			= (vlSymsp->TOP__MIPS32SOC.aluResult 
			   - (IData)(0xb800U));
		    vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress 
			= (0x1fffU & vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT__temp);
		} else {
		    if (((0xffff0000U <= vlSymsp->TOP__MIPS32SOC.aluResult) 
			 & (0xffff000cU >= vlSymsp->TOP__MIPS32SOC.aluResult))) {
			vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT__temp 
			    = (vlSymsp->TOP__MIPS32SOC.aluResult 
			       - (IData)(0xffff0000U));
			vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress 
			    = (0x1fffU & vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT__temp);
		    } else {
			vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress = 0U;
		    }
		}
	    }
	}
    }
    vlSymsp->TOP__MIPS32SOC.isZero = (0U == vlSymsp->TOP__MIPS32SOC.aluResult);
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/MemDecoder.v:22
    vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___memEn = 0U;
    if (((IData)(vlSymsp->TOP__MIPS32SOC.memWrite) 
	 | (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memRead))) {
	vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___memEn 
	    = (((0x10010000U <= vlSymsp->TOP__MIPS32SOC.aluResult) 
		& (0x10010fffU >= vlSymsp->TOP__MIPS32SOC.aluResult))
	        ? 1U : (((0x7fffeffcU <= vlSymsp->TOP__MIPS32SOC.aluResult) 
			 & (0x7ffffffbU >= vlSymsp->TOP__MIPS32SOC.aluResult))
			 ? 1U : (((0xb800U <= vlSymsp->TOP__MIPS32SOC.aluResult) 
				  & (0xcacfU >= vlSymsp->TOP__MIPS32SOC.aluResult))
				  ? 2U : (((0xffff0000U 
					    <= vlSymsp->TOP__MIPS32SOC.aluResult) 
					   & (0xffff000cU 
					      >= vlSymsp->TOP__MIPS32SOC.aluResult))
					   ? 4U : 0U))));
    }
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/MemWriteDataEncoder.v:16
    vlSymsp->TOP__MIPS32SOC.__PVT__memWriteDataEncoder__DOT___encMW 
	= ((IData)(vlSymsp->TOP__MIPS32SOC.memWrite)
	    ? ((0U == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize))
	        ? 0xfU : (((1U == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize)) 
			   & (0U == (3U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress))))
			   ? 3U : (((1U == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize)) 
				    & (2U == (3U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress))))
				    ? 0xcU : (((2U 
						== (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize)) 
					       & (0U 
						  == 
						  (3U 
						   & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress))))
					       ? 1U
					       : ((
						   (2U 
						    == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize)) 
						   & (1U 
						      == 
						      (3U 
						       & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress))))
						   ? 2U
						   : 
						  (((2U 
						     == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize)) 
						    & (2U 
						       == 
						       (3U 
							& (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress))))
						    ? 4U
						    : 
						   (((2U 
						      == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize)) 
						     & (3U 
							== 
							(3U 
							 & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress))))
						     ? 8U
						     : 0U)))))))
	    : 0U);
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/MemWriteDataEncoder.v:16
    vlSymsp->TOP__MIPS32SOC.__PVT__memWriteDataEncoder__DOT___outData 
	= ((IData)(vlSymsp->TOP__MIPS32SOC.memWrite)
	    ? ((0U == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize))
	        ? vlSymsp->TOP__MIPS32SOC.rfData2 : 
	       (((1U == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize)) 
		 & (0U == (3U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress))))
		 ? (0xffff0000U & (vlSymsp->TOP__MIPS32SOC.rfData2 
				   << 0x10U)) : (((1U 
						   == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize)) 
						  & (2U 
						     == 
						     (3U 
						      & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress))))
						  ? 
						 (0xffffU 
						  & vlSymsp->TOP__MIPS32SOC.rfData2)
						  : 
						 (((2U 
						    == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize)) 
						   & (0U 
						      == 
						      (3U 
						       & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress))))
						   ? 
						  (0xff000000U 
						   & (vlSymsp->TOP__MIPS32SOC.rfData2 
						      << 0x18U))
						   : 
						  (((2U 
						     == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize)) 
						    & (1U 
						       == 
						       (3U 
							& (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress))))
						    ? 
						   (0xff0000U 
						    & (vlSymsp->TOP__MIPS32SOC.rfData2 
						       << 0x10U))
						    : 
						   (((2U 
						      == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize)) 
						     & (2U 
							== 
							(3U 
							 & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress))))
						     ? 
						    (0xff00U 
						     & (vlSymsp->TOP__MIPS32SOC.rfData2 
							<< 8U))
						     : 
						    (((2U 
						       == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize)) 
						      & (3U 
							 == 
							 (3U 
							  & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress))))
						      ? 
						     (0xffU 
						      & vlSymsp->TOP__MIPS32SOC.rfData2)
						      : 0U)))))))
	    : 0U);
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/MIPS32SOC.v:173
    vlSymsp->TOP__MIPS32SOC.__PVT__nextPC2 = ((IData)(vlTOPp->resetIn)
					       ? 0x400000U
					       : (((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__isJal) 
						   | (IData)(vlSymsp->TOP__MIPS32SOC.isJmp))
						   ? 
						  ((0xf0000000U 
						    & ((IData)(4U) 
						       + vlSymsp->TOP__MIPS32SOC.PC)) 
						   | (0xffffffcU 
						      & (vlSymsp->TOP__MIPS32SOC.inst 
							 << 2U)))
						   : 
						  ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__isJr)
						    ? vlSymsp->TOP__MIPS32SOC.rfData1
						    : 
						   ((((1U 
						       == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__branchType)) 
						      & (IData)(vlSymsp->TOP__MIPS32SOC.isZero)) 
						     | (((2U 
							  == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__branchType)) 
							 & (~ (IData)(vlSymsp->TOP__MIPS32SOC.isZero))) 
							| (((3U 
							     == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__branchType)) 
							    & (~ 
							       (vlSymsp->TOP__MIPS32SOC.aluResult 
								>> 0x1fU))) 
							   | (((4U 
								== (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__branchType)) 
							       & ((~ 
								   (vlSymsp->TOP__MIPS32SOC.aluResult 
								    >> 0x1fU)) 
								  & (~ (IData)(vlSymsp->TOP__MIPS32SOC.isZero)))) 
							      | (((5U 
								   == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__branchType)) 
								  & ((vlSymsp->TOP__MIPS32SOC.aluResult 
								      >> 0x1fU) 
								     | (IData)(vlSymsp->TOP__MIPS32SOC.isZero))) 
								 | ((6U 
								     == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__branchType)) 
								    & (vlSymsp->TOP__MIPS32SOC.aluResult 
								       >> 0x1fU)))))))
						     ? 
						    ((IData)(4U) 
						     + 
						     (vlSymsp->TOP__MIPS32SOC.PC 
						      + 
						      (0xfffffffcU 
						       & (vlSymsp->TOP__MIPS32SOC.__PVT__BitExtender_i12__DOT___out 
							  << 2U))))
						     : 
						    ((IData)(4U) 
						     + vlSymsp->TOP__MIPS32SOC.PC)))));
    vlSymsp->TOP__MIPS32SOC.memEn = vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___memEn;
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/PCDecoder.v:13
    if (((0x400000U <= vlSymsp->TOP__MIPS32SOC.__PVT__nextPC2) 
	 & (0x401fffU >= vlSymsp->TOP__MIPS32SOC.__PVT__nextPC2))) {
	vlSymsp->TOP__MIPS32SOC.__PVT__pcDec__DOT__temp 
	    = (vlSymsp->TOP__MIPS32SOC.__PVT__nextPC2 
	       - (IData)(0x400000U));
	vlSymsp->TOP__MIPS32SOC.__PVT__pcDec__DOT___physicalPC 
	    = (0x1fffU & vlSymsp->TOP__MIPS32SOC.__PVT__pcDec__DOT__temp);
    }
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/PCDecoder.v:13
    vlSymsp->TOP__MIPS32SOC.__PVT__pcDec__DOT___invalidPC 
	= (1U & (~ ((0x400000U <= vlSymsp->TOP__MIPS32SOC.__PVT__nextPC2) 
		    & (0x401fffU >= vlSymsp->TOP__MIPS32SOC.__PVT__nextPC2))));
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/MIPS32SOC.v:130
    vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder 
	= ((0U == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___memBank))
	    ? vlSymsp->TOP__MIPS32SOC__dataMem.__PVT__rdata
	    : ((1U == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___memBank))
	        ? vlSymsp->TOP__MIPS32SOC__vgaTextCard__frameBuff.__PVT__rda
	        : ((2U == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___memBank))
		    ? ((4U & (IData)(vlSymsp->TOP__MIPS32SOC.memEn))
		        ? ((1U == (0x7ffU & ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress) 
					     >> 2U)))
			    ? ((IData)(vlTOPp->keypadIn) 
			       << 0x18U) : ((2U == 
					     (0x7ffU 
					      & ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress) 
						 >> 2U)))
					     ? vlSymsp->TOP__MIPS32SOC.__PVT__millisCounter__DOT__ms_count
					     : 0U))
		        : 0U) : 0U)));
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/MemReadDataDecoder.v:12
    vlSymsp->TOP__MIPS32SOC.__PVT__memReadDataDecoder__DOT___outData 
	= ((0U == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize))
	    ? vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder
	    : (((1U == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize)) 
		& (0U == (3U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress))))
	        ? ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryBitExt)
		    ? (0xffffU & (vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder 
				  >> 0x10U)) : ((0xffff0000U 
						 & (VL_NEGATE_I((IData)(
									(1U 
									 & (vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder 
									    >> 0x1fU)))) 
						    << 0x10U)) 
						| (0xffffU 
						   & (vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder 
						      >> 0x10U))))
	        : (((1U == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize)) 
		    & (2U == (3U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress))))
		    ? ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryBitExt)
		        ? (0xffffU & vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder)
		        : ((0xffff0000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder 
								   >> 0xfU)))) 
					   << 0x10U)) 
			   | (0xffffU & vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder)))
		    : (((2U == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize)) 
			& (0U == (3U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress))))
		        ? ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryBitExt)
			    ? (0xffU & (vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder 
					>> 0x18U)) : 
			   ((0xffffff00U & (VL_NEGATE_I((IData)(
								(1U 
								 & (vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder 
								    >> 0x1fU)))) 
					    << 8U)) 
			    | (0xffU & (vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder 
					>> 0x18U))))
		        : (((2U == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize)) 
			    & (1U == (3U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress))))
			    ? ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryBitExt)
			        ? (0xffU & (vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder 
					    >> 0x10U))
			        : ((0xffffff00U & (
						   VL_NEGATE_I((IData)(
								       (1U 
									& (vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder 
									   >> 0x17U)))) 
						   << 8U)) 
				   | (0xffU & (vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder 
					       >> 0x10U))))
			    : (((2U == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize)) 
				& (2U == (3U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress))))
			        ? ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryBitExt)
				    ? (0xffU & (vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder 
						>> 8U))
				    : ((0xffffff00U 
					& (VL_NEGATE_I((IData)(
							       (1U 
								& (vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder 
								   >> 0xfU)))) 
					   << 8U)) 
				       | (0xffU & (vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder 
						   >> 8U))))
			        : (((2U == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize)) 
				    & (3U == (3U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress))))
				    ? ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryBitExt)
				        ? (0xffU & vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder)
				        : ((0xffffff00U 
					    & (VL_NEGATE_I((IData)(
								   (1U 
								    & (vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder 
								       >> 7U)))) 
					       << 8U)) 
					   | (0xffU 
					      & vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder)))
				    : 0U)))))));
}

VL_INLINE_OPT void VMIPS32SOC_MIPS32SOC::_sequent__TOP__MIPS32SOC__3(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VMIPS32SOC_MIPS32SOC::_sequent__TOP__MIPS32SOC__3\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/MillisCounter.v:25
    vlSymsp->TOP__MIPS32SOC.__PVT__millisCounter__DOT__ms_count 
	= 
    // $c function at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/MillisCounter.v:26
millis()    
    ;
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/ClockGenerator.v:39
    vlSymsp->TOP__MIPS32SOC.__PVT__slowClk = (1U & 
					      (~ (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__slowClk)));
}

VL_INLINE_OPT void VMIPS32SOC_MIPS32SOC::_sequent__TOP__MIPS32SOC__4(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VMIPS32SOC_MIPS32SOC::_sequent__TOP__MIPS32SOC__4\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__MIPS32SOC.__Vdly__PC = vlSymsp->TOP__MIPS32SOC.PC;
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/MIPS32SOC.v:183
    vlSymsp->TOP__MIPS32SOC.__Vdly__PC = ((((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___invalidAddress) 
					    | (IData)(vlSymsp->TOP__MIPS32SOC.invalidOpcode)) 
					   | (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__pcDec__DOT___invalidPC))
					   ? vlSymsp->TOP__MIPS32SOC.PC
					   : vlSymsp->TOP__MIPS32SOC.__PVT__nextPC2);
}

VL_INLINE_OPT void VMIPS32SOC_MIPS32SOC::_sequent__TOP__MIPS32SOC__5(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VMIPS32SOC_MIPS32SOC::_sequent__TOP__MIPS32SOC__5\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__MIPS32SOC.PC = vlSymsp->TOP__MIPS32SOC.__Vdly__PC;
    vlSymsp->TOP__MIPS32SOC.inst = vlSymsp->TOP__MIPS32SOC__instMem.__PVT__rdata;
    vlSymsp->TOP__MIPS32SOC.rd = (0x1fU & (vlSymsp->TOP__MIPS32SOC.inst 
					   >> 0xbU));
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/ControlUnit.v:26
    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteEnable = 0U;
    if ((0x80000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			  >> 0x1dU)))) {
		if ((0x10000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				  >> 0x1bU)))) {
			vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteEnable = 1U;
		    }
		} else {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteEnable = 1U;
			}
		    } else {
			vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteEnable = 1U;
		    }
		}
	    }
	}
    } else {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((0x20000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteEnable = 1U;
	    } else {
		if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			      >> 0x1cU)))) {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteEnable = 1U;
			}
		    } else {
			if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				      >> 0x1aU)))) {
			    if ((0x20U & vlSymsp->TOP__MIPS32SOC.inst)) {
				if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
					      >> 4U)))) {
				    if ((8U & vlSymsp->TOP__MIPS32SOC.inst)) {
					if ((1U & (~ 
						   (vlSymsp->TOP__MIPS32SOC.inst 
						    >> 2U)))) {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteEnable = 1U;
					    }
					}
				    } else {
					if ((4U & vlSymsp->TOP__MIPS32SOC.inst)) {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						if (
						    (1U 
						     & (~ vlSymsp->TOP__MIPS32SOC.inst))) {
						    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteEnable = 1U;
						}
					    } else {
						vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteEnable = 1U;
					    }
					} else {
					    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteEnable = 1U;
					}
				    }
				}
			    } else {
				if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
					      >> 4U)))) {
				    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
						  >> 3U)))) {
					if ((4U & vlSymsp->TOP__MIPS32SOC.inst)) {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteEnable = 1U;
					    } else {
						if (
						    (1U 
						     & (~ vlSymsp->TOP__MIPS32SOC.inst))) {
						    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteEnable = 1U;
						}
					    }
					} else {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteEnable = 1U;
					    } else {
						if (
						    (1U 
						     & (~ vlSymsp->TOP__MIPS32SOC.inst))) {
						    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteEnable = 1U;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/ControlUnit.v:26
    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteDataSel = 0U;
    if ((0x80000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			  >> 0x1dU)))) {
		if ((0x10000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				  >> 0x1bU)))) {
			vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteDataSel = 1U;
		    }
		} else {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteDataSel = 1U;
			}
		    } else {
			vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteDataSel = 1U;
		    }
		}
	    }
	}
    } else {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((0x20000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteDataSel 
		    = ((0x10000000U & vlSymsp->TOP__MIPS32SOC.inst)
		        ? ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)
			    ? ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)
			        ? 2U : 0U) : 0U) : 0U);
	    } else {
		if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			      >> 0x1cU)))) {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteDataSel = 3U;
			}
		    } else {
			if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				      >> 0x1aU)))) {
			    if ((0x20U & vlSymsp->TOP__MIPS32SOC.inst)) {
				if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
					      >> 4U)))) {
				    if ((8U & vlSymsp->TOP__MIPS32SOC.inst)) {
					if ((1U & (~ 
						   (vlSymsp->TOP__MIPS32SOC.inst 
						    >> 2U)))) {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteDataSel = 0U;
					    }
					}
				    } else {
					if ((4U & vlSymsp->TOP__MIPS32SOC.inst)) {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						if (
						    (1U 
						     & (~ vlSymsp->TOP__MIPS32SOC.inst))) {
						    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteDataSel = 0U;
						}
					    } else {
						vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteDataSel = 0U;
					    }
					} else {
					    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteDataSel = 0U;
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/ControlUnit.v:26
    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteAddrSel = 0U;
    if ((0x80000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((0x20000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			      >> 0x1cU)))) {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteAddrSel = 0U;
			}
		    }
		}
	    } else {
		if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			      >> 0x1cU)))) {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteAddrSel = 0U;
			}
		    }
		}
	    }
	}
    } else {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((0x20000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteAddrSel = 0U;
	    } else {
		if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			      >> 0x1cU)))) {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteAddrSel = 2U;
			}
		    } else {
			if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				      >> 0x1aU)))) {
			    if ((0x20U & vlSymsp->TOP__MIPS32SOC.inst)) {
				if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
					      >> 4U)))) {
				    if ((8U & vlSymsp->TOP__MIPS32SOC.inst)) {
					if ((1U & (~ 
						   (vlSymsp->TOP__MIPS32SOC.inst 
						    >> 2U)))) {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteAddrSel = 1U;
					    }
					}
				    } else {
					if ((4U & vlSymsp->TOP__MIPS32SOC.inst)) {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						if (
						    (1U 
						     & (~ vlSymsp->TOP__MIPS32SOC.inst))) {
						    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteAddrSel = 1U;
						}
					    } else {
						vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteAddrSel = 1U;
					    }
					} else {
					    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteAddrSel = 1U;
					}
				    }
				}
			    } else {
				if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
					      >> 4U)))) {
				    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
						  >> 3U)))) {
					if ((4U & vlSymsp->TOP__MIPS32SOC.inst)) {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteAddrSel = 1U;
					    } else {
						if (
						    (1U 
						     & (~ vlSymsp->TOP__MIPS32SOC.inst))) {
						    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteAddrSel = 1U;
						}
					    }
					} else {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteAddrSel = 1U;
					    } else {
						if (
						    (1U 
						     & (~ vlSymsp->TOP__MIPS32SOC.inst))) {
						    vlSymsp->TOP__MIPS32SOC.__PVT__rfWriteAddrSel = 1U;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/ControlUnit.v:26
    vlSymsp->TOP__MIPS32SOC.__PVT__memoryBitExt = 0U;
    if ((0x80000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			  >> 0x1dU)))) {
		if ((0x10000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				  >> 0x1bU)))) {
			vlSymsp->TOP__MIPS32SOC.__PVT__memoryBitExt = 1U;
		    }
		} else {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    vlSymsp->TOP__MIPS32SOC.__PVT__memoryBitExt = 0U;
			}
		    } else {
			vlSymsp->TOP__MIPS32SOC.__PVT__memoryBitExt = 0U;
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/ControlUnit.v:26
    vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize = 0U;
    if ((0x80000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((0x20000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			      >> 0x1cU)))) {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize = 0U;
			}
		    } else {
			vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize 
			    = ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)
			        ? 1U : 2U);
		    }
		}
	    } else {
		if ((0x10000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				  >> 0x1bU)))) {
			vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize 
			    = ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)
			        ? 1U : 2U);
		    }
		} else {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize = 0U;
			}
		    } else {
			vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize 
			    = ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)
			        ? 1U : 2U);
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/ControlUnit.v:26
    vlSymsp->TOP__MIPS32SOC.__PVT__isJal = 0U;
    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst >> 0x1fU)))) {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			  >> 0x1dU)))) {
		if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			      >> 0x1cU)))) {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    vlSymsp->TOP__MIPS32SOC.__PVT__isJal = 1U;
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/ControlUnit.v:26
    vlSymsp->TOP__MIPS32SOC.isJmp = 0U;
    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst >> 0x1fU)))) {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			  >> 0x1dU)))) {
		if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			      >> 0x1cU)))) {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				      >> 0x1aU)))) {
			    vlSymsp->TOP__MIPS32SOC.isJmp = 1U;
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/ControlUnit.v:26
    vlSymsp->TOP__MIPS32SOC.__PVT__isJr = 0U;
    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst >> 0x1fU)))) {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			  >> 0x1dU)))) {
		if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			      >> 0x1cU)))) {
		    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				  >> 0x1bU)))) {
			if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				      >> 0x1aU)))) {
			    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
					  >> 5U)))) {
				if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
					      >> 4U)))) {
				    if ((8U & vlSymsp->TOP__MIPS32SOC.inst)) {
					if ((1U & (~ 
						   (vlSymsp->TOP__MIPS32SOC.inst 
						    >> 2U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__MIPS32SOC.inst 
						     >> 1U)))) {
						if (
						    (1U 
						     & (~ vlSymsp->TOP__MIPS32SOC.inst))) {
						    vlSymsp->TOP__MIPS32SOC.__PVT__isJr = 1U;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/ControlUnit.v:26
    vlSymsp->TOP__MIPS32SOC.__PVT__memRead = 0U;
    if ((0x80000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			  >> 0x1dU)))) {
		if ((0x10000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				  >> 0x1bU)))) {
			vlSymsp->TOP__MIPS32SOC.__PVT__memRead = 1U;
		    }
		} else {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    vlSymsp->TOP__MIPS32SOC.__PVT__memRead = 1U;
			}
		    } else {
			vlSymsp->TOP__MIPS32SOC.__PVT__memRead = 1U;
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/ControlUnit.v:26
    vlSymsp->TOP__MIPS32SOC.memWrite = 0U;
    if ((0x80000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((0x20000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			      >> 0x1cU)))) {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    vlSymsp->TOP__MIPS32SOC.memWrite = 1U;
			}
		    } else {
			vlSymsp->TOP__MIPS32SOC.memWrite = 1U;
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/ControlUnit.v:26
    vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand1_source = 0U;
    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst >> 0x1fU)))) {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			  >> 0x1dU)))) {
		if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			      >> 0x1cU)))) {
		    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				  >> 0x1bU)))) {
			if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				      >> 0x1aU)))) {
			    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
					  >> 5U)))) {
				if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
					      >> 4U)))) {
				    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
						  >> 3U)))) {
					if ((4U & vlSymsp->TOP__MIPS32SOC.inst)) {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand1_source = 1U;
					    } else {
						if (
						    (1U 
						     & (~ vlSymsp->TOP__MIPS32SOC.inst))) {
						    vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand1_source = 1U;
						}
					    }
					} else {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand1_source = 1U;
					    } else {
						if (
						    (1U 
						     & (~ vlSymsp->TOP__MIPS32SOC.inst))) {
						    vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand1_source = 1U;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/ControlUnit.v:26
    vlSymsp->TOP__MIPS32SOC.__PVT__aluSrc = 0U;
    if ((0x80000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((0x20000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			      >> 0x1cU)))) {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    vlSymsp->TOP__MIPS32SOC.__PVT__aluSrc = 1U;
			}
		    } else {
			vlSymsp->TOP__MIPS32SOC.__PVT__aluSrc = 1U;
		    }
		}
	    } else {
		if ((0x10000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				  >> 0x1bU)))) {
			vlSymsp->TOP__MIPS32SOC.__PVT__aluSrc = 1U;
		    }
		} else {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    vlSymsp->TOP__MIPS32SOC.__PVT__aluSrc = 1U;
			}
		    } else {
			vlSymsp->TOP__MIPS32SOC.__PVT__aluSrc = 1U;
		    }
		}
	    }
	}
    } else {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((0x20000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		vlSymsp->TOP__MIPS32SOC.__PVT__aluSrc = 1U;
	    } else {
		if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			      >> 0x1cU)))) {
		    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				  >> 0x1bU)))) {
			if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				      >> 0x1aU)))) {
			    if ((0x20U & vlSymsp->TOP__MIPS32SOC.inst)) {
				if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
					      >> 4U)))) {
				    if ((8U & vlSymsp->TOP__MIPS32SOC.inst)) {
					if ((1U & (~ 
						   (vlSymsp->TOP__MIPS32SOC.inst 
						    >> 2U)))) {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						vlSymsp->TOP__MIPS32SOC.__PVT__aluSrc = 0U;
					    }
					}
				    } else {
					if ((4U & vlSymsp->TOP__MIPS32SOC.inst)) {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						if (
						    (1U 
						     & (~ vlSymsp->TOP__MIPS32SOC.inst))) {
						    vlSymsp->TOP__MIPS32SOC.__PVT__aluSrc = 0U;
						}
					    } else {
						vlSymsp->TOP__MIPS32SOC.__PVT__aluSrc = 0U;
					    }
					} else {
					    vlSymsp->TOP__MIPS32SOC.__PVT__aluSrc = 0U;
					}
				    }
				}
			    } else {
				if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
					      >> 4U)))) {
				    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
						  >> 3U)))) {
					if ((4U & vlSymsp->TOP__MIPS32SOC.inst)) {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						vlSymsp->TOP__MIPS32SOC.__PVT__aluSrc = 2U;
					    } else {
						if (
						    (1U 
						     & (~ vlSymsp->TOP__MIPS32SOC.inst))) {
						    vlSymsp->TOP__MIPS32SOC.__PVT__aluSrc = 2U;
						}
					    }
					} else {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						vlSymsp->TOP__MIPS32SOC.__PVT__aluSrc = 3U;
					    } else {
						if (
						    (1U 
						     & (~ vlSymsp->TOP__MIPS32SOC.inst))) {
						    vlSymsp->TOP__MIPS32SOC.__PVT__aluSrc = 3U;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/ControlUnit.v:26
    vlSymsp->TOP__MIPS32SOC.__PVT__bitXtend = 0U;
    if ((0x80000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((0x20000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			      >> 0x1cU)))) {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    vlSymsp->TOP__MIPS32SOC.__PVT__bitXtend = 0U;
			}
		    }
		}
	    } else {
		if ((0x10000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				  >> 0x1bU)))) {
			vlSymsp->TOP__MIPS32SOC.__PVT__bitXtend = 1U;
		    }
		} else {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    vlSymsp->TOP__MIPS32SOC.__PVT__bitXtend = 0U;
			}
		    } else {
			vlSymsp->TOP__MIPS32SOC.__PVT__bitXtend = 0U;
		    }
		}
	    }
	}
    } else {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((0x20000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		vlSymsp->TOP__MIPS32SOC.__PVT__bitXtend 
		    = (1U & (vlSymsp->TOP__MIPS32SOC.inst 
			     >> 0x1cU));
	    } else {
		if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			      >> 0x1cU)))) {
		    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				  >> 0x1bU)))) {
			if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				      >> 0x1aU)))) {
			    if ((0x20U & vlSymsp->TOP__MIPS32SOC.inst)) {
				if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
					      >> 4U)))) {
				    if ((8U & vlSymsp->TOP__MIPS32SOC.inst)) {
					if ((1U & (~ 
						   (vlSymsp->TOP__MIPS32SOC.inst 
						    >> 2U)))) {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						if (
						    (1U 
						     & vlSymsp->TOP__MIPS32SOC.inst)) {
						    vlSymsp->TOP__MIPS32SOC.__PVT__bitXtend = 1U;
						}
					    }
					}
				    } else {
					if ((1U & (~ 
						   (vlSymsp->TOP__MIPS32SOC.inst 
						    >> 2U)))) {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						if (
						    (1U 
						     & vlSymsp->TOP__MIPS32SOC.inst)) {
						    vlSymsp->TOP__MIPS32SOC.__PVT__bitXtend = 1U;
						}
					    } else {
						if (
						    (1U 
						     & vlSymsp->TOP__MIPS32SOC.inst)) {
						    vlSymsp->TOP__MIPS32SOC.__PVT__bitXtend = 0U;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    vlSymsp->TOP__MIPS32SOC.rs = (0x1fU & (vlSymsp->TOP__MIPS32SOC.inst 
					   >> 0x15U));
    vlSymsp->TOP__MIPS32SOC.rt = (0x1fU & (vlSymsp->TOP__MIPS32SOC.inst 
					   >> 0x10U));
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/BitExtender.v:9
    vlSymsp->TOP__MIPS32SOC.__PVT__BitExtender_i12__DOT___out 
	= ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__bitXtend)
	    ? (0xffffU & vlSymsp->TOP__MIPS32SOC.inst)
	    : ((0xffff0000U & (VL_NEGATE_I((IData)(
						   (1U 
						    & (vlSymsp->TOP__MIPS32SOC.inst 
						       >> 0xfU)))) 
			       << 0x10U)) | (0xffffU 
					     & vlSymsp->TOP__MIPS32SOC.inst)));
    vlSymsp->TOP__MIPS32SOC.rfData1 = vlSymsp->TOP__MIPS32SOC__regFile.memory
	[vlSymsp->TOP__MIPS32SOC.rs];
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/ControlUnit.v:26
    vlSymsp->TOP__MIPS32SOC.invalidOpcode = (1U & (
						   (0x80000000U 
						    & vlSymsp->TOP__MIPS32SOC.inst)
						    ? 
						   ((vlSymsp->TOP__MIPS32SOC.inst 
						     >> 0x1eU) 
						    | ((0x20000000U 
							& vlSymsp->TOP__MIPS32SOC.inst)
						        ? 
						       ((vlSymsp->TOP__MIPS32SOC.inst 
							 >> 0x1cU) 
							| ((vlSymsp->TOP__MIPS32SOC.inst 
							    >> 0x1bU) 
							   & (~ 
							      (vlSymsp->TOP__MIPS32SOC.inst 
							       >> 0x1aU))))
						        : 
						       ((0x10000000U 
							 & vlSymsp->TOP__MIPS32SOC.inst)
							 ? 
							(vlSymsp->TOP__MIPS32SOC.inst 
							 >> 0x1bU)
							 : 
							((vlSymsp->TOP__MIPS32SOC.inst 
							  >> 0x1bU) 
							 & (~ 
							    (vlSymsp->TOP__MIPS32SOC.inst 
							     >> 0x1aU))))))
						    : 
						   ((vlSymsp->TOP__MIPS32SOC.inst 
						     >> 0x1eU) 
						    | ((~ 
							(vlSymsp->TOP__MIPS32SOC.inst 
							 >> 0x1dU)) 
						       & ((~ 
							   (vlSymsp->TOP__MIPS32SOC.inst 
							    >> 0x1cU)) 
							  & ((~ 
							      (vlSymsp->TOP__MIPS32SOC.inst 
							       >> 0x1bU)) 
							     & ((0x4000000U 
								 & vlSymsp->TOP__MIPS32SOC.inst)
								 ? 
								((1U 
								  != (IData)(vlSymsp->TOP__MIPS32SOC.rt)) 
								 & (0U 
								    != (IData)(vlSymsp->TOP__MIPS32SOC.rt)))
								 : 
								((0x20U 
								  & vlSymsp->TOP__MIPS32SOC.inst)
								  ? 
								 ((vlSymsp->TOP__MIPS32SOC.inst 
								   >> 4U) 
								  | ((8U 
								      & vlSymsp->TOP__MIPS32SOC.inst)
								      ? 
								     ((vlSymsp->TOP__MIPS32SOC.inst 
								       >> 2U) 
								      | (~ 
									 (vlSymsp->TOP__MIPS32SOC.inst 
									  >> 1U)))
								      : 
								     ((vlSymsp->TOP__MIPS32SOC.inst 
								       >> 2U) 
								      & ((vlSymsp->TOP__MIPS32SOC.inst 
									  >> 1U) 
									 & vlSymsp->TOP__MIPS32SOC.inst))))
								  : 
								 ((vlSymsp->TOP__MIPS32SOC.inst 
								   >> 4U) 
								  | ((8U 
								      & vlSymsp->TOP__MIPS32SOC.inst)
								      ? 
								     ((vlSymsp->TOP__MIPS32SOC.inst 
								       >> 2U) 
								      | ((vlSymsp->TOP__MIPS32SOC.inst 
									  >> 1U) 
									 | vlSymsp->TOP__MIPS32SOC.inst))
								      : 
								     ((4U 
								       & vlSymsp->TOP__MIPS32SOC.inst)
								       ? 
								      ((~ 
									(vlSymsp->TOP__MIPS32SOC.inst 
									 >> 1U)) 
								       & vlSymsp->TOP__MIPS32SOC.inst)
								       : 
								      ((~ 
									(vlSymsp->TOP__MIPS32SOC.inst 
									 >> 1U)) 
								       & vlSymsp->TOP__MIPS32SOC.inst))))))))))));
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/ControlUnit.v:26
    vlSymsp->TOP__MIPS32SOC.__PVT__branchType = 0U;
    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst >> 0x1fU)))) {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			  >> 0x1dU)))) {
		if ((0x10000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		    vlSymsp->TOP__MIPS32SOC.__PVT__branchType 
			= ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)
			    ? ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)
			        ? 4U : 5U) : ((0x4000000U 
					       & vlSymsp->TOP__MIPS32SOC.inst)
					       ? 2U
					       : 1U));
		} else {
		    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				  >> 0x1bU)))) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    if ((1U == (IData)(vlSymsp->TOP__MIPS32SOC.rt))) {
				vlSymsp->TOP__MIPS32SOC.__PVT__branchType = 3U;
			    } else {
				if ((0U == (IData)(vlSymsp->TOP__MIPS32SOC.rt))) {
				    vlSymsp->TOP__MIPS32SOC.__PVT__branchType = 6U;
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/ControlUnit.v:26
    vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc = 0U;
    if ((0x80000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((0x20000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
			      >> 0x1cU)))) {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc = 1U;
			}
		    } else {
			vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc = 1U;
		    }
		}
	    } else {
		if ((0x10000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				  >> 0x1bU)))) {
			vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc = 1U;
		    }
		} else {
		    if ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc = 1U;
			}
		    } else {
			vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc = 1U;
		    }
		}
	    }
	}
    } else {
	if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
		      >> 0x1eU)))) {
	    if ((0x20000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc 
		    = ((0x10000000U & vlSymsp->TOP__MIPS32SOC.inst)
		        ? ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)
			    ? ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)
			        ? 1U : 6U) : ((0x4000000U 
					       & vlSymsp->TOP__MIPS32SOC.inst)
					       ? 4U
					       : 3U))
		        : ((0x8000000U & vlSymsp->TOP__MIPS32SOC.inst)
			    ? ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)
			        ? 7U : 5U) : 1U));
	    } else {
		if ((0x10000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
		    vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc = 2U;
		} else {
		    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
				  >> 0x1bU)))) {
			if ((0x4000000U & vlSymsp->TOP__MIPS32SOC.inst)) {
			    if ((1U == (IData)(vlSymsp->TOP__MIPS32SOC.rt))) {
				vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc = 2U;
			    } else {
				if ((0U == (IData)(vlSymsp->TOP__MIPS32SOC.rt))) {
				    vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc = 2U;
				}
			    }
			} else {
			    if ((0x20U & vlSymsp->TOP__MIPS32SOC.inst)) {
				if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
					      >> 4U)))) {
				    if ((8U & vlSymsp->TOP__MIPS32SOC.inst)) {
					if ((1U & (~ 
						   (vlSymsp->TOP__MIPS32SOC.inst 
						    >> 2U)))) {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc 
						    = 
						    ((1U 
						      & vlSymsp->TOP__MIPS32SOC.inst)
						      ? 7U
						      : 5U);
					    }
					}
				    } else {
					if ((4U & vlSymsp->TOP__MIPS32SOC.inst)) {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						if (
						    (1U 
						     & (~ vlSymsp->TOP__MIPS32SOC.inst))) {
						    vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc = 6U;
						}
					    } else {
						vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc 
						    = 
						    ((1U 
						      & vlSymsp->TOP__MIPS32SOC.inst)
						      ? 4U
						      : 3U);
					    }
					} else {
					    vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc 
						= (
						   (2U 
						    & vlSymsp->TOP__MIPS32SOC.inst)
						    ? 2U
						    : 1U);
					}
				    }
				}
			    } else {
				if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
					      >> 4U)))) {
				    if ((1U & (~ (vlSymsp->TOP__MIPS32SOC.inst 
						  >> 3U)))) {
					if ((4U & vlSymsp->TOP__MIPS32SOC.inst)) {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc 
						    = 
						    ((1U 
						      & vlSymsp->TOP__MIPS32SOC.inst)
						      ? 0xaU
						      : 9U);
					    } else {
						if (
						    (1U 
						     & (~ vlSymsp->TOP__MIPS32SOC.inst))) {
						    vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc = 8U;
						}
					    }
					} else {
					    if ((2U 
						 & vlSymsp->TOP__MIPS32SOC.inst)) {
						vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc 
						    = 
						    ((1U 
						      & vlSymsp->TOP__MIPS32SOC.inst)
						      ? 0xaU
						      : 9U);
					    } else {
						if (
						    (1U 
						     & (~ vlSymsp->TOP__MIPS32SOC.inst))) {
						    vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc = 8U;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    vlSymsp->TOP__MIPS32SOC.rfData2 = vlSymsp->TOP__MIPS32SOC__regFile.memory
	[vlSymsp->TOP__MIPS32SOC.rt];
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/MIPS32SOC.v:141
    vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand1 = ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand1_source)
						   ? 
						  ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand1_source)
						    ? vlSymsp->TOP__MIPS32SOC.rfData2
						    : vlSymsp->TOP__MIPS32SOC.rfData1)
						   : vlSymsp->TOP__MIPS32SOC.rfData1);
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/MIPS32SOC.v:151
    vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand2 = ((2U 
						   & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluSrc))
						   ? 
						  ((1U 
						    & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluSrc))
						    ? 
						   (0x1fU 
						    & (vlSymsp->TOP__MIPS32SOC.inst 
						       >> 6U))
						    : vlSymsp->TOP__MIPS32SOC.rfData1)
						   : 
						  ((1U 
						    & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluSrc))
						    ? vlSymsp->TOP__MIPS32SOC.__PVT__BitExtender_i12__DOT___out
						    : vlSymsp->TOP__MIPS32SOC.rfData2));
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/ALU.v:13
    vlSymsp->TOP__MIPS32SOC.aluResult = ((8U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc))
					  ? ((4U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc))
					      ? 0U : 
					     ((2U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc))
					       ? ((1U 
						   & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc))
						   ? 0U
						   : 
						  ((0x1fU 
						    >= vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand2)
						    ? 
						   VL_SHIFTRS_III(32,32,32, vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand1, vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand2)
						    : 
						   VL_NEGATE_I(
							       (vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand1 
								>> 0x1fU))))
					       : ((1U 
						   & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc))
						   ? 
						  ((0x1fU 
						    >= vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand2)
						    ? 
						   (vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand1 
						    >> vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand2)
						    : 0U)
						   : 
						  ((0x1fU 
						    >= vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand2)
						    ? 
						   (vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand1 
						    << vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand2)
						    : 0U))))
					  : ((4U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc))
					      ? ((2U 
						  & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc))
						  ? 
						 ((1U 
						   & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc))
						   ? 
						  (vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand1 
						   < vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand2)
						   : 
						  (vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand1 
						   ^ vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand2))
						  : 
						 ((1U 
						   & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc))
						   ? 
						  VL_LTS_III(32,32,32, vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand1, vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand2)
						   : 
						  (vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand1 
						   | vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand2)))
					      : ((2U 
						  & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc))
						  ? 
						 ((1U 
						   & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc))
						   ? 
						  (vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand1 
						   & vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand2)
						   : 
						  (vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand1 
						   - vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand2))
						  : 
						 ((1U 
						   & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc))
						   ? 
						  (vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand1 
						   + vlSymsp->TOP__MIPS32SOC.__PVT__aluOperand2)
						   : 0U))));
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/MemDecoder.v:22
    vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___invalidAddress = 0U;
    if (((IData)(vlSymsp->TOP__MIPS32SOC.memWrite) 
	 | (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memRead))) {
	vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___invalidAddress 
	    = (1U & ((~ ((0x10010000U <= vlSymsp->TOP__MIPS32SOC.aluResult) 
			 & (0x10010fffU >= vlSymsp->TOP__MIPS32SOC.aluResult))) 
		     & ((~ ((0x7fffeffcU <= vlSymsp->TOP__MIPS32SOC.aluResult) 
			    & (0x7ffffffbU >= vlSymsp->TOP__MIPS32SOC.aluResult))) 
			& ((~ ((0xb800U <= vlSymsp->TOP__MIPS32SOC.aluResult) 
			       & (0xcacfU >= vlSymsp->TOP__MIPS32SOC.aluResult))) 
			   & (~ ((0xffff0000U <= vlSymsp->TOP__MIPS32SOC.aluResult) 
				 & (0xffff000cU >= vlSymsp->TOP__MIPS32SOC.aluResult)))))));
    }
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/MemDecoder.v:22
    vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___memBank = 0U;
    if (((IData)(vlSymsp->TOP__MIPS32SOC.memWrite) 
	 | (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memRead))) {
	vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___memBank 
	    = (((0x10010000U <= vlSymsp->TOP__MIPS32SOC.aluResult) 
		& (0x10010fffU >= vlSymsp->TOP__MIPS32SOC.aluResult))
	        ? 0U : (((0x7fffeffcU <= vlSymsp->TOP__MIPS32SOC.aluResult) 
			 & (0x7ffffffbU >= vlSymsp->TOP__MIPS32SOC.aluResult))
			 ? 0U : (((0xb800U <= vlSymsp->TOP__MIPS32SOC.aluResult) 
				  & (0xcacfU >= vlSymsp->TOP__MIPS32SOC.aluResult))
				  ? 1U : (((0xffff0000U 
					    <= vlSymsp->TOP__MIPS32SOC.aluResult) 
					   & (0xffff000cU 
					      >= vlSymsp->TOP__MIPS32SOC.aluResult))
					   ? 2U : 0U))));
    }
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/MemDecoder.v:22
    if (((IData)(vlSymsp->TOP__MIPS32SOC.memWrite) 
	 | (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memRead))) {
	if (((0x10010000U <= vlSymsp->TOP__MIPS32SOC.aluResult) 
	     & (0x10010fffU >= vlSymsp->TOP__MIPS32SOC.aluResult))) {
	    vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT__temp 
		= (vlSymsp->TOP__MIPS32SOC.aluResult 
		   - (IData)(0x10010000U));
	    vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress 
		= (0x1fffU & vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT__temp);
	} else {
	    if (((0x7fffeffcU <= vlSymsp->TOP__MIPS32SOC.aluResult) 
		 & (0x7ffffffbU >= vlSymsp->TOP__MIPS32SOC.aluResult))) {
		vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT__temp 
		    = (vlSymsp->TOP__MIPS32SOC.aluResult 
		       - (IData)(0x7fffeffcU));
		vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress 
		    = (0x1fffU & vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT__temp);
	    } else {
		if (((0xb800U <= vlSymsp->TOP__MIPS32SOC.aluResult) 
		     & (0xcacfU >= vlSymsp->TOP__MIPS32SOC.aluResult))) {
		    vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT__temp 
			= (vlSymsp->TOP__MIPS32SOC.aluResult 
			   - (IData)(0xb800U));
		    vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress 
			= (0x1fffU & vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT__temp);
		} else {
		    if (((0xffff0000U <= vlSymsp->TOP__MIPS32SOC.aluResult) 
			 & (0xffff000cU >= vlSymsp->TOP__MIPS32SOC.aluResult))) {
			vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT__temp 
			    = (vlSymsp->TOP__MIPS32SOC.aluResult 
			       - (IData)(0xffff0000U));
			vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress 
			    = (0x1fffU & vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT__temp);
		    } else {
			vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress = 0U;
		    }
		}
	    }
	}
    }
    vlSymsp->TOP__MIPS32SOC.isZero = (0U == vlSymsp->TOP__MIPS32SOC.aluResult);
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/MemDecoder.v:22
    vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___memEn = 0U;
    if (((IData)(vlSymsp->TOP__MIPS32SOC.memWrite) 
	 | (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memRead))) {
	vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___memEn 
	    = (((0x10010000U <= vlSymsp->TOP__MIPS32SOC.aluResult) 
		& (0x10010fffU >= vlSymsp->TOP__MIPS32SOC.aluResult))
	        ? 1U : (((0x7fffeffcU <= vlSymsp->TOP__MIPS32SOC.aluResult) 
			 & (0x7ffffffbU >= vlSymsp->TOP__MIPS32SOC.aluResult))
			 ? 1U : (((0xb800U <= vlSymsp->TOP__MIPS32SOC.aluResult) 
				  & (0xcacfU >= vlSymsp->TOP__MIPS32SOC.aluResult))
				  ? 2U : (((0xffff0000U 
					    <= vlSymsp->TOP__MIPS32SOC.aluResult) 
					   & (0xffff000cU 
					      >= vlSymsp->TOP__MIPS32SOC.aluResult))
					   ? 4U : 0U))));
    }
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/MemWriteDataEncoder.v:16
    vlSymsp->TOP__MIPS32SOC.__PVT__memWriteDataEncoder__DOT___encMW 
	= ((IData)(vlSymsp->TOP__MIPS32SOC.memWrite)
	    ? ((0U == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize))
	        ? 0xfU : (((1U == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize)) 
			   & (0U == (3U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress))))
			   ? 3U : (((1U == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize)) 
				    & (2U == (3U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress))))
				    ? 0xcU : (((2U 
						== (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize)) 
					       & (0U 
						  == 
						  (3U 
						   & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress))))
					       ? 1U
					       : ((
						   (2U 
						    == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize)) 
						   & (1U 
						      == 
						      (3U 
						       & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress))))
						   ? 2U
						   : 
						  (((2U 
						     == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize)) 
						    & (2U 
						       == 
						       (3U 
							& (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress))))
						    ? 4U
						    : 
						   (((2U 
						      == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize)) 
						     & (3U 
							== 
							(3U 
							 & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress))))
						     ? 8U
						     : 0U)))))))
	    : 0U);
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/MemWriteDataEncoder.v:16
    vlSymsp->TOP__MIPS32SOC.__PVT__memWriteDataEncoder__DOT___outData 
	= ((IData)(vlSymsp->TOP__MIPS32SOC.memWrite)
	    ? ((0U == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize))
	        ? vlSymsp->TOP__MIPS32SOC.rfData2 : 
	       (((1U == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize)) 
		 & (0U == (3U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress))))
		 ? (0xffff0000U & (vlSymsp->TOP__MIPS32SOC.rfData2 
				   << 0x10U)) : (((1U 
						   == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize)) 
						  & (2U 
						     == 
						     (3U 
						      & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress))))
						  ? 
						 (0xffffU 
						  & vlSymsp->TOP__MIPS32SOC.rfData2)
						  : 
						 (((2U 
						    == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize)) 
						   & (0U 
						      == 
						      (3U 
						       & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress))))
						   ? 
						  (0xff000000U 
						   & (vlSymsp->TOP__MIPS32SOC.rfData2 
						      << 0x18U))
						   : 
						  (((2U 
						     == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize)) 
						    & (1U 
						       == 
						       (3U 
							& (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress))))
						    ? 
						   (0xff0000U 
						    & (vlSymsp->TOP__MIPS32SOC.rfData2 
						       << 0x10U))
						    : 
						   (((2U 
						      == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize)) 
						     & (2U 
							== 
							(3U 
							 & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress))))
						     ? 
						    (0xff00U 
						     & (vlSymsp->TOP__MIPS32SOC.rfData2 
							<< 8U))
						     : 
						    (((2U 
						       == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize)) 
						      & (3U 
							 == 
							 (3U 
							  & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress))))
						      ? 
						     (0xffU 
						      & vlSymsp->TOP__MIPS32SOC.rfData2)
						      : 0U)))))))
	    : 0U);
    vlSymsp->TOP__MIPS32SOC.memEn = vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___memEn;
}

VL_INLINE_OPT void VMIPS32SOC_MIPS32SOC::_combo__TOP__MIPS32SOC__6(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VMIPS32SOC_MIPS32SOC::_combo__TOP__MIPS32SOC__6\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/MIPS32SOC.v:173
    vlSymsp->TOP__MIPS32SOC.__PVT__nextPC2 = ((IData)(vlTOPp->resetIn)
					       ? 0x400000U
					       : (((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__isJal) 
						   | (IData)(vlSymsp->TOP__MIPS32SOC.isJmp))
						   ? 
						  ((0xf0000000U 
						    & ((IData)(4U) 
						       + vlSymsp->TOP__MIPS32SOC.PC)) 
						   | (0xffffffcU 
						      & (vlSymsp->TOP__MIPS32SOC.inst 
							 << 2U)))
						   : 
						  ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__isJr)
						    ? vlSymsp->TOP__MIPS32SOC.rfData1
						    : 
						   ((((1U 
						       == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__branchType)) 
						      & (IData)(vlSymsp->TOP__MIPS32SOC.isZero)) 
						     | (((2U 
							  == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__branchType)) 
							 & (~ (IData)(vlSymsp->TOP__MIPS32SOC.isZero))) 
							| (((3U 
							     == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__branchType)) 
							    & (~ 
							       (vlSymsp->TOP__MIPS32SOC.aluResult 
								>> 0x1fU))) 
							   | (((4U 
								== (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__branchType)) 
							       & ((~ 
								   (vlSymsp->TOP__MIPS32SOC.aluResult 
								    >> 0x1fU)) 
								  & (~ (IData)(vlSymsp->TOP__MIPS32SOC.isZero)))) 
							      | (((5U 
								   == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__branchType)) 
								  & ((vlSymsp->TOP__MIPS32SOC.aluResult 
								      >> 0x1fU) 
								     | (IData)(vlSymsp->TOP__MIPS32SOC.isZero))) 
								 | ((6U 
								     == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__branchType)) 
								    & (vlSymsp->TOP__MIPS32SOC.aluResult 
								       >> 0x1fU)))))))
						     ? 
						    ((IData)(4U) 
						     + 
						     (vlSymsp->TOP__MIPS32SOC.PC 
						      + 
						      (0xfffffffcU 
						       & (vlSymsp->TOP__MIPS32SOC.__PVT__BitExtender_i12__DOT___out 
							  << 2U))))
						     : 
						    ((IData)(4U) 
						     + vlSymsp->TOP__MIPS32SOC.PC)))));
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/MIPS32SOC.v:130
    vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder 
	= ((0U == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___memBank))
	    ? vlSymsp->TOP__MIPS32SOC__dataMem.__PVT__rdata
	    : ((1U == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___memBank))
	        ? vlSymsp->TOP__MIPS32SOC__vgaTextCard__frameBuff.__PVT__rda
	        : ((2U == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___memBank))
		    ? ((4U & (IData)(vlSymsp->TOP__MIPS32SOC.memEn))
		        ? ((1U == (0x7ffU & ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress) 
					     >> 2U)))
			    ? ((IData)(vlTOPp->keypadIn) 
			       << 0x18U) : ((2U == 
					     (0x7ffU 
					      & ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress) 
						 >> 2U)))
					     ? vlSymsp->TOP__MIPS32SOC.__PVT__millisCounter__DOT__ms_count
					     : 0U))
		        : 0U) : 0U)));
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/PCDecoder.v:13
    if (((0x400000U <= vlSymsp->TOP__MIPS32SOC.__PVT__nextPC2) 
	 & (0x401fffU >= vlSymsp->TOP__MIPS32SOC.__PVT__nextPC2))) {
	vlSymsp->TOP__MIPS32SOC.__PVT__pcDec__DOT__temp 
	    = (vlSymsp->TOP__MIPS32SOC.__PVT__nextPC2 
	       - (IData)(0x400000U));
	vlSymsp->TOP__MIPS32SOC.__PVT__pcDec__DOT___physicalPC 
	    = (0x1fffU & vlSymsp->TOP__MIPS32SOC.__PVT__pcDec__DOT__temp);
    }
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/PCDecoder.v:13
    vlSymsp->TOP__MIPS32SOC.__PVT__pcDec__DOT___invalidPC 
	= (1U & (~ ((0x400000U <= vlSymsp->TOP__MIPS32SOC.__PVT__nextPC2) 
		    & (0x401fffU >= vlSymsp->TOP__MIPS32SOC.__PVT__nextPC2))));
    // ALWAYS at /home/carlos_villa/GitHub/MIPS32SOC_P52019/cpp/sim/../../MIPS32SOC-ParteFinal/verilog/cpu/MemReadDataDecoder.v:12
    vlSymsp->TOP__MIPS32SOC.__PVT__memReadDataDecoder__DOT___outData 
	= ((0U == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize))
	    ? vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder
	    : (((1U == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize)) 
		& (0U == (3U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress))))
	        ? ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryBitExt)
		    ? (0xffffU & (vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder 
				  >> 0x10U)) : ((0xffff0000U 
						 & (VL_NEGATE_I((IData)(
									(1U 
									 & (vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder 
									    >> 0x1fU)))) 
						    << 0x10U)) 
						| (0xffffU 
						   & (vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder 
						      >> 0x10U))))
	        : (((1U == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize)) 
		    & (2U == (3U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress))))
		    ? ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryBitExt)
		        ? (0xffffU & vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder)
		        : ((0xffff0000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder 
								   >> 0xfU)))) 
					   << 0x10U)) 
			   | (0xffffU & vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder)))
		    : (((2U == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize)) 
			& (0U == (3U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress))))
		        ? ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryBitExt)
			    ? (0xffU & (vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder 
					>> 0x18U)) : 
			   ((0xffffff00U & (VL_NEGATE_I((IData)(
								(1U 
								 & (vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder 
								    >> 0x1fU)))) 
					    << 8U)) 
			    | (0xffU & (vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder 
					>> 0x18U))))
		        : (((2U == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize)) 
			    & (1U == (3U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress))))
			    ? ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryBitExt)
			        ? (0xffU & (vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder 
					    >> 0x10U))
			        : ((0xffffff00U & (
						   VL_NEGATE_I((IData)(
								       (1U 
									& (vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder 
									   >> 0x17U)))) 
						   << 8U)) 
				   | (0xffU & (vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder 
					       >> 0x10U))))
			    : (((2U == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize)) 
				& (2U == (3U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress))))
			        ? ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryBitExt)
				    ? (0xffU & (vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder 
						>> 8U))
				    : ((0xffffff00U 
					& (VL_NEGATE_I((IData)(
							       (1U 
								& (vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder 
								   >> 0xfU)))) 
					   << 8U)) 
				       | (0xffU & (vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder 
						   >> 8U))))
			        : (((2U == (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryDataSize)) 
				    & (3U == (3U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memDec__DOT___physicalAddress))))
				    ? ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__memoryBitExt)
				        ? (0xffU & vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder)
				        : ((0xffffff00U 
					    & (VL_NEGATE_I((IData)(
								   (1U 
								    & (vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder 
								       >> 7U)))) 
					       << 8U)) 
					   | (0xffU 
					      & vlSymsp->TOP__MIPS32SOC.__PVT__inData_memRDDecoder)))
				    : 0U)))))));
}

void VMIPS32SOC_MIPS32SOC::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VMIPS32SOC_MIPS32SOC::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    resetIn = VL_RAND_RESET_I(1);
    keypadIn = VL_RAND_RESET_I(8);
    red = VL_RAND_RESET_I(3);
    green = VL_RAND_RESET_I(3);
    blue = VL_RAND_RESET_I(2);
    hsync = VL_RAND_RESET_I(1);
    vsync = VL_RAND_RESET_I(1);
    invalidAddr = VL_RAND_RESET_I(1);
    invalidOpcode = VL_RAND_RESET_I(1);
    invalidPC = VL_RAND_RESET_I(1);
    inst = VL_RAND_RESET_I(32);
    PC = VL_RAND_RESET_I(32);
    rd = VL_RAND_RESET_I(5);
    rt = VL_RAND_RESET_I(5);
    rs = VL_RAND_RESET_I(5);
    __PVT__aluSrc = VL_RAND_RESET_I(2);
    __PVT__rfWriteEnable = VL_RAND_RESET_I(1);
    __PVT__rfWriteAddrSel = VL_RAND_RESET_I(2);
    __PVT__rfWriteDataSel = VL_RAND_RESET_I(2);
    rfData1 = VL_RAND_RESET_I(32);
    rfData2 = VL_RAND_RESET_I(32);
    memWrite = VL_RAND_RESET_I(1);
    __PVT__memRead = VL_RAND_RESET_I(1);
    __PVT__aluFunc = VL_RAND_RESET_I(4);
    __PVT__aluOperand2 = VL_RAND_RESET_I(32);
    __PVT__aluOperand1 = VL_RAND_RESET_I(32);
    aluResult = VL_RAND_RESET_I(32);
    isJmp = VL_RAND_RESET_I(1);
    isBeq = VL_RAND_RESET_I(1);
    isBne = VL_RAND_RESET_I(1);
    isZero = VL_RAND_RESET_I(1);
    __PVT__bitXtend = VL_RAND_RESET_I(1);
    memEn = VL_RAND_RESET_I(3);
    __PVT__memoryDataSize = VL_RAND_RESET_I(2);
    __PVT__memoryBitExt = VL_RAND_RESET_I(1);
    __PVT__inData_memRDDecoder = VL_RAND_RESET_I(32);
    __PVT__branchType = VL_RAND_RESET_I(3);
    __PVT__aluOperand1_source = VL_RAND_RESET_I(1);
    __PVT__isJal = VL_RAND_RESET_I(1);
    __PVT__isJr = VL_RAND_RESET_I(1);
    __PVT__slowClk = VL_RAND_RESET_I(1);
    __PVT__nextPC2 = VL_RAND_RESET_I(32);
    __PVT__millisCounter__DOT__ms_count = VL_RAND_RESET_I(32);
    __PVT__pcDec__DOT___physicalPC = VL_RAND_RESET_I(13);
    __PVT__pcDec__DOT___invalidPC = VL_RAND_RESET_I(1);
    __PVT__pcDec__DOT__temp = VL_RAND_RESET_I(32);
    __PVT__memDec__DOT___physicalAddress = VL_RAND_RESET_I(13);
    __PVT__memDec__DOT___invalidAddress = VL_RAND_RESET_I(1);
    __PVT__memDec__DOT__temp = VL_RAND_RESET_I(32);
    __PVT__memDec__DOT___memEn = VL_RAND_RESET_I(3);
    __PVT__memDec__DOT___memBank = VL_RAND_RESET_I(2);
    __PVT__memWriteDataEncoder__DOT___outData = VL_RAND_RESET_I(32);
    __PVT__memWriteDataEncoder__DOT___encMW = VL_RAND_RESET_I(4);
    __PVT__memReadDataDecoder__DOT___outData = VL_RAND_RESET_I(32);
    __PVT__BitExtender_i12__DOT___out = VL_RAND_RESET_I(32);
    __Vdly__PC = VL_RAND_RESET_I(32);
}
