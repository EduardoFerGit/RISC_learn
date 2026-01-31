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
    bufp->chgIData(oldp+0,(vlSelfRef.adder__02Ea),32);
    bufp->chgIData(oldp+1,(vlSelfRef.adder__02Eb),32);
    bufp->chgIData(oldp+2,(vlSelfRef.adder__02Ey),32);
    bufp->chgBit(oldp+3,(vlSelfRef.opb5));
    bufp->chgCData(oldp+4,(vlSelfRef.funct3),3);
    bufp->chgBit(oldp+5,(vlSelfRef.functb5));
    bufp->chgCData(oldp+6,(vlSelfRef.aludec__02Ealuop),2);
    bufp->chgCData(oldp+7,(vlSelfRef.alucontrol),3);
    bufp->chgIData(oldp+8,(vlSelfRef.alup__02Ea),32);
    bufp->chgIData(oldp+9,(vlSelfRef.alup__02Eb),32);
    bufp->chgCData(oldp+10,(vlSelfRef.f),3);
    bufp->chgCData(oldp+11,(vlSelfRef.shamt),5);
    bufp->chgIData(oldp+12,(vlSelfRef.alup__02Ey),32);
    bufp->chgBit(oldp+13,(vlSelfRef.dmem__02Eclk));
    bufp->chgBit(oldp+14,(vlSelfRef.we));
    bufp->chgBit(oldp+15,(vlSelfRef.worb));
    bufp->chgIData(oldp+16,(vlSelfRef.dmem__02Ea),32);
    bufp->chgIData(oldp+17,(vlSelfRef.wd),32);
    bufp->chgIData(oldp+18,(vlSelfRef.dmem__02Erd),32);
    bufp->chgIData(oldp+19,(vlSelfRef.eqcomp__02Ea),32);
    bufp->chgIData(oldp+20,(vlSelfRef.eqcomp__02Eb),32);
    bufp->chgBit(oldp+21,(vlSelfRef.eqcomp__02Ey));
    bufp->chgIData(oldp+22,(vlSelfRef.instr),25);
    bufp->chgCData(oldp+23,(vlSelfRef.extend__02Eimmsrc),2);
    bufp->chgIData(oldp+24,(vlSelfRef.immext),32);
    bufp->chgBit(oldp+25,(vlSelfRef.flopenrc__02Eclk));
    bufp->chgBit(oldp+26,(vlSelfRef.flopenrc__02Erst));
    bufp->chgBit(oldp+27,(vlSelfRef.flopenrc__02Een));
    bufp->chgBit(oldp+28,(vlSelfRef.flopenrc__02Eclear));
    bufp->chgCData(oldp+29,(vlSelfRef.flopenrc__02Ed),8);
    bufp->chgCData(oldp+30,(vlSelfRef.flopenrc__02Eq),8);
    bufp->chgBit(oldp+31,(vlSelfRef.flopenr__02Eclk));
    bufp->chgBit(oldp+32,(vlSelfRef.flopenr__02Erst));
    bufp->chgBit(oldp+33,(vlSelfRef.flopenr__02Een));
    bufp->chgCData(oldp+34,(vlSelfRef.flopenr__02Ed),8);
    bufp->chgCData(oldp+35,(vlSelfRef.flopenr__02Eq),8);
    bufp->chgBit(oldp+36,(vlSelfRef.floprc__02Eclk));
    bufp->chgBit(oldp+37,(vlSelfRef.floprc__02Erst));
    bufp->chgBit(oldp+38,(vlSelfRef.floprc__02Eclear));
    bufp->chgCData(oldp+39,(vlSelfRef.floprc__02Ed),8);
    bufp->chgCData(oldp+40,(vlSelfRef.floprc__02Eq),8);
    bufp->chgBit(oldp+41,(vlSelfRef.flopr__02Eclk));
    bufp->chgBit(oldp+42,(vlSelfRef.flopr__02Erst));
    bufp->chgCData(oldp+43,(vlSelfRef.flopr__02Ed),8);
    bufp->chgCData(oldp+44,(vlSelfRef.flopr__02Eq),8);
    bufp->chgIData(oldp+45,(vlSelfRef.imem__02Ea),32);
    bufp->chgIData(oldp+46,(vlSelfRef.imem__02Erd),32);
    bufp->chgIData(oldp+47,(vlSelfRef.ls2__02Ea),32);
    bufp->chgIData(oldp+48,(vlSelfRef.ls2__02Ey),32);
    bufp->chgCData(oldp+49,(vlSelfRef.op),7);
    bufp->chgCData(oldp+50,(vlSelfRef.resultsrc),2);
    bufp->chgBit(oldp+51,(vlSelfRef.regwrite));
    bufp->chgBit(oldp+52,(vlSelfRef.memwrite));
    bufp->chgBit(oldp+53,(vlSelfRef.jump));
    bufp->chgBit(oldp+54,(vlSelfRef.branch));
    bufp->chgBit(oldp+55,(vlSelfRef.alusrc));
    bufp->chgCData(oldp+56,(vlSelfRef.maindec__02Eimmsrc),2);
    bufp->chgCData(oldp+57,(vlSelfRef.maindec__02Ealuop),2);
    bufp->chgIData(oldp+58,(vlSelfRef.mux2__02Ea),32);
    bufp->chgIData(oldp+59,(vlSelfRef.mux2__02Eb),32);
    bufp->chgBit(oldp+60,(vlSelfRef.mux2__02Esel));
    bufp->chgIData(oldp+61,(vlSelfRef.mux2__02Ey),32);
    bufp->chgIData(oldp+62,(vlSelfRef.mux3__02Ea),32);
    bufp->chgIData(oldp+63,(vlSelfRef.mux3__02Eb),32);
    bufp->chgIData(oldp+64,(vlSelfRef.mux3__02Ec),32);
    bufp->chgCData(oldp+65,(vlSelfRef.mux3__02Esel),2);
    bufp->chgIData(oldp+66,(vlSelfRef.mux3__02Ey),32);
    bufp->chgIData(oldp+67,(vlSelfRef.mux4__02Ea),32);
    bufp->chgIData(oldp+68,(vlSelfRef.mux4__02Eb),32);
    bufp->chgIData(oldp+69,(vlSelfRef.mux4__02Ec),32);
    bufp->chgIData(oldp+70,(vlSelfRef.mux4__02Ed),32);
    bufp->chgCData(oldp+71,(vlSelfRef.mux4__02Esel),2);
    bufp->chgIData(oldp+72,(vlSelfRef.mux4__02Ey),32);
    bufp->chgBit(oldp+73,(vlSelfRef.regfilep__02Eclk));
    bufp->chgBit(oldp+74,(vlSelfRef.we3));
    bufp->chgCData(oldp+75,(vlSelfRef.ra1),5);
    bufp->chgCData(oldp+76,(vlSelfRef.ra2),5);
    bufp->chgCData(oldp+77,(vlSelfRef.wa3),5);
    bufp->chgIData(oldp+78,(vlSelfRef.wd3),32);
    bufp->chgIData(oldp+79,(vlSelfRef.rd1),32);
    bufp->chgIData(oldp+80,(vlSelfRef.rd2),32);
    bufp->chgIData(oldp+81,(vlSelfRef.adder__DOT__a),32);
    bufp->chgIData(oldp+82,(vlSelfRef.adder__DOT__b),32);
    bufp->chgIData(oldp+83,(vlSelfRef.adder__DOT__y),32);
    bufp->chgBit(oldp+84,(vlSelfRef.aludec__DOT__opb5));
    bufp->chgCData(oldp+85,(vlSelfRef.aludec__DOT__funct3),3);
    bufp->chgBit(oldp+86,(vlSelfRef.aludec__DOT__functb5));
    bufp->chgCData(oldp+87,(vlSelfRef.aludec__DOT__aluop),2);
    bufp->chgCData(oldp+88,(vlSelfRef.aludec__DOT__alucontrol),3);
    bufp->chgBit(oldp+89,(vlSelfRef.aludec__DOT__rsub));
    bufp->chgIData(oldp+90,(vlSelfRef.alup__DOT__a),32);
    bufp->chgIData(oldp+91,(vlSelfRef.alup__DOT__b),32);
    bufp->chgCData(oldp+92,(vlSelfRef.alup__DOT__f),3);
    bufp->chgCData(oldp+93,(vlSelfRef.alup__DOT__shamt),5);
    bufp->chgIData(oldp+94,(vlSelfRef.alup__DOT__y),32);
    bufp->chgBit(oldp+95,(vlSelfRef.dmem__DOT__clk));
    bufp->chgBit(oldp+96,(vlSelfRef.dmem__DOT__we));
    bufp->chgBit(oldp+97,(vlSelfRef.dmem__DOT__worb));
    bufp->chgIData(oldp+98,(vlSelfRef.dmem__DOT__a),32);
    bufp->chgIData(oldp+99,(vlSelfRef.dmem__DOT__wd),32);
    bufp->chgIData(oldp+100,(vlSelfRef.dmem__DOT__rd),32);
    bufp->chgIData(oldp+101,(vlSelfRef.eqcomp__DOT__a),32);
    bufp->chgIData(oldp+102,(vlSelfRef.eqcomp__DOT__b),32);
    bufp->chgBit(oldp+103,(vlSelfRef.eqcomp__DOT__y));
    bufp->chgIData(oldp+104,(vlSelfRef.extend__DOT__instr),25);
    bufp->chgCData(oldp+105,(vlSelfRef.extend__DOT__immsrc),2);
    bufp->chgIData(oldp+106,(vlSelfRef.extend__DOT__immext),32);
    bufp->chgBit(oldp+107,(vlSelfRef.flopenr__DOT__clk));
    bufp->chgBit(oldp+108,(vlSelfRef.flopenr__DOT__rst));
    bufp->chgBit(oldp+109,(vlSelfRef.flopenr__DOT__en));
    bufp->chgCData(oldp+110,(vlSelfRef.flopenr__DOT__d),8);
    bufp->chgCData(oldp+111,(vlSelfRef.flopenr__DOT__q),8);
    bufp->chgBit(oldp+112,(vlSelfRef.flopenrc__DOT__clk));
    bufp->chgBit(oldp+113,(vlSelfRef.flopenrc__DOT__rst));
    bufp->chgBit(oldp+114,(vlSelfRef.flopenrc__DOT__en));
    bufp->chgBit(oldp+115,(vlSelfRef.flopenrc__DOT__clear));
    bufp->chgCData(oldp+116,(vlSelfRef.flopenrc__DOT__d),8);
    bufp->chgCData(oldp+117,(vlSelfRef.flopenrc__DOT__q),8);
    bufp->chgBit(oldp+118,(vlSelfRef.flopr__DOT__clk));
    bufp->chgBit(oldp+119,(vlSelfRef.flopr__DOT__rst));
    bufp->chgCData(oldp+120,(vlSelfRef.flopr__DOT__d),8);
    bufp->chgCData(oldp+121,(vlSelfRef.flopr__DOT__q),8);
    bufp->chgBit(oldp+122,(vlSelfRef.floprc__DOT__clk));
    bufp->chgBit(oldp+123,(vlSelfRef.floprc__DOT__rst));
    bufp->chgBit(oldp+124,(vlSelfRef.floprc__DOT__clear));
    bufp->chgCData(oldp+125,(vlSelfRef.floprc__DOT__d),8);
    bufp->chgCData(oldp+126,(vlSelfRef.floprc__DOT__q),8);
    bufp->chgIData(oldp+127,(vlSelfRef.imem__DOT__a),32);
    bufp->chgIData(oldp+128,(vlSelfRef.imem__DOT__rd),32);
    bufp->chgIData(oldp+129,(vlSelfRef.ls2__DOT__a),32);
    bufp->chgIData(oldp+130,(vlSelfRef.ls2__DOT__y),32);
    bufp->chgCData(oldp+131,(vlSelfRef.maindec__DOT__op),7);
    bufp->chgCData(oldp+132,(vlSelfRef.maindec__DOT__resultsrc),2);
    bufp->chgBit(oldp+133,(vlSelfRef.maindec__DOT__regwrite));
    bufp->chgBit(oldp+134,(vlSelfRef.maindec__DOT__memwrite));
    bufp->chgBit(oldp+135,(vlSelfRef.maindec__DOT__jump));
    bufp->chgBit(oldp+136,(vlSelfRef.maindec__DOT__branch));
    bufp->chgBit(oldp+137,(vlSelfRef.maindec__DOT__alusrc));
    bufp->chgCData(oldp+138,(vlSelfRef.maindec__DOT__immsrc),2);
    bufp->chgCData(oldp+139,(vlSelfRef.maindec__DOT__aluop),2);
    bufp->chgSData(oldp+140,(vlSelfRef.maindec__DOT__controlsig),11);
    bufp->chgIData(oldp+141,(vlSelfRef.mux2__DOT__a),32);
    bufp->chgIData(oldp+142,(vlSelfRef.mux2__DOT__b),32);
    bufp->chgBit(oldp+143,(vlSelfRef.mux2__DOT__sel));
    bufp->chgIData(oldp+144,(vlSelfRef.mux2__DOT__y),32);
    bufp->chgIData(oldp+145,(vlSelfRef.mux3__DOT__a),32);
    bufp->chgIData(oldp+146,(vlSelfRef.mux3__DOT__b),32);
    bufp->chgIData(oldp+147,(vlSelfRef.mux3__DOT__c),32);
    bufp->chgCData(oldp+148,(vlSelfRef.mux3__DOT__sel),2);
    bufp->chgIData(oldp+149,(vlSelfRef.mux3__DOT__y),32);
    bufp->chgIData(oldp+150,(vlSelfRef.mux4__DOT__a),32);
    bufp->chgIData(oldp+151,(vlSelfRef.mux4__DOT__b),32);
    bufp->chgIData(oldp+152,(vlSelfRef.mux4__DOT__c),32);
    bufp->chgIData(oldp+153,(vlSelfRef.mux4__DOT__d),32);
    bufp->chgCData(oldp+154,(vlSelfRef.mux4__DOT__sel),2);
    bufp->chgIData(oldp+155,(vlSelfRef.mux4__DOT__y),32);
    bufp->chgBit(oldp+156,(vlSelfRef.regfilep__DOT__clk));
    bufp->chgBit(oldp+157,(vlSelfRef.regfilep__DOT__we3));
    bufp->chgCData(oldp+158,(vlSelfRef.regfilep__DOT__ra1),5);
    bufp->chgCData(oldp+159,(vlSelfRef.regfilep__DOT__ra2),5);
    bufp->chgCData(oldp+160,(vlSelfRef.regfilep__DOT__wa3),5);
    bufp->chgIData(oldp+161,(vlSelfRef.regfilep__DOT__wd3),32);
    bufp->chgIData(oldp+162,(vlSelfRef.regfilep__DOT__rd1),32);
    bufp->chgIData(oldp+163,(vlSelfRef.regfilep__DOT__rd2),32);
    bufp->chgIData(oldp+164,(vlSelfRef.regfilep__DOT__rf[0]),32);
    bufp->chgIData(oldp+165,(vlSelfRef.regfilep__DOT__rf[1]),32);
    bufp->chgIData(oldp+166,(vlSelfRef.regfilep__DOT__rf[2]),32);
    bufp->chgIData(oldp+167,(vlSelfRef.regfilep__DOT__rf[3]),32);
    bufp->chgIData(oldp+168,(vlSelfRef.regfilep__DOT__rf[4]),32);
    bufp->chgIData(oldp+169,(vlSelfRef.regfilep__DOT__rf[5]),32);
    bufp->chgIData(oldp+170,(vlSelfRef.regfilep__DOT__rf[6]),32);
    bufp->chgIData(oldp+171,(vlSelfRef.regfilep__DOT__rf[7]),32);
    bufp->chgIData(oldp+172,(vlSelfRef.regfilep__DOT__rf[8]),32);
    bufp->chgIData(oldp+173,(vlSelfRef.regfilep__DOT__rf[9]),32);
    bufp->chgIData(oldp+174,(vlSelfRef.regfilep__DOT__rf[10]),32);
    bufp->chgIData(oldp+175,(vlSelfRef.regfilep__DOT__rf[11]),32);
    bufp->chgIData(oldp+176,(vlSelfRef.regfilep__DOT__rf[12]),32);
    bufp->chgIData(oldp+177,(vlSelfRef.regfilep__DOT__rf[13]),32);
    bufp->chgIData(oldp+178,(vlSelfRef.regfilep__DOT__rf[14]),32);
    bufp->chgIData(oldp+179,(vlSelfRef.regfilep__DOT__rf[15]),32);
    bufp->chgIData(oldp+180,(vlSelfRef.regfilep__DOT__rf[16]),32);
    bufp->chgIData(oldp+181,(vlSelfRef.regfilep__DOT__rf[17]),32);
    bufp->chgIData(oldp+182,(vlSelfRef.regfilep__DOT__rf[18]),32);
    bufp->chgIData(oldp+183,(vlSelfRef.regfilep__DOT__rf[19]),32);
    bufp->chgIData(oldp+184,(vlSelfRef.regfilep__DOT__rf[20]),32);
    bufp->chgIData(oldp+185,(vlSelfRef.regfilep__DOT__rf[21]),32);
    bufp->chgIData(oldp+186,(vlSelfRef.regfilep__DOT__rf[22]),32);
    bufp->chgIData(oldp+187,(vlSelfRef.regfilep__DOT__rf[23]),32);
    bufp->chgIData(oldp+188,(vlSelfRef.regfilep__DOT__rf[24]),32);
    bufp->chgIData(oldp+189,(vlSelfRef.regfilep__DOT__rf[25]),32);
    bufp->chgIData(oldp+190,(vlSelfRef.regfilep__DOT__rf[26]),32);
    bufp->chgIData(oldp+191,(vlSelfRef.regfilep__DOT__rf[27]),32);
    bufp->chgIData(oldp+192,(vlSelfRef.regfilep__DOT__rf[28]),32);
    bufp->chgIData(oldp+193,(vlSelfRef.regfilep__DOT__rf[29]),32);
    bufp->chgIData(oldp+194,(vlSelfRef.regfilep__DOT__rf[30]),32);
    bufp->chgIData(oldp+195,(vlSelfRef.regfilep__DOT__rf[31]),32);
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
