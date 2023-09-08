// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcount__Syms.h"


void Vcount___024root__trace_chg_sub_0(Vcount___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcount___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcount___024root__trace_chg_top_0\n"); );
    // Init
    Vcount___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcount___024root*>(voidSelf);
    Vcount__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcount___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vcount___024root__trace_chg_sub_0(Vcount___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcount__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcount___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->rst_n));
    bufp->chgBit(oldp+2,(vlSelf->flag_100));
    bufp->chgCData(oldp+3,(vlSelf->count__DOT__cnt),8);
}

void Vcount___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcount___024root__trace_cleanup\n"); );
    // Init
    Vcount___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcount___024root*>(voidSelf);
    Vcount__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
