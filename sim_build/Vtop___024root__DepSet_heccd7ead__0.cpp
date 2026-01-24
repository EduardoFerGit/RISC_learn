// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<SData/*8:0*/, 64> Vtop__ConstPool__TABLE_h4e0efd76_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vtop__ConstPool__TABLE_he4134bd1_0;

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
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
    vlSelfRef.toplevel__DOT__mips_core__DOT__alusrc 
        = (1U & ((IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__controlsig) 
                 >> 5U));
    vlSelfRef.toplevel__DOT__mips_core__DOT__jump = 
        (1U & ((IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__controlsig) 
               >> 2U));
    vlSelfRef.toplevel__DOT__mips_core__DOT__regdst 
        = (1U & ((IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__controlsig) 
                 >> 4U));
    vlSelfRef.toplevel__DOT__mips_core__DOT__memtoreg 
        = (1U & ((IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__controlsig) 
                 >> 8U));
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
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumux__DOT__sel 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alusrc;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__b 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumuxout;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumux__DOT__y 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumuxout;
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

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x1cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x23ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x1dULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x1fULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__3(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf__v0;
    __VdlyVal__toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf__v0 = 0;
    CData/*4:0*/ __VdlyDim0__toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf__v0;
    __VdlyDim0__toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf__v0 = 0;
    CData/*0:0*/ __VdlySet__toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf__v0;
    __VdlySet__toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf__v0 = 0;
    IData/*31:0*/ __VdlyVal__toplevel__DOT__dmem__DOT__RAM__v0;
    __VdlyVal__toplevel__DOT__dmem__DOT__RAM__v0 = 0;
    CData/*5:0*/ __VdlyDim0__toplevel__DOT__dmem__DOT__RAM__v0;
    __VdlyDim0__toplevel__DOT__dmem__DOT__RAM__v0 = 0;
    CData/*0:0*/ __VdlySet__toplevel__DOT__dmem__DOT__RAM__v0;
    __VdlySet__toplevel__DOT__dmem__DOT__RAM__v0 = 0;
    // Body
    __VdlySet__toplevel__DOT__dmem__DOT__RAM__v0 = 0U;
    __VdlySet__toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf__v0 = 0U;
    if (vlSelfRef.toplevel__DOT__memwrite) {
        __VdlyVal__toplevel__DOT__dmem__DOT__RAM__v0 
            = vlSelfRef.toplevel__DOT__writedata;
        __VdlyDim0__toplevel__DOT__dmem__DOT__RAM__v0 
            = (0x3fU & vlSelfRef.toplevel__DOT__dataaddr);
        __VdlySet__toplevel__DOT__dmem__DOT__RAM__v0 = 1U;
    }
    if (vlSelfRef.toplevel__DOT__mips_core__DOT__regwrite) {
        __VdlyVal__toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf__v0 
            = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__writedatareg;
        __VdlyDim0__toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf__v0 
            = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__wa3;
        __VdlySet__toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf__v0 = 1U;
    }
    if (__VdlySet__toplevel__DOT__dmem__DOT__RAM__v0) {
        vlSelfRef.toplevel__DOT__dmem__DOT__RAM[__VdlyDim0__toplevel__DOT__dmem__DOT__RAM__v0] 
            = __VdlyVal__toplevel__DOT__dmem__DOT__RAM__v0;
    }
    if (__VdlySet__toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf__v0) {
        vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf[__VdlyDim0__toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf__v0] 
            = __VdlyVal__toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf__v0;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__zero 
        = (0U == vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__y);
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__zero 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__zero;
    vlSelfRef.toplevel__DOT__mips_core__DOT__zero = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__zero;
    vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__zero 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__zero;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
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
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__q 
        = ((IData)(vlSelfRef.rst) ? 0U : (IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpmuxout));
    vlSelfRef.toplevel__DOT__imem__DOT__a = (0x3fU 
                                             & ((IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__q) 
                                                >> 2U));
    vlSelfRef.toplevel__DOT__currentpc = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__q;
    vlSelfRef.toplevel__DOT__mips_core__DOT__currentpc 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__q;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__currentpc 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__q;
    vlSelfRef.toplevel__DOT__imem__DOT__rd = vlSelfRef.toplevel__DOT__imem__DOT__RAM
        [(0x3fU & ((IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__q) 
                   >> 2U))];
    vlSelfRef.toplevel__DOT__instruction = vlSelfRef.toplevel__DOT__imem__DOT__RAM
        [(0x3fU & ((IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__q) 
                   >> 2U))];
    __VdfgRegularize_hd87f99a1_0_0 = (0x3ffffffU & 
                                      vlSelfRef.toplevel__DOT__imem__DOT__RAM
                                      [(0x3fU & ((IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__q) 
                                                 >> 2U))]);
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT____Vcellinp__rf__ra1 
        = (0x1fU & (vlSelfRef.toplevel__DOT__imem__DOT__RAM
                    [(0x3fU & ((IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__q) 
                               >> 2U))] >> 0x15U));
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
    vlSelfRef.toplevel__DOT__mips_core__DOT__instruction 
        = vlSelfRef.toplevel__DOT__instruction;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpls2_inst__DOT__a 
        = __VdfgRegularize_hd87f99a1_0_0;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpls2out 
        = VL_SHIFTL_III(32,32,32, __VdfgRegularize_hd87f99a1_0_0, 2U);
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__ra1 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT____Vcellinp__rf__ra1;
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
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpls2_inst__DOT__y 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpls2out;
    vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__alu_decoder_inst__DOT__funct 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__funct;
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
    vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__memtoreg 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__memtoreg;
    vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__memtoreg 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__memtoreg;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__memtoreg 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__memtoreg;
    vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__alusrc 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__alusrc;
    vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__aluscr 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__alusrc;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alusrc 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__alusrc;
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
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumux__DOT__sel 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alusrc;
    vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__alucontrol 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__alu_decoder_inst__DOT__alucontrol;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__alucontrol))) {
        vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__y 
            = (vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout1 
               & vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumuxout);
    } else if ((1U == (IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__alucontrol))) {
        vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__y 
            = (vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout1 
               | vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumuxout);
    } else if ((2U == (IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__alucontrol))) {
        vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__y 
            = (vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout1 
               + vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumuxout);
    } else if ((6U == (IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__alucontrol))) {
        vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__y 
            = ((IData)(1U) + (vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout1 
                              + (~ vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumuxout)));
    } else if ((7U == (IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__alucontrol))) {
        vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__y 
            = (((vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout1 
                 >> 0x1fU) != (vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumuxout 
                               >> 0x1fU)) ? (((vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout1 
                                               >> 0x1fU) 
                                              > (vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumuxout 
                                                 >> 0x1fU))
                                              ? 1U : 0U)
                : ((vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout1 
                    < vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumuxout)
                    ? 1U : 0U));
    }
    vlSelfRef.dataaddr = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__y;
    vlSelfRef.toplevel__DOT__mips_core__DOT__aluresult 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__y;
    vlSelfRef.toplevel__DOT__dataaddr = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__y;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__aluresult 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__y;
    vlSelfRef.toplevel__DOT__dmem__DOT__a = vlSelfRef.toplevel__DOT__dataaddr;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__resultmux__DOT__a 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__aluresult;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout2 
        = ((0U == (IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT____Vcellinp__wregmux__a))
            ? 0U : vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf
           [vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT____Vcellinp__wregmux__a]);
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout1 
        = ((0U == (IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT____Vcellinp__rf__ra1))
            ? 0U : vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf
           [vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT____Vcellinp__rf__ra1]);
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumux__DOT__a 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout2;
    vlSelfRef.writedata = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout2;
    vlSelfRef.toplevel__DOT__mips_core__DOT__writedata 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout2;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rd2 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout2;
    vlSelfRef.toplevel__DOT__writedata = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout2;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumuxout 
        = ((IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__alusrc)
            ? vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__immext
            : vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout2);
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__a 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout1;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rd1 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout1;
    vlSelfRef.toplevel__DOT__dmem__DOT__wd = vlSelfRef.toplevel__DOT__writedata;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__b 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumuxout;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumux__DOT__y 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumuxout;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.toplevel__DOT__mips_core__DOT__pcsrc 
        = ((IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__branch) 
           & (IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__zero));
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
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__d 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpmuxout;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpmux__DOT__y 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpmuxout;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.toplevel__DOT__mips_core__DOT__alucontrol 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__alu_decoder_inst__DOT__alucontrol;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alucontrol 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__alucontrol;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__f 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alucontrol;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.toplevel__DOT__dmem__DOT__rd = vlSelfRef.toplevel__DOT__dmem__DOT__RAM
        [(0x3fU & vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__y)];
    vlSelfRef.toplevel__DOT__datamemout = vlSelfRef.toplevel__DOT__dmem__DOT__RAM
        [(0x3fU & vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__y)];
    vlSelfRef.toplevel__DOT__mips_core__DOT__datamemout 
        = vlSelfRef.toplevel__DOT__datamemout;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__datamemout 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datamemout;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__resultmux__DOT__b 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__datamemout;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__writedatareg 
        = ((IData)(vlSelfRef.toplevel__DOT__mips_core__DOT__memtoreg)
            ? vlSelfRef.toplevel__DOT__dmem__DOT__RAM
           [(0x3fU & vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__y)]
            : vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__y);
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__wd3 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__writedatareg;
    vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__resultmux__DOT__y 
        = vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__writedatareg;
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<6> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/blackbox/Documents/work/riscv/rtl/toplevel.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/blackbox/Documents/work/riscv/rtl/toplevel.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/blackbox/Documents/work/riscv/rtl/toplevel.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
