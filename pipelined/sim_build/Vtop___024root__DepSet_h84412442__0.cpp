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
    vlSelfRef.__VactTriggered.setBit(0U, (vlSelfRef.alup__02Ea 
                                          != vlSelfRef.__Vtrigprevexpr___TOP__alup__02Ea__0));
    vlSelfRef.__VactTriggered.setBit(1U, (vlSelfRef.alup__02Eb 
                                          != vlSelfRef.__Vtrigprevexpr___TOP__alup__02Eb__0));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSelfRef.f) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__f__0)));
    vlSelfRef.__VactTriggered.setBit(3U, ((IData)(vlSelfRef.dmem__02Eclk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dmem__02Eclk__0))));
    vlSelfRef.__VactTriggered.setBit(4U, ((IData)(vlSelfRef.flopenrc__02Eclk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__flopenrc__02Eclk__0))));
    vlSelfRef.__VactTriggered.setBit(5U, ((IData)(vlSelfRef.flopenrc__02Erst) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__flopenrc__02Erst__0))));
    vlSelfRef.__VactTriggered.setBit(6U, ((IData)(vlSelfRef.flopenr__02Eclk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__flopenr__02Eclk__0))));
    vlSelfRef.__VactTriggered.setBit(7U, ((IData)(vlSelfRef.flopenr__02Erst) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__flopenr__02Erst__0))));
    vlSelfRef.__VactTriggered.setBit(8U, ((IData)(vlSelfRef.floprc__02Eclk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__floprc__02Eclk__0))));
    vlSelfRef.__VactTriggered.setBit(9U, ((IData)(vlSelfRef.floprc__02Erst) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__floprc__02Erst__0))));
    vlSelfRef.__VactTriggered.setBit(0xaU, ((IData)(vlSelfRef.flopr__02Eclk) 
                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__flopr__02Eclk__0))));
    vlSelfRef.__VactTriggered.setBit(0xbU, ((IData)(vlSelfRef.flopr__02Erst) 
                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__flopr__02Erst__0))));
    vlSelfRef.__VactTriggered.setBit(0xcU, ((~ (IData)(vlSelfRef.regfilep__02Eclk)) 
                                            & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__regfilep__02Eclk__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__alup__02Ea__0 
        = vlSelfRef.alup__02Ea;
    vlSelfRef.__Vtrigprevexpr___TOP__alup__02Eb__0 
        = vlSelfRef.alup__02Eb;
    vlSelfRef.__Vtrigprevexpr___TOP__f__0 = vlSelfRef.f;
    vlSelfRef.__Vtrigprevexpr___TOP__dmem__02Eclk__0 
        = vlSelfRef.dmem__02Eclk;
    vlSelfRef.__Vtrigprevexpr___TOP__flopenrc__02Eclk__0 
        = vlSelfRef.flopenrc__02Eclk;
    vlSelfRef.__Vtrigprevexpr___TOP__flopenrc__02Erst__0 
        = vlSelfRef.flopenrc__02Erst;
    vlSelfRef.__Vtrigprevexpr___TOP__flopenr__02Eclk__0 
        = vlSelfRef.flopenr__02Eclk;
    vlSelfRef.__Vtrigprevexpr___TOP__flopenr__02Erst__0 
        = vlSelfRef.flopenr__02Erst;
    vlSelfRef.__Vtrigprevexpr___TOP__floprc__02Eclk__0 
        = vlSelfRef.floprc__02Eclk;
    vlSelfRef.__Vtrigprevexpr___TOP__floprc__02Erst__0 
        = vlSelfRef.floprc__02Erst;
    vlSelfRef.__Vtrigprevexpr___TOP__flopr__02Eclk__0 
        = vlSelfRef.flopr__02Eclk;
    vlSelfRef.__Vtrigprevexpr___TOP__flopr__02Erst__0 
        = vlSelfRef.flopr__02Erst;
    vlSelfRef.__Vtrigprevexpr___TOP__regfilep__02Eclk__0 
        = vlSelfRef.regfilep__02Eclk;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(0U, 1U);
        vlSelfRef.__VactTriggered.setBit(1U, 1U);
        vlSelfRef.__VactTriggered.setBit(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}
