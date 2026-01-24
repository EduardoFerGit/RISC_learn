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
    vlSelfRef.__Vtrigprevexpr___TOP__toplevel__DOT__mips_core__DOT__alucontrol__0 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__alucontrol;
    vlSelfRef.__Vtrigprevexpr___TOP__toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumuxout__0 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumuxout;
    vlSelfRef.__Vtrigprevexpr___TOP__toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout1__0 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout1;
    vlSelfRef.__Vtrigprevexpr___TOP__toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__y__0 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__y;
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
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e646174U;
    __Vtemp_1[1U] = 0x66696c65U;
    __Vtemp_1[2U] = 0x6d656dU;
    VL_READMEM_N(true, 32, 64, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelfRef.toplevel__DOT__imem__DOT__RAM)
                 , 0, ~0ULL);
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcplus4_inst__DOT__b = 4U;
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
            VL_FATAL_MT("/home/blackbox/Documents/work/riscv/rtl/toplevel.sv", 1, "", "Settle region did not converge.");
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

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<SData/*8:0*/, 64> Vtop__ConstPool__TABLE_h4e0efd76_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vtop__ConstPool__TABLE_he4134bd1_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT____Vcellinp__wregmux__b;
    toplevel__DOT__mips_core__DOT__datapath_inst__DOT____Vcellinp__wregmux__b = 0;
    SData/*15:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT____Vcellinp__se__a;
    toplevel__DOT__mips_core__DOT__datapath_inst__DOT____Vcellinp__se__a = 0;
    IData/*25:0*/ __VdfgRegularize_hd87f99a1_0_0;
    __VdfgRegularize_hd87f99a1_0_0 = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.toplevel__DOT__imem__DOT__a = (0x3fU 
                                             & ((IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__q) 
                                                >> 2U));
    vlSelfRef.dataaddr = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__y;
    vlSelfRef.toplevel__DOT__currentpc = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__q;
    vlSelfRef.toplevel__DOT__mips_core__DOT__aluresult 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__y;
    vlSelfRef.toplevel__DOT__mips_core__DOT__currentpc 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__q;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__zero 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__zero;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__currentpc 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__q;
    vlSelfRef.toplevel__DOT__imem__DOT__rd = vlSelfRef.toplevel__DOT__imem__DOT__RAM
        [(0x3fU & ((IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__q) 
                   >> 2U))];
    vlSelfRef.toplevel__DOT__dmem__DOT__rd = vlSelfRef.toplevel__DOT__dmem__DOT__RAM
        [(0x3fU & vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__y)];
    vlSelfRef.toplevel__DOT__dataaddr = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__y;
    vlSelfRef.toplevel__DOT__mips_core__DOT__zero = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__zero;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__aluresult 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__y;
    vlSelfRef.toplevel__DOT__instruction = vlSelfRef.toplevel__DOT__imem__DOT__RAM
        [(0x3fU & ((IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__q) 
                   >> 2U))];
    vlSelfRef.toplevel__DOT__rst = vlSelfRef.rst;
    vlSelfRef.toplevel__DOT__datamemout = vlSelfRef.toplevel__DOT__dmem__DOT__RAM
        [(0x3fU & vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__y)];
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT____Vcellinp__rf__ra1 
        = (0x1fU & (vlSelfRef.toplevel__DOT__imem__DOT__RAM
                    [(0x3fU & ((IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__q) 
                               >> 2U))] >> 0x15U));
    __VdfgRegularize_hd87f99a1_0_0 = (0x3ffffffU & 
                                      vlSelfRef.toplevel__DOT__imem__DOT__RAM
                                      [(0x3fU & ((IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__q) 
                                                 >> 2U))]);
    vlSelfRef.toplevel__DOT__clk = vlSelfRef.clk;
    toplevel__DOT__mips_core__DOT__datapath_inst__DOT____Vcellinp__wregmux__b 
        = (0x1fU & (vlSelfRef.toplevel__DOT__imem__DOT__RAM
                    [(0x3fU & ((IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__q) 
                               >> 2U))] >> 0xbU));
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT____Vcellinp__jumpmux__b 
        = (0xffU & VL_SHIFTL_III(8,8,32, vlSelfRef.toplevel__DOT__imem__DOT__RAM
                                 [(0x3fU & ((IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__q) 
                                            >> 2U))], 2U));
    vlSelfRef.toplevel__DOT__mips_core__DOT__funct 
        = (0x3fU & vlSelfRef.toplevel__DOT__imem__DOT__RAM
           [(0x3fU & ((IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__q) 
                      >> 2U))]);
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT____Vcellinp__wregmux__a 
        = (0x1fU & (vlSelfRef.toplevel__DOT__imem__DOT__RAM
                    [(0x3fU & ((IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__q) 
                               >> 2U))] >> 0x10U));
    toplevel__DOT__mips_core__DOT__datapath_inst__DOT____Vcellinp__se__a 
        = (0xffffU & vlSelfRef.toplevel__DOT__imem__DOT__RAM
           [(0x3fU & ((IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__q) 
                      >> 2U))]);
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__currentpc_32 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__q;
    vlSelfRef.toplevel__DOT__mips_core__DOT__op = (
                                                   vlSelfRef.toplevel__DOT__imem__DOT__RAM
                                                   [
                                                   (0x3fU 
                                                    & ((IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__q) 
                                                       >> 2U))] 
                                                   >> 0x1aU);
    vlSelfRef.toplevel__DOT__dmem__DOT__a = vlSelfRef.toplevel__DOT__dataaddr;
    vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__zero 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__zero;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__resultmux__DOT__a 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__aluresult;
    vlSelfRef.toplevel__DOT__mips_core__DOT__instruction 
        = vlSelfRef.toplevel__DOT__instruction;
    vlSelfRef.toplevel__DOT__mips_core__DOT__rst = vlSelfRef.toplevel__DOT__rst;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datamemout 
        = vlSelfRef.toplevel__DOT__datamemout;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__ra1 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT____Vcellinp__rf__ra1;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout1 
        = ((0U == (IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT____Vcellinp__rf__ra1))
            ? 0U : vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf
           [vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT____Vcellinp__rf__ra1]);
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpls2_inst__DOT__a 
        = __VdfgRegularize_hd87f99a1_0_0;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpls2out 
        = VL_SHIFTL_III(32,32,32, __VdfgRegularize_hd87f99a1_0_0, 2U);
    vlSelfRef.toplevel__DOT__dmem__DOT__clk = vlSelfRef.toplevel__DOT__clk;
    vlSelfRef.toplevel__DOT__mips_core__DOT__clk = vlSelfRef.toplevel__DOT__clk;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__wregmux__DOT__b 
        = toplevel__DOT__mips_core__DOT__datapath_inst__DOT____Vcellinp__wregmux__b;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpmux__DOT__b 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT____Vcellinp__jumpmux__b;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__funct 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__funct;
    vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__funct 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__funct;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__ra2 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT____Vcellinp__wregmux__a;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__wregmux__DOT__a 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT____Vcellinp__wregmux__a;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout2 
        = ((0U == (IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT____Vcellinp__wregmux__a))
            ? 0U : vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf
           [vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT____Vcellinp__wregmux__a]);
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__se__DOT__a 
        = toplevel__DOT__mips_core__DOT__datapath_inst__DOT____Vcellinp__se__a;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__immext 
        = (((- (IData)((1U & (vlSelfRef.toplevel__DOT__imem__DOT__RAM
                              [(0x3fU & ((IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__q) 
                                         >> 2U))] >> 0xfU)))) 
            << 0x10U) | (IData)(toplevel__DOT__mips_core__DOT__datapath_inst__DOT____Vcellinp__se__a));
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcplus4_inst__DOT__a 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__currentpc_32;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcplus4 
        = ((IData)(4U) + vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__currentpc_32);
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__op 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__op;
    vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__op 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__op;
    __Vtableidx1 = vlSelfRef.toplevel__DOT__mips_core__DOT__op;
    vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__controlsig 
        = Vtop__ConstPool__TABLE_h4e0efd76_0[__Vtableidx1];
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__instruction 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__instruction;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rst 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__rst;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__datamemout 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datamemout;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__a 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout1;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rd1 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout1;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpls2_inst__DOT__y 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpls2out;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__clk 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__clk;
    vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__alu_decoder_inst__DOT__funct 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__funct;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumux__DOT__a 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout2;
    vlSelfRef.writedata = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout2;
    vlSelfRef.toplevel__DOT__mips_core__DOT__writedata 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout2;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rd2 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout2;
    vlSelfRef.toplevel__DOT__writedata = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout2;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumux__DOT__b 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__immext;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__signextls2__DOT__a 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__immext;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__se__DOT__y 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__immext;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__ls2out 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__immext, 2U);
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__branchmux__DOT__a 
        = (0xffU & (vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcplus4 
                    >> 0U));
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcbranch__DOT__b 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcplus4;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcplus4_inst__DOT__y 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcplus4;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcjump 
        = ((0xf0000000U & vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcplus4) 
           | (0xfffffffU & VL_SHIFTL_III(28,28,32, __VdfgRegularize_hd87f99a1_0_0, 2U)));
    vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__op 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__op;
    vlSelfRef.toplevel__DOT__mips_core__DOT__regwrite 
        = (1U & ((IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__controlsig) 
                 >> 3U));
    vlSelfRef.toplevel__DOT__mips_core__DOT__memwrite 
        = (1U & ((IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__controlsig) 
                 >> 7U));
    vlSelfRef.toplevel__DOT__mips_core__DOT__jump = 
        (1U & ((IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__controlsig) 
               >> 2U));
    vlSelfRef.toplevel__DOT__mips_core__DOT__regdst 
        = (1U & ((IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__controlsig) 
                 >> 4U));
    vlSelfRef.toplevel__DOT__mips_core__DOT__memtoreg 
        = (1U & ((IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__controlsig) 
                 >> 8U));
    vlSelfRef.toplevel__DOT__mips_core__DOT__alusrc 
        = (1U & ((IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__controlsig) 
                 >> 5U));
    vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__aluop 
        = (3U & (IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__controlsig));
    vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__branch 
        = (1U & ((IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__controlsig) 
                 >> 6U));
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__rst 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rst;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__resultmux__DOT__b 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__datamemout;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__clk 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__clk;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__clk 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__clk;
    vlSelfRef.toplevel__DOT__dmem__DOT__wd = vlSelfRef.toplevel__DOT__writedata;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcbranch__DOT__a 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__ls2out;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__signextls2__DOT__y 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__ls2out;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcbranch__DOT__y 
        = (vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__ls2out 
           + vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcplus4);
    vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__regwrite 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__regwrite;
    vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__regwrite 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__regwrite;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regwrite 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__regwrite;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__memwrite 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__memwrite;
    vlSelfRef.memwrite = vlSelfRef.toplevel__DOT__mips_core__DOT__memwrite;
    vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__memwrite 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__memwrite;
    vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__memwrite 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__memwrite;
    vlSelfRef.toplevel__DOT__memwrite = vlSelfRef.toplevel__DOT__mips_core__DOT__memwrite;
    vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__jump 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__jump;
    vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__jump 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__jump;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jump 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__jump;
    if (vlSelfRef.toplevel__DOT__mips_core__DOT__regdst) {
        vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__regdst = 1U;
        vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__regdst = 1U;
        vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regdst = 1U;
        vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__wa3 
            = toplevel__DOT__mips_core__DOT__datapath_inst__DOT____Vcellinp__wregmux__b;
    } else {
        vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__regdst = 0U;
        vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__regdst = 0U;
        vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regdst = 0U;
        vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__wa3 
            = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT____Vcellinp__wregmux__a;
    }
    if (vlSelfRef.toplevel__DOT__mips_core__DOT__memtoreg) {
        vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__memtoreg = 1U;
        vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__memtoreg = 1U;
        vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__memtoreg = 1U;
        vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__writedatareg 
            = vlSelfRef.toplevel__DOT__dmem__DOT__RAM
            [(0x3fU & vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__y)];
    } else {
        vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__memtoreg = 0U;
        vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__memtoreg = 0U;
        vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__memtoreg = 0U;
        vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__writedatareg 
            = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__y;
    }
    if (vlSelfRef.toplevel__DOT__mips_core__DOT__alusrc) {
        vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__alusrc = 1U;
        vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__aluscr = 1U;
        vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alusrc = 1U;
        vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumuxout 
            = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__immext;
    } else {
        vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__alusrc = 0U;
        vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__aluscr = 0U;
        vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alusrc = 0U;
        vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumuxout 
            = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout2;
    }
    vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__alu_decoder_inst__DOT__aluop 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__aluop;
    vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__aluop 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__aluop;
    __Vtableidx2 = (((IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__funct) 
                     << 2U) | (IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__aluop));
    vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__alu_decoder_inst__DOT__alucontrol 
        = Vtop__ConstPool__TABLE_he4134bd1_0[__Vtableidx2];
    vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__branch 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__branch;
    vlSelfRef.toplevel__DOT__mips_core__DOT__pcsrc 
        = ((IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__branch) 
           & (IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__zero));
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__branchmux__DOT__b 
        = (0xffU & (vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcbranch__DOT__y 
                    >> 0U));
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcbranchout 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcbranch__DOT__y;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__we3 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regwrite;
    vlSelfRef.toplevel__DOT__dmem__DOT__we = vlSelfRef.toplevel__DOT__memwrite;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpmux__DOT__sel 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jump;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__wregmux__DOT__sel 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regdst;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__wa3 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__wa3;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__wregmux__DOT__y 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__wa3;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__resultmux__DOT__sel 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__memtoreg;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__wd3 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__writedatareg;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__resultmux__DOT__y 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__writedatareg;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumux__DOT__sel 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alusrc;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__b 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumuxout;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumux__DOT__y 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumuxout;
    vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__alucontrol 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__alu_decoder_inst__DOT__alucontrol;
    vlSelfRef.toplevel__DOT__mips_core__DOT__alucontrol 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__alu_decoder_inst__DOT__alucontrol;
    if (vlSelfRef.toplevel__DOT__mips_core__DOT__pcsrc) {
        vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__pcsrc = 1U;
        vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcsrc = 1U;
        vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__branchmuxout 
            = (0xffU & vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcbranch__DOT__y);
    } else {
        vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__pcsrc = 0U;
        vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcsrc = 0U;
        vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__branchmuxout 
            = (0xffU & vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcplus4);
    }
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alucontrol 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__alucontrol;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__branchmux__DOT__sel 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcsrc;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpmux__DOT__a 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__branchmuxout;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__branchmux__DOT__y 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__branchmuxout;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpmuxout 
        = ((IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__jump)
            ? (IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT____Vcellinp__jumpmux__b)
            : (IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__branchmuxout));
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__f 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alucontrol;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__d 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpmuxout;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpmux__DOT__y 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpmuxout;
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
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @( toplevel.mips_core.alucontrol)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @( toplevel.mips_core.datapath_inst.alumuxout)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @( toplevel.mips_core.datapath_inst.regout1)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @( toplevel.mips_core.datapath_inst.alu.y)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @( toplevel.mips_core.alucontrol)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @( toplevel.mips_core.datapath_inst.alumuxout)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @( toplevel.mips_core.datapath_inst.regout1)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @( toplevel.mips_core.datapath_inst.alu.y)\n");
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
    vlSelf->dataaddr = VL_RAND_RESET_I(32);
    vlSelf->memwrite = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__writedata = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__dataaddr = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__memwrite = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__currentpc = VL_RAND_RESET_I(8);
    vlSelf->toplevel__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__datamemout = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__datamemout = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__memwrite = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__aluresult = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__writedata = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__currentpc = VL_RAND_RESET_I(8);
    vlSelf->toplevel__DOT__mips_core__DOT__op = VL_RAND_RESET_I(6);
    vlSelf->toplevel__DOT__mips_core__DOT__funct = VL_RAND_RESET_I(6);
    vlSelf->toplevel__DOT__mips_core__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__jump = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__regwrite = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__regdst = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__memtoreg = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__pcsrc = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__alusrc = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__alucontrol = VL_RAND_RESET_I(3);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jump = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regwrite = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regdst = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__memtoreg = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__memwrite = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alucontrol = VL_RAND_RESET_I(3);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcsrc = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alusrc = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__op = VL_RAND_RESET_I(6);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__funct = VL_RAND_RESET_I(6);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__currentpc = VL_RAND_RESET_I(8);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__aluresult = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout2 = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__datamemout = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcplus4 = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__branchmuxout = VL_RAND_RESET_I(8);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpmuxout = VL_RAND_RESET_I(8);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcbranchout = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__wa3 = VL_RAND_RESET_I(5);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__immext = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__ls2out = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout1 = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumuxout = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__writedatareg = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__currentpc_32 = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcjump = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpls2out = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT____Vcellinp__jumpmux__b = VL_RAND_RESET_I(8);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT____Vcellinp__rf__ra1 = VL_RAND_RESET_I(5);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT____Vcellinp__wregmux__a = VL_RAND_RESET_I(5);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__d = VL_RAND_RESET_I(8);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__q = VL_RAND_RESET_I(8);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcplus4_inst__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcplus4_inst__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcplus4_inst__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__branchmux__DOT__a = VL_RAND_RESET_I(8);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__branchmux__DOT__b = VL_RAND_RESET_I(8);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__branchmux__DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__branchmux__DOT__y = VL_RAND_RESET_I(8);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpmux__DOT__a = VL_RAND_RESET_I(8);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpmux__DOT__b = VL_RAND_RESET_I(8);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpmux__DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpmux__DOT__y = VL_RAND_RESET_I(8);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__we3 = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__ra1 = VL_RAND_RESET_I(5);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__ra2 = VL_RAND_RESET_I(5);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__wa3 = VL_RAND_RESET_I(5);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__wd3 = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rd1 = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rd2 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__wregmux__DOT__a = VL_RAND_RESET_I(5);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__wregmux__DOT__b = VL_RAND_RESET_I(5);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__wregmux__DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__wregmux__DOT__y = VL_RAND_RESET_I(5);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__se__DOT__a = VL_RAND_RESET_I(16);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__se__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__f = VL_RAND_RESET_I(3);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumux__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumux__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumux__DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumux__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__signextls2__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__signextls2__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcbranch__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcbranch__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcbranch__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpls2_inst__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpls2_inst__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__resultmux__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__resultmux__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__resultmux__DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__datapath_inst__DOT__resultmux__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__op = VL_RAND_RESET_I(6);
    vlSelf->toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__funct = VL_RAND_RESET_I(6);
    vlSelf->toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__memtoreg = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__memwrite = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__regdst = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__regwrite = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__jump = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__pcsrc = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__alusrc = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__alucontrol = VL_RAND_RESET_I(3);
    vlSelf->toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__aluop = VL_RAND_RESET_I(2);
    vlSelf->toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__op = VL_RAND_RESET_I(6);
    vlSelf->toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__memtoreg = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__memwrite = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__aluscr = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__regdst = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__regwrite = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__jump = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__aluop = VL_RAND_RESET_I(2);
    vlSelf->toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__controlsig = VL_RAND_RESET_I(9);
    vlSelf->toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__alu_decoder_inst__DOT__funct = VL_RAND_RESET_I(6);
    vlSelf->toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__alu_decoder_inst__DOT__aluop = VL_RAND_RESET_I(2);
    vlSelf->toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__alu_decoder_inst__DOT__alucontrol = VL_RAND_RESET_I(3);
    vlSelf->toplevel__DOT__imem__DOT__a = VL_RAND_RESET_I(6);
    vlSelf->toplevel__DOT__imem__DOT__rd = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->toplevel__DOT__imem__DOT__RAM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->toplevel__DOT__dmem__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__dmem__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->toplevel__DOT__dmem__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__dmem__DOT__wd = VL_RAND_RESET_I(32);
    vlSelf->toplevel__DOT__dmem__DOT__rd = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->toplevel__DOT__dmem__DOT__RAM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__toplevel__DOT__mips_core__DOT__alucontrol__0 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumuxout__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout1__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__y__0 = VL_RAND_RESET_I(32);
    vlSelf->__VactDidInit = 0;
}
