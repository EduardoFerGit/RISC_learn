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

extern const VlUnpacked<CData/*2:0*/, 64> Vtop__ConstPool__TABLE_h126e53e2_0;

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.adder__DOT__a = vlSelfRef.adder__02Ea;
    vlSelfRef.adder__DOT__b = vlSelfRef.adder__02Eb;
    vlSelfRef.aludec__DOT__opb5 = vlSelfRef.opb5;
    vlSelfRef.aludec__DOT__funct3 = vlSelfRef.funct3;
    vlSelfRef.aludec__DOT__functb5 = vlSelfRef.functb5;
    vlSelfRef.aludec__DOT__aluop = vlSelfRef.aludec__02Ealuop;
    vlSelfRef.alup__DOT__a = vlSelfRef.alup__02Ea;
    vlSelfRef.alup__DOT__b = vlSelfRef.alup__02Eb;
    vlSelfRef.alup__DOT__f = vlSelfRef.f;
    vlSelfRef.alup__DOT__shamt = vlSelfRef.shamt;
    vlSelfRef.dmem__DOT__clk = vlSelfRef.dmem__02Eclk;
    vlSelfRef.dmem__DOT__we = vlSelfRef.we;
    vlSelfRef.dmem__DOT__worb = vlSelfRef.worb;
    vlSelfRef.dmem__DOT__a = vlSelfRef.dmem__02Ea;
    vlSelfRef.dmem__DOT__wd = vlSelfRef.wd;
    vlSelfRef.eqcomp__DOT__a = vlSelfRef.eqcomp__02Ea;
    vlSelfRef.eqcomp__DOT__b = vlSelfRef.eqcomp__02Eb;
    vlSelfRef.extend__DOT__instr = vlSelfRef.instr;
    vlSelfRef.extend__DOT__immsrc = vlSelfRef.extend__02Eimmsrc;
    vlSelfRef.flopenrc__DOT__clk = vlSelfRef.flopenrc__02Eclk;
    vlSelfRef.flopenrc__DOT__rst = vlSelfRef.flopenrc__02Erst;
    vlSelfRef.flopenrc__DOT__en = vlSelfRef.flopenrc__02Een;
    vlSelfRef.flopenrc__DOT__clear = vlSelfRef.flopenrc__02Eclear;
    vlSelfRef.flopenrc__DOT__d = vlSelfRef.flopenrc__02Ed;
    vlSelfRef.flopenr__DOT__clk = vlSelfRef.flopenr__02Eclk;
    vlSelfRef.flopenr__DOT__rst = vlSelfRef.flopenr__02Erst;
    vlSelfRef.flopenr__DOT__en = vlSelfRef.flopenr__02Een;
    vlSelfRef.flopenr__DOT__d = vlSelfRef.flopenr__02Ed;
    vlSelfRef.floprc__DOT__clk = vlSelfRef.floprc__02Eclk;
    vlSelfRef.floprc__DOT__rst = vlSelfRef.floprc__02Erst;
    vlSelfRef.floprc__DOT__clear = vlSelfRef.floprc__02Eclear;
    vlSelfRef.floprc__DOT__d = vlSelfRef.floprc__02Ed;
    vlSelfRef.flopr__DOT__clk = vlSelfRef.flopr__02Eclk;
    vlSelfRef.flopr__DOT__rst = vlSelfRef.flopr__02Erst;
    vlSelfRef.flopr__DOT__d = vlSelfRef.flopr__02Ed;
    vlSelfRef.imem__DOT__a = vlSelfRef.imem__02Ea;
    vlSelfRef.ls2__DOT__a = vlSelfRef.ls2__02Ea;
    vlSelfRef.maindec__DOT__op = vlSelfRef.op;
    vlSelfRef.maindec__DOT____pinNumber10 = vlSelfRef.__pinNumber10;
    vlSelfRef.mux2__DOT__a = vlSelfRef.mux2__02Ea;
    vlSelfRef.mux2__DOT__b = vlSelfRef.mux2__02Eb;
    vlSelfRef.mux2__DOT__sel = vlSelfRef.mux2__02Esel;
    vlSelfRef.mux3__DOT__a = vlSelfRef.mux3__02Ea;
    vlSelfRef.mux3__DOT__b = vlSelfRef.mux3__02Eb;
    vlSelfRef.mux3__DOT__c = vlSelfRef.mux3__02Ec;
    vlSelfRef.mux3__DOT__sel = vlSelfRef.mux3__02Esel;
    vlSelfRef.mux4__DOT__a = vlSelfRef.mux4__02Ea;
    vlSelfRef.mux4__DOT__b = vlSelfRef.mux4__02Eb;
    vlSelfRef.mux4__DOT__c = vlSelfRef.mux4__02Ec;
    vlSelfRef.mux4__DOT__d = vlSelfRef.mux4__02Ed;
    vlSelfRef.mux4__DOT__sel = vlSelfRef.mux4__02Esel;
    vlSelfRef.regfilep__DOT__clk = vlSelfRef.regfilep__02Eclk;
    vlSelfRef.regfilep__DOT__we3 = vlSelfRef.we3;
    vlSelfRef.regfilep__DOT__ra1 = vlSelfRef.ra1;
    vlSelfRef.regfilep__DOT__ra2 = vlSelfRef.ra2;
    vlSelfRef.regfilep__DOT__wa3 = vlSelfRef.wa3;
    vlSelfRef.regfilep__DOT__wd3 = vlSelfRef.wd3;
    vlSelfRef.alup__02Ey = vlSelfRef.alup__DOT__y;
    vlSelfRef.flopenrc__02Eq = vlSelfRef.flopenrc__DOT__q;
    vlSelfRef.flopenr__02Eq = vlSelfRef.flopenr__DOT__q;
    vlSelfRef.floprc__02Eq = vlSelfRef.floprc__DOT__q;
    vlSelfRef.flopr__02Eq = vlSelfRef.flopr__DOT__q;
    vlSelfRef.dmem__02Erd = vlSelfRef.dmem__DOT__RAM
        [(0x3fU & (vlSelfRef.dmem__02Ea >> 2U))];
    vlSelfRef.dmem__DOT__rd = vlSelfRef.dmem__DOT__RAM
        [(0x3fU & (vlSelfRef.dmem__02Ea >> 2U))];
    vlSelfRef.imem__02Erd = vlSelfRef.imem__DOT__RAM
        [(0x3fU & vlSelfRef.imem__02Ea)];
    vlSelfRef.imem__DOT__rd = vlSelfRef.imem__DOT__RAM
        [(0x3fU & vlSelfRef.imem__02Ea)];
    vlSelfRef.ls2__02Ey = VL_SHIFTL_III(32,32,32, vlSelfRef.ls2__02Ea, 2U);
    vlSelfRef.extend__DOT__immext = ((0U == (IData)(vlSelfRef.extend__02Eimmsrc))
                                      ? (((- (IData)(
                                                     (1U 
                                                      & (vlSelfRef.instr 
                                                         >> 0x18U)))) 
                                          << 0xcU) 
                                         | (0xfffU 
                                            & (vlSelfRef.instr 
                                               >> 0xdU)))
                                      : ((1U == (IData)(vlSelfRef.extend__02Eimmsrc))
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.instr 
                                                             >> 0x18U)))) 
                                              << 0xcU) 
                                             | ((0xfe0U 
                                                 & (vlSelfRef.instr 
                                                    >> 0xdU)) 
                                                | (0x1fU 
                                                   & vlSelfRef.instr)))
                                          : ((2U == (IData)(vlSelfRef.extend__02Eimmsrc))
                                              ? (((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.instr 
                                                                 >> 0x18U)))) 
                                                  << 0xcU) 
                                                 | ((0x800U 
                                                     & (vlSelfRef.instr 
                                                        << 0xbU)) 
                                                    | ((0x7e0U 
                                                        & (vlSelfRef.instr 
                                                           >> 0xdU)) 
                                                       | (0x1eU 
                                                          & vlSelfRef.instr))))
                                              : 0U)));
    vlSelfRef.adder__02Ey = (vlSelfRef.adder__02Ea 
                             + vlSelfRef.adder__02Eb);
    vlSelfRef.eqcomp__02Ey = (vlSelfRef.eqcomp__02Ea 
                              == vlSelfRef.eqcomp__02Eb);
    vlSelfRef.rd1 = ((0U == (IData)(vlSelfRef.ra1))
                      ? 0U : vlSelfRef.regfilep__DOT__rf
                     [vlSelfRef.ra1]);
    vlSelfRef.rd2 = ((0U == (IData)(vlSelfRef.ra2))
                      ? 0U : vlSelfRef.regfilep__DOT__rf
                     [vlSelfRef.ra2]);
    vlSelfRef.mux2__02Ey = ((IData)(vlSelfRef.mux2__02Esel)
                             ? vlSelfRef.mux2__02Eb
                             : vlSelfRef.mux2__02Ea);
    vlSelfRef.mux3__02Ey = ((2U & (IData)(vlSelfRef.mux3__02Esel))
                             ? vlSelfRef.mux3__02Ec
                             : ((1U & (IData)(vlSelfRef.mux3__02Esel))
                                 ? vlSelfRef.mux3__02Eb
                                 : vlSelfRef.mux3__02Ea));
    vlSelfRef.mux4__DOT__y = ((2U & (IData)(vlSelfRef.mux4__02Esel))
                               ? ((1U & (IData)(vlSelfRef.mux4__02Esel))
                                   ? vlSelfRef.mux4__02Ed
                                   : vlSelfRef.mux4__02Ec)
                               : ((1U & (IData)(vlSelfRef.mux4__02Esel))
                                   ? vlSelfRef.mux4__02Eb
                                   : vlSelfRef.mux4__02Ea));
    vlSelfRef.aludec__DOT__rsub = ((IData)(vlSelfRef.functb5) 
                                   & (IData)(vlSelfRef.opb5));
    vlSelfRef.maindec__DOT__controlsig = ((3U == (IData)(vlSelfRef.op))
                                           ? 0x490U
                                           : 0U);
    vlSelfRef.ls2__DOT__y = vlSelfRef.ls2__02Ey;
    vlSelfRef.immext = vlSelfRef.extend__DOT__immext;
    vlSelfRef.adder__DOT__y = vlSelfRef.adder__02Ey;
    vlSelfRef.eqcomp__DOT__y = vlSelfRef.eqcomp__02Ey;
    vlSelfRef.regfilep__DOT__rd1 = vlSelfRef.rd1;
    vlSelfRef.regfilep__DOT__rd2 = vlSelfRef.rd2;
    vlSelfRef.mux2__DOT__y = vlSelfRef.mux2__02Ey;
    vlSelfRef.mux3__DOT__y = vlSelfRef.mux3__02Ey;
    vlSelfRef.mux4__02Ey = vlSelfRef.mux4__DOT__y;
    __Vtableidx1 = (((IData)(vlSelfRef.aludec__DOT__rsub) 
                     << 5U) | (((IData)(vlSelfRef.funct3) 
                                << 2U) | (IData)(vlSelfRef.aludec__02Ealuop)));
    vlSelfRef.aludec__DOT__alucontrol = Vtop__ConstPool__TABLE_h126e53e2_0
        [__Vtableidx1];
    vlSelfRef.jump = (1U & (IData)(vlSelfRef.maindec__DOT__controlsig));
    vlSelfRef.branch = (1U & ((IData)(vlSelfRef.maindec__DOT__controlsig) 
                              >> 3U));
    vlSelfRef.alusrc = (1U & ((IData)(vlSelfRef.maindec__DOT__controlsig) 
                              >> 7U));
    vlSelfRef.maindec__02Eimmsrc = (3U & ((IData)(vlSelfRef.maindec__DOT__controlsig) 
                                          >> 8U));
    vlSelfRef.maindec__02Ealuop = (3U & ((IData)(vlSelfRef.maindec__DOT__controlsig) 
                                         >> 1U));
    vlSelfRef.maindec__DOT__resultsrc = (3U & ((IData)(vlSelfRef.maindec__DOT__controlsig) 
                                               >> 4U));
    vlSelfRef.maindec__DOT__regwrite = (1U & ((IData)(vlSelfRef.maindec__DOT__controlsig) 
                                              >> 0xaU));
    vlSelfRef.maindec__DOT__memwrite = (1U & ((IData)(vlSelfRef.maindec__DOT__controlsig) 
                                              >> 6U));
    vlSelfRef.alucontrol = vlSelfRef.aludec__DOT__alucontrol;
    vlSelfRef.maindec__DOT__jump = vlSelfRef.jump;
    vlSelfRef.maindec__DOT__branch = vlSelfRef.branch;
    vlSelfRef.maindec__DOT__alusrc = vlSelfRef.alusrc;
    vlSelfRef.maindec__DOT__immsrc = vlSelfRef.maindec__02Eimmsrc;
    vlSelfRef.maindec__DOT__aluop = vlSelfRef.maindec__02Ealuop;
    vlSelfRef.resultsrc = vlSelfRef.maindec__DOT__resultsrc;
    vlSelfRef.regwrite = vlSelfRef.maindec__DOT__regwrite;
    vlSelfRef.memwrite = vlSelfRef.maindec__DOT__memwrite;
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
void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0xc00ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0xc0ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x300ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x30ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__6(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__regfilep__DOT__rf__v0;
    __VdlyVal__regfilep__DOT__rf__v0 = 0;
    CData/*4:0*/ __VdlyDim0__regfilep__DOT__rf__v0;
    __VdlyDim0__regfilep__DOT__rf__v0 = 0;
    CData/*0:0*/ __VdlySet__regfilep__DOT__rf__v0;
    __VdlySet__regfilep__DOT__rf__v0 = 0;
    // Body
    __VdlySet__regfilep__DOT__rf__v0 = 0U;
    if (vlSelfRef.we3) {
        __VdlyVal__regfilep__DOT__rf__v0 = vlSelfRef.wd3;
        __VdlyDim0__regfilep__DOT__rf__v0 = vlSelfRef.wa3;
        __VdlySet__regfilep__DOT__rf__v0 = 1U;
    }
    if (__VdlySet__regfilep__DOT__rf__v0) {
        vlSelfRef.regfilep__DOT__rf[__VdlyDim0__regfilep__DOT__rf__v0] 
            = __VdlyVal__regfilep__DOT__rf__v0;
    }
    vlSelfRef.rd1 = ((0U == (IData)(vlSelfRef.ra1))
                      ? 0U : vlSelfRef.regfilep__DOT__rf
                     [vlSelfRef.ra1]);
    vlSelfRef.rd2 = ((0U == (IData)(vlSelfRef.ra2))
                      ? 0U : vlSelfRef.regfilep__DOT__rf
                     [vlSelfRef.ra2]);
    vlSelfRef.regfilep__DOT__rd1 = vlSelfRef.rd1;
    vlSelfRef.regfilep__DOT__rd2 = vlSelfRef.rd2;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.we) {
        vlSelfRef.dmem__DOT__RAM[(0x3fU & (vlSelfRef.dmem__02Ea 
                                           >> 2U))] 
            = ((IData)(vlSelfRef.worb) ? ((0xffffff00U 
                                           & vlSelfRef.dmem__DOT__RAM
                                           [(0x3fU 
                                             & (vlSelfRef.dmem__02Ea 
                                                >> 2U))]) 
                                          | (0xffU 
                                             & vlSelfRef.wd))
                : vlSelfRef.wd);
    }
    vlSelfRef.dmem__02Erd = vlSelfRef.dmem__DOT__RAM
        [(0x3fU & (vlSelfRef.dmem__02Ea >> 2U))];
    vlSelfRef.dmem__DOT__rd = vlSelfRef.dmem__DOT__RAM
        [(0x3fU & (vlSelfRef.dmem__02Ea >> 2U))];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.flopr__DOT__q = ((IData)(vlSelfRef.flopr__02Erst)
                                ? 0U : (IData)(vlSelfRef.flopr__02Ed));
    vlSelfRef.flopr__02Eq = vlSelfRef.flopr__DOT__q;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.flopenr__02Erst) {
        vlSelfRef.flopenr__DOT__q = 0U;
    } else if (vlSelfRef.flopenr__02Een) {
        vlSelfRef.flopenr__DOT__q = vlSelfRef.flopenr__02Ed;
    }
    vlSelfRef.flopenr__02Eq = vlSelfRef.flopenr__DOT__q;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.floprc__02Erst) {
        vlSelfRef.floprc__DOT__q = 0U;
    }
    vlSelfRef.floprc__DOT__q = ((IData)(vlSelfRef.floprc__02Eclear)
                                 ? 0U : (IData)(vlSelfRef.floprc__02Ed));
    vlSelfRef.floprc__02Eq = vlSelfRef.floprc__DOT__q;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.f))) {
        vlSelfRef.alup__DOT__y = (vlSelfRef.alup__02Ea 
                                  & vlSelfRef.alup__02Eb);
    } else if ((1U == (IData)(vlSelfRef.f))) {
        vlSelfRef.alup__DOT__y = (vlSelfRef.alup__02Ea 
                                  | vlSelfRef.alup__02Eb);
    } else if ((2U == (IData)(vlSelfRef.f))) {
        vlSelfRef.alup__DOT__y = (vlSelfRef.alup__02Ea 
                                  + vlSelfRef.alup__02Eb);
    } else if ((4U == (IData)(vlSelfRef.f))) {
        vlSelfRef.alup__DOT__y = (vlSelfRef.alup__02Eb 
                                  << (IData)(vlSelfRef.shamt));
    } else if ((5U == (IData)(vlSelfRef.f))) {
        vlSelfRef.alup__DOT__y = (vlSelfRef.alup__02Eb 
                                  >> (IData)(vlSelfRef.shamt));
    } else if ((6U == (IData)(vlSelfRef.f))) {
        vlSelfRef.alup__DOT__y = ((IData)(1U) + (vlSelfRef.alup__02Ea 
                                                 + 
                                                 (~ vlSelfRef.alup__02Eb)));
    } else if ((7U == (IData)(vlSelfRef.f))) {
        vlSelfRef.alup__DOT__y = (((vlSelfRef.alup__02Ea 
                                    >> 0x1fU) != (vlSelfRef.alup__02Eb 
                                                  >> 0x1fU))
                                   ? (((vlSelfRef.alup__02Ea 
                                        >> 0x1fU) > 
                                       (vlSelfRef.alup__02Eb 
                                        >> 0x1fU)) ? 1U
                                       : 0U) : ((vlSelfRef.alup__02Ea 
                                                 < vlSelfRef.alup__02Eb)
                                                 ? 1U
                                                 : 0U));
    }
    vlSelfRef.alup__02Ey = vlSelfRef.alup__DOT__y;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.flopenrc__02Erst) {
        vlSelfRef.flopenrc__DOT__q = 0U;
    } else if (vlSelfRef.flopenrc__02Eclear) {
        vlSelfRef.flopenrc__DOT__q = 0U;
    } else if (vlSelfRef.flopenrc__02Een) {
        vlSelfRef.flopenrc__DOT__q = vlSelfRef.flopenrc__02Ed;
    }
    vlSelfRef.flopenrc__02Eq = vlSelfRef.flopenrc__DOT__q;
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<13> __VpreTriggered;
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
            VL_FATAL_MT("/home/blackbox/Documents/work/riscv/pipelined/rtl/adder.sv", 1, "", "Input combinational region did not converge.");
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
            VL_FATAL_MT("/home/blackbox/Documents/work/riscv/pipelined/rtl/adder.sv", 1, "", "NBA region did not converge.");
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
                VL_FATAL_MT("/home/blackbox/Documents/work/riscv/pipelined/rtl/adder.sv", 1, "", "Active region did not converge.");
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
    if (VL_UNLIKELY(((vlSelfRef.opb5 & 0xfeU)))) {
        Verilated::overWidthError("opb5");}
    if (VL_UNLIKELY(((vlSelfRef.funct3 & 0xf8U)))) {
        Verilated::overWidthError("funct3");}
    if (VL_UNLIKELY(((vlSelfRef.functb5 & 0xfeU)))) {
        Verilated::overWidthError("functb5");}
    if (VL_UNLIKELY(((vlSelfRef.aludec__02Ealuop & 0xfcU)))) {
        Verilated::overWidthError("aludec.aluop");}
    if (VL_UNLIKELY(((vlSelfRef.f & 0xf8U)))) {
        Verilated::overWidthError("f");}
    if (VL_UNLIKELY(((vlSelfRef.shamt & 0xe0U)))) {
        Verilated::overWidthError("shamt");}
    if (VL_UNLIKELY(((vlSelfRef.dmem__02Eclk & 0xfeU)))) {
        Verilated::overWidthError("dmem.clk");}
    if (VL_UNLIKELY(((vlSelfRef.we & 0xfeU)))) {
        Verilated::overWidthError("we");}
    if (VL_UNLIKELY(((vlSelfRef.worb & 0xfeU)))) {
        Verilated::overWidthError("worb");}
    if (VL_UNLIKELY(((vlSelfRef.instr & 0xfe000000U)))) {
        Verilated::overWidthError("instr");}
    if (VL_UNLIKELY(((vlSelfRef.extend__02Eimmsrc & 0xfcU)))) {
        Verilated::overWidthError("extend.immsrc");}
    if (VL_UNLIKELY(((vlSelfRef.flopenrc__02Eclk & 0xfeU)))) {
        Verilated::overWidthError("flopenrc.clk");}
    if (VL_UNLIKELY(((vlSelfRef.flopenrc__02Erst & 0xfeU)))) {
        Verilated::overWidthError("flopenrc.rst");}
    if (VL_UNLIKELY(((vlSelfRef.flopenrc__02Een & 0xfeU)))) {
        Verilated::overWidthError("flopenrc.en");}
    if (VL_UNLIKELY(((vlSelfRef.flopenrc__02Eclear 
                      & 0xfeU)))) {
        Verilated::overWidthError("flopenrc.clear");}
    if (VL_UNLIKELY(((vlSelfRef.flopenr__02Eclk & 0xfeU)))) {
        Verilated::overWidthError("flopenr.clk");}
    if (VL_UNLIKELY(((vlSelfRef.flopenr__02Erst & 0xfeU)))) {
        Verilated::overWidthError("flopenr.rst");}
    if (VL_UNLIKELY(((vlSelfRef.flopenr__02Een & 0xfeU)))) {
        Verilated::overWidthError("flopenr.en");}
    if (VL_UNLIKELY(((vlSelfRef.floprc__02Eclk & 0xfeU)))) {
        Verilated::overWidthError("floprc.clk");}
    if (VL_UNLIKELY(((vlSelfRef.floprc__02Erst & 0xfeU)))) {
        Verilated::overWidthError("floprc.rst");}
    if (VL_UNLIKELY(((vlSelfRef.floprc__02Eclear & 0xfeU)))) {
        Verilated::overWidthError("floprc.clear");}
    if (VL_UNLIKELY(((vlSelfRef.flopr__02Eclk & 0xfeU)))) {
        Verilated::overWidthError("flopr.clk");}
    if (VL_UNLIKELY(((vlSelfRef.flopr__02Erst & 0xfeU)))) {
        Verilated::overWidthError("flopr.rst");}
    if (VL_UNLIKELY(((vlSelfRef.op & 0x80U)))) {
        Verilated::overWidthError("op");}
    if (VL_UNLIKELY(((vlSelfRef.__pinNumber10 & 0xfeU)))) {
        Verilated::overWidthError("__pinNumber10");}
    if (VL_UNLIKELY(((vlSelfRef.mux2__02Esel & 0xfeU)))) {
        Verilated::overWidthError("mux2.sel");}
    if (VL_UNLIKELY(((vlSelfRef.mux3__02Esel & 0xfcU)))) {
        Verilated::overWidthError("mux3.sel");}
    if (VL_UNLIKELY(((vlSelfRef.mux4__02Esel & 0xfcU)))) {
        Verilated::overWidthError("mux4.sel");}
    if (VL_UNLIKELY(((vlSelfRef.regfilep__02Eclk & 0xfeU)))) {
        Verilated::overWidthError("regfilep.clk");}
    if (VL_UNLIKELY(((vlSelfRef.we3 & 0xfeU)))) {
        Verilated::overWidthError("we3");}
    if (VL_UNLIKELY(((vlSelfRef.ra1 & 0xe0U)))) {
        Verilated::overWidthError("ra1");}
    if (VL_UNLIKELY(((vlSelfRef.ra2 & 0xe0U)))) {
        Verilated::overWidthError("ra2");}
    if (VL_UNLIKELY(((vlSelfRef.wa3 & 0xe0U)))) {
        Verilated::overWidthError("wa3");}
}
#endif  // VL_DEBUG
