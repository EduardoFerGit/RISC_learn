// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_OUT8(memwrite,0,0);
        CData/*0:0*/ toplevel__DOT__clk;
        CData/*0:0*/ toplevel__DOT__rst;
        CData/*0:0*/ toplevel__DOT__memwrite;
        CData/*7:0*/ toplevel__DOT__currentpc;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__clk;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__rst;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__memwrite;
        CData/*7:0*/ toplevel__DOT__mips_core__DOT__currentpc;
        CData/*5:0*/ toplevel__DOT__mips_core__DOT__op;
        CData/*5:0*/ toplevel__DOT__mips_core__DOT__funct;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__zero;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__jump;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__regwrite;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__regdst;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__memtoreg;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__pcsrc;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__alusrc;
        CData/*2:0*/ toplevel__DOT__mips_core__DOT__alucontrol;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__clk;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rst;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jump;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regwrite;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regdst;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__memtoreg;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__memwrite;
        CData/*2:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alucontrol;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcsrc;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alusrc;
        CData/*5:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__op;
        CData/*5:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__funct;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__zero;
        CData/*7:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__currentpc;
        CData/*7:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__branchmuxout;
        CData/*7:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpmuxout;
        CData/*4:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__wa3;
        CData/*7:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT____Vcellinp__jumpmux__b;
        CData/*4:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT____Vcellinp__rf__ra1;
        CData/*4:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT____Vcellinp__wregmux__a;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__clk;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__rst;
        CData/*7:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__d;
        CData/*7:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__q;
        CData/*7:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__branchmux__DOT__a;
        CData/*7:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__branchmux__DOT__b;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__branchmux__DOT__sel;
        CData/*7:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__branchmux__DOT__y;
        CData/*7:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpmux__DOT__a;
        CData/*7:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpmux__DOT__b;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpmux__DOT__sel;
        CData/*7:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpmux__DOT__y;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__clk;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__we3;
        CData/*4:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__ra1;
        CData/*4:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__ra2;
        CData/*4:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__wa3;
        CData/*4:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__wregmux__DOT__a;
        CData/*4:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__wregmux__DOT__b;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__wregmux__DOT__sel;
        CData/*4:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__wregmux__DOT__y;
        CData/*2:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__f;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__zero;
    };
    struct {
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumux__DOT__sel;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__resultmux__DOT__sel;
        CData/*5:0*/ toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__op;
        CData/*5:0*/ toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__funct;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__zero;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__memtoreg;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__memwrite;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__regdst;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__regwrite;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__jump;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__pcsrc;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__alusrc;
        CData/*2:0*/ toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__alucontrol;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__branch;
        CData/*1:0*/ toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__aluop;
        CData/*5:0*/ toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__op;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__memtoreg;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__memwrite;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__branch;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__aluscr;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__regdst;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__regwrite;
        CData/*0:0*/ toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__jump;
        CData/*1:0*/ toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__aluop;
        CData/*5:0*/ toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__alu_decoder_inst__DOT__funct;
        CData/*1:0*/ toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__alu_decoder_inst__DOT__aluop;
        CData/*2:0*/ toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__alu_decoder_inst__DOT__alucontrol;
        CData/*5:0*/ toplevel__DOT__imem__DOT__a;
        CData/*0:0*/ toplevel__DOT__dmem__DOT__clk;
        CData/*0:0*/ toplevel__DOT__dmem__DOT__we;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
        CData/*2:0*/ __Vtrigprevexpr___TOP__toplevel__DOT__mips_core__DOT__alucontrol__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__se__DOT__a;
        SData/*8:0*/ toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__controlsig;
        VL_OUT(writedata,31,0);
        VL_OUT(dataaddr,31,0);
        IData/*31:0*/ toplevel__DOT__writedata;
        IData/*31:0*/ toplevel__DOT__dataaddr;
        IData/*31:0*/ toplevel__DOT__instruction;
        IData/*31:0*/ toplevel__DOT__datamemout;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__instruction;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__datamemout;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__aluresult;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__writedata;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__instruction;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__aluresult;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout2;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__datamemout;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcplus4;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcbranchout;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__immext;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__ls2out;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout1;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumuxout;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__writedatareg;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__currentpc_32;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcjump;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpls2out;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcplus4_inst__DOT__a;
    };
    struct {
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcplus4_inst__DOT__b;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcplus4_inst__DOT__y;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__wd3;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rd1;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rd2;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__se__DOT__y;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__a;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__b;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__y;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumux__DOT__a;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumux__DOT__b;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumux__DOT__y;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__signextls2__DOT__a;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__signextls2__DOT__y;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcbranch__DOT__a;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcbranch__DOT__b;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcbranch__DOT__y;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpls2_inst__DOT__a;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpls2_inst__DOT__y;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__resultmux__DOT__a;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__resultmux__DOT__b;
        IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__resultmux__DOT__y;
        IData/*31:0*/ toplevel__DOT__imem__DOT__rd;
        IData/*31:0*/ toplevel__DOT__dmem__DOT__a;
        IData/*31:0*/ toplevel__DOT__dmem__DOT__wd;
        IData/*31:0*/ toplevel__DOT__dmem__DOT__rd;
        IData/*31:0*/ __Vtrigprevexpr___TOP__toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumuxout__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout1__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__y__0;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 32> toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf;
        VlUnpacked<IData/*31:0*/, 64> toplevel__DOT__imem__DOT__RAM;
        VlUnpacked<IData/*31:0*/, 64> toplevel__DOT__dmem__DOT__RAM;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<6> __VactTriggered;
    VlTriggerVec<6> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ toplevel__DOT__WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ toplevel__DOT__PCWIDTH = 8U;
    static constexpr IData/*31:0*/ toplevel__DOT__mips_core__DOT__WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ toplevel__DOT__mips_core__DOT__PCWIDTH = 8U;
    static constexpr IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__PCWIDTH = 8U;
    static constexpr IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__WIDTH = 8U;
    static constexpr IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcplus4_inst__DOT__WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__branchmux__DOT__WIDTH = 8U;
    static constexpr IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpmux__DOT__WIDTH = 8U;
    static constexpr IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__wregmux__DOT__WIDTH = 5U;
    static constexpr IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__se__DOT__WIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__se__DOT__OUTWIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumux__DOT__WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__signextls2__DOT__WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcbranch__DOT__WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpls2_inst__DOT__WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ toplevel__DOT__mips_core__DOT__datapath_inst__DOT__resultmux__DOT__WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ toplevel__DOT__dmem__DOT__WIDTH = 0x00000020U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
