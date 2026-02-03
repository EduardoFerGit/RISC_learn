// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rst));
    bufp->chgIData(oldp+2,(vlSelfRef.writedata),32);
    bufp->chgIData(oldp+3,(vlSelfRef.dataaddr),32);
    bufp->chgBit(oldp+4,(vlSelfRef.memwrite));
    bufp->chgBit(oldp+5,(vlSelfRef.toplevel__DOT__clk));
    bufp->chgBit(oldp+6,(vlSelfRef.toplevel__DOT__rst));
    bufp->chgIData(oldp+7,(vlSelfRef.toplevel__DOT__writedata),32);
    bufp->chgIData(oldp+8,(vlSelfRef.toplevel__DOT__dataaddr),32);
    bufp->chgBit(oldp+9,(vlSelfRef.toplevel__DOT__memwrite));
    bufp->chgCData(oldp+10,(vlSelfRef.toplevel__DOT__currentpc),8);
    bufp->chgIData(oldp+11,(vlSelfRef.toplevel__DOT__instruction),32);
    bufp->chgIData(oldp+12,(vlSelfRef.toplevel__DOT__datamemout),32);
    bufp->chgBit(oldp+13,(vlSelfRef.toplevel__DOT__dmem__DOT__clk));
    bufp->chgBit(oldp+14,(vlSelfRef.toplevel__DOT__dmem__DOT__we));
    bufp->chgIData(oldp+15,(vlSelfRef.toplevel__DOT__dmem__DOT__a),32);
    bufp->chgIData(oldp+16,(vlSelfRef.toplevel__DOT__dmem__DOT__wd),32);
    bufp->chgIData(oldp+17,(vlSelfRef.toplevel__DOT__dmem__DOT__rd),32);
    bufp->chgCData(oldp+18,(vlSelfRef.toplevel__DOT__imem__DOT__a),6);
    bufp->chgIData(oldp+19,(vlSelfRef.toplevel__DOT__imem__DOT__rd),32);
    bufp->chgBit(oldp+20,(vlSelfRef.toplevel__DOT__mips_core__DOT__clk));
    bufp->chgBit(oldp+21,(vlSelfRef.toplevel__DOT__mips_core__DOT__rst));
    bufp->chgIData(oldp+22,(vlSelfRef.toplevel__DOT__mips_core__DOT__instruction),32);
    bufp->chgIData(oldp+23,(vlSelfRef.toplevel__DOT__mips_core__DOT__datamemout),32);
    bufp->chgBit(oldp+24,(vlSelfRef.toplevel__DOT__mips_core__DOT__memwrite));
    bufp->chgIData(oldp+25,(vlSelfRef.toplevel__DOT__mips_core__DOT__aluresult),32);
    bufp->chgIData(oldp+26,(vlSelfRef.toplevel__DOT__mips_core__DOT__writedata),32);
    bufp->chgCData(oldp+27,(vlSelfRef.toplevel__DOT__mips_core__DOT__currentpc),8);
    bufp->chgCData(oldp+28,(vlSelfRef.toplevel__DOT__mips_core__DOT__op),6);
    bufp->chgCData(oldp+29,(vlSelfRef.toplevel__DOT__mips_core__DOT__funct),6);
    bufp->chgBit(oldp+30,(vlSelfRef.toplevel__DOT__mips_core__DOT__zero));
    bufp->chgBit(oldp+31,(vlSelfRef.toplevel__DOT__mips_core__DOT__jump));
    bufp->chgBit(oldp+32,(vlSelfRef.toplevel__DOT__mips_core__DOT__regwrite));
    bufp->chgBit(oldp+33,(vlSelfRef.toplevel__DOT__mips_core__DOT__regdst));
    bufp->chgBit(oldp+34,(vlSelfRef.toplevel__DOT__mips_core__DOT__memtoreg));
    bufp->chgBit(oldp+35,(vlSelfRef.toplevel__DOT__mips_core__DOT__pcsrc));
    bufp->chgBit(oldp+36,(vlSelfRef.toplevel__DOT__mips_core__DOT__alusrc));
    bufp->chgCData(oldp+37,(vlSelfRef.toplevel__DOT__mips_core__DOT__alucontrol),3);
    bufp->chgCData(oldp+38,(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__op),6);
    bufp->chgCData(oldp+39,(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__funct),6);
    bufp->chgBit(oldp+40,(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__zero));
    bufp->chgBit(oldp+41,(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__memtoreg));
    bufp->chgBit(oldp+42,(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__memwrite));
    bufp->chgBit(oldp+43,(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__regdst));
    bufp->chgBit(oldp+44,(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__regwrite));
    bufp->chgBit(oldp+45,(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__jump));
    bufp->chgBit(oldp+46,(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__pcsrc));
    bufp->chgBit(oldp+47,(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__alusrc));
    bufp->chgCData(oldp+48,(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__alucontrol),3);
    bufp->chgBit(oldp+49,(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__branch));
    bufp->chgCData(oldp+50,(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__aluop),2);
    bufp->chgCData(oldp+51,(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__alu_decoder_inst__DOT__funct),6);
    bufp->chgCData(oldp+52,(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__alu_decoder_inst__DOT__aluop),2);
    bufp->chgCData(oldp+53,(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__alu_decoder_inst__DOT__alucontrol),3);
    bufp->chgCData(oldp+54,(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__op),6);
    bufp->chgBit(oldp+55,(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__memtoreg));
    bufp->chgBit(oldp+56,(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__memwrite));
    bufp->chgBit(oldp+57,(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__branch));
    bufp->chgBit(oldp+58,(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__aluscr));
    bufp->chgBit(oldp+59,(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__regdst));
    bufp->chgBit(oldp+60,(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__regwrite));
    bufp->chgBit(oldp+61,(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__jump));
    bufp->chgCData(oldp+62,(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__aluop),2);
    bufp->chgSData(oldp+63,(vlSelfRef.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__controlsig),9);
    bufp->chgBit(oldp+64,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__clk));
    bufp->chgBit(oldp+65,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rst));
    bufp->chgBit(oldp+66,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jump));
    bufp->chgBit(oldp+67,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regwrite));
    bufp->chgBit(oldp+68,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regdst));
    bufp->chgBit(oldp+69,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__memtoreg));
    bufp->chgBit(oldp+70,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__memwrite));
    bufp->chgCData(oldp+71,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alucontrol),3);
    bufp->chgBit(oldp+72,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcsrc));
    bufp->chgBit(oldp+73,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alusrc));
    bufp->chgCData(oldp+74,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__op),6);
    bufp->chgCData(oldp+75,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__funct),6);
    bufp->chgBit(oldp+76,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__zero));
    bufp->chgIData(oldp+77,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__instruction),32);
    bufp->chgCData(oldp+78,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__currentpc),8);
    bufp->chgIData(oldp+79,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__aluresult),32);
    bufp->chgIData(oldp+80,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout2),32);
    bufp->chgIData(oldp+81,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__datamemout),32);
    bufp->chgIData(oldp+82,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcplus4),32);
    bufp->chgCData(oldp+83,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__branchmuxout),8);
    bufp->chgCData(oldp+84,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpmuxout),8);
    bufp->chgIData(oldp+85,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcbranchout),32);
    bufp->chgCData(oldp+86,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__wa3),5);
    bufp->chgIData(oldp+87,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__immext),32);
    bufp->chgIData(oldp+88,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__ls2out),32);
    bufp->chgIData(oldp+89,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout1),32);
    bufp->chgIData(oldp+90,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumuxout),32);
    bufp->chgIData(oldp+91,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__writedatareg),32);
    bufp->chgIData(oldp+92,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__currentpc_32),32);
    bufp->chgIData(oldp+93,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcjump),32);
    bufp->chgIData(oldp+94,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpls2out),32);
    bufp->chgIData(oldp+95,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__a),32);
    bufp->chgIData(oldp+96,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__b),32);
    bufp->chgCData(oldp+97,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__f),3);
    bufp->chgIData(oldp+98,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__y),32);
    bufp->chgBit(oldp+99,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__zero));
    bufp->chgIData(oldp+100,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumux__DOT__a),32);
    bufp->chgIData(oldp+101,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumux__DOT__b),32);
    bufp->chgBit(oldp+102,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumux__DOT__sel));
    bufp->chgIData(oldp+103,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumux__DOT__y),32);
    bufp->chgCData(oldp+104,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__branchmux__DOT__a),8);
    bufp->chgCData(oldp+105,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__branchmux__DOT__b),8);
    bufp->chgBit(oldp+106,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__branchmux__DOT__sel));
    bufp->chgCData(oldp+107,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__branchmux__DOT__y),8);
    bufp->chgIData(oldp+108,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpls2_inst__DOT__a),32);
    bufp->chgIData(oldp+109,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpls2_inst__DOT__y),32);
    bufp->chgCData(oldp+110,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpmux__DOT__a),8);
    bufp->chgCData(oldp+111,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpmux__DOT__b),8);
    bufp->chgBit(oldp+112,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpmux__DOT__sel));
    bufp->chgCData(oldp+113,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpmux__DOT__y),8);
    bufp->chgBit(oldp+114,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__clk));
    bufp->chgBit(oldp+115,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__rst));
    bufp->chgCData(oldp+116,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__d),8);
    bufp->chgCData(oldp+117,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__q),8);
    bufp->chgIData(oldp+118,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcbranch__DOT__a),32);
    bufp->chgIData(oldp+119,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcbranch__DOT__b),32);
    bufp->chgIData(oldp+120,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcbranch__DOT__y),32);
    bufp->chgIData(oldp+121,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcplus4_inst__DOT__a),32);
    bufp->chgIData(oldp+122,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcplus4_inst__DOT__b),32);
    bufp->chgIData(oldp+123,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcplus4_inst__DOT__y),32);
    bufp->chgIData(oldp+124,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__resultmux__DOT__a),32);
    bufp->chgIData(oldp+125,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__resultmux__DOT__b),32);
    bufp->chgBit(oldp+126,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__resultmux__DOT__sel));
    bufp->chgIData(oldp+127,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__resultmux__DOT__y),32);
    bufp->chgBit(oldp+128,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__clk));
    bufp->chgBit(oldp+129,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__we3));
    bufp->chgCData(oldp+130,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__ra1),5);
    bufp->chgCData(oldp+131,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__ra2),5);
    bufp->chgCData(oldp+132,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__wa3),5);
    bufp->chgIData(oldp+133,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__wd3),32);
    bufp->chgIData(oldp+134,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rd1),32);
    bufp->chgIData(oldp+135,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rd2),32);
    bufp->chgIData(oldp+136,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf[0]),32);
    bufp->chgIData(oldp+137,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf[1]),32);
    bufp->chgIData(oldp+138,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf[2]),32);
    bufp->chgIData(oldp+139,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf[3]),32);
    bufp->chgIData(oldp+140,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf[4]),32);
    bufp->chgIData(oldp+141,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf[5]),32);
    bufp->chgIData(oldp+142,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf[6]),32);
    bufp->chgIData(oldp+143,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf[7]),32);
    bufp->chgIData(oldp+144,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf[8]),32);
    bufp->chgIData(oldp+145,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf[9]),32);
    bufp->chgIData(oldp+146,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf[10]),32);
    bufp->chgIData(oldp+147,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf[11]),32);
    bufp->chgIData(oldp+148,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf[12]),32);
    bufp->chgIData(oldp+149,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf[13]),32);
    bufp->chgIData(oldp+150,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf[14]),32);
    bufp->chgIData(oldp+151,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf[15]),32);
    bufp->chgIData(oldp+152,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf[16]),32);
    bufp->chgIData(oldp+153,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf[17]),32);
    bufp->chgIData(oldp+154,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf[18]),32);
    bufp->chgIData(oldp+155,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf[19]),32);
    bufp->chgIData(oldp+156,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf[20]),32);
    bufp->chgIData(oldp+157,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf[21]),32);
    bufp->chgIData(oldp+158,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf[22]),32);
    bufp->chgIData(oldp+159,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf[23]),32);
    bufp->chgIData(oldp+160,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf[24]),32);
    bufp->chgIData(oldp+161,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf[25]),32);
    bufp->chgIData(oldp+162,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf[26]),32);
    bufp->chgIData(oldp+163,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf[27]),32);
    bufp->chgIData(oldp+164,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf[28]),32);
    bufp->chgIData(oldp+165,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf[29]),32);
    bufp->chgIData(oldp+166,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf[30]),32);
    bufp->chgIData(oldp+167,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf[31]),32);
    bufp->chgSData(oldp+168,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__se__DOT__a),16);
    bufp->chgIData(oldp+169,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__se__DOT__y),32);
    bufp->chgIData(oldp+170,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__signextls2__DOT__a),32);
    bufp->chgIData(oldp+171,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__signextls2__DOT__y),32);
    bufp->chgCData(oldp+172,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__wregmux__DOT__a),5);
    bufp->chgCData(oldp+173,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__wregmux__DOT__b),5);
    bufp->chgBit(oldp+174,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__wregmux__DOT__sel));
    bufp->chgCData(oldp+175,(vlSelfRef.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__wregmux__DOT__y),5);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
