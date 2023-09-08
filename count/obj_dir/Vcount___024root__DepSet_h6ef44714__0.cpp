// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcount.h for the primary calling header

#include "verilated.h"

#include "Vcount__Syms.h"
#include "Vcount___024root.h"

void Vcount___024root___eval_act(Vcount___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcount__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcount___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vcount___024root___nba_sequent__TOP__0(Vcount___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcount__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcount___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__count__DOT__cnt;
    __Vdly__count__DOT__cnt = 0;
    // Body
    __Vdly__count__DOT__cnt = vlSelf->count__DOT__cnt;
    if (vlSelf->rst_n) {
        if ((0x64U == (IData)(vlSelf->count__DOT__cnt))) {
            __Vdly__count__DOT__cnt = 0U;
            vlSelf->flag_100 = 1U;
        } else {
            __Vdly__count__DOT__cnt = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelf->count__DOT__cnt)));
            vlSelf->flag_100 = 0U;
        }
    } else {
        __Vdly__count__DOT__cnt = 0U;
        vlSelf->flag_100 = 0U;
    }
    vlSelf->count__DOT__cnt = __Vdly__count__DOT__cnt;
}

void Vcount___024root___eval_nba(Vcount___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcount__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcount___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcount___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vcount___024root___eval_triggers__act(Vcount___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcount___024root___dump_triggers__act(Vcount___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcount___024root___dump_triggers__nba(Vcount___024root* vlSelf);
#endif  // VL_DEBUG

void Vcount___024root___eval(Vcount___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcount__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcount___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vcount___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vcount___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/count.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vcount___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vcount___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/count.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vcount___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vcount___024root___eval_debug_assertions(Vcount___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcount__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcount___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG
