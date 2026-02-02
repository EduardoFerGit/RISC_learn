// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.rst) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst__0))));
    vlSelfRef.__VactTriggered.setBit(2U, ((~ (IData)(vlSelfRef.clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)));
    vlSelfRef.__VactTriggered.setBit(3U, ((IData)(vlSelfRef.top__DOT__riscv__DOT__alucontrolE) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__riscv__DOT__alucontrolE__0)));
    vlSelfRef.__VactTriggered.setBit(4U, (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__srcaE 
                                          != vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__riscv__DOT__dp__DOT__srcaE__0));
    vlSelfRef.__VactTriggered.setBit(5U, (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__srcbE 
                                          != vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__riscv__DOT__dp__DOT__srcbE__0));
    vlSelfRef.__VactTriggered.setBit(6U, (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alu__DOT__y 
                                          != vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__riscv__DOT__dp__DOT__alu__DOT__y__0));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__riscv__DOT__alucontrolE__0 
        = vlSelfRef.top__DOT__riscv__DOT__alucontrolE;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__riscv__DOT__dp__DOT__srcaE__0 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__srcaE;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__riscv__DOT__dp__DOT__srcbE__0 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__srcbE;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__riscv__DOT__dp__DOT__alu__DOT__y__0 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alu__DOT__y;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(3U, 1U);
        vlSelfRef.__VactTriggered.setBit(4U, 1U);
        vlSelfRef.__VactTriggered.setBit(5U, 1U);
        vlSelfRef.__VactTriggered.setBit(6U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}
