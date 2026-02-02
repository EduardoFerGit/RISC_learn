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
                 ,  &(vlSelfRef.top__DOT__imem__DOT__RAM)
                 , 0, ~0ULL);
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__adderF__DOT__b = 4U;
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
            VL_FATAL_MT("/home/blackbox/Documents/work/riscv/pipelined/rtl/top.sv", 1, "", "Settle region did not converge.");
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
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge rst)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge clk)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @( top.riscv.alucontrolE)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @( top.riscv.dp.srcaE)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @( top.riscv.dp.srcbE)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @( top.riscv.dp.alu.y)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge rst)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge clk)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @( top.riscv.alucontrolE)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @( top.riscv.dp.srcaE)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @( top.riscv.dp.srcbE)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @( top.riscv.dp.alu.y)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->writedata = VL_RAND_RESET_I(32);
    vlSelf->dataadr = VL_RAND_RESET_I(32);
    vlSelf->memwrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__writedata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dataadr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__memwrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pcF = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__instrF = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__readdataW = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__instrF = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__pcF = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__readdataM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__memwriteM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__aluresultM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__writedataM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__op = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__riscv__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__riscv__DOT__funct7b5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__stallF = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__stallD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__flushD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__immsrcD = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__riscv__DOT__rs1D = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__riscv__DOT__rs2D = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__riscv__DOT__zeroE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__pcsrcE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__alusrcE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__flushE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__resultsrcE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__riscv__DOT__forwardAE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__riscv__DOT__forwardBE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__riscv__DOT__alucontrolE = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__riscv__DOT__rs1E = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__riscv__DOT__rs2E = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__riscv__DOT__rdE = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__riscv__DOT__regwriteM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__rdM = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__riscv__DOT__regwriteW = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__resultsrcW = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__riscv__DOT__rdW = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__pcsrcE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__stallF = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__instrF = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__pcF = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__immsrcD = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__stallD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__flushD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regwriteW = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__op = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__funct7b5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__rs1D = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__rs2D = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__flushE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__forwardAE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__forwardBE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__alucontrolE = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__alusrcE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__rs1E = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__rs2E = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__rdE = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__zeroE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__readdataM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__aluresultM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__writedataM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__rdM = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__resultsrcW = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__rdW = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__pcnextF = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__pcplus4F = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__instrD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__rd1D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__rd2D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__rdD = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__pcD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__immextD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__pcplus4D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__rd1E = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__rd2E = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__pcE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__immextE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__pcplus4E = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__srcaE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__srcbE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__fmuxbout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__writedataE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__pctargetE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__aluresultE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__pcplus4M = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__aluresultW = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__readdataW = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__pcplus4W = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__resultW = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__pcmux__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__pcmux__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__pcmux__DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__pcmux__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__pc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__pc__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__pc__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__pc__DOT__d = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__pc__DOT__q = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__adderF__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__adderF__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__adderF__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regD1__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regD1__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regD1__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regD1__DOT__clear = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regD1__DOT__d = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regD2__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regD2__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regD2__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regD2__DOT__clear = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regD2__DOT__d = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regD2__DOT__q = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regD3__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regD3__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regD3__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regD3__DOT__clear = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regD3__DOT__d = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regD3__DOT__q = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__rf__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__rf__DOT__we3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__rf__DOT__ra1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__rf__DOT__ra2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__rf__DOT__wa3 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__rf__DOT__wd3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__rf__DOT__rd1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__rf__DOT__rd2 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__riscv__DOT__dp__DOT__rf__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__riscv__DOT__dp__DOT__ext__DOT__instr = VL_RAND_RESET_I(25);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__ext__DOT__immsrc = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__ext__DOT__immext = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE1__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE1__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE1__DOT__clear = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE1__DOT__d = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE1__DOT__q = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE2__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE2__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE2__DOT__clear = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE2__DOT__d = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE2__DOT__q = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE3__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE3__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE3__DOT__clear = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE3__DOT__d = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE3__DOT__q = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE4__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE4__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE4__DOT__clear = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE4__DOT__d = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE4__DOT__q = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE5__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE5__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE5__DOT__clear = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE5__DOT__d = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE5__DOT__q = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE6__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE6__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE6__DOT__clear = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE6__DOT__d = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE6__DOT__q = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE7__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE7__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE7__DOT__clear = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE7__DOT__d = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE7__DOT__q = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE8__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE8__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE8__DOT__clear = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE8__DOT__d = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regE8__DOT__q = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__fmuxa__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__fmuxa__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__fmuxa__DOT__c = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__fmuxa__DOT__sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__fmuxa__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__fmuxb__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__fmuxb__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__fmuxb__DOT__c = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__fmuxb__DOT__sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__fmuxb__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__alumux__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__alumux__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__alumux__DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__alumux__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__adderE__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__adderE__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__adderE__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__alu__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__alu__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__alu__DOT__f = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__alu__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__alu__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regM1__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regM1__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regM1__DOT__d = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regM1__DOT__q = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regM2__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regM2__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regM2__DOT__d = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regM2__DOT__q = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regM3__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regM3__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regM3__DOT__d = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regM3__DOT__q = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regM4__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regM4__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regM4__DOT__d = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regM4__DOT__q = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regW1__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regW1__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regW1__DOT__d = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regW1__DOT__q = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regW2__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regW2__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regW2__DOT__d = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regW2__DOT__q = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regW3__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regW3__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regW3__DOT__d = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regW3__DOT__q = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regW4__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regW4__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regW4__DOT__d = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__regW4__DOT__q = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__resultmux__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__resultmux__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__resultmux__DOT__c = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__resultmux__DOT__sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__riscv__DOT__dp__DOT__resultmux__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__op = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__funct7b5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__immsrcD = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__flushE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__zeroE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__pcsrcE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__alusrcE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__resultsrcE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__alucontrolE = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__regwriteM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__memwriteM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__regwriteW = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__resultsrcW = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__aluop = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__regwriteD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__resultsrcD = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__memwriteD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__jumpD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__branchD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__alucontrolD = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__alusrcD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__regwriteE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__memwriteE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__jumpE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__branchE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__immsrcE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__resultsrcM = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__riscv__DOT__cu__DOT____Vcellinp__regE__d = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__md__DOT__op = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__md__DOT__resultsrc = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__md__DOT__regwrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__md__DOT__memwrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__md__DOT__jump = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__md__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__md__DOT__alusrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__md__DOT__immsrc = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__md__DOT__aluop = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__md__DOT__controlsig = VL_RAND_RESET_I(11);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__ad__DOT__opb5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__ad__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__ad__DOT__funct7b5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__ad__DOT__aluop = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__ad__DOT__alucontrol = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__ad__DOT__rsub = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__regE__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__regE__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__regE__DOT__clear = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__regE__DOT__d = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__regE__DOT__q = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__regM__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__regM__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__regM__DOT__d = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__regM__DOT__q = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__regW__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__regW__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__regW__DOT__d = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__riscv__DOT__cu__DOT__regW__DOT__q = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__riscv__DOT__hu__DOT__rs1D = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__riscv__DOT__hu__DOT__rs2D = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__riscv__DOT__hu__DOT__rs1E = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__riscv__DOT__hu__DOT__rs2E = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__riscv__DOT__hu__DOT__rdE = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__riscv__DOT__hu__DOT__resultsrcE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__riscv__DOT__hu__DOT__pcsrcE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__hu__DOT__rdM = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__riscv__DOT__hu__DOT__regwriteM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__hu__DOT__rdW = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__riscv__DOT__hu__DOT__regwriteW = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__hu__DOT__stallF = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__hu__DOT__stallD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__hu__DOT__flushD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__hu__DOT__flushE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__riscv__DOT__hu__DOT__forwardAE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__riscv__DOT__hu__DOT__forwardBE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__riscv__DOT__hu__DOT__lwstall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imem__DOT__a = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__imem__DOT__rd = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->top__DOT__imem__DOT__RAM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__dmem__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dmem__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dmem__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dmem__DOT__wd = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dmem__DOT__rd = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->top__DOT__dmem__DOT__RAM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__dmem__DOT__index = VL_RAND_RESET_I(6);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__riscv__DOT__alucontrolE__0 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__riscv__DOT__dp__DOT__srcaE__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__riscv__DOT__dp__DOT__srcbE__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__riscv__DOT__dp__DOT__alu__DOT__y__0 = VL_RAND_RESET_I(32);
    vlSelf->__VactDidInit = 0;
}
