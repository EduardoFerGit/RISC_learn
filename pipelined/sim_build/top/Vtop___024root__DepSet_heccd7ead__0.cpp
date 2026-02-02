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

extern const VlUnpacked<SData/*10:0*/, 128> Vtop__ConstPool__TABLE_h28f69c65_0;
extern const VlUnpacked<CData/*2:0*/, 64> Vtop__ConstPool__TABLE_h126e53e2_0;

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rf__DOT__clk 
        = (1U & (~ (IData)(vlSelfRef.clk)));
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__ext__DOT__instr 
        = (0x1ffffffU & (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                         >> 7U));
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__ad__DOT__opb5 
        = (1U & (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                 >> 5U));
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regM__DOT__d 
        = (0xfU & ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regE__DOT__q) 
                   >> 6U));
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regW__DOT__d 
        = (7U & ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regM__DOT__q) 
                 >> 1U));
    vlSelfRef.top__DOT__imem__DOT__a = (0x3fU & (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pc__DOT__q 
                                                 >> 2U));
    vlSelfRef.writedata = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM2__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__writedataM = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM2__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__writedataM 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM2__DOT__q;
    vlSelfRef.dataadr = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM1__DOT__q;
    vlSelfRef.top__DOT__pcF = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pc__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__pcF = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pc__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__aluresultM = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM1__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__zeroE 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alu__DOT__zero;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__instrD 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regwriteE 
        = (1U & ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regE__DOT__q) 
                 >> 9U));
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__memwriteE 
        = (1U & ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regE__DOT__q) 
                 >> 6U));
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__resultsrcM 
        = (3U & ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regM__DOT__q) 
                 >> 1U));
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rs1E = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE4__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rs2E = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE5__DOT__q;
    vlSelfRef.top__DOT__imem__DOT__rd = vlSelfRef.top__DOT__imem__DOT__RAM
        [(0x3fU & (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pc__DOT__q 
                   >> 2U))];
    vlSelfRef.top__DOT__writedata = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM2__DOT__q;
    vlSelfRef.top__DOT__dataadr = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM1__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rdE = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE6__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__rdE = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE6__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__zeroE = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alu__DOT__zero;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rdD = 
        (0x1fU & (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                  >> 7U));
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rd1E = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE1__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rd2E = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE2__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcE = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE3__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__aluresultW 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW1__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__readdataW 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW2__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcplus4W 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW4__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rdM = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM3__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rdW = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW3__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcD = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD2__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcplus4D 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD3__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcplus4E 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE8__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__aluresultE 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alu__DOT__y;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcplus4M 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM4__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcF = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pc__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__immextE 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE7__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__resultsrcE = (3U 
                                                  & ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regE__DOT__q) 
                                                     >> 7U));
    vlSelfRef.top__DOT__riscv__DOT__alucontrolE = (7U 
                                                   & ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regE__DOT__q) 
                                                      >> 1U));
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__aluresultM 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM1__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__resultsrcW = (3U 
                                                  & (IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regW__DOT__q));
    vlSelfRef.top__DOT__instrF = vlSelfRef.top__DOT__imem__DOT__RAM
        [(0x3fU & (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pc__DOT__q 
                   >> 2U))];
    vlSelfRef.top__DOT__memwrite = (1U & (IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regM__DOT__q));
    vlSelfRef.top__DOT__dmem__DOT__index = (0x3fU & 
                                            (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM1__DOT__q 
                                             >> 2U));
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pctargetE 
        = (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE3__DOT__q 
           + vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE7__DOT__q);
    vlSelfRef.top__DOT__riscv__DOT__alusrcE = (1U & (IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regE__DOT__q));
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcplus4F 
        = ((IData)(4U) + vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pc__DOT__q);
    vlSelfRef.top__DOT__riscv__DOT__rs1E = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE4__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__funct3 = (7U & 
                                              (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                                               >> 0xcU));
    vlSelfRef.top__DOT__riscv__DOT__funct7b5 = (1U 
                                                & (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                                                   >> 0x1eU));
    vlSelfRef.top__DOT__riscv__DOT__rs2E = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE5__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__resultW 
        = ((2U & (IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regW__DOT__q))
            ? vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW4__DOT__q
            : ((1U & (IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regW__DOT__q))
                ? vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW2__DOT__q
                : vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW1__DOT__q));
    vlSelfRef.top__DOT__riscv__DOT__rdM = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM3__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__rdW = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW3__DOT__q;
    vlSelfRef.top__DOT__rst = vlSelfRef.rst;
    vlSelfRef.top__DOT__riscv__DOT__regwriteM = (1U 
                                                 & ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regM__DOT__q) 
                                                    >> 3U));
    vlSelfRef.top__DOT__clk = vlSelfRef.clk;
    vlSelfRef.top__DOT__riscv__DOT__regwriteW = (1U 
                                                 & ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regW__DOT__q) 
                                                    >> 2U));
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__branchE 
        = (1U & ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regE__DOT__q) 
                 >> 4U));
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__jumpE 
        = (1U & ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regE__DOT__q) 
                 >> 5U));
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rs1D = 
        (0x1fU & (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                  >> 0xfU));
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rs2D = 
        (0x1fU & (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                  >> 0x14U));
    vlSelfRef.top__DOT__riscv__DOT__op = (0x7fU & vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q);
    vlSelfRef.top__DOT__dmem__DOT__wd = vlSelfRef.top__DOT__writedata;
    vlSelfRef.top__DOT__dmem__DOT__a = vlSelfRef.top__DOT__dataadr;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM3__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rdE;
    vlSelfRef.top__DOT__riscv__DOT__hu__DOT__rdE = vlSelfRef.top__DOT__riscv__DOT__rdE;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__zeroE 
        = vlSelfRef.top__DOT__riscv__DOT__zeroE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE6__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rdD;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__fmuxa__DOT__a 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rd1E;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__fmuxb__DOT__a 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rd2E;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__adderE__DOT__a 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__resultmux__DOT__a 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__aluresultW;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__resultmux__DOT__b 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__readdataW;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__resultmux__DOT__c 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcplus4W;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW3__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rdM;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rf__DOT__wa3 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rdW;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE3__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcD;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE8__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcplus4D;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM4__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcplus4E;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM1__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__aluresultE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW4__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcplus4M;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__adderF__DOT__a 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcF;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD2__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcF;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alumux__DOT__b 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__immextE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__adderE__DOT__b 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__immextE;
    vlSelfRef.top__DOT__riscv__DOT__hu__DOT__resultsrcE 
        = vlSelfRef.top__DOT__riscv__DOT__resultsrcE;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__resultsrcE 
        = vlSelfRef.top__DOT__riscv__DOT__resultsrcE;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__alucontrolE 
        = vlSelfRef.top__DOT__riscv__DOT__alucontrolE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alucontrolE 
        = vlSelfRef.top__DOT__riscv__DOT__alucontrolE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__fmuxa__DOT__c 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__aluresultM;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__fmuxb__DOT__c 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__aluresultM;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW1__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__aluresultM;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__resultsrcW 
        = vlSelfRef.top__DOT__riscv__DOT__resultsrcW;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__resultsrcW 
        = vlSelfRef.top__DOT__riscv__DOT__resultsrcW;
    vlSelfRef.top__DOT__riscv__DOT__instrF = vlSelfRef.top__DOT__instrF;
    vlSelfRef.top__DOT__dmem__DOT__we = vlSelfRef.top__DOT__memwrite;
    vlSelfRef.memwrite = vlSelfRef.top__DOT__memwrite;
    vlSelfRef.top__DOT__riscv__DOT__memwriteM = vlSelfRef.top__DOT__memwrite;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__memwriteM 
        = vlSelfRef.top__DOT__memwrite;
    vlSelfRef.top__DOT__dmem__DOT__rd = vlSelfRef.top__DOT__dmem__DOT__RAM
        [vlSelfRef.top__DOT__dmem__DOT__index];
    vlSelfRef.top__DOT__readdataW = vlSelfRef.top__DOT__dmem__DOT__RAM
        [vlSelfRef.top__DOT__dmem__DOT__index];
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcmux__DOT__b 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pctargetE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__adderE__DOT__y 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pctargetE;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__alusrcE 
        = vlSelfRef.top__DOT__riscv__DOT__alusrcE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alusrcE 
        = vlSelfRef.top__DOT__riscv__DOT__alusrcE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcmux__DOT__a 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcplus4F;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD3__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcplus4F;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__adderF__DOT__y 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcplus4F;
    vlSelfRef.top__DOT__riscv__DOT__hu__DOT__rs1E = vlSelfRef.top__DOT__riscv__DOT__rs1E;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__funct3 
        = vlSelfRef.top__DOT__riscv__DOT__funct3;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__funct3 
        = vlSelfRef.top__DOT__riscv__DOT__funct3;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__funct7b5 
        = vlSelfRef.top__DOT__riscv__DOT__funct7b5;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__funct7b5 
        = vlSelfRef.top__DOT__riscv__DOT__funct7b5;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__ad__DOT__rsub 
        = ((IData)(vlSelfRef.top__DOT__riscv__DOT__funct7b5) 
           & (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
              >> 5U));
    vlSelfRef.top__DOT__riscv__DOT__hu__DOT__rs2E = vlSelfRef.top__DOT__riscv__DOT__rs2E;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rf__DOT__wd3 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__resultW;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__fmuxa__DOT__b 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__resultW;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__fmuxb__DOT__b 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__resultW;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__resultmux__DOT__y 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__resultW;
    vlSelfRef.top__DOT__riscv__DOT__hu__DOT__rdM = vlSelfRef.top__DOT__riscv__DOT__rdM;
    vlSelfRef.top__DOT__riscv__DOT__hu__DOT__rdW = vlSelfRef.top__DOT__riscv__DOT__rdW;
    vlSelfRef.top__DOT__riscv__DOT__rst = vlSelfRef.top__DOT__rst;
    vlSelfRef.top__DOT__riscv__DOT__hu__DOT__regwriteM 
        = vlSelfRef.top__DOT__riscv__DOT__regwriteM;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regwriteM 
        = vlSelfRef.top__DOT__riscv__DOT__regwriteM;
    vlSelfRef.top__DOT__dmem__DOT__clk = vlSelfRef.top__DOT__clk;
    vlSelfRef.top__DOT__riscv__DOT__clk = vlSelfRef.top__DOT__clk;
    vlSelfRef.top__DOT__riscv__DOT__hu__DOT__regwriteW 
        = vlSelfRef.top__DOT__riscv__DOT__regwriteW;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regwriteW 
        = vlSelfRef.top__DOT__riscv__DOT__regwriteW;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regwriteW 
        = vlSelfRef.top__DOT__riscv__DOT__regwriteW;
    vlSelfRef.top__DOT__riscv__DOT__hu__DOT__forwardAE = 0U;
    if (((((IData)(vlSelfRef.top__DOT__riscv__DOT__rs1E) 
           == (IData)(vlSelfRef.top__DOT__riscv__DOT__rdM)) 
          & (IData)(vlSelfRef.top__DOT__riscv__DOT__regwriteM)) 
         & (0U != (IData)(vlSelfRef.top__DOT__riscv__DOT__rs1E)))) {
        vlSelfRef.top__DOT__riscv__DOT__hu__DOT__forwardAE = 2U;
    } else if (((((IData)(vlSelfRef.top__DOT__riscv__DOT__rs1E) 
                  == (IData)(vlSelfRef.top__DOT__riscv__DOT__rdW)) 
                 & (IData)(vlSelfRef.top__DOT__riscv__DOT__regwriteW)) 
                & (0U != (IData)(vlSelfRef.top__DOT__riscv__DOT__rs1E)))) {
        vlSelfRef.top__DOT__riscv__DOT__hu__DOT__forwardAE = 1U;
    }
    vlSelfRef.top__DOT__riscv__DOT__hu__DOT__forwardBE = 0U;
    if (((((IData)(vlSelfRef.top__DOT__riscv__DOT__rs2E) 
           == (IData)(vlSelfRef.top__DOT__riscv__DOT__rdM)) 
          & (IData)(vlSelfRef.top__DOT__riscv__DOT__regwriteM)) 
         & (0U != (IData)(vlSelfRef.top__DOT__riscv__DOT__rs2E)))) {
        vlSelfRef.top__DOT__riscv__DOT__hu__DOT__forwardBE = 2U;
    } else if (((((IData)(vlSelfRef.top__DOT__riscv__DOT__rs2E) 
                  == (IData)(vlSelfRef.top__DOT__riscv__DOT__rdW)) 
                 & (IData)(vlSelfRef.top__DOT__riscv__DOT__regwriteW)) 
                & (0U != (IData)(vlSelfRef.top__DOT__riscv__DOT__rs2E)))) {
        vlSelfRef.top__DOT__riscv__DOT__hu__DOT__forwardBE = 1U;
    }
    vlSelfRef.top__DOT__riscv__DOT__flushD = (((IData)(vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alu__DOT__zero) 
                                               & (IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__branchE)) 
                                              | (IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__jumpE));
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rf__DOT__ra1 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rs1D;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE4__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rs1D;
    vlSelfRef.top__DOT__riscv__DOT__rs1D = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rs1D;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rd1D = 
        ((0U == (IData)(vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rs1D))
          ? 0U : vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rf__DOT__rf
         [vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rs1D]);
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rf__DOT__ra2 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rs2D;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE5__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rs2D;
    vlSelfRef.top__DOT__riscv__DOT__rs2D = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rs2D;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rd2D = 
        ((0U == (IData)(vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rs2D))
          ? 0U : vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rf__DOT__rf
         [vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rs2D]);
    vlSelfRef.top__DOT__riscv__DOT__stallF = (((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regE__DOT__q) 
                                               >> 7U) 
                                              & (((IData)(vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE6__DOT__q) 
                                                  == (IData)(vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rs1D)) 
                                                 | ((IData)(vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE6__DOT__q) 
                                                    == (IData)(vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rs2D))));
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__op = vlSelfRef.top__DOT__riscv__DOT__op;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__op = vlSelfRef.top__DOT__riscv__DOT__op;
    __Vtableidx1 = vlSelfRef.top__DOT__riscv__DOT__op;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__md__DOT__controlsig 
        = Vtop__ConstPool__TABLE_h28f69c65_0[__Vtableidx1];
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alu__DOT__f 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alucontrolE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__resultmux__DOT__sel 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__resultsrcW;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__instrF 
        = vlSelfRef.top__DOT__riscv__DOT__instrF;
    vlSelfRef.top__DOT__riscv__DOT__readdataM = vlSelfRef.top__DOT__readdataW;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alumux__DOT__sel 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alusrcE;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__ad__DOT__funct3 
        = vlSelfRef.top__DOT__riscv__DOT__cu__DOT__funct3;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__ad__DOT__funct7b5 
        = vlSelfRef.top__DOT__riscv__DOT__cu__DOT__funct7b5;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__rst = vlSelfRef.top__DOT__riscv__DOT__rst;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rst = vlSelfRef.top__DOT__riscv__DOT__rst;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__clk = vlSelfRef.top__DOT__riscv__DOT__clk;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__clk = vlSelfRef.top__DOT__riscv__DOT__clk;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rf__DOT__we3 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regwriteW;
    vlSelfRef.top__DOT__riscv__DOT__forwardAE = vlSelfRef.top__DOT__riscv__DOT__hu__DOT__forwardAE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__srcaE 
        = ((2U & (IData)(vlSelfRef.top__DOT__riscv__DOT__hu__DOT__forwardAE))
            ? vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM1__DOT__q
            : ((1U & (IData)(vlSelfRef.top__DOT__riscv__DOT__hu__DOT__forwardAE))
                ? vlSelfRef.top__DOT__riscv__DOT__dp__DOT__resultW
                : vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE1__DOT__q));
    vlSelfRef.top__DOT__riscv__DOT__forwardBE = vlSelfRef.top__DOT__riscv__DOT__hu__DOT__forwardBE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__fmuxbout 
        = ((2U & (IData)(vlSelfRef.top__DOT__riscv__DOT__hu__DOT__forwardBE))
            ? vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM1__DOT__q
            : ((1U & (IData)(vlSelfRef.top__DOT__riscv__DOT__hu__DOT__forwardBE))
                ? vlSelfRef.top__DOT__riscv__DOT__dp__DOT__resultW
                : vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE2__DOT__q));
    if (vlSelfRef.top__DOT__riscv__DOT__flushD) {
        vlSelfRef.top__DOT__riscv__DOT__cu__DOT__pcsrcE = 1U;
        vlSelfRef.top__DOT__riscv__DOT__hu__DOT__flushD = 1U;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcnextF 
            = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pctargetE;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__flushD = 1U;
        vlSelfRef.top__DOT__riscv__DOT__pcsrcE = 1U;
    } else {
        vlSelfRef.top__DOT__riscv__DOT__cu__DOT__pcsrcE = 0U;
        vlSelfRef.top__DOT__riscv__DOT__hu__DOT__flushD = 0U;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcnextF 
            = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcplus4F;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__flushD = 0U;
        vlSelfRef.top__DOT__riscv__DOT__pcsrcE = 0U;
    }
    vlSelfRef.top__DOT__riscv__DOT__hu__DOT__rs1D = vlSelfRef.top__DOT__riscv__DOT__rs1D;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE1__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rd1D;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rf__DOT__rd1 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rd1D;
    vlSelfRef.top__DOT__riscv__DOT__hu__DOT__rs2D = vlSelfRef.top__DOT__riscv__DOT__rs2D;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE2__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rd2D;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rf__DOT__rd2 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rd2D;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__stallF 
        = vlSelfRef.top__DOT__riscv__DOT__stallF;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pc__DOT__en 
        = (1U & (~ (IData)(vlSelfRef.top__DOT__riscv__DOT__stallF)));
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__en 
        = (1U & (~ (IData)(vlSelfRef.top__DOT__riscv__DOT__stallF)));
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD2__DOT__en 
        = (1U & (~ (IData)(vlSelfRef.top__DOT__riscv__DOT__stallF)));
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD3__DOT__en 
        = (1U & (~ (IData)(vlSelfRef.top__DOT__riscv__DOT__stallF)));
    vlSelfRef.top__DOT__riscv__DOT__hu__DOT__stallF 
        = vlSelfRef.top__DOT__riscv__DOT__stallF;
    vlSelfRef.top__DOT__riscv__DOT__hu__DOT__stallD 
        = vlSelfRef.top__DOT__riscv__DOT__stallF;
    vlSelfRef.top__DOT__riscv__DOT__hu__DOT__lwstall 
        = vlSelfRef.top__DOT__riscv__DOT__stallF;
    vlSelfRef.top__DOT__riscv__DOT__stallD = vlSelfRef.top__DOT__riscv__DOT__stallF;
    vlSelfRef.top__DOT__riscv__DOT__flushE = ((IData)(vlSelfRef.top__DOT__riscv__DOT__stallF) 
                                              | (IData)(vlSelfRef.top__DOT__riscv__DOT__flushD));
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__md__DOT__op 
        = vlSelfRef.top__DOT__riscv__DOT__cu__DOT__op;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regwriteD 
        = (1U & ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__md__DOT__controlsig) 
                 >> 0xaU));
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__resultsrcD 
        = (3U & ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__md__DOT__controlsig) 
                 >> 4U));
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__memwriteD 
        = (1U & ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__md__DOT__controlsig) 
                 >> 6U));
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__jumpD 
        = (1U & (IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__md__DOT__controlsig));
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__branchD 
        = (1U & ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__md__DOT__controlsig) 
                 >> 3U));
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__alusrcD 
        = (1U & ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__md__DOT__controlsig) 
                 >> 7U));
    vlSelfRef.top__DOT__riscv__DOT__immsrcD = (3U & 
                                               ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__md__DOT__controlsig) 
                                                >> 8U));
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__aluop 
        = (3U & ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__md__DOT__controlsig) 
                 >> 1U));
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__instrF;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__readdataM 
        = vlSelfRef.top__DOT__riscv__DOT__readdataM;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regE__DOT__rst 
        = vlSelfRef.top__DOT__riscv__DOT__cu__DOT__rst;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regM__DOT__rst 
        = vlSelfRef.top__DOT__riscv__DOT__cu__DOT__rst;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regW__DOT__rst 
        = vlSelfRef.top__DOT__riscv__DOT__cu__DOT__rst;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pc__DOT__rst 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rst;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__rst 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rst;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD2__DOT__rst 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rst;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD3__DOT__rst 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rst;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE1__DOT__rst 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rst;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE2__DOT__rst 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rst;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE3__DOT__rst 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rst;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE4__DOT__rst 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rst;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE5__DOT__rst 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rst;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE6__DOT__rst 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rst;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE7__DOT__rst 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rst;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE8__DOT__rst 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rst;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM1__DOT__rst 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rst;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM2__DOT__rst 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rst;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM3__DOT__rst 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rst;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM4__DOT__rst 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rst;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW1__DOT__rst 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rst;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW2__DOT__rst 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rst;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW3__DOT__rst 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rst;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW4__DOT__rst 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rst;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regE__DOT__clk 
        = vlSelfRef.top__DOT__riscv__DOT__cu__DOT__clk;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regM__DOT__clk 
        = vlSelfRef.top__DOT__riscv__DOT__cu__DOT__clk;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regW__DOT__clk 
        = vlSelfRef.top__DOT__riscv__DOT__cu__DOT__clk;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pc__DOT__clk 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__clk;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__clk 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__clk;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD2__DOT__clk 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__clk;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD3__DOT__clk 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__clk;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE1__DOT__clk 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__clk;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE2__DOT__clk 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__clk;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE3__DOT__clk 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__clk;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE4__DOT__clk 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__clk;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE5__DOT__clk 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__clk;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE6__DOT__clk 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__clk;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE7__DOT__clk 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__clk;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE8__DOT__clk 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__clk;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM1__DOT__clk 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__clk;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM2__DOT__clk 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__clk;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM3__DOT__clk 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__clk;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM4__DOT__clk 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__clk;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW1__DOT__clk 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__clk;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW2__DOT__clk 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__clk;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW3__DOT__clk 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__clk;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW4__DOT__clk 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__clk;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__forwardAE 
        = vlSelfRef.top__DOT__riscv__DOT__forwardAE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alu__DOT__a 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__srcaE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__fmuxa__DOT__y 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__srcaE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__forwardBE 
        = vlSelfRef.top__DOT__riscv__DOT__forwardBE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alumux__DOT__a 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__fmuxbout;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__fmuxb__DOT__y 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__fmuxbout;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__writedataE 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__fmuxbout;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__srcbE 
        = ((IData)(vlSelfRef.top__DOT__riscv__DOT__alusrcE)
            ? vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE7__DOT__q
            : vlSelfRef.top__DOT__riscv__DOT__dp__DOT__fmuxbout);
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pc__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcnextF;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcmux__DOT__y 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcnextF;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__clear 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__flushD;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD2__DOT__clear 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__flushD;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD3__DOT__clear 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__flushD;
    vlSelfRef.top__DOT__riscv__DOT__hu__DOT__pcsrcE 
        = vlSelfRef.top__DOT__riscv__DOT__pcsrcE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcsrcE 
        = vlSelfRef.top__DOT__riscv__DOT__pcsrcE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__stallD 
        = vlSelfRef.top__DOT__riscv__DOT__stallD;
    vlSelfRef.top__DOT__riscv__DOT__hu__DOT__flushE 
        = vlSelfRef.top__DOT__riscv__DOT__flushE;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__flushE 
        = vlSelfRef.top__DOT__riscv__DOT__flushE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__flushE 
        = vlSelfRef.top__DOT__riscv__DOT__flushE;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__md__DOT__regwrite 
        = vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regwriteD;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__md__DOT__resultsrc 
        = vlSelfRef.top__DOT__riscv__DOT__cu__DOT__resultsrcD;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__md__DOT__memwrite 
        = vlSelfRef.top__DOT__riscv__DOT__cu__DOT__memwriteD;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__md__DOT__jump 
        = vlSelfRef.top__DOT__riscv__DOT__cu__DOT__jumpD;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__md__DOT__branch 
        = vlSelfRef.top__DOT__riscv__DOT__cu__DOT__branchD;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__md__DOT__alusrc 
        = vlSelfRef.top__DOT__riscv__DOT__cu__DOT__alusrcD;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__immsrcD 
        = vlSelfRef.top__DOT__riscv__DOT__immsrcD;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__md__DOT__immsrc 
        = vlSelfRef.top__DOT__riscv__DOT__immsrcD;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__immsrcD 
        = vlSelfRef.top__DOT__riscv__DOT__immsrcD;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__ext__DOT__immext 
        = ((2U & (IData)(vlSelfRef.top__DOT__riscv__DOT__immsrcD))
            ? ((1U & (IData)(vlSelfRef.top__DOT__riscv__DOT__immsrcD))
                ? (((- (IData)((vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                                >> 0x1fU))) << 0x14U) 
                   | (((0xff000U & vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q) 
                       | (0x800U & (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                                    >> 9U))) | (0x7feU 
                                                & (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                                                   >> 0x14U))))
                : (((- (IData)((vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                                >> 0x1fU))) << 0xcU) 
                   | ((0x800U & (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                                 << 4U)) | ((0x7e0U 
                                             & (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                                                >> 0x14U)) 
                                            | (0x1eU 
                                               & (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                                                  >> 7U))))))
            : ((1U & (IData)(vlSelfRef.top__DOT__riscv__DOT__immsrcD))
                ? (((- (IData)((vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                                >> 0x1fU))) << 0xcU) 
                   | ((0xfe0U & (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                                 >> 0x14U)) | (0x1fU 
                                               & (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                                                  >> 7U))))
                : (((- (IData)((vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                                >> 0x1fU))) << 0xcU) 
                   | (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                      >> 0x14U))));
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__ad__DOT__aluop 
        = vlSelfRef.top__DOT__riscv__DOT__cu__DOT__aluop;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__md__DOT__aluop 
        = vlSelfRef.top__DOT__riscv__DOT__cu__DOT__aluop;
    __Vtableidx2 = (((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__ad__DOT__rsub) 
                     << 5U) | (((IData)(vlSelfRef.top__DOT__riscv__DOT__funct3) 
                                << 2U) | (IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__aluop)));
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__ad__DOT__alucontrol 
        = Vtop__ConstPool__TABLE_h126e53e2_0[__Vtableidx2];
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW2__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__readdataM;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__fmuxa__DOT__sel 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__forwardAE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__fmuxb__DOT__sel 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__forwardBE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM2__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__writedataE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alu__DOT__b 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__srcbE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alumux__DOT__y 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__srcbE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcmux__DOT__sel 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcsrcE;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regE__DOT__clear 
        = vlSelfRef.top__DOT__riscv__DOT__cu__DOT__flushE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE1__DOT__clear 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__flushE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE2__DOT__clear 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__flushE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE3__DOT__clear 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__flushE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE4__DOT__clear 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__flushE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE5__DOT__clear 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__flushE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE6__DOT__clear 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__flushE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE7__DOT__clear 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__flushE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE8__DOT__clear 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__flushE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__ext__DOT__immsrc 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__immsrcD;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__immextD 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__ext__DOT__immext;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__alucontrolD 
        = vlSelfRef.top__DOT__riscv__DOT__cu__DOT__ad__DOT__alucontrol;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT____Vcellinp__regE__d 
        = (((((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regwriteD) 
              << 9U) | ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__resultsrcD) 
                        << 7U)) | (((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__memwriteD) 
                                    << 6U) | ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__jumpD) 
                                              << 5U))) 
           | (((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__branchD) 
               << 4U) | (((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__ad__DOT__alucontrol) 
                          << 1U) | (IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__alusrcD))));
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE7__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__immextD;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regE__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__cu__DOT____Vcellinp__regE__d;
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
void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x38ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x43ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__top__DOT__riscv__DOT__dp__DOT__rf__DOT__rf__v0;
    __VdlyVal__top__DOT__riscv__DOT__dp__DOT__rf__DOT__rf__v0 = 0;
    CData/*4:0*/ __VdlyDim0__top__DOT__riscv__DOT__dp__DOT__rf__DOT__rf__v0;
    __VdlyDim0__top__DOT__riscv__DOT__dp__DOT__rf__DOT__rf__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__riscv__DOT__dp__DOT__rf__DOT__rf__v0;
    __VdlySet__top__DOT__riscv__DOT__dp__DOT__rf__DOT__rf__v0 = 0;
    // Body
    __VdlySet__top__DOT__riscv__DOT__dp__DOT__rf__DOT__rf__v0 = 0U;
    if (vlSelfRef.top__DOT__riscv__DOT__regwriteW) {
        __VdlyVal__top__DOT__riscv__DOT__dp__DOT__rf__DOT__rf__v0 
            = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__resultW;
        __VdlyDim0__top__DOT__riscv__DOT__dp__DOT__rf__DOT__rf__v0 
            = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rdW;
        __VdlySet__top__DOT__riscv__DOT__dp__DOT__rf__DOT__rf__v0 = 1U;
    }
    if (__VdlySet__top__DOT__riscv__DOT__dp__DOT__rf__DOT__rf__v0) {
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rf__DOT__rf[__VdlyDim0__top__DOT__riscv__DOT__dp__DOT__rf__DOT__rf__v0] 
            = __VdlyVal__top__DOT__riscv__DOT__dp__DOT__rf__DOT__rf__v0;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.top__DOT__memwrite) {
        vlSelfRef.top__DOT__dmem__DOT__RAM[vlSelfRef.top__DOT__dmem__DOT__index] 
            = vlSelfRef.top__DOT__writedata;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    if (vlSelfRef.rst) {
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM4__DOT__q = 0U;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM2__DOT__q = 0U;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE8__DOT__q = 0U;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE1__DOT__q = 0U;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE3__DOT__q = 0U;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW4__DOT__q = 0U;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE2__DOT__q = 0U;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW1__DOT__q = 0U;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW2__DOT__q = 0U;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE7__DOT__q = 0U;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM1__DOT__q = 0U;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM3__DOT__q = 0U;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW3__DOT__q = 0U;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD2__DOT__q = 0U;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pc__DOT__q = 0U;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD3__DOT__q = 0U;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE4__DOT__q = 0U;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE6__DOT__q = 0U;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE5__DOT__q = 0U;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q = 0U;
        vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regW__DOT__q = 0U;
        vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regM__DOT__q = 0U;
        vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regE__DOT__q = 0U;
    } else {
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM4__DOT__q 
            = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcplus4E;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM2__DOT__q 
            = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__writedataE;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW4__DOT__q 
            = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcplus4M;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW1__DOT__q 
            = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__aluresultM;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW2__DOT__q 
            = vlSelfRef.top__DOT__readdataW;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM1__DOT__q 
            = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__aluresultE;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM3__DOT__q 
            = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rdE;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW3__DOT__q 
            = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rdM;
        if (vlSelfRef.top__DOT__riscv__DOT__flushD) {
            vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD2__DOT__q = 0U;
            vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD3__DOT__q = 0U;
            vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.top__DOT__riscv__DOT__stallF)))) {
            vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD2__DOT__q 
                = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcF;
            vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD3__DOT__q 
                = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcplus4F;
            vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                = vlSelfRef.top__DOT__instrF;
        }
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__riscv__DOT__stallF)))) {
            vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pc__DOT__q 
                = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcnextF;
        }
        vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regW__DOT__q 
            = (7U & ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regM__DOT__q) 
                     >> 1U));
        vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regM__DOT__q 
            = (0xfU & ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regE__DOT__q) 
                       >> 6U));
    }
    if (vlSelfRef.top__DOT__riscv__DOT__flushE) {
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE8__DOT__q = 0U;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE1__DOT__q = 0U;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE3__DOT__q = 0U;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE2__DOT__q = 0U;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE7__DOT__q = 0U;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE4__DOT__q = 0U;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE6__DOT__q = 0U;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE5__DOT__q = 0U;
        vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regE__DOT__q = 0U;
    } else {
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE8__DOT__q 
            = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcplus4D;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE1__DOT__q 
            = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rd1D;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE3__DOT__q 
            = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcD;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE2__DOT__q 
            = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rd2D;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE7__DOT__q 
            = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__immextD;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE4__DOT__q 
            = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rs1D;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE6__DOT__q 
            = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rdD;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE5__DOT__q 
            = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rs2D;
        vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regE__DOT__q 
            = vlSelfRef.top__DOT__riscv__DOT__cu__DOT____Vcellinp__regE__d;
    }
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcplus4M 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM4__DOT__q;
    vlSelfRef.writedata = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM2__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__writedataM = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM2__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__writedataM 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM2__DOT__q;
    vlSelfRef.top__DOT__writedata = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM2__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcplus4E 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE8__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rd1E = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE1__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcE = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE3__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcplus4W 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW4__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rd2E = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE2__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__aluresultW 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW1__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__readdataW 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW2__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__immextE 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE7__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pctargetE 
        = (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE3__DOT__q 
           + vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE7__DOT__q);
    vlSelfRef.dataadr = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM1__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__aluresultM = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM1__DOT__q;
    vlSelfRef.top__DOT__dataadr = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM1__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__aluresultM 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM1__DOT__q;
    vlSelfRef.top__DOT__dmem__DOT__index = (0x3fU & 
                                            (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM1__DOT__q 
                                             >> 2U));
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rdM = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM3__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__rdM = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM3__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rdW = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW3__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__rdW = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW3__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcD = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD2__DOT__q;
    vlSelfRef.top__DOT__imem__DOT__a = (0x3fU & (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pc__DOT__q 
                                                 >> 2U));
    vlSelfRef.top__DOT__pcF = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pc__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__pcF = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pc__DOT__q;
    vlSelfRef.top__DOT__imem__DOT__rd = vlSelfRef.top__DOT__imem__DOT__RAM
        [(0x3fU & (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pc__DOT__q 
                   >> 2U))];
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcF = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pc__DOT__q;
    vlSelfRef.top__DOT__instrF = vlSelfRef.top__DOT__imem__DOT__RAM
        [(0x3fU & (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pc__DOT__q 
                   >> 2U))];
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcplus4F 
        = ((IData)(4U) + vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pc__DOT__q);
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcplus4D 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD3__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rs1E = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE4__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__rs1E = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE4__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rdE = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE6__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__rdE = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE6__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rs2E = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE5__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__rs2E = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE5__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__ext__DOT__instr 
        = (0x1ffffffU & (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                         >> 7U));
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__ad__DOT__opb5 
        = (1U & (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                 >> 5U));
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__instrD 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rdD = 
        (0x1fU & (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                  >> 7U));
    vlSelfRef.top__DOT__riscv__DOT__funct3 = (7U & 
                                              (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                                               >> 0xcU));
    vlSelfRef.top__DOT__riscv__DOT__funct7b5 = (1U 
                                                & (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                                                   >> 0x1eU));
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rs1D = 
        (0x1fU & (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                  >> 0xfU));
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rs2D = 
        (0x1fU & (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                  >> 0x14U));
    vlSelfRef.top__DOT__riscv__DOT__op = (0x7fU & vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q);
    vlSelfRef.top__DOT__riscv__DOT__resultsrcW = (3U 
                                                  & (IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regW__DOT__q));
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__resultW 
        = ((2U & (IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regW__DOT__q))
            ? vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW4__DOT__q
            : ((1U & (IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regW__DOT__q))
                ? vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW2__DOT__q
                : vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW1__DOT__q));
    vlSelfRef.top__DOT__riscv__DOT__regwriteW = (1U 
                                                 & ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regW__DOT__q) 
                                                    >> 2U));
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW4__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcplus4M;
    vlSelfRef.top__DOT__dmem__DOT__wd = vlSelfRef.top__DOT__writedata;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM4__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcplus4E;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__fmuxa__DOT__a 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rd1E;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__adderE__DOT__a 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__resultmux__DOT__c 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcplus4W;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__fmuxb__DOT__a 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rd2E;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__resultmux__DOT__a 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__aluresultW;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__resultmux__DOT__b 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__readdataW;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alumux__DOT__b 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__immextE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__adderE__DOT__b 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__immextE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcmux__DOT__b 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pctargetE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__adderE__DOT__y 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pctargetE;
    vlSelfRef.top__DOT__dmem__DOT__a = vlSelfRef.top__DOT__dataadr;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__fmuxa__DOT__c 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__aluresultM;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__fmuxb__DOT__c 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__aluresultM;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW1__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__aluresultM;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW3__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rdM;
    vlSelfRef.top__DOT__riscv__DOT__hu__DOT__rdM = vlSelfRef.top__DOT__riscv__DOT__rdM;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rf__DOT__wa3 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rdW;
    vlSelfRef.top__DOT__riscv__DOT__hu__DOT__rdW = vlSelfRef.top__DOT__riscv__DOT__rdW;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE3__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcD;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__adderF__DOT__a 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcF;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD2__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcF;
    vlSelfRef.top__DOT__riscv__DOT__instrF = vlSelfRef.top__DOT__instrF;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcmux__DOT__a 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcplus4F;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD3__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcplus4F;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__adderF__DOT__y 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcplus4F;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE8__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcplus4D;
    vlSelfRef.top__DOT__riscv__DOT__hu__DOT__rs1E = vlSelfRef.top__DOT__riscv__DOT__rs1E;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM3__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rdE;
    vlSelfRef.top__DOT__riscv__DOT__hu__DOT__rdE = vlSelfRef.top__DOT__riscv__DOT__rdE;
    vlSelfRef.top__DOT__riscv__DOT__hu__DOT__rs2E = vlSelfRef.top__DOT__riscv__DOT__rs2E;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE6__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rdD;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__funct3 
        = vlSelfRef.top__DOT__riscv__DOT__funct3;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__funct3 
        = vlSelfRef.top__DOT__riscv__DOT__funct3;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__funct7b5 
        = vlSelfRef.top__DOT__riscv__DOT__funct7b5;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__funct7b5 
        = vlSelfRef.top__DOT__riscv__DOT__funct7b5;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__ad__DOT__rsub 
        = ((IData)(vlSelfRef.top__DOT__riscv__DOT__funct7b5) 
           & (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
              >> 5U));
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rf__DOT__ra1 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rs1D;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE4__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rs1D;
    vlSelfRef.top__DOT__riscv__DOT__rs1D = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rs1D;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rf__DOT__ra2 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rs2D;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE5__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rs2D;
    vlSelfRef.top__DOT__riscv__DOT__rs2D = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rs2D;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__op = vlSelfRef.top__DOT__riscv__DOT__op;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__op = vlSelfRef.top__DOT__riscv__DOT__op;
    __Vtableidx1 = vlSelfRef.top__DOT__riscv__DOT__op;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__md__DOT__controlsig 
        = Vtop__ConstPool__TABLE_h28f69c65_0[__Vtableidx1];
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__resultsrcW 
        = vlSelfRef.top__DOT__riscv__DOT__resultsrcW;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__resultsrcW 
        = vlSelfRef.top__DOT__riscv__DOT__resultsrcW;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rf__DOT__wd3 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__resultW;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__fmuxa__DOT__b 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__resultW;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__fmuxb__DOT__b 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__resultW;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__resultmux__DOT__y 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__resultW;
    vlSelfRef.top__DOT__riscv__DOT__hu__DOT__regwriteW 
        = vlSelfRef.top__DOT__riscv__DOT__regwriteW;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regwriteW 
        = vlSelfRef.top__DOT__riscv__DOT__regwriteW;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regwriteW 
        = vlSelfRef.top__DOT__riscv__DOT__regwriteW;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__instrF 
        = vlSelfRef.top__DOT__riscv__DOT__instrF;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__ad__DOT__funct3 
        = vlSelfRef.top__DOT__riscv__DOT__cu__DOT__funct3;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__ad__DOT__funct7b5 
        = vlSelfRef.top__DOT__riscv__DOT__cu__DOT__funct7b5;
    vlSelfRef.top__DOT__riscv__DOT__hu__DOT__rs1D = vlSelfRef.top__DOT__riscv__DOT__rs1D;
    vlSelfRef.top__DOT__riscv__DOT__hu__DOT__rs2D = vlSelfRef.top__DOT__riscv__DOT__rs2D;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__md__DOT__op 
        = vlSelfRef.top__DOT__riscv__DOT__cu__DOT__op;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regwriteD 
        = (1U & ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__md__DOT__controlsig) 
                 >> 0xaU));
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__resultsrcD 
        = (3U & ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__md__DOT__controlsig) 
                 >> 4U));
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__memwriteD 
        = (1U & ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__md__DOT__controlsig) 
                 >> 6U));
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__jumpD 
        = (1U & (IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__md__DOT__controlsig));
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__branchD 
        = (1U & ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__md__DOT__controlsig) 
                 >> 3U));
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__alusrcD 
        = (1U & ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__md__DOT__controlsig) 
                 >> 7U));
    vlSelfRef.top__DOT__riscv__DOT__immsrcD = (3U & 
                                               ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__md__DOT__controlsig) 
                                                >> 8U));
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__aluop 
        = (3U & ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__md__DOT__controlsig) 
                 >> 1U));
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__resultmux__DOT__sel 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__resultsrcW;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rf__DOT__we3 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regwriteW;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regW__DOT__d 
        = (7U & ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regM__DOT__q) 
                 >> 1U));
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__resultsrcM 
        = (3U & ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regM__DOT__q) 
                 >> 1U));
    vlSelfRef.top__DOT__memwrite = (1U & (IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regM__DOT__q));
    vlSelfRef.top__DOT__riscv__DOT__regwriteM = (1U 
                                                 & ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regM__DOT__q) 
                                                    >> 3U));
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__instrF;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__md__DOT__regwrite 
        = vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regwriteD;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__md__DOT__resultsrc 
        = vlSelfRef.top__DOT__riscv__DOT__cu__DOT__resultsrcD;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__md__DOT__memwrite 
        = vlSelfRef.top__DOT__riscv__DOT__cu__DOT__memwriteD;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__md__DOT__jump 
        = vlSelfRef.top__DOT__riscv__DOT__cu__DOT__jumpD;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__md__DOT__branch 
        = vlSelfRef.top__DOT__riscv__DOT__cu__DOT__branchD;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__md__DOT__alusrc 
        = vlSelfRef.top__DOT__riscv__DOT__cu__DOT__alusrcD;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__immsrcD 
        = vlSelfRef.top__DOT__riscv__DOT__immsrcD;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__md__DOT__immsrc 
        = vlSelfRef.top__DOT__riscv__DOT__immsrcD;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__immsrcD 
        = vlSelfRef.top__DOT__riscv__DOT__immsrcD;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__ext__DOT__immext 
        = ((2U & (IData)(vlSelfRef.top__DOT__riscv__DOT__immsrcD))
            ? ((1U & (IData)(vlSelfRef.top__DOT__riscv__DOT__immsrcD))
                ? (((- (IData)((vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                                >> 0x1fU))) << 0x14U) 
                   | (((0xff000U & vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q) 
                       | (0x800U & (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                                    >> 9U))) | (0x7feU 
                                                & (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                                                   >> 0x14U))))
                : (((- (IData)((vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                                >> 0x1fU))) << 0xcU) 
                   | ((0x800U & (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                                 << 4U)) | ((0x7e0U 
                                             & (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                                                >> 0x14U)) 
                                            | (0x1eU 
                                               & (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                                                  >> 7U))))))
            : ((1U & (IData)(vlSelfRef.top__DOT__riscv__DOT__immsrcD))
                ? (((- (IData)((vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                                >> 0x1fU))) << 0xcU) 
                   | ((0xfe0U & (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                                 >> 0x14U)) | (0x1fU 
                                               & (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                                                  >> 7U))))
                : (((- (IData)((vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                                >> 0x1fU))) << 0xcU) 
                   | (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__q 
                      >> 0x14U))));
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__ad__DOT__aluop 
        = vlSelfRef.top__DOT__riscv__DOT__cu__DOT__aluop;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__md__DOT__aluop 
        = vlSelfRef.top__DOT__riscv__DOT__cu__DOT__aluop;
    __Vtableidx2 = (((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__ad__DOT__rsub) 
                     << 5U) | (((IData)(vlSelfRef.top__DOT__riscv__DOT__funct3) 
                                << 2U) | (IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__aluop)));
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__ad__DOT__alucontrol 
        = Vtop__ConstPool__TABLE_h126e53e2_0[__Vtableidx2];
    vlSelfRef.top__DOT__dmem__DOT__we = vlSelfRef.top__DOT__memwrite;
    vlSelfRef.memwrite = vlSelfRef.top__DOT__memwrite;
    vlSelfRef.top__DOT__riscv__DOT__memwriteM = vlSelfRef.top__DOT__memwrite;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__memwriteM 
        = vlSelfRef.top__DOT__memwrite;
    vlSelfRef.top__DOT__riscv__DOT__hu__DOT__regwriteM 
        = vlSelfRef.top__DOT__riscv__DOT__regwriteM;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regwriteM 
        = vlSelfRef.top__DOT__riscv__DOT__regwriteM;
    vlSelfRef.top__DOT__riscv__DOT__hu__DOT__forwardAE = 0U;
    if (((((IData)(vlSelfRef.top__DOT__riscv__DOT__rs1E) 
           == (IData)(vlSelfRef.top__DOT__riscv__DOT__rdM)) 
          & (IData)(vlSelfRef.top__DOT__riscv__DOT__regwriteM)) 
         & (0U != (IData)(vlSelfRef.top__DOT__riscv__DOT__rs1E)))) {
        vlSelfRef.top__DOT__riscv__DOT__hu__DOT__forwardAE = 2U;
    } else if (((((IData)(vlSelfRef.top__DOT__riscv__DOT__rs1E) 
                  == (IData)(vlSelfRef.top__DOT__riscv__DOT__rdW)) 
                 & (IData)(vlSelfRef.top__DOT__riscv__DOT__regwriteW)) 
                & (0U != (IData)(vlSelfRef.top__DOT__riscv__DOT__rs1E)))) {
        vlSelfRef.top__DOT__riscv__DOT__hu__DOT__forwardAE = 1U;
    }
    vlSelfRef.top__DOT__riscv__DOT__hu__DOT__forwardBE = 0U;
    if (((((IData)(vlSelfRef.top__DOT__riscv__DOT__rs2E) 
           == (IData)(vlSelfRef.top__DOT__riscv__DOT__rdM)) 
          & (IData)(vlSelfRef.top__DOT__riscv__DOT__regwriteM)) 
         & (0U != (IData)(vlSelfRef.top__DOT__riscv__DOT__rs2E)))) {
        vlSelfRef.top__DOT__riscv__DOT__hu__DOT__forwardBE = 2U;
    } else if (((((IData)(vlSelfRef.top__DOT__riscv__DOT__rs2E) 
                  == (IData)(vlSelfRef.top__DOT__riscv__DOT__rdW)) 
                 & (IData)(vlSelfRef.top__DOT__riscv__DOT__regwriteW)) 
                & (0U != (IData)(vlSelfRef.top__DOT__riscv__DOT__rs2E)))) {
        vlSelfRef.top__DOT__riscv__DOT__hu__DOT__forwardBE = 1U;
    }
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__ext__DOT__immsrc 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__immsrcD;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__immextD 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__ext__DOT__immext;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__alucontrolD 
        = vlSelfRef.top__DOT__riscv__DOT__cu__DOT__ad__DOT__alucontrol;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT____Vcellinp__regE__d 
        = (((((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regwriteD) 
              << 9U) | ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__resultsrcD) 
                        << 7U)) | (((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__memwriteD) 
                                    << 6U) | ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__jumpD) 
                                              << 5U))) 
           | (((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__branchD) 
               << 4U) | (((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__ad__DOT__alucontrol) 
                          << 1U) | (IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__alusrcD))));
    vlSelfRef.top__DOT__riscv__DOT__forwardAE = vlSelfRef.top__DOT__riscv__DOT__hu__DOT__forwardAE;
    vlSelfRef.top__DOT__riscv__DOT__forwardBE = vlSelfRef.top__DOT__riscv__DOT__hu__DOT__forwardBE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__fmuxbout 
        = ((2U & (IData)(vlSelfRef.top__DOT__riscv__DOT__hu__DOT__forwardBE))
            ? vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM1__DOT__q
            : ((1U & (IData)(vlSelfRef.top__DOT__riscv__DOT__hu__DOT__forwardBE))
                ? vlSelfRef.top__DOT__riscv__DOT__dp__DOT__resultW
                : vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE2__DOT__q));
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regM__DOT__d 
        = (0xfU & ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regE__DOT__q) 
                   >> 6U));
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regwriteE 
        = (1U & ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regE__DOT__q) 
                 >> 9U));
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__memwriteE 
        = (1U & ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regE__DOT__q) 
                 >> 6U));
    vlSelfRef.top__DOT__riscv__DOT__resultsrcE = (3U 
                                                  & ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regE__DOT__q) 
                                                     >> 7U));
    vlSelfRef.top__DOT__riscv__DOT__alusrcE = (1U & (IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regE__DOT__q));
    vlSelfRef.top__DOT__riscv__DOT__stallF = (((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regE__DOT__q) 
                                               >> 7U) 
                                              & (((IData)(vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE6__DOT__q) 
                                                  == (IData)(vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rs1D)) 
                                                 | ((IData)(vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE6__DOT__q) 
                                                    == (IData)(vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rs2D))));
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__branchE 
        = (1U & ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regE__DOT__q) 
                 >> 4U));
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__jumpE 
        = (1U & ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regE__DOT__q) 
                 >> 5U));
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE7__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__immextD;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regE__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__cu__DOT____Vcellinp__regE__d;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__forwardAE 
        = vlSelfRef.top__DOT__riscv__DOT__forwardAE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__forwardBE 
        = vlSelfRef.top__DOT__riscv__DOT__forwardBE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alumux__DOT__a 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__fmuxbout;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__fmuxb__DOT__y 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__fmuxbout;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__writedataE 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__fmuxbout;
    vlSelfRef.top__DOT__riscv__DOT__hu__DOT__resultsrcE 
        = vlSelfRef.top__DOT__riscv__DOT__resultsrcE;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__resultsrcE 
        = vlSelfRef.top__DOT__riscv__DOT__resultsrcE;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__alusrcE 
        = vlSelfRef.top__DOT__riscv__DOT__alusrcE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alusrcE 
        = vlSelfRef.top__DOT__riscv__DOT__alusrcE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__stallF 
        = vlSelfRef.top__DOT__riscv__DOT__stallF;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pc__DOT__en 
        = (1U & (~ (IData)(vlSelfRef.top__DOT__riscv__DOT__stallF)));
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__en 
        = (1U & (~ (IData)(vlSelfRef.top__DOT__riscv__DOT__stallF)));
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD2__DOT__en 
        = (1U & (~ (IData)(vlSelfRef.top__DOT__riscv__DOT__stallF)));
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD3__DOT__en 
        = (1U & (~ (IData)(vlSelfRef.top__DOT__riscv__DOT__stallF)));
    vlSelfRef.top__DOT__riscv__DOT__hu__DOT__stallF 
        = vlSelfRef.top__DOT__riscv__DOT__stallF;
    vlSelfRef.top__DOT__riscv__DOT__hu__DOT__stallD 
        = vlSelfRef.top__DOT__riscv__DOT__stallF;
    vlSelfRef.top__DOT__riscv__DOT__hu__DOT__lwstall 
        = vlSelfRef.top__DOT__riscv__DOT__stallF;
    vlSelfRef.top__DOT__riscv__DOT__stallD = vlSelfRef.top__DOT__riscv__DOT__stallF;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__fmuxa__DOT__sel 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__forwardAE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__fmuxb__DOT__sel 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__forwardBE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM2__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__writedataE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alumux__DOT__sel 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alusrcE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__stallD 
        = vlSelfRef.top__DOT__riscv__DOT__stallD;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alu__DOT__zero 
        = (0U == vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alu__DOT__y);
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__zeroE 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alu__DOT__zero;
    vlSelfRef.top__DOT__riscv__DOT__zeroE = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alu__DOT__zero;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__zeroE 
        = vlSelfRef.top__DOT__riscv__DOT__zeroE;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__dmem__DOT__rd = vlSelfRef.top__DOT__dmem__DOT__RAM
        [vlSelfRef.top__DOT__dmem__DOT__index];
    vlSelfRef.top__DOT__readdataW = vlSelfRef.top__DOT__dmem__DOT__RAM
        [vlSelfRef.top__DOT__dmem__DOT__index];
    vlSelfRef.top__DOT__riscv__DOT__readdataM = vlSelfRef.top__DOT__readdataW;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__readdataM 
        = vlSelfRef.top__DOT__riscv__DOT__readdataM;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regW2__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__readdataM;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rd1D = 
        ((0U == (IData)(vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rs1D))
          ? 0U : vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rf__DOT__rf
         [vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rs1D]);
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rd2D = 
        ((0U == (IData)(vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rs2D))
          ? 0U : vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rf__DOT__rf
         [vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rs2D]);
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE1__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rd1D;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rf__DOT__rd1 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rd1D;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE2__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rd2D;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rf__DOT__rd2 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__rd2D;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.top__DOT__riscv__DOT__alucontrolE))) {
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alu__DOT__y 
            = (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__srcaE 
               & vlSelfRef.top__DOT__riscv__DOT__dp__DOT__srcbE);
    } else if ((1U == (IData)(vlSelfRef.top__DOT__riscv__DOT__alucontrolE))) {
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alu__DOT__y 
            = (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__srcaE 
               | vlSelfRef.top__DOT__riscv__DOT__dp__DOT__srcbE);
    } else if ((2U == (IData)(vlSelfRef.top__DOT__riscv__DOT__alucontrolE))) {
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alu__DOT__y 
            = (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__srcaE 
               + vlSelfRef.top__DOT__riscv__DOT__dp__DOT__srcbE);
    } else if ((6U == (IData)(vlSelfRef.top__DOT__riscv__DOT__alucontrolE))) {
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alu__DOT__y 
            = ((IData)(1U) + (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__srcaE 
                              + (~ vlSelfRef.top__DOT__riscv__DOT__dp__DOT__srcbE)));
    } else if ((7U == (IData)(vlSelfRef.top__DOT__riscv__DOT__alucontrolE))) {
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alu__DOT__y 
            = (((vlSelfRef.top__DOT__riscv__DOT__dp__DOT__srcaE 
                 >> 0x1fU) != (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__srcbE 
                               >> 0x1fU)) ? (((vlSelfRef.top__DOT__riscv__DOT__dp__DOT__srcaE 
                                               >> 0x1fU) 
                                              > (vlSelfRef.top__DOT__riscv__DOT__dp__DOT__srcbE 
                                                 >> 0x1fU))
                                              ? 1U : 0U)
                : ((vlSelfRef.top__DOT__riscv__DOT__dp__DOT__srcaE 
                    < vlSelfRef.top__DOT__riscv__DOT__dp__DOT__srcbE)
                    ? 1U : 0U));
    }
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__aluresultE 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alu__DOT__y;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM1__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__aluresultE;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__riscv__DOT__flushD = (((IData)(vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alu__DOT__zero) 
                                               & (IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__branchE)) 
                                              | (IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__jumpE));
    if (vlSelfRef.top__DOT__riscv__DOT__flushD) {
        vlSelfRef.top__DOT__riscv__DOT__cu__DOT__pcsrcE = 1U;
        vlSelfRef.top__DOT__riscv__DOT__hu__DOT__flushD = 1U;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcnextF 
            = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pctargetE;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__flushD = 1U;
        vlSelfRef.top__DOT__riscv__DOT__pcsrcE = 1U;
    } else {
        vlSelfRef.top__DOT__riscv__DOT__cu__DOT__pcsrcE = 0U;
        vlSelfRef.top__DOT__riscv__DOT__hu__DOT__flushD = 0U;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcnextF 
            = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcplus4F;
        vlSelfRef.top__DOT__riscv__DOT__dp__DOT__flushD = 0U;
        vlSelfRef.top__DOT__riscv__DOT__pcsrcE = 0U;
    }
    vlSelfRef.top__DOT__riscv__DOT__flushE = ((IData)(vlSelfRef.top__DOT__riscv__DOT__stallF) 
                                              | (IData)(vlSelfRef.top__DOT__riscv__DOT__flushD));
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pc__DOT__d 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcnextF;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcmux__DOT__y 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcnextF;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD1__DOT__clear 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__flushD;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD2__DOT__clear 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__flushD;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regD3__DOT__clear 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__flushD;
    vlSelfRef.top__DOT__riscv__DOT__hu__DOT__pcsrcE 
        = vlSelfRef.top__DOT__riscv__DOT__pcsrcE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcsrcE 
        = vlSelfRef.top__DOT__riscv__DOT__pcsrcE;
    vlSelfRef.top__DOT__riscv__DOT__hu__DOT__flushE 
        = vlSelfRef.top__DOT__riscv__DOT__flushE;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__flushE 
        = vlSelfRef.top__DOT__riscv__DOT__flushE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__flushE 
        = vlSelfRef.top__DOT__riscv__DOT__flushE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcmux__DOT__sel 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__pcsrcE;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regE__DOT__clear 
        = vlSelfRef.top__DOT__riscv__DOT__cu__DOT__flushE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE1__DOT__clear 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__flushE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE2__DOT__clear 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__flushE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE3__DOT__clear 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__flushE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE4__DOT__clear 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__flushE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE5__DOT__clear 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__flushE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE6__DOT__clear 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__flushE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE7__DOT__clear 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__flushE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE8__DOT__clear 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__flushE;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__srcbE 
        = ((IData)(vlSelfRef.top__DOT__riscv__DOT__alusrcE)
            ? vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE7__DOT__q
            : vlSelfRef.top__DOT__riscv__DOT__dp__DOT__fmuxbout);
    vlSelfRef.top__DOT__riscv__DOT__alucontrolE = (7U 
                                                   & ((IData)(vlSelfRef.top__DOT__riscv__DOT__cu__DOT__regE__DOT__q) 
                                                      >> 1U));
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__srcaE 
        = ((2U & (IData)(vlSelfRef.top__DOT__riscv__DOT__hu__DOT__forwardAE))
            ? vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regM1__DOT__q
            : ((1U & (IData)(vlSelfRef.top__DOT__riscv__DOT__hu__DOT__forwardAE))
                ? vlSelfRef.top__DOT__riscv__DOT__dp__DOT__resultW
                : vlSelfRef.top__DOT__riscv__DOT__dp__DOT__regE1__DOT__q));
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alu__DOT__b 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__srcbE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alumux__DOT__y 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__srcbE;
    vlSelfRef.top__DOT__riscv__DOT__cu__DOT__alucontrolE 
        = vlSelfRef.top__DOT__riscv__DOT__alucontrolE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alucontrolE 
        = vlSelfRef.top__DOT__riscv__DOT__alucontrolE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alu__DOT__a 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__srcaE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__fmuxa__DOT__y 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__srcaE;
    vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alu__DOT__f 
        = vlSelfRef.top__DOT__riscv__DOT__dp__DOT__alucontrolE;
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<7> __VpreTriggered;
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
            VL_FATAL_MT("/home/blackbox/Documents/work/riscv/pipelined/rtl/top.sv", 1, "", "Input combinational region did not converge.");
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
            VL_FATAL_MT("/home/blackbox/Documents/work/riscv/pipelined/rtl/top.sv", 1, "", "NBA region did not converge.");
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
                VL_FATAL_MT("/home/blackbox/Documents/work/riscv/pipelined/rtl/top.sv", 1, "", "Active region did not converge.");
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
