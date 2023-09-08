// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcount.h for the primary calling header

#include "verilated.h"

#include "Vcount__Syms.h"
#include "Vcount__Syms.h"
#include "Vcount___024root.h"

void Vcount___024root___ctor_var_reset(Vcount___024root* vlSelf);

Vcount___024root::Vcount___024root(Vcount__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcount___024root___ctor_var_reset(this);
}

void Vcount___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vcount___024root::~Vcount___024root() {
}
