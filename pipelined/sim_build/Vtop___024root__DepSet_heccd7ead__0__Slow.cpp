// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e646174U;
    __Vtemp_1[1U] = 0x6c655f70U;
    __Vtemp_1[2U] = 0x656d6669U;
    __Vtemp_1[3U] = 0x6dU;
    VL_READMEM_N(true, 32, 64, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                 ,  &(vlSelfRef.imem__DOT__RAM), 0, ~0ULL);
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/blackbox/Documents/work/riscv/pipelined/rtl/adder.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @( alup.a)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @( alup.b)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @( f)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge dmem.clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge flopenrc.clk)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(posedge flopenrc.rst)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(posedge flopenr.clk)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @(posedge flopenr.rst)\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(posedge floprc.clk)\n");
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @(posedge floprc.rst)\n");
    }
    if ((0x400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @(posedge flopr.clk)\n");
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @(posedge flopr.rst)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @(negedge regfilep.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @( alup.a)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @( alup.b)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @( f)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge dmem.clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge flopenrc.clk)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(posedge flopenrc.rst)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(posedge flopenr.clk)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @(posedge flopenr.rst)\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(posedge floprc.clk)\n");
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @(posedge floprc.rst)\n");
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @(posedge flopr.clk)\n");
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @(posedge flopr.rst)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @(negedge regfilep.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->adder__02Ea = VL_RAND_RESET_I(32);
    vlSelf->adder__02Eb = VL_RAND_RESET_I(32);
    vlSelf->adder__02Ey = VL_RAND_RESET_I(32);
    vlSelf->opb5 = VL_RAND_RESET_I(1);
    vlSelf->funct3 = VL_RAND_RESET_I(3);
    vlSelf->functb5 = VL_RAND_RESET_I(1);
    vlSelf->aludec__02Ealuop = VL_RAND_RESET_I(2);
    vlSelf->alucontrol = VL_RAND_RESET_I(3);
    vlSelf->alup__02Ea = VL_RAND_RESET_I(32);
    vlSelf->alup__02Eb = VL_RAND_RESET_I(32);
    vlSelf->f = VL_RAND_RESET_I(3);
    vlSelf->shamt = VL_RAND_RESET_I(5);
    vlSelf->alup__02Ey = VL_RAND_RESET_I(32);
    vlSelf->dmem__02Eclk = VL_RAND_RESET_I(1);
    vlSelf->we = VL_RAND_RESET_I(1);
    vlSelf->worb = VL_RAND_RESET_I(1);
    vlSelf->dmem__02Ea = VL_RAND_RESET_I(32);
    vlSelf->wd = VL_RAND_RESET_I(32);
    vlSelf->dmem__02Erd = VL_RAND_RESET_I(32);
    vlSelf->eqcomp__02Ea = VL_RAND_RESET_I(32);
    vlSelf->eqcomp__02Eb = VL_RAND_RESET_I(32);
    vlSelf->eqcomp__02Ey = VL_RAND_RESET_I(1);
    vlSelf->instr = VL_RAND_RESET_I(25);
    vlSelf->extend__02Eimmsrc = VL_RAND_RESET_I(2);
    vlSelf->immext = VL_RAND_RESET_I(32);
    vlSelf->flopenrc__02Eclk = VL_RAND_RESET_I(1);
    vlSelf->flopenrc__02Erst = VL_RAND_RESET_I(1);
    vlSelf->flopenrc__02Een = VL_RAND_RESET_I(1);
    vlSelf->flopenrc__02Eclear = VL_RAND_RESET_I(1);
    vlSelf->flopenrc__02Ed = VL_RAND_RESET_I(8);
    vlSelf->flopenrc__02Eq = VL_RAND_RESET_I(8);
    vlSelf->flopenr__02Eclk = VL_RAND_RESET_I(1);
    vlSelf->flopenr__02Erst = VL_RAND_RESET_I(1);
    vlSelf->flopenr__02Een = VL_RAND_RESET_I(1);
    vlSelf->flopenr__02Ed = VL_RAND_RESET_I(8);
    vlSelf->flopenr__02Eq = VL_RAND_RESET_I(8);
    vlSelf->floprc__02Eclk = VL_RAND_RESET_I(1);
    vlSelf->floprc__02Erst = VL_RAND_RESET_I(1);
    vlSelf->floprc__02Eclear = VL_RAND_RESET_I(1);
    vlSelf->floprc__02Ed = VL_RAND_RESET_I(8);
    vlSelf->floprc__02Eq = VL_RAND_RESET_I(8);
    vlSelf->flopr__02Eclk = VL_RAND_RESET_I(1);
    vlSelf->flopr__02Erst = VL_RAND_RESET_I(1);
    vlSelf->flopr__02Ed = VL_RAND_RESET_I(8);
    vlSelf->flopr__02Eq = VL_RAND_RESET_I(8);
    vlSelf->imem__02Ea = VL_RAND_RESET_I(32);
    vlSelf->imem__02Erd = VL_RAND_RESET_I(32);
    vlSelf->ls2__02Ea = VL_RAND_RESET_I(32);
    vlSelf->ls2__02Ey = VL_RAND_RESET_I(32);
    vlSelf->op = VL_RAND_RESET_I(7);
    vlSelf->resultsrc = VL_RAND_RESET_I(2);
    vlSelf->regwrite = VL_RAND_RESET_I(1);
    vlSelf->memwrite = VL_RAND_RESET_I(1);
    vlSelf->jump = VL_RAND_RESET_I(1);
    vlSelf->branch = VL_RAND_RESET_I(1);
    vlSelf->alusrc = VL_RAND_RESET_I(1);
    vlSelf->maindec__02Eimmsrc = VL_RAND_RESET_I(2);
    vlSelf->maindec__02Ealuop = VL_RAND_RESET_I(2);
    vlSelf->__pinNumber10 = VL_RAND_RESET_I(1);
    vlSelf->mux2__02Ea = VL_RAND_RESET_I(32);
    vlSelf->mux2__02Eb = VL_RAND_RESET_I(32);
    vlSelf->mux2__02Esel = VL_RAND_RESET_I(1);
    vlSelf->mux2__02Ey = VL_RAND_RESET_I(32);
    vlSelf->mux3__02Ea = VL_RAND_RESET_I(32);
    vlSelf->mux3__02Eb = VL_RAND_RESET_I(32);
    vlSelf->mux3__02Ec = VL_RAND_RESET_I(32);
    vlSelf->mux3__02Esel = VL_RAND_RESET_I(2);
    vlSelf->mux3__02Ey = VL_RAND_RESET_I(32);
    vlSelf->mux4__02Ea = VL_RAND_RESET_I(32);
    vlSelf->mux4__02Eb = VL_RAND_RESET_I(32);
    vlSelf->mux4__02Ec = VL_RAND_RESET_I(32);
    vlSelf->mux4__02Ed = VL_RAND_RESET_I(32);
    vlSelf->mux4__02Esel = VL_RAND_RESET_I(2);
    vlSelf->mux4__02Ey = VL_RAND_RESET_I(32);
    vlSelf->regfilep__02Eclk = VL_RAND_RESET_I(1);
    vlSelf->we3 = VL_RAND_RESET_I(1);
    vlSelf->ra1 = VL_RAND_RESET_I(5);
    vlSelf->ra2 = VL_RAND_RESET_I(5);
    vlSelf->wa3 = VL_RAND_RESET_I(5);
    vlSelf->wd3 = VL_RAND_RESET_I(32);
    vlSelf->rd1 = VL_RAND_RESET_I(32);
    vlSelf->rd2 = VL_RAND_RESET_I(32);
    vlSelf->adder__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->adder__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->adder__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->aludec__DOT__opb5 = VL_RAND_RESET_I(1);
    vlSelf->aludec__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->aludec__DOT__functb5 = VL_RAND_RESET_I(1);
    vlSelf->aludec__DOT__aluop = VL_RAND_RESET_I(2);
    vlSelf->aludec__DOT__alucontrol = VL_RAND_RESET_I(3);
    vlSelf->aludec__DOT__rsub = VL_RAND_RESET_I(1);
    vlSelf->alup__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->alup__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->alup__DOT__f = VL_RAND_RESET_I(3);
    vlSelf->alup__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->alup__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->dmem__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dmem__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->dmem__DOT__worb = VL_RAND_RESET_I(1);
    vlSelf->dmem__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->dmem__DOT__wd = VL_RAND_RESET_I(32);
    vlSelf->dmem__DOT__rd = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->dmem__DOT__RAM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->eqcomp__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->eqcomp__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->eqcomp__DOT__y = VL_RAND_RESET_I(1);
    vlSelf->extend__DOT__instr = VL_RAND_RESET_I(25);
    vlSelf->extend__DOT__immsrc = VL_RAND_RESET_I(2);
    vlSelf->extend__DOT__immext = VL_RAND_RESET_I(32);
    vlSelf->flopenrc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->flopenrc__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->flopenrc__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->flopenrc__DOT__clear = VL_RAND_RESET_I(1);
    vlSelf->flopenrc__DOT__d = VL_RAND_RESET_I(8);
    vlSelf->flopenrc__DOT__q = VL_RAND_RESET_I(8);
    vlSelf->flopenr__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->flopenr__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->flopenr__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->flopenr__DOT__d = VL_RAND_RESET_I(8);
    vlSelf->flopenr__DOT__q = VL_RAND_RESET_I(8);
    vlSelf->floprc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->floprc__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->floprc__DOT__clear = VL_RAND_RESET_I(1);
    vlSelf->floprc__DOT__d = VL_RAND_RESET_I(8);
    vlSelf->floprc__DOT__q = VL_RAND_RESET_I(8);
    vlSelf->flopr__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->flopr__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->flopr__DOT__d = VL_RAND_RESET_I(8);
    vlSelf->flopr__DOT__q = VL_RAND_RESET_I(8);
    vlSelf->imem__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->imem__DOT__rd = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->imem__DOT__RAM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ls2__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->ls2__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->maindec__DOT__op = VL_RAND_RESET_I(7);
    vlSelf->maindec__DOT__resultsrc = VL_RAND_RESET_I(2);
    vlSelf->maindec__DOT__regwrite = VL_RAND_RESET_I(1);
    vlSelf->maindec__DOT__memwrite = VL_RAND_RESET_I(1);
    vlSelf->maindec__DOT__jump = VL_RAND_RESET_I(1);
    vlSelf->maindec__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->maindec__DOT__alusrc = VL_RAND_RESET_I(1);
    vlSelf->maindec__DOT__immsrc = VL_RAND_RESET_I(2);
    vlSelf->maindec__DOT__aluop = VL_RAND_RESET_I(2);
    vlSelf->maindec__DOT____pinNumber10 = VL_RAND_RESET_I(1);
    vlSelf->maindec__DOT__controlsig = VL_RAND_RESET_I(11);
    vlSelf->mux2__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->mux2__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->mux2__DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->mux2__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->mux3__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->mux3__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->mux3__DOT__c = VL_RAND_RESET_I(32);
    vlSelf->mux3__DOT__sel = VL_RAND_RESET_I(2);
    vlSelf->mux3__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->mux4__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->mux4__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->mux4__DOT__c = VL_RAND_RESET_I(32);
    vlSelf->mux4__DOT__d = VL_RAND_RESET_I(32);
    vlSelf->mux4__DOT__sel = VL_RAND_RESET_I(2);
    vlSelf->mux4__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->regfilep__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->regfilep__DOT__we3 = VL_RAND_RESET_I(1);
    vlSelf->regfilep__DOT__ra1 = VL_RAND_RESET_I(5);
    vlSelf->regfilep__DOT__ra2 = VL_RAND_RESET_I(5);
    vlSelf->regfilep__DOT__wa3 = VL_RAND_RESET_I(5);
    vlSelf->regfilep__DOT__wd3 = VL_RAND_RESET_I(32);
    vlSelf->regfilep__DOT__rd1 = VL_RAND_RESET_I(32);
    vlSelf->regfilep__DOT__rd2 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->regfilep__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__alup__02Ea__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__alup__02Eb__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__f__0 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__dmem__02Eclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__flopenrc__02Eclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__flopenrc__02Erst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__flopenr__02Eclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__flopenr__02Erst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__floprc__02Eclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__floprc__02Erst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__flopr__02Eclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__flopr__02Erst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__regfilep__02Eclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
