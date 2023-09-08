// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcount.h for the primary calling header

#ifndef VERILATED_VCOUNT___024ROOT_H_
#define VERILATED_VCOUNT___024ROOT_H_  // guard

#include "verilated.h"


class Vcount__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcount___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_OUT8(flag_100,0,0);
    CData/*7:0*/ count__DOT__cnt;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcount__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcount___024root(Vcount__Syms* symsp, const char* v__name);
    ~Vcount___024root();
    VL_UNCOPYABLE(Vcount___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
