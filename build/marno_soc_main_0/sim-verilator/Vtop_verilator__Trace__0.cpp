// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop_verilator__Syms.h"


void Vtop_verilator___024root__trace_chg_0_sub_0(Vtop_verilator___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop_verilator___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root__trace_chg_0\n"); );
    // Init
    Vtop_verilator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_verilator___024root*>(voidSelf);
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop_verilator___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop_verilator___024root__trace_chg_0_sub_0(Vtop_verilator___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root__trace_chg_0_sub_0\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<4>/*127:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_15;
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__ic_tag_rdata[0]),22);
        bufp->chgIData(oldp+1,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__ic_tag_rdata[1]),22);
        bufp->chgQData(oldp+2,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__ic_data_rdata[0]),64);
        bufp->chgQData(oldp+4,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__ic_data_rdata[1]),64);
        bufp->chgQData(oldp+6,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_addr[0]),34);
        bufp->chgQData(oldp+8,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_addr[1]),34);
        bufp->chgQData(oldp+10,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_addr[2]),34);
        bufp->chgQData(oldp+12,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_addr[3]),34);
        bufp->chgBit(oldp+14,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [0U] >> 5U))));
        bufp->chgCData(oldp+15,((3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                       [0U] >> 3U))),2);
        bufp->chgBit(oldp+16,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [0U] >> 2U))));
        bufp->chgBit(oldp+17,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [0U] >> 1U))));
        bufp->chgBit(oldp+18,((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                               [0U])));
        bufp->chgBit(oldp+19,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [1U] >> 5U))));
        bufp->chgCData(oldp+20,((3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                       [1U] >> 3U))),2);
        bufp->chgBit(oldp+21,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [1U] >> 2U))));
        bufp->chgBit(oldp+22,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [1U] >> 1U))));
        bufp->chgBit(oldp+23,((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                               [1U])));
        bufp->chgBit(oldp+24,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [2U] >> 5U))));
        bufp->chgCData(oldp+25,((3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                       [2U] >> 3U))),2);
        bufp->chgBit(oldp+26,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [2U] >> 2U))));
        bufp->chgBit(oldp+27,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [2U] >> 1U))));
        bufp->chgBit(oldp+28,((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                               [2U])));
        bufp->chgBit(oldp+29,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [3U] >> 5U))));
        bufp->chgCData(oldp+30,((3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                       [3U] >> 3U))),2);
        bufp->chgBit(oldp+31,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [3U] >> 2U))));
        bufp->chgBit(oldp+32,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [3U] >> 1U))));
        bufp->chgBit(oldp+33,((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                               [3U])));
        bufp->chgBit(oldp+34,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pmp_req_err[0]));
        bufp->chgBit(oldp+35,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pmp_req_err[1]));
        bufp->chgBit(oldp+36,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pmp_req_err[2]));
        bufp->chgIData(oldp+37,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[1]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[2]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[3]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[4]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[5]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[6]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[7]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[8]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[9]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[10]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[11]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[12]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[13]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[14]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[15]),32);
        bufp->chgCData(oldp+53,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0]),8);
        bufp->chgCData(oldp+54,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[1]),8);
        bufp->chgCData(oldp+55,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[2]),8);
        bufp->chgCData(oldp+56,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[3]),8);
        bufp->chgCData(oldp+57,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[4]),8);
        bufp->chgCData(oldp+58,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[5]),8);
        bufp->chgCData(oldp+59,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[6]),8);
        bufp->chgCData(oldp+60,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[7]),8);
        bufp->chgCData(oldp+61,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[8]),8);
        bufp->chgCData(oldp+62,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[9]),8);
        bufp->chgCData(oldp+63,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[10]),8);
        bufp->chgCData(oldp+64,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[11]),8);
        bufp->chgCData(oldp+65,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[12]),8);
        bufp->chgCData(oldp+66,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[13]),8);
        bufp->chgCData(oldp+67,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[14]),8);
        bufp->chgCData(oldp+68,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[15]),8);
        bufp->chgIData(oldp+69,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0]),32);
        bufp->chgIData(oldp+70,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[1]),32);
        bufp->chgIData(oldp+71,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[2]),32);
        bufp->chgIData(oldp+72,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[3]),32);
        bufp->chgIData(oldp+73,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[4]),32);
        bufp->chgIData(oldp+74,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[5]),32);
        bufp->chgIData(oldp+75,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[6]),32);
        bufp->chgIData(oldp+76,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[7]),32);
        bufp->chgIData(oldp+77,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[8]),32);
        bufp->chgIData(oldp+78,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[9]),32);
        bufp->chgIData(oldp+79,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[10]),32);
        bufp->chgIData(oldp+80,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[11]),32);
        bufp->chgIData(oldp+81,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[12]),32);
        bufp->chgIData(oldp+82,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[13]),32);
        bufp->chgIData(oldp+83,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[14]),32);
        bufp->chgIData(oldp+84,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[15]),32);
        bufp->chgIData(oldp+85,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[16]),32);
        bufp->chgIData(oldp+86,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[17]),32);
        bufp->chgIData(oldp+87,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[18]),32);
        bufp->chgIData(oldp+88,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[19]),32);
        bufp->chgIData(oldp+89,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[20]),32);
        bufp->chgIData(oldp+90,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[21]),32);
        bufp->chgIData(oldp+91,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[22]),32);
        bufp->chgIData(oldp+92,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[23]),32);
        bufp->chgIData(oldp+93,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[24]),32);
        bufp->chgIData(oldp+94,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[25]),32);
        bufp->chgIData(oldp+95,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[26]),32);
        bufp->chgIData(oldp+96,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[27]),32);
        bufp->chgIData(oldp+97,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[28]),32);
        bufp->chgIData(oldp+98,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[29]),32);
        bufp->chgIData(oldp+99,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[30]),32);
        bufp->chgIData(oldp+100,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[31]),32);
        bufp->chgIData(oldp+101,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_d[0]),32);
        bufp->chgIData(oldp+102,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_d[1]),32);
        bufp->chgQData(oldp+103,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[0]),34);
        bufp->chgQData(oldp+105,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[1]),34);
        bufp->chgQData(oldp+107,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[2]),34);
        bufp->chgQData(oldp+109,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[3]),34);
        bufp->chgBit(oldp+111,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [0U] >> 5U))));
        bufp->chgCData(oldp+112,((3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                        [0U] >> 3U))),2);
        bufp->chgBit(oldp+113,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [0U] >> 2U))));
        bufp->chgBit(oldp+114,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [0U] >> 1U))));
        bufp->chgBit(oldp+115,((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                [0U])));
        bufp->chgBit(oldp+116,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [1U] >> 5U))));
        bufp->chgCData(oldp+117,((3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                        [1U] >> 3U))),2);
        bufp->chgBit(oldp+118,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [1U] >> 2U))));
        bufp->chgBit(oldp+119,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [1U] >> 1U))));
        bufp->chgBit(oldp+120,((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                [1U])));
        bufp->chgBit(oldp+121,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [2U] >> 5U))));
        bufp->chgCData(oldp+122,((3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                        [2U] >> 3U))),2);
        bufp->chgBit(oldp+123,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [2U] >> 2U))));
        bufp->chgBit(oldp+124,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [2U] >> 1U))));
        bufp->chgBit(oldp+125,((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                [2U])));
        bufp->chgBit(oldp+126,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [3U] >> 5U))));
        bufp->chgCData(oldp+127,((3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                        [3U] >> 3U))),2);
        bufp->chgBit(oldp+128,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [3U] >> 2U))));
        bufp->chgBit(oldp+129,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [3U] >> 1U))));
        bufp->chgBit(oldp+130,((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                [3U])));
        bufp->chgIData(oldp+131,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_tag_ram_input[0]),22);
        bufp->chgIData(oldp+132,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_tag_ram_input[1]),22);
        bufp->chgQData(oldp+133,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_data_ram_input[0]),64);
        bufp->chgQData(oldp+135,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_data_ram_input[1]),64);
        bufp->chgBit(oldp+137,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__trace_log_enable));
        bufp->chgIData(oldp+138,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__unnamedblk1__DOT__fh),32);
        bufp->chgBit(oldp+139,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk3__DOT__show_mem_paths));
        bufp->chgQData(oldp+140,(vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__ctx),64);
    }
    if (VL_UNLIKELY(((((vlSelfRef.__Vm_traceActivity
                        [1U] | vlSelfRef.__Vm_traceActivity
                        [5U]) | vlSelfRef.__Vm_traceActivity
                       [0xcU]) | vlSelfRef.__Vm_traceActivity
                      [0xeU])))) {
        bufp->chgSData(oldp+142,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we)
                                   ? (0x1ffdU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                   : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))),13);
        bufp->chgQData(oldp+143,(((8U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                   ? (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                   : (((QData)((IData)(
                                                       (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                        >> 0x20U))) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))))),64);
        bufp->chgIData(oldp+145,((0xffffffU & (IData)(
                                                      (((8U 
                                                         & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                                         ? 
                                                        (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                                         : 
                                                        (((QData)((IData)(
                                                                          (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                                           >> 0x20U))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)))) 
                                                       >> 0x28U)))),24);
        bufp->chgQData(oldp+146,(((0x10U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                   ? (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                   : (((QData)((IData)(
                                                       (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                        >> 0x20U))) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))))),64);
        bufp->chgIData(oldp+148,((0xffffffU & (IData)(
                                                      (((0x10U 
                                                         & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                                         ? 
                                                        (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                                         : 
                                                        (((QData)((IData)(
                                                                          (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                                           >> 0x20U))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)))) 
                                                       >> 0x28U)))),24);
        bufp->chgQData(oldp+149,(((0x20U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                   ? (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                   : (((QData)((IData)(
                                                       (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                        >> 0x20U))) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))))),64);
        bufp->chgIData(oldp+151,((0xffffffU & (IData)(
                                                      (((0x20U 
                                                         & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                                         ? 
                                                        (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                                         : 
                                                        (((QData)((IData)(
                                                                          (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                                           >> 0x20U))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)))) 
                                                       >> 0x28U)))),24);
        bufp->chgQData(oldp+152,(((0x40U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                   ? (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                   : (((QData)((IData)(
                                                       (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                        >> 0x20U))) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))))),64);
        bufp->chgIData(oldp+154,((0xffffffU & (IData)(
                                                      (((0x40U 
                                                         & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                                         ? 
                                                        (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                                         : 
                                                        (((QData)((IData)(
                                                                          (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                                           >> 0x20U))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)))) 
                                                       >> 0x28U)))),24);
        bufp->chgQData(oldp+155,(((0x80U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                   ? (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                   : (((QData)((IData)(
                                                       (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                        >> 0x20U))) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))))),64);
        bufp->chgIData(oldp+157,((0xffffffU & (IData)(
                                                      (((0x80U 
                                                         & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                                         ? 
                                                        (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                                         : 
                                                        (((QData)((IData)(
                                                                          (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                                           >> 0x20U))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)))) 
                                                       >> 0x28U)))),24);
        bufp->chgQData(oldp+158,(((0x100U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                   ? (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                   : (((QData)((IData)(
                                                       (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                        >> 0x20U))) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))))),64);
        bufp->chgIData(oldp+160,((0xffffffU & (IData)(
                                                      (((0x100U 
                                                         & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                                         ? 
                                                        (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                                         : 
                                                        (((QData)((IData)(
                                                                          (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                                           >> 0x20U))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)))) 
                                                       >> 0x28U)))),24);
        bufp->chgQData(oldp+161,(((0x200U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                   ? (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                   : (((QData)((IData)(
                                                       (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                        >> 0x20U))) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))))),64);
        bufp->chgIData(oldp+163,((0xffffffU & (IData)(
                                                      (((0x200U 
                                                         & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                                         ? 
                                                        (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                                         : 
                                                        (((QData)((IData)(
                                                                          (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                                           >> 0x20U))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)))) 
                                                       >> 0x28U)))),24);
        bufp->chgQData(oldp+164,(((0x400U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                   ? (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                   : (((QData)((IData)(
                                                       (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                        >> 0x20U))) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))))),64);
        bufp->chgIData(oldp+166,((0xffffffU & (IData)(
                                                      (((0x400U 
                                                         & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                                         ? 
                                                        (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                                         : 
                                                        (((QData)((IData)(
                                                                          (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                                           >> 0x20U))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)))) 
                                                       >> 0x28U)))),24);
        bufp->chgQData(oldp+167,(((0x800U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                   ? (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                   : (((QData)((IData)(
                                                       (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                        >> 0x20U))) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))))),64);
        bufp->chgIData(oldp+169,((0xffffffU & (IData)(
                                                      (((0x800U 
                                                         & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                                         ? 
                                                        (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                                         : 
                                                        (((QData)((IData)(
                                                                          (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                                           >> 0x20U))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)))) 
                                                       >> 0x28U)))),24);
        bufp->chgQData(oldp+170,(((0x1000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                   ? (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                   : (((QData)((IData)(
                                                       (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                        >> 0x20U))) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))))),64);
        bufp->chgIData(oldp+172,((0xffffffU & (IData)(
                                                      (((0x1000U 
                                                         & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                                         ? 
                                                        (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                                         : 
                                                        (((QData)((IData)(
                                                                          (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                                           >> 0x20U))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)))) 
                                                       >> 0x28U)))),24);
        bufp->chgQData(oldp+173,(((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                   ? (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q)))
                                   : (((QData)((IData)(
                                                       (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q 
                                                        >> 0x20U))) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))))),64);
        bufp->chgQData(oldp+175,(((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                         | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we))
                                   ? ((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                       ? (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q)))
                                       : (((QData)((IData)(
                                                           (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q 
                                                            >> 0x20U))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))))
                                   : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))
                                       ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q
                                       : (1ULL + vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q)))),64);
        bufp->chgQData(oldp+177,(((4U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                   ? (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q)))
                                   : (((QData)((IData)(
                                                       (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q 
                                                        >> 0x20U))) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))))),64);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0xeU])))) {
        bufp->chgBit(oldp+179,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op_en));
        bufp->chgBit(oldp+180,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_en));
        bufp->chgBit(oldp+181,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_en));
        bufp->chgBit(oldp+182,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch0_en));
        bufp->chgBit(oldp+183,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch1_en));
        bufp->chgBit(oldp+184,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we));
        bufp->chgIData(oldp+185,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we),32);
        bufp->chgIData(oldp+186,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we),32);
        bufp->chgBit(oldp+187,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                      >> 1U))));
        bufp->chgBit(oldp+188,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                      >> 1U))));
        bufp->chgBit(oldp+189,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int));
        bufp->chgIData(oldp+190,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                  >> 0xdU)),19);
        bufp->chgIData(oldp+191,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                  >> 0xdU)),19);
        bufp->chgBit(oldp+192,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                      >> 3U))));
        bufp->chgBit(oldp+193,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                      >> 3U))));
        bufp->chgBit(oldp+194,((1U & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                       | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                                      >> 3U))));
        bufp->chgBit(oldp+195,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                      >> 4U))));
        bufp->chgBit(oldp+196,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                      >> 4U))));
        bufp->chgBit(oldp+197,((1U & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                       | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                                      >> 4U))));
        bufp->chgBit(oldp+198,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                      >> 5U))));
        bufp->chgBit(oldp+199,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                      >> 5U))));
        bufp->chgBit(oldp+200,((1U & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                       | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                                      >> 5U))));
        bufp->chgBit(oldp+201,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                      >> 6U))));
        bufp->chgBit(oldp+202,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                      >> 6U))));
        bufp->chgBit(oldp+203,((1U & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                       | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                                      >> 6U))));
        bufp->chgBit(oldp+204,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                      >> 7U))));
        bufp->chgBit(oldp+205,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                      >> 7U))));
        bufp->chgBit(oldp+206,((1U & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                       | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                                      >> 7U))));
        bufp->chgBit(oldp+207,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                      >> 8U))));
        bufp->chgBit(oldp+208,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                      >> 8U))));
        bufp->chgBit(oldp+209,((1U & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                       | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                                      >> 8U))));
        bufp->chgBit(oldp+210,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                      >> 9U))));
        bufp->chgBit(oldp+211,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                      >> 9U))));
        bufp->chgBit(oldp+212,((1U & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                       | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                                      >> 9U))));
        bufp->chgBit(oldp+213,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                      >> 0xaU))));
        bufp->chgBit(oldp+214,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                      >> 0xaU))));
        bufp->chgBit(oldp+215,((1U & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                       | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+216,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                      >> 0xbU))));
        bufp->chgBit(oldp+217,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                      >> 0xbU))));
        bufp->chgBit(oldp+218,((1U & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                       | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+219,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                      >> 0xcU))));
        bufp->chgBit(oldp+220,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                      >> 0xcU))));
        bufp->chgBit(oldp+221,((1U & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                       | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+222,((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)));
        bufp->chgBit(oldp+223,((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we)));
        bufp->chgBit(oldp+224,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                      | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we))));
        bufp->chgBit(oldp+225,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                      >> 2U))));
        bufp->chgBit(oldp+226,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                      >> 2U))));
        bufp->chgBit(oldp+227,((1U & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                       | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                                      >> 2U))));
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [2U] | vlSelfRef.__Vm_traceActivity
                       [4U]) | vlSelfRef.__Vm_traceActivity
                      [0xfU])))) {
        bufp->chgBit(oldp+228,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__accept_t_req)
                                       ? ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__ibex_lsu_host_adapter__DOT__g_multiple_reqs__DOT__source_q)) 
                                          & ((IData)(1U) 
                                             + (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__ibex_lsu_host_adapter__DOT__g_multiple_reqs__DOT__source_q)))
                                       : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__ibex_lsu_host_adapter__DOT__g_multiple_reqs__DOT__source_q)))));
        bufp->chgBit(oldp+229,(((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr))));
        bufp->chgBit(oldp+230,(((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr))));
        bufp->chgBit(oldp+231,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_tx_done__DOT__g_intr_event__DOT__new_event) 
                                | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_done__q))));
        bufp->chgBit(oldp+232,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__g_intr_event__DOT__new_event) 
                                | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q))));
        bufp->chgBit(oldp+233,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__g_intr_event__DOT__new_event) 
                                | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q))));
        bufp->chgBit(oldp+234,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__g_intr_event__DOT__new_event) 
                                | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q))));
        bufp->chgBit(oldp+235,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__g_intr_event__DOT__new_event) 
                                | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q))));
        bufp->chgBit(oldp+236,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__g_intr_event__DOT__new_event) 
                                | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q))));
        bufp->chgBit(oldp+237,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__qe)
                                 ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q))));
        bufp->chgSData(oldp+238,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__qe)
                                   ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_nco__DOT__wr_data)
                                   : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q))),16);
        bufp->chgBit(oldp+239,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__qe)
                                 ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_nf__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q))));
        bufp->chgBit(oldp+240,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__qe)
                                 ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_parity_en__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q))));
        bufp->chgBit(oldp+241,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__qe)
                                 ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_parity_odd__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q))));
        bufp->chgBit(oldp+242,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__qe)
                                 ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_rx__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q))));
        bufp->chgCData(oldp+243,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__qe)
                                   ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_rxblvl__DOT__wr_data)
                                   : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q))),2);
        bufp->chgBit(oldp+244,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__qe)
                                 ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_slpbk__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q))));
        bufp->chgBit(oldp+245,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__qe)
                                 ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_tx__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q))));
        bufp->chgCData(oldp+246,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__wr_en)
                                   ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__wr_data)
                                   : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q))),3);
        bufp->chgBit(oldp+247,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__wr_en)
                                 ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_fifo_ctrl_rxrst__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q))));
        bufp->chgCData(oldp+248,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__wr_en)
                                   ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_fifo_ctrl_txilvl__DOT__wr_data)
                                   : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q))),3);
        bufp->chgBit(oldp+249,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__wr_en)
                                 ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_fifo_ctrl_txrst__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q))));
        bufp->chgBit(oldp+250,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__qe)
                                 ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q))));
        bufp->chgBit(oldp+251,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__qe)
                                 ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_frame_err__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q))));
        bufp->chgBit(oldp+252,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__qe)
                                 ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_overflow__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q))));
        bufp->chgBit(oldp+253,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__qe)
                                 ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_parity_err__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q))));
        bufp->chgBit(oldp+254,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__qe)
                                 ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_timeout__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q))));
        bufp->chgBit(oldp+255,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__qe)
                                 ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_watermark__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q))));
        bufp->chgBit(oldp+256,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__qe)
                                 ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_tx_done__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_done__q))));
        bufp->chgBit(oldp+257,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__qe)
                                 ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_tx_empty__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q))));
        bufp->chgBit(oldp+258,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__qe)
                                 ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_tx_watermark__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q))));
        bufp->chgBit(oldp+259,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__g_intr_event__DOT__new_event) 
                                | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q))));
        bufp->chgBit(oldp+260,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_break_err__DOT__qe)
                                 ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q))));
        bufp->chgBit(oldp+261,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__g_intr_event__DOT__new_event) 
                                | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q))));
        bufp->chgBit(oldp+262,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__qe)
                                 ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q))));
        bufp->chgBit(oldp+263,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__g_intr_event__DOT__new_event) 
                                | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q))));
        bufp->chgBit(oldp+264,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__qe)
                                 ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q))));
        bufp->chgBit(oldp+265,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__g_intr_event__DOT__new_event) 
                                | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q))));
        bufp->chgBit(oldp+266,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__qe)
                                 ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q))));
        bufp->chgBit(oldp+267,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__g_intr_event__DOT__new_event) 
                                | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q))));
        bufp->chgBit(oldp+268,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_timeout__DOT__qe)
                                 ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q))));
        bufp->chgBit(oldp+269,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_tx_done__DOT__g_intr_event__DOT__new_event) 
                                | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_done__q))));
        bufp->chgBit(oldp+270,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__qe)
                                 ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_done__q))));
        bufp->chgBit(oldp+271,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ovrd_txen__DOT__qe)
                                 ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ovrd_txen__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q))));
        bufp->chgBit(oldp+272,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ovrd_txen__DOT__qe)
                                 ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ovrd_txval__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q))));
        bufp->chgBit(oldp+273,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__qe)
                                 ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q))));
        bufp->chgIData(oldp+274,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__qe)
                                   ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_timeout_ctrl_val__DOT__wr_data
                                   : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q)),24);
        bufp->chgBit(oldp+275,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
                                & (0x3fU == (0x3fU 
                                             & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))));
        bufp->chgBit(oldp+276,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_d2h
                                      [0U][2U] >> 1U))));
        bufp->chgCData(oldp+277,((7U & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_d2h
                                         [0U][2U] << 2U) 
                                        | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_d2h
                                           [0U][1U] 
                                           >> 0x1eU)))),3);
        bufp->chgCData(oldp+278,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_d2h
                                        [0U][1U] >> 0x1bU))),3);
        bufp->chgCData(oldp+279,((3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_d2h
                                        [0U][1U] >> 0x19U))),2);
        bufp->chgCData(oldp+280,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_d2h
                                           [0U][1U] 
                                           >> 0x11U))),8);
        bufp->chgBit(oldp+281,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_d2h
                                      [0U][1U] >> 0x10U))));
        bufp->chgIData(oldp+282,(((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_d2h
                                   [0U][1U] << 0x10U) 
                                  | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_d2h
                                     [0U][0U] >> 0x10U))),32);
        bufp->chgCData(oldp+283,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_d2h
                                           [0U][0U] 
                                           >> 9U))),7);
        bufp->chgCData(oldp+284,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_d2h
                                           [0U][0U] 
                                           >> 2U))),7);
        bufp->chgBit(oldp+285,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_d2h
                                      [0U][0U] >> 1U))));
        bufp->chgBit(oldp+286,((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_d2h
                                [0U][0U])));
        bufp->chgBit(oldp+287,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_d2h
                                      [1U][2U] >> 1U))));
        bufp->chgCData(oldp+288,((7U & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_d2h
                                         [1U][2U] << 2U) 
                                        | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_d2h
                                           [1U][1U] 
                                           >> 0x1eU)))),3);
        bufp->chgCData(oldp+289,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_d2h
                                        [1U][1U] >> 0x1bU))),3);
        bufp->chgCData(oldp+290,((3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_d2h
                                        [1U][1U] >> 0x19U))),2);
        bufp->chgCData(oldp+291,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_d2h
                                           [1U][1U] 
                                           >> 0x11U))),8);
        bufp->chgBit(oldp+292,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_d2h
                                      [1U][1U] >> 0x10U))));
        bufp->chgIData(oldp+293,(((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_d2h
                                   [1U][1U] << 0x10U) 
                                  | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_d2h
                                     [1U][0U] >> 0x10U))),32);
        bufp->chgCData(oldp+294,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_d2h
                                           [1U][0U] 
                                           >> 9U))),7);
        bufp->chgCData(oldp+295,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_d2h
                                           [1U][0U] 
                                           >> 2U))),7);
        bufp->chgBit(oldp+296,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_d2h
                                      [1U][0U] >> 1U))));
        bufp->chgBit(oldp+297,((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_d2h
                                [1U][0U])));
        bufp->chgBit(oldp+298,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellinp__u_s1n_3__tl_d_i
                                      [0U][2U] >> 1U))));
        bufp->chgCData(oldp+299,((7U & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellinp__u_s1n_3__tl_d_i
                                         [0U][2U] << 2U) 
                                        | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellinp__u_s1n_3__tl_d_i
                                           [0U][1U] 
                                           >> 0x1eU)))),3);
        bufp->chgCData(oldp+300,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellinp__u_s1n_3__tl_d_i
                                        [0U][1U] >> 0x1bU))),3);
        bufp->chgCData(oldp+301,((3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellinp__u_s1n_3__tl_d_i
                                        [0U][1U] >> 0x19U))),2);
        bufp->chgCData(oldp+302,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellinp__u_s1n_3__tl_d_i
                                           [0U][1U] 
                                           >> 0x11U))),8);
        bufp->chgBit(oldp+303,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellinp__u_s1n_3__tl_d_i
                                      [0U][1U] >> 0x10U))));
        bufp->chgIData(oldp+304,(((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellinp__u_s1n_3__tl_d_i
                                   [0U][1U] << 0x10U) 
                                  | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellinp__u_s1n_3__tl_d_i
                                     [0U][0U] >> 0x10U))),32);
        bufp->chgCData(oldp+305,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellinp__u_s1n_3__tl_d_i
                                           [0U][0U] 
                                           >> 9U))),7);
        bufp->chgCData(oldp+306,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellinp__u_s1n_3__tl_d_i
                                           [0U][0U] 
                                           >> 2U))),7);
        bufp->chgBit(oldp+307,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellinp__u_s1n_3__tl_d_i
                                      [0U][0U] >> 1U))));
        bufp->chgBit(oldp+308,((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellinp__u_s1n_3__tl_d_i
                                [0U][0U])));
        bufp->chgBit(oldp+309,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellinp__u_s1n_3__tl_d_i
                                      [1U][2U] >> 1U))));
        bufp->chgCData(oldp+310,((7U & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellinp__u_s1n_3__tl_d_i
                                         [1U][2U] << 2U) 
                                        | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellinp__u_s1n_3__tl_d_i
                                           [1U][1U] 
                                           >> 0x1eU)))),3);
        bufp->chgCData(oldp+311,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellinp__u_s1n_3__tl_d_i
                                        [1U][1U] >> 0x1bU))),3);
        bufp->chgCData(oldp+312,((3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellinp__u_s1n_3__tl_d_i
                                        [1U][1U] >> 0x19U))),2);
        bufp->chgCData(oldp+313,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellinp__u_s1n_3__tl_d_i
                                           [1U][1U] 
                                           >> 0x11U))),8);
        bufp->chgBit(oldp+314,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellinp__u_s1n_3__tl_d_i
                                      [1U][1U] >> 0x10U))));
        bufp->chgIData(oldp+315,(((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellinp__u_s1n_3__tl_d_i
                                   [1U][1U] << 0x10U) 
                                  | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellinp__u_s1n_3__tl_d_i
                                     [1U][0U] >> 0x10U))),32);
        bufp->chgCData(oldp+316,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellinp__u_s1n_3__tl_d_i
                                           [1U][0U] 
                                           >> 9U))),7);
        bufp->chgCData(oldp+317,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellinp__u_s1n_3__tl_d_i
                                           [1U][0U] 
                                           >> 2U))),7);
        bufp->chgBit(oldp+318,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellinp__u_s1n_3__tl_d_i
                                      [1U][0U] >> 1U))));
        bufp->chgBit(oldp+319,((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellinp__u_s1n_3__tl_d_i
                                [1U][0U])));
        bufp->chgBit(oldp+320,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                      [0U][2U] >> 1U))));
        bufp->chgCData(oldp+321,((7U & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                         [0U][2U] << 2U) 
                                        | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                           [0U][1U] 
                                           >> 0x1eU)))),3);
        bufp->chgCData(oldp+322,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                        [0U][1U] >> 0x1bU))),3);
        bufp->chgCData(oldp+323,((3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                        [0U][1U] >> 0x19U))),2);
        bufp->chgCData(oldp+324,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                           [0U][1U] 
                                           >> 0x11U))),8);
        bufp->chgBit(oldp+325,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                      [0U][1U] >> 0x10U))));
        bufp->chgIData(oldp+326,(((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                   [0U][1U] << 0x10U) 
                                  | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                     [0U][0U] >> 0x10U))),32);
        bufp->chgCData(oldp+327,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                           [0U][0U] 
                                           >> 9U))),7);
        bufp->chgCData(oldp+328,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                           [0U][0U] 
                                           >> 2U))),7);
        bufp->chgBit(oldp+329,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                      [0U][0U] >> 1U))));
        bufp->chgBit(oldp+330,((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                [0U][0U])));
        bufp->chgBit(oldp+331,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                      [1U][2U] >> 1U))));
        bufp->chgCData(oldp+332,((7U & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                         [1U][2U] << 2U) 
                                        | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                           [1U][1U] 
                                           >> 0x1eU)))),3);
        bufp->chgCData(oldp+333,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                        [1U][1U] >> 0x1bU))),3);
        bufp->chgCData(oldp+334,((3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                        [1U][1U] >> 0x19U))),2);
        bufp->chgCData(oldp+335,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                           [1U][1U] 
                                           >> 0x11U))),8);
        bufp->chgBit(oldp+336,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                      [1U][1U] >> 0x10U))));
        bufp->chgIData(oldp+337,(((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                   [1U][1U] << 0x10U) 
                                  | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                     [1U][0U] >> 0x10U))),32);
        bufp->chgCData(oldp+338,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                           [1U][0U] 
                                           >> 9U))),7);
        bufp->chgCData(oldp+339,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                           [1U][0U] 
                                           >> 2U))),7);
        bufp->chgBit(oldp+340,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                      [1U][0U] >> 1U))));
        bufp->chgBit(oldp+341,((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                [1U][0U])));
        bufp->chgBit(oldp+342,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                      [2U][2U] >> 1U))));
        bufp->chgCData(oldp+343,((7U & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                         [2U][2U] << 2U) 
                                        | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                           [2U][1U] 
                                           >> 0x1eU)))),3);
        bufp->chgCData(oldp+344,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                        [2U][1U] >> 0x1bU))),3);
        bufp->chgCData(oldp+345,((3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                        [2U][1U] >> 0x19U))),2);
        bufp->chgCData(oldp+346,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                           [2U][1U] 
                                           >> 0x11U))),8);
        bufp->chgBit(oldp+347,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                      [2U][1U] >> 0x10U))));
        bufp->chgIData(oldp+348,(((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                   [2U][1U] << 0x10U) 
                                  | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                     [2U][0U] >> 0x10U))),32);
        bufp->chgCData(oldp+349,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                           [2U][0U] 
                                           >> 9U))),7);
        bufp->chgCData(oldp+350,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                           [2U][0U] 
                                           >> 2U))),7);
        bufp->chgBit(oldp+351,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                      [2U][0U] >> 1U))));
        bufp->chgBit(oldp+352,((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
                                [2U][0U])));
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [2U] | vlSelfRef.__Vm_traceActivity
                       [5U]) | vlSelfRef.__Vm_traceActivity
                      [0xfU])))) {
        bufp->chgBit(oldp+353,(((~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                    >> 8U)) & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_branch))));
        bufp->chgBit(oldp+354,(((~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                    >> 0xbU)) & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_mul_wait))));
        bufp->chgBit(oldp+355,(((~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                    >> 0xcU)) & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_div_wait))));
        bufp->chgIData(oldp+356,(((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                   ? ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                       ? ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                                           << 8U) | 
                                          (0xffU & 
                                           (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                            >> 0x10U)))
                                       : ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                                           << 0x10U) 
                                          | (0xffffU 
                                             & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                >> 8U))))
                                   : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                       ? ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                                           << 0x18U) 
                                          | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q)
                                       : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core))),32);
        bufp->chgIData(oldp+357,(((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                   ? ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                       ? ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                                                              >> 7U)))) 
                                               << 0x10U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_ha026946b_0_21))
                                           : (IData)(vlSelfRef.__VdfgRegularize_ha026946b_0_21))
                                       : ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                           ? (((- (IData)(
                                                          (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                                                           >> 0x1fU))) 
                                               << 0x10U) 
                                              | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                                                 >> 0x10U))
                                           : VL_SHIFTR_III(32,32,32, vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core, 0x10U)))
                                   : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                       ? ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                                                              >> 0x17U)))) 
                                               << 0x10U) 
                                              | (0xffffU 
                                                 & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                                                    >> 8U)))
                                           : (0xffffU 
                                              & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                                                 >> 8U)))
                                       : ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (0xffffU 
                                                 & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core))
                                           : (0xffffU 
                                              & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core))))),32);
        bufp->chgIData(oldp+358,(((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                   ? ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                       ? ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                           ? (((- (IData)(
                                                          (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                                                           >> 0x1fU))) 
                                               << 8U) 
                                              | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                                                 >> 0x18U))
                                           : VL_SHIFTR_III(32,32,32, vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core, 0x18U))
                                       : ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                                                              >> 0x17U)))) 
                                               << 8U) 
                                              | (0xffU 
                                                 & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                                                    >> 0x10U)))
                                           : (0xffU 
                                              & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                                                 >> 0x10U))))
                                   : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                       ? ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                                                              >> 0xfU)))) 
                                               << 8U) 
                                              | (0xffU 
                                                 & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                                                    >> 8U)))
                                           : (0xffU 
                                              & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                                                 >> 8U)))
                                       : ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                                                              >> 7U)))) 
                                               << 8U) 
                                              | (0xffU 
                                                 & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core))
                                           : (0xffU 
                                              & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core))))),32);
        bufp->chgBit(oldp+359,(((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2)) 
                                & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1) 
                                   | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_q)))));
        bufp->chgBit(oldp+360,(((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2)) 
                                & (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1) 
                                    & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[0U] 
                                       >> 1U)) | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_bus_err_1_q)))));
        bufp->chgBit(oldp+361,(((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)) 
                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu))));
        bufp->chgBit(oldp+362,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu) 
                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))));
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [2U] | vlSelfRef.__Vm_traceActivity
                       [0xcU]) | vlSelfRef.__Vm_traceActivity
                      [0xfU])))) {
        bufp->chgBit(oldp+363,((1U & ((~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__opcode_allowed) 
                                          & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__addr_sz_chk) 
                                             & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__mask_chk) 
                                                & ((4U 
                                                    == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_0)) 
                                                   | ((1U 
                                                       == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_0)) 
                                                      | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__fulldata_chk))))))) 
                                      | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__instr_type_err) 
                                         | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__instr_wr_err))))));
        bufp->chgBit(oldp+364,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__addr_sz_chk) 
                                & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__mask_chk) 
                                   & ((4U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_0)) 
                                      | ((1U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_0)) 
                                         | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__fulldata_chk)))))));
        bufp->chgBit(oldp+365,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)
                                 ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_valid)
                                 : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_valid))));
        bufp->chgBit(oldp+366,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                                | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_ha026946b_0_0)))));
        bufp->chgIData(oldp+367,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[0]),32);
        bufp->chgIData(oldp+368,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[1]),32);
        bufp->chgBit(oldp+369,(((~ (0U != (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__addr_hit))) 
                                & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_re) 
                                   | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_we)))));
        bufp->chgBit(oldp+370,((IData)(((0x18ULL == 
                                         (0x78ULL & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)) 
                                        & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_18)))));
        bufp->chgBit(oldp+371,((IData)(((0x48ULL == 
                                         (0x78ULL & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)) 
                                        & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_19)))));
        bufp->chgBit(oldp+372,((IData)(((0x58ULL == 
                                         (0x78ULL & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)) 
                                        & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_19)))));
        bufp->chgBit(oldp+373,((1U & ((~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__opcode_allowed) 
                                          & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                             & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk) 
                                                & ((4U 
                                                    == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_0)) 
                                                   | ((1U 
                                                       == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_0)) 
                                                      | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk))))))) 
                                      | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_type_err) 
                                         | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_wr_err))))));
        bufp->chgBit(oldp+374,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk) 
                                   & ((4U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_0)) 
                                      | ((1U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_0)) 
                                         | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk)))))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0xfU])))) {
        bufp->chgBit(oldp+375,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__fifo_h__DOT__reqfifo__DOT__full_o));
        bufp->chgBit(oldp+376,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[2U] 
                                      >> 1U))));
        bufp->chgIData(oldp+377,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core),32);
        bufp->chgBit(oldp+378,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+379,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__sram_ack));
        bufp->chgBit(oldp+380,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_data_we));
        bufp->chgSData(oldp+381,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT____Vcellout__sram_a_device_adapter__addr_o),15);
        bufp->chgIData(oldp+382,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__wmask_combined),32);
        bufp->chgIData(oldp+383,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__wdata_combined),32);
        bufp->chgCData(oldp+384,((7U & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[2U] 
                                         << 2U) | (
                                                   vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[1U] 
                                                   >> 0x1eU)))),3);
        bufp->chgCData(oldp+385,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[1U] 
                                        >> 0x1bU))),3);
        bufp->chgCData(oldp+386,((3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[1U] 
                                        >> 0x19U))),2);
        bufp->chgCData(oldp+387,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[1U] 
                                           >> 0x11U))),8);
        bufp->chgBit(oldp+388,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[1U] 
                                      >> 0x10U))));
        bufp->chgCData(oldp+389,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[0U] 
                                           >> 9U))),7);
        bufp->chgCData(oldp+390,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[0U] 
                                           >> 2U))),7);
        bufp->chgBit(oldp+391,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[3U] 
                                      >> 0xcU))));
        bufp->chgCData(oldp+392,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[3U] 
                                        >> 9U))),3);
        bufp->chgCData(oldp+393,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[3U] 
                                        >> 6U))),3);
        bufp->chgCData(oldp+394,((3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[3U] 
                                        >> 4U))),2);
        bufp->chgCData(oldp+395,((0xffU & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[3U] 
                                            << 4U) 
                                           | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0x1cU)))),8);
        bufp->chgIData(oldp+396,(((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                   << 4U) | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                                             >> 0x1cU))),32);
        bufp->chgCData(oldp+397,((0xfU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                                          >> 0x18U))),4);
        bufp->chgIData(oldp+398,(((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                                   << 8U) | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U] 
                                             >> 0x18U))),32);
        bufp->chgCData(oldp+399,((0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U] 
                                           >> 0x13U))),5);
        bufp->chgCData(oldp+400,((0xfU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U] 
                                          >> 0xfU))),4);
        bufp->chgCData(oldp+401,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U] 
                                           >> 8U))),7);
        bufp->chgCData(oldp+402,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U] 
                                           >> 1U))),7);
        bufp->chgBit(oldp+403,((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U])));
        bufp->chgBit(oldp+404,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_i[2U] 
                                      >> 1U))));
        bufp->chgCData(oldp+405,((7U & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_i[2U] 
                                         << 2U) | (
                                                   vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_i[1U] 
                                                   >> 0x1eU)))),3);
        bufp->chgCData(oldp+406,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_i[1U] 
                                        >> 0x1bU))),3);
        bufp->chgCData(oldp+407,((3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_i[1U] 
                                        >> 0x19U))),2);
        bufp->chgCData(oldp+408,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_i[1U] 
                                           >> 0x11U))),8);
        bufp->chgBit(oldp+409,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_i[1U] 
                                      >> 0x10U))));
        bufp->chgIData(oldp+410,(((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_i[1U] 
                                   << 0x10U) | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_i[0U] 
                                                >> 0x10U))),32);
        bufp->chgCData(oldp+411,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_i[0U] 
                                           >> 9U))),7);
        bufp->chgCData(oldp+412,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_i[0U] 
                                           >> 2U))),7);
        bufp->chgBit(oldp+413,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_i[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+414,((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_i[0U])));
        bufp->chgBit(oldp+415,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[3U] 
                                      >> 0xcU))));
        bufp->chgCData(oldp+416,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[3U] 
                                        >> 9U))),3);
        bufp->chgCData(oldp+417,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[3U] 
                                        >> 6U))),3);
        bufp->chgCData(oldp+418,((3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[3U] 
                                        >> 4U))),2);
        bufp->chgCData(oldp+419,((0xffU & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[3U] 
                                            << 4U) 
                                           | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                              >> 0x1cU)))),8);
        bufp->chgIData(oldp+420,(((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                   << 4U) | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                                             >> 0x1cU))),32);
        bufp->chgCData(oldp+421,((0xfU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                                          >> 0x18U))),4);
        bufp->chgIData(oldp+422,(((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                                   << 8U) | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U] 
                                             >> 0x18U))),32);
        bufp->chgCData(oldp+423,((0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U] 
                                           >> 0x13U))),5);
        bufp->chgCData(oldp+424,((0xfU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U] 
                                          >> 0xfU))),4);
        bufp->chgCData(oldp+425,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U] 
                                           >> 8U))),7);
        bufp->chgCData(oldp+426,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U] 
                                           >> 1U))),7);
        bufp->chgBit(oldp+427,((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U])));
        bufp->chgBit(oldp+428,((1U & (VL_REDXOR_16(
                                                   (0xfffcU 
                                                    & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[0U])) 
                                      ^ VL_REDXOR_32(
                                                     (0x1ffffU 
                                                      & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[2U] 
                                                          << 0x10U) 
                                                         | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[1U] 
                                                            >> 0x10U))))))));
        bufp->chgCData(oldp+429,((0xfU & (vlSelfRef.__VdfgRegularize_ha026946b_0_33 
                                          >> 0xeU))),4);
        bufp->chgSData(oldp+430,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT____Vcellout__sram_a_device_adapter__addr_o),13);
        bufp->chgBit(oldp+431,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__error_det));
        bufp->chgBit(oldp+432,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__instr_error));
        bufp->chgBit(oldp+433,((1U & VL_REDXOR_32((
                                                   ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U] 
                                                     ^ 
                                                     vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U]) 
                                                    ^ 
                                                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U]) 
                                                   ^ 
                                                   vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[3U])))));
        bufp->chgBit(oldp+434,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__DOT____Vcellinp__reqfifo__wvalid_i) 
                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__DOT__reqfifo__DOT__full_o))));
        bufp->chgCData(oldp+435,((0xfU & (vlSelfRef.__VdfgRegularize_ha026946b_0_33 
                                          >> 0xeU))),4);
        bufp->chgBit(oldp+436,(((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_data_we)) 
                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__sram_ack))));
        bufp->chgBit(oldp+437,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__error_det) 
                                & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__DOT__reqfifo__DOT__full_o)) 
                                   & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__DOT____Vcellinp__reqfifo__wvalid_i)))));
        bufp->chgIData(oldp+438,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__wmask_combined),32);
        bufp->chgIData(oldp+439,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__wdata_combined),32);
        bufp->chgCData(oldp+440,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__DOT____Vcellinp__reqfifo__wvalid_i)
                                   ? 0x7fU : 0U)),7);
        bufp->chgCData(oldp+441,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__DOT____Vcellinp__reqfifo__wvalid_i)
                                   ? (0x7fU & vlSelfRef.__VdfgRegularize_ha026946b_0_33)
                                   : 0U)),7);
        bufp->chgBit(oldp+442,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__DOT____Vcellinp__reqfifo__wvalid_i) 
                                & (0U != (0x7fU & vlSelfRef.__VdfgRegularize_ha026946b_0_33)))));
        bufp->chgBit(oldp+443,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__instr_wr_err));
        bufp->chgBit(oldp+444,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__instr_type_err));
        bufp->chgBit(oldp+445,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__addr_sz_chk));
        bufp->chgBit(oldp+446,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__mask_chk));
        bufp->chgBit(oldp+447,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__fulldata_chk));
        bufp->chgBit(oldp+448,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        bufp->chgBit(oldp+449,((1U & VL_REDXOR_32((
                                                   (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_i[0U] 
                                                    ^ 
                                                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_i[1U]) 
                                                   ^ 
                                                   vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_i[2U])))));
        bufp->chgBit(oldp+450,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        bufp->chgIData(oldp+451,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+452,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_d));
        bufp->chgBit(oldp+453,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_d));
        bufp->chgIData(oldp+454,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_rdata_ext),32);
        bufp->chgBit(oldp+455,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_we_lsu));
        bufp->chgBit(oldp+456,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_valid));
        bufp->chgBit(oldp+457,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu));
        bufp->chgBit(oldp+458,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_mul_wait));
        bufp->chgBit(oldp+459,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_div_wait));
        bufp->chgBit(oldp+460,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_branch));
        bufp->chgIData(oldp+461,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_rdata_d),32);
        bufp->chgBit(oldp+462,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set_raw_d));
        bufp->chgBit(oldp+463,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set));
        bufp->chgBit(oldp+464,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw));
        bufp->chgBit(oldp+465,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv));
        bufp->chgBit(oldp+466,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch));
        bufp->chgBit(oldp+467,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump));
        bufp->chgBit(oldp+468,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__stall));
        bufp->chgBit(oldp+469,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw));
        bufp->chgBit(oldp+470,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_alu));
        bufp->chgBit(oldp+471,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d));
        bufp->chgBit(oldp+472,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update));
        bufp->chgBit(oldp+473,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update));
        bufp->chgBit(oldp+474,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update));
        bufp->chgBit(oldp+475,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d));
        bufp->chgBit(oldp+476,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d));
        bufp->chgBit(oldp+477,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d));
        bufp->chgBit(oldp+478,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err));
        bufp->chgCData(oldp+479,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns),3);
        bufp->chgBit(oldp+480,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1));
        bufp->chgBit(oldp+481,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2));
        bufp->chgCData(oldp+482,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__a_wmask),4);
        bufp->chgBit(oldp+483,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[4U] 
                                      >> 3U))));
        bufp->chgBit(oldp+484,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[4U] 
                                      >> 2U))));
        bufp->chgBit(oldp+485,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[4U] 
                                      >> 1U))));
        bufp->chgBit(oldp+486,((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[4U])));
        bufp->chgBit(oldp+487,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[3U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+488,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[3U] 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+489,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[3U] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+490,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[3U] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+491,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[3U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+492,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[3U] 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+493,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[3U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+494,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[3U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+495,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[3U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+496,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[3U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+497,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[3U] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+498,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[3U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+499,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[3U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+500,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[3U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+501,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[3U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+502,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[3U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+503,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[3U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+504,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[3U] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+505,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[3U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+506,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[3U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+507,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[3U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+508,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[3U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+509,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[3U] 
                                      >> 9U))));
        bufp->chgBit(oldp+510,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[3U] 
                                      >> 8U))));
        bufp->chgBit(oldp+511,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[3U] 
                                      >> 7U))));
        bufp->chgBit(oldp+512,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[3U] 
                                      >> 6U))));
        bufp->chgBit(oldp+513,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[3U] 
                                      >> 5U))));
        bufp->chgBit(oldp+514,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[3U] 
                                      >> 4U))));
        bufp->chgBit(oldp+515,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[3U] 
                                      >> 3U))));
        bufp->chgBit(oldp+516,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[3U] 
                                      >> 2U))));
        bufp->chgBit(oldp+517,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[3U] 
                                      >> 1U))));
        bufp->chgBit(oldp+518,((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[3U])));
        bufp->chgBit(oldp+519,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[2U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+520,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[2U] 
                                      >> 0x1eU))));
        bufp->chgSData(oldp+521,((0xffffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[2U] 
                                             >> 0xeU))),16);
        bufp->chgCData(oldp+522,((3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[2U] 
                                        >> 0xcU))),2);
        bufp->chgBit(oldp+523,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[2U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+524,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[2U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+525,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[2U] 
                                      >> 9U))));
        bufp->chgBit(oldp+526,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[2U] 
                                      >> 8U))));
        bufp->chgBit(oldp+527,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[2U] 
                                      >> 7U))));
        bufp->chgBit(oldp+528,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[2U] 
                                      >> 6U))));
        bufp->chgBit(oldp+529,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[2U] 
                                      >> 5U))));
        bufp->chgBit(oldp+530,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[2U] 
                                      >> 4U))));
        bufp->chgBit(oldp+531,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[2U] 
                                      >> 3U))));
        bufp->chgBit(oldp+532,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[2U] 
                                      >> 2U))));
        bufp->chgBit(oldp+533,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[2U] 
                                      >> 1U))));
        bufp->chgBit(oldp+534,((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[2U])));
        bufp->chgBit(oldp+535,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[1U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+536,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[1U] 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+537,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[1U] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+538,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[1U] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+539,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[1U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+540,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[1U] 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+541,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[1U] 
                                      >> 0x19U))));
        bufp->chgCData(oldp+542,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[1U] 
                                           >> 0x11U))),8);
        bufp->chgBit(oldp+543,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[1U] 
                                      >> 0x10U))));
        bufp->chgCData(oldp+544,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[1U] 
                                           >> 8U))),8);
        bufp->chgBit(oldp+545,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[1U] 
                                      >> 7U))));
        bufp->chgCData(oldp+546,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[1U] 
                                        >> 4U))),3);
        bufp->chgBit(oldp+547,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[1U] 
                                      >> 3U))));
        bufp->chgCData(oldp+548,((7U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[1U])),3);
        bufp->chgBit(oldp+549,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[0U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+550,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[0U] 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+551,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[0U] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+552,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[0U] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+553,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[0U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+554,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[0U] 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+555,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[0U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+556,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[0U] 
                                      >> 0x18U))));
        bufp->chgIData(oldp+557,((0xffffffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[0U])),24);
        bufp->chgBit(oldp+558,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_tx_done__DOT__g_intr_event__DOT__new_event));
        bufp->chgBit(oldp+559,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__g_intr_event__DOT__new_event));
        bufp->chgBit(oldp+560,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__g_intr_event__DOT__new_event));
        bufp->chgBit(oldp+561,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__g_intr_event__DOT__new_event));
        bufp->chgBit(oldp+562,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__g_intr_event__DOT__new_event));
        bufp->chgBit(oldp+563,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__g_intr_event__DOT__new_event));
        bufp->chgBit(oldp+564,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_we));
        bufp->chgBit(oldp+565,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_re));
        bufp->chgBit(oldp+566,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_error));
        bufp->chgBit(oldp+567,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__wr_err));
        bufp->chgBit(oldp+568,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__intr_state_we));
        bufp->chgBit(oldp+569,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__qe));
        bufp->chgBit(oldp+570,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__intr_test_we));
        bufp->chgBit(oldp+571,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__qe));
        bufp->chgBit(oldp+572,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__status_re));
        bufp->chgBit(oldp+573,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__rdata_re));
        bufp->chgBit(oldp+574,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_wdata__DOT__wr_en));
        bufp->chgBit(oldp+575,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__wr_en));
        bufp->chgBit(oldp+576,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ovrd_txen__DOT__qe));
        bufp->chgBit(oldp+577,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__qe));
        bufp->chgBit(oldp+578,((0x1ffU == (0x1ffU & 
                                           (- (IData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__intr_test_we)))))));
        bufp->chgSData(oldp+579,((0x1ffU & (- (IData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__intr_test_we))))),9);
        bufp->chgCData(oldp+580,((0xfU & (- (IData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__wr_en))))),4);
        bufp->chgBit(oldp+581,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__wr_data));
        bufp->chgSData(oldp+582,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_nco__DOT__wr_data),16);
        bufp->chgBit(oldp+583,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_nf__DOT__wr_data));
        bufp->chgBit(oldp+584,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_parity_en__DOT__wr_data));
        bufp->chgBit(oldp+585,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_parity_odd__DOT__wr_data));
        bufp->chgBit(oldp+586,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_rx__DOT__wr_data));
        bufp->chgCData(oldp+587,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_rxblvl__DOT__wr_data),2);
        bufp->chgBit(oldp+588,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_slpbk__DOT__wr_data));
        bufp->chgBit(oldp+589,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_tx__DOT__wr_data));
        bufp->chgBit(oldp+590,((0xfU == (0xfU & (- (IData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__wr_en)))))));
        bufp->chgCData(oldp+591,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__wr_data),3);
        bufp->chgBit(oldp+592,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_fifo_ctrl_rxrst__DOT__wr_data));
        bufp->chgCData(oldp+593,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_fifo_ctrl_txilvl__DOT__wr_data),3);
        bufp->chgBit(oldp+594,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_fifo_ctrl_txrst__DOT__wr_data));
        bufp->chgBit(oldp+595,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_data));
        bufp->chgBit(oldp+596,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_frame_err__DOT__wr_data));
        bufp->chgBit(oldp+597,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_overflow__DOT__wr_data));
        bufp->chgBit(oldp+598,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_parity_err__DOT__wr_data));
        bufp->chgBit(oldp+599,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_timeout__DOT__wr_data));
        bufp->chgBit(oldp+600,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_watermark__DOT__wr_data));
        bufp->chgBit(oldp+601,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_tx_done__DOT__wr_data));
        bufp->chgBit(oldp+602,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_tx_empty__DOT__wr_data));
        bufp->chgBit(oldp+603,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_tx_watermark__DOT__wr_data));
        bufp->chgBit(oldp+604,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__g_intr_event__DOT__new_event));
        bufp->chgBit(oldp+605,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_break_err__DOT__qe));
        bufp->chgBit(oldp+606,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_data));
        bufp->chgBit(oldp+607,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__g_intr_event__DOT__new_event));
        bufp->chgBit(oldp+608,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__qe));
        bufp->chgBit(oldp+609,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_data));
        bufp->chgBit(oldp+610,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__g_intr_event__DOT__new_event));
        bufp->chgBit(oldp+611,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__qe));
        bufp->chgBit(oldp+612,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_data));
        bufp->chgBit(oldp+613,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__g_intr_event__DOT__new_event));
        bufp->chgBit(oldp+614,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__qe));
        bufp->chgBit(oldp+615,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_data));
        bufp->chgBit(oldp+616,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__g_intr_event__DOT__new_event));
        bufp->chgBit(oldp+617,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_timeout__DOT__qe));
        bufp->chgBit(oldp+618,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_data));
        bufp->chgBit(oldp+619,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_tx_done__DOT__g_intr_event__DOT__new_event));
        bufp->chgBit(oldp+620,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__qe));
        bufp->chgBit(oldp+621,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__wr_data));
        bufp->chgBit(oldp+622,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ovrd_txen__DOT__wr_data));
        bufp->chgBit(oldp+623,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ovrd_txval__DOT__wr_data));
        bufp->chgBit(oldp+624,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__a_ack));
        bufp->chgBit(oldp+625,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
        bufp->chgBit(oldp+626,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__instr_error));
        bufp->chgBit(oldp+627,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__malformed_meta_err));
        bufp->chgBit(oldp+628,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
        bufp->chgBit(oldp+629,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
        bufp->chgBit(oldp+630,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_wr_err));
        bufp->chgBit(oldp+631,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_type_err));
        bufp->chgBit(oldp+632,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk));
        bufp->chgBit(oldp+633,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk));
        bufp->chgBit(oldp+634,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk));
        bufp->chgBit(oldp+635,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__wr_data));
        bufp->chgIData(oldp+636,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_timeout_ctrl_val__DOT__wr_data),24);
        bufp->chgCData(oldp+637,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_wdata__DOT__wr_data),8);
        bufp->chgBit(oldp+638,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr));
        bufp->chgBit(oldp+639,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d
                                      [0U][3U] >> 0xcU))));
        bufp->chgCData(oldp+640,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d
                                        [0U][3U] >> 9U))),3);
        bufp->chgCData(oldp+641,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d
                                        [0U][3U] >> 6U))),3);
        bufp->chgCData(oldp+642,((3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d
                                        [0U][3U] >> 4U))),2);
        bufp->chgCData(oldp+643,((0xffU & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d
                                            [0U][3U] 
                                            << 4U) 
                                           | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d
                                              [0U][2U] 
                                              >> 0x1cU)))),8);
        bufp->chgIData(oldp+644,(((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d
                                   [0U][2U] << 4U) 
                                  | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d
                                     [0U][1U] >> 0x1cU))),32);
        bufp->chgCData(oldp+645,((0xfU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d
                                          [0U][1U] 
                                          >> 0x18U))),4);
        bufp->chgIData(oldp+646,(((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d
                                   [0U][1U] << 8U) 
                                  | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d
                                     [0U][0U] >> 0x18U))),32);
        bufp->chgCData(oldp+647,((0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d
                                           [0U][0U] 
                                           >> 0x13U))),5);
        bufp->chgCData(oldp+648,((0xfU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d
                                          [0U][0U] 
                                          >> 0xfU))),4);
        bufp->chgCData(oldp+649,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d
                                           [0U][0U] 
                                           >> 8U))),7);
        bufp->chgCData(oldp+650,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d
                                           [0U][0U] 
                                           >> 1U))),7);
        bufp->chgBit(oldp+651,((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d
                                [0U][0U])));
        bufp->chgBit(oldp+652,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d
                                      [1U][3U] >> 0xcU))));
        bufp->chgCData(oldp+653,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d
                                        [1U][3U] >> 9U))),3);
        bufp->chgCData(oldp+654,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d
                                        [1U][3U] >> 6U))),3);
        bufp->chgCData(oldp+655,((3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d
                                        [1U][3U] >> 4U))),2);
        bufp->chgCData(oldp+656,((0xffU & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d
                                            [1U][3U] 
                                            << 4U) 
                                           | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d
                                              [1U][2U] 
                                              >> 0x1cU)))),8);
        bufp->chgIData(oldp+657,(((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d
                                   [1U][2U] << 4U) 
                                  | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d
                                     [1U][1U] >> 0x1cU))),32);
        bufp->chgCData(oldp+658,((0xfU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d
                                          [1U][1U] 
                                          >> 0x18U))),4);
        bufp->chgIData(oldp+659,(((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d
                                   [1U][1U] << 8U) 
                                  | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d
                                     [1U][0U] >> 0x18U))),32);
        bufp->chgCData(oldp+660,((0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d
                                           [1U][0U] 
                                           >> 0x13U))),5);
        bufp->chgCData(oldp+661,((0xfU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d
                                          [1U][0U] 
                                          >> 0xfU))),4);
        bufp->chgCData(oldp+662,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d
                                           [1U][0U] 
                                           >> 8U))),7);
        bufp->chgCData(oldp+663,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d
                                           [1U][0U] 
                                           >> 1U))),7);
        bufp->chgBit(oldp+664,((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d
                                [1U][0U])));
        bufp->chgBit(oldp+665,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o
                                      [0U][3U] >> 0xcU))));
        bufp->chgCData(oldp+666,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o
                                        [0U][3U] >> 9U))),3);
        bufp->chgCData(oldp+667,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o
                                        [0U][3U] >> 6U))),3);
        bufp->chgCData(oldp+668,((3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o
                                        [0U][3U] >> 4U))),2);
        bufp->chgCData(oldp+669,((0xffU & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o
                                            [0U][3U] 
                                            << 4U) 
                                           | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o
                                              [0U][2U] 
                                              >> 0x1cU)))),8);
        bufp->chgIData(oldp+670,(((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o
                                   [0U][2U] << 4U) 
                                  | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o
                                     [0U][1U] >> 0x1cU))),32);
        bufp->chgCData(oldp+671,((0xfU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o
                                          [0U][1U] 
                                          >> 0x18U))),4);
        bufp->chgIData(oldp+672,(((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o
                                   [0U][1U] << 8U) 
                                  | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o
                                     [0U][0U] >> 0x18U))),32);
        bufp->chgCData(oldp+673,((0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o
                                           [0U][0U] 
                                           >> 0x13U))),5);
        bufp->chgCData(oldp+674,((0xfU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o
                                          [0U][0U] 
                                          >> 0xfU))),4);
        bufp->chgCData(oldp+675,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o
                                           [0U][0U] 
                                           >> 8U))),7);
        bufp->chgCData(oldp+676,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o
                                           [0U][0U] 
                                           >> 1U))),7);
        bufp->chgBit(oldp+677,((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o
                                [0U][0U])));
        bufp->chgBit(oldp+678,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o
                                      [1U][3U] >> 0xcU))));
        bufp->chgCData(oldp+679,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o
                                        [1U][3U] >> 9U))),3);
        bufp->chgCData(oldp+680,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o
                                        [1U][3U] >> 6U))),3);
        bufp->chgCData(oldp+681,((3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o
                                        [1U][3U] >> 4U))),2);
        bufp->chgCData(oldp+682,((0xffU & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o
                                            [1U][3U] 
                                            << 4U) 
                                           | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o
                                              [1U][2U] 
                                              >> 0x1cU)))),8);
        bufp->chgIData(oldp+683,(((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o
                                   [1U][2U] << 4U) 
                                  | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o
                                     [1U][1U] >> 0x1cU))),32);
        bufp->chgCData(oldp+684,((0xfU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o
                                          [1U][1U] 
                                          >> 0x18U))),4);
        bufp->chgIData(oldp+685,(((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o
                                   [1U][1U] << 8U) 
                                  | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o
                                     [1U][0U] >> 0x18U))),32);
        bufp->chgCData(oldp+686,((0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o
                                           [1U][0U] 
                                           >> 0x13U))),5);
        bufp->chgCData(oldp+687,((0xfU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o
                                          [1U][0U] 
                                          >> 0xfU))),4);
        bufp->chgCData(oldp+688,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o
                                           [1U][0U] 
                                           >> 8U))),7);
        bufp->chgCData(oldp+689,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o
                                           [1U][0U] 
                                           >> 1U))),7);
        bufp->chgBit(oldp+690,((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o
                                [1U][0U])));
        bufp->chgBit(oldp+691,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_o[3U] 
                                      >> 0xcU))));
        bufp->chgCData(oldp+692,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_o[3U] 
                                        >> 9U))),3);
        bufp->chgCData(oldp+693,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_o[3U] 
                                        >> 6U))),3);
        bufp->chgCData(oldp+694,((3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_o[3U] 
                                        >> 4U))),2);
        bufp->chgCData(oldp+695,((0xffU & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_o[3U] 
                                            << 4U) 
                                           | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_o[2U] 
                                              >> 0x1cU)))),8);
        bufp->chgIData(oldp+696,(((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_o[2U] 
                                   << 4U) | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_o[1U] 
                                             >> 0x1cU))),32);
        bufp->chgCData(oldp+697,((0xfU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_o[1U] 
                                          >> 0x18U))),4);
        bufp->chgIData(oldp+698,(((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_o[1U] 
                                   << 8U) | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_o[0U] 
                                             >> 0x18U))),32);
        bufp->chgCData(oldp+699,((0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_o[0U] 
                                           >> 0x13U))),5);
        bufp->chgCData(oldp+700,((0xfU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_o[0U] 
                                          >> 0xfU))),4);
        bufp->chgCData(oldp+701,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_o[0U] 
                                           >> 8U))),7);
        bufp->chgCData(oldp+702,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_o[0U] 
                                           >> 1U))),7);
        bufp->chgBit(oldp+703,((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_o[0U])));
        bufp->chgIData(oldp+704,(((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[1U] 
                                   << 0x10U) | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[0U] 
                                                >> 0x10U))),32);
        bufp->chgBit(oldp+705,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__accept_t_req));
        bufp->chgBit(oldp+706,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                      [0U][3U] >> 0xcU))));
        bufp->chgCData(oldp+707,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                        [0U][3U] >> 9U))),3);
        bufp->chgCData(oldp+708,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                        [0U][3U] >> 6U))),3);
        bufp->chgCData(oldp+709,((3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                        [0U][3U] >> 4U))),2);
        bufp->chgCData(oldp+710,((0xffU & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                            [0U][3U] 
                                            << 4U) 
                                           | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                              [0U][2U] 
                                              >> 0x1cU)))),8);
        bufp->chgIData(oldp+711,(((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                   [0U][2U] << 4U) 
                                  | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                     [0U][1U] >> 0x1cU))),32);
        bufp->chgCData(oldp+712,((0xfU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                          [0U][1U] 
                                          >> 0x18U))),4);
        bufp->chgIData(oldp+713,(((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                   [0U][1U] << 8U) 
                                  | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                     [0U][0U] >> 0x18U))),32);
        bufp->chgCData(oldp+714,((0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                           [0U][0U] 
                                           >> 0x13U))),5);
        bufp->chgCData(oldp+715,((0xfU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                          [0U][0U] 
                                          >> 0xfU))),4);
        bufp->chgCData(oldp+716,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                           [0U][0U] 
                                           >> 8U))),7);
        bufp->chgCData(oldp+717,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                           [0U][0U] 
                                           >> 1U))),7);
        bufp->chgBit(oldp+718,((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                [0U][0U])));
        bufp->chgBit(oldp+719,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                      [1U][3U] >> 0xcU))));
        bufp->chgCData(oldp+720,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                        [1U][3U] >> 9U))),3);
        bufp->chgCData(oldp+721,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                        [1U][3U] >> 6U))),3);
        bufp->chgCData(oldp+722,((3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                        [1U][3U] >> 4U))),2);
        bufp->chgCData(oldp+723,((0xffU & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                            [1U][3U] 
                                            << 4U) 
                                           | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                              [1U][2U] 
                                              >> 0x1cU)))),8);
        bufp->chgIData(oldp+724,(((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                   [1U][2U] << 4U) 
                                  | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                     [1U][1U] >> 0x1cU))),32);
        bufp->chgCData(oldp+725,((0xfU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                          [1U][1U] 
                                          >> 0x18U))),4);
        bufp->chgIData(oldp+726,(((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                   [1U][1U] << 8U) 
                                  | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                     [1U][0U] >> 0x18U))),32);
        bufp->chgCData(oldp+727,((0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                           [1U][0U] 
                                           >> 0x13U))),5);
        bufp->chgCData(oldp+728,((0xfU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                          [1U][0U] 
                                          >> 0xfU))),4);
        bufp->chgCData(oldp+729,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                           [1U][0U] 
                                           >> 8U))),7);
        bufp->chgCData(oldp+730,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                           [1U][0U] 
                                           >> 1U))),7);
        bufp->chgBit(oldp+731,((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                [1U][0U])));
        bufp->chgBit(oldp+732,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                      [2U][3U] >> 0xcU))));
        bufp->chgCData(oldp+733,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                        [2U][3U] >> 9U))),3);
        bufp->chgCData(oldp+734,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                        [2U][3U] >> 6U))),3);
        bufp->chgCData(oldp+735,((3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                        [2U][3U] >> 4U))),2);
        bufp->chgCData(oldp+736,((0xffU & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                            [2U][3U] 
                                            << 4U) 
                                           | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                              [2U][2U] 
                                              >> 0x1cU)))),8);
        bufp->chgIData(oldp+737,(((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                   [2U][2U] << 4U) 
                                  | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                     [2U][1U] >> 0x1cU))),32);
        bufp->chgCData(oldp+738,((0xfU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                          [2U][1U] 
                                          >> 0x18U))),4);
        bufp->chgIData(oldp+739,(((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                   [2U][1U] << 8U) 
                                  | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                     [2U][0U] >> 0x18U))),32);
        bufp->chgCData(oldp+740,((0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                           [2U][0U] 
                                           >> 0x13U))),5);
        bufp->chgCData(oldp+741,((0xfU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                          [2U][0U] 
                                          >> 0xfU))),4);
        bufp->chgCData(oldp+742,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                           [2U][0U] 
                                           >> 8U))),7);
        bufp->chgCData(oldp+743,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                           [2U][0U] 
                                           >> 1U))),7);
        bufp->chgBit(oldp+744,((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
                                [2U][0U])));
        bufp->chgCData(oldp+745,((0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__blanked_auser 
                                           >> 0x12U))),5);
        bufp->chgCData(oldp+746,((0xfU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__blanked_auser 
                                          >> 0xeU))),4);
        bufp->chgCData(oldp+747,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__blanked_auser 
                                           >> 7U))),7);
        bufp->chgCData(oldp+748,((0x7fU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__blanked_auser)),7);
        bufp->chgBit(oldp+749,((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[0U])));
        bufp->chgBit(oldp+750,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__hfifo_reqready));
        __Vtemp_1[0U] = (IData)((((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core)) 
                                  << 0x10U) | (QData)((IData)(
                                                              (0xfffeU 
                                                               & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[0U])))));
        __Vtemp_1[1U] = ((0xffff0000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[1U]) 
                         | (IData)(((((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core)) 
                                      << 0x10U) | (QData)((IData)(
                                                                  (0xfffeU 
                                                                   & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[0U])))) 
                                    >> 0x20U)));
        __Vtemp_1[2U] = (1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[2U]);
        bufp->chgWData(oldp+751,(__Vtemp_1),65);
        bufp->chgBit(oldp+754,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__DOT____Vcellinp__reqfifo__wvalid_i));
        bufp->chgCData(oldp+755,((7U & (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_12[3U] 
                                        >> 9U))),3);
        bufp->chgCData(oldp+756,((7U & (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_12[3U] 
                                        >> 6U))),3);
        bufp->chgCData(oldp+757,((3U & (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_12[3U] 
                                        >> 4U))),2);
        bufp->chgCData(oldp+758,((0xffU & ((vlSelfRef.__VdfgRegularize_h3c5bdd75_0_12[3U] 
                                            << 4U) 
                                           | (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_12[2U] 
                                              >> 0x1cU)))),8);
        bufp->chgIData(oldp+759,(((vlSelfRef.__VdfgRegularize_h3c5bdd75_0_12[2U] 
                                   << 4U) | (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_12[1U] 
                                             >> 0x1cU))),32);
        bufp->chgCData(oldp+760,((0xfU & (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_12[1U] 
                                          >> 0x18U))),4);
        bufp->chgIData(oldp+761,(((vlSelfRef.__VdfgRegularize_h3c5bdd75_0_12[1U] 
                                   << 8U) | (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_12[0U] 
                                             >> 0x18U))),32);
        bufp->chgCData(oldp+762,((0x1fU & (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_12[0U] 
                                           >> 0x13U))),5);
        bufp->chgCData(oldp+763,((0xfU & (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_12[0U] 
                                          >> 0xfU))),4);
        bufp->chgCData(oldp+764,((0x7fU & (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_12[0U] 
                                           >> 8U))),7);
        bufp->chgCData(oldp+765,((0x7fU & (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_12[0U] 
                                           >> 1U))),7);
        bufp->chgBit(oldp+766,((1U & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_12[0U])));
        bufp->chgCData(oldp+767,((7U & ((vlSelfRef.__VdfgRegularize_ha026946b_0_35[2U] 
                                         << 2U) | (
                                                   vlSelfRef.__VdfgRegularize_ha026946b_0_35[1U] 
                                                   >> 0x1eU)))),3);
        bufp->chgCData(oldp+768,((7U & (vlSelfRef.__VdfgRegularize_ha026946b_0_35[1U] 
                                        >> 0x1bU))),3);
        bufp->chgCData(oldp+769,((3U & (vlSelfRef.__VdfgRegularize_ha026946b_0_35[1U] 
                                        >> 0x19U))),2);
        bufp->chgCData(oldp+770,((0xffU & (vlSelfRef.__VdfgRegularize_ha026946b_0_35[1U] 
                                           >> 0x11U))),8);
        bufp->chgBit(oldp+771,((1U & (vlSelfRef.__VdfgRegularize_ha026946b_0_35[1U] 
                                      >> 0x10U))));
        bufp->chgCData(oldp+772,((0x7fU & ((IData)(vlSelfRef.__VdfgRegularize_ha026946b_0_37) 
                                           >> 9U))),7);
        bufp->chgCData(oldp+773,((0x7fU & ((IData)(vlSelfRef.__VdfgRegularize_ha026946b_0_37) 
                                           >> 2U))),7);
        bufp->chgBit(oldp+774,((1U & ((IData)(vlSelfRef.__VdfgRegularize_ha026946b_0_37) 
                                      >> 1U))));
        bufp->chgBit(oldp+775,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__DOT__reqfifo__DOT__full_o));
        __Vtemp_5[0U] = (0xfffffffeU & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_12[0U]);
        __Vtemp_5[1U] = ((1U & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_12[1U]) 
                         | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_12[1U]));
        __Vtemp_5[2U] = ((1U & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_12[2U]) 
                         | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_12[2U]));
        __Vtemp_5[3U] = ((1U & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_12[3U]) 
                         | (0xffeU & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_12[3U]));
        bufp->chgWData(oldp+776,(__Vtemp_5),108);
        bufp->chgBit(oldp+780,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__DOT____Vcellinp__reqfifo__wvalid_i));
        bufp->chgCData(oldp+781,((7U & (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[3U] 
                                        >> 9U))),3);
        bufp->chgCData(oldp+782,((7U & (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[3U] 
                                        >> 6U))),3);
        bufp->chgCData(oldp+783,((3U & (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[3U] 
                                        >> 4U))),2);
        bufp->chgCData(oldp+784,((0xffU & ((vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[3U] 
                                            << 4U) 
                                           | (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[2U] 
                                              >> 0x1cU)))),8);
        bufp->chgIData(oldp+785,(((vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[2U] 
                                   << 4U) | (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[1U] 
                                             >> 0x1cU))),32);
        bufp->chgCData(oldp+786,((0xfU & (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[1U] 
                                          >> 0x18U))),4);
        bufp->chgIData(oldp+787,(((vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[1U] 
                                   << 8U) | (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[0U] 
                                             >> 0x18U))),32);
        bufp->chgCData(oldp+788,((0x1fU & (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[0U] 
                                           >> 0x13U))),5);
        bufp->chgCData(oldp+789,((0xfU & (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[0U] 
                                          >> 0xfU))),4);
        bufp->chgCData(oldp+790,((0x7fU & (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[0U] 
                                           >> 8U))),7);
        bufp->chgCData(oldp+791,((0x7fU & (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[0U] 
                                           >> 1U))),7);
        bufp->chgBit(oldp+792,((1U & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[0U])));
        __Vtemp_9[0U] = (0xfffffffeU & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[0U]);
        __Vtemp_9[1U] = ((1U & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[1U]) 
                         | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[1U]));
        __Vtemp_9[2U] = ((1U & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[2U]) 
                         | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[2U]));
        __Vtemp_9[3U] = ((1U & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[3U]) 
                         | (0xffeU & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[3U]));
        bufp->chgWData(oldp+793,(__Vtemp_9),108);
        bufp->chgBit(oldp+797,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[3U] 
                                      >> 0xcU))));
        bufp->chgCData(oldp+798,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[3U] 
                                        >> 9U))),3);
        bufp->chgCData(oldp+799,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[3U] 
                                        >> 6U))),3);
        bufp->chgCData(oldp+800,((3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[3U] 
                                        >> 4U))),2);
        bufp->chgCData(oldp+801,((0xffU & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[3U] 
                                            << 4U) 
                                           | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[2U] 
                                              >> 0x1cU)))),8);
        bufp->chgIData(oldp+802,(((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[2U] 
                                   << 4U) | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[1U] 
                                             >> 0x1cU))),32);
        bufp->chgCData(oldp+803,((0xfU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[1U] 
                                          >> 0x18U))),4);
        bufp->chgIData(oldp+804,(((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[1U] 
                                   << 8U) | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[0U] 
                                             >> 0x18U))),32);
        bufp->chgCData(oldp+805,((0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[0U] 
                                           >> 0x13U))),5);
        bufp->chgCData(oldp+806,((0xfU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[0U] 
                                          >> 0xfU))),4);
        bufp->chgCData(oldp+807,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[0U] 
                                           >> 8U))),7);
        bufp->chgCData(oldp+808,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[0U] 
                                           >> 1U))),7);
        bufp->chgBit(oldp+809,((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[0U])));
        bufp->chgBit(oldp+810,((1U & VL_REDXOR_32((
                                                   ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[0U] 
                                                     ^ 
                                                     vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[1U]) 
                                                    ^ 
                                                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[2U]) 
                                                   ^ 
                                                   vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[3U])))));
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [3U] | vlSelfRef.__Vm_traceActivity
                       [5U]) | vlSelfRef.__Vm_traceActivity
                      [0x10U])))) {
        bufp->chgCData(oldp+811,((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ctrl_busy) 
                                   | (((0U != (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                       | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req)) 
                                      | (0U != (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))))
                                   ? 5U : 0xaU)),4);
        bufp->chgBit(oldp+812,((1U & ((~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__debug_mode_entering) 
                                          | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))) 
                                      & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q)))));
        bufp->chgBit(oldp+813,(((0U != (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req))));
        bufp->chgBit(oldp+814,(((~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                    >> 3U)) & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_dside_wait))));
        bufp->chgBit(oldp+815,(((~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                    >> 4U)) & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_iside_wait))));
        bufp->chgBit(oldp+816,(((~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                    >> 7U)) & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_jump))));
        bufp->chgBit(oldp+817,(((~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                    >> 9U)) & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_tbranch))));
        bufp->chgBit(oldp+818,(((~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                    >> 0xaU)) & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_instr_ret_compressed_wb))));
        bufp->chgBit(oldp+819,(((~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                    >> 2U)) & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_instr_ret_wb))));
        bufp->chgIData(oldp+820,(((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_pc_mux_id))
                                   ? ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_pc_mux_id))
                                       ? 0x1a110808U
                                       : 0x1a110800U)
                                   : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_pc_mux_id))
                                       ? ((0xffffff00U 
                                           & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q) 
                                          | (((0x40U 
                                               & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_cause))
                                               ? 0x1fU
                                               : (0x1fU 
                                                  & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_cause))) 
                                             << 2U))
                                       : (0xffffff00U 
                                          & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)))),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x10U])))) {
        bufp->chgBit(oldp+821,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req));
        bufp->chgIData(oldp+822,((0xfffffffcU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d)),32);
        bufp->chgBit(oldp+823,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__double_fault_seen_o));
        bufp->chgBit(oldp+824,((0U != (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))));
        bufp->chgIData(oldp+825,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb),32);
        bufp->chgIData(oldp+826,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec),32);
        bufp->chgCData(oldp+827,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_we_ex),2);
        bufp->chgBit(oldp+828,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_valid_clear));
        bufp->chgBit(oldp+829,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set));
        bufp->chgCData(oldp+830,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id),3);
        bufp->chgCData(oldp+831,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_pc_mux_id),2);
        bufp->chgBit(oldp+832,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_cause) 
                                      >> 6U))));
        bufp->chgBit(oldp+833,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_cause) 
                                      >> 5U))));
        bufp->chgCData(oldp+834,((0x1fU & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_cause))),5);
        bufp->chgBit(oldp+835,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ctrl_busy));
        bufp->chgBit(oldp+836,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_we_id));
        bufp->chgBit(oldp+837,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_ready));
        bufp->chgBit(oldp+838,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_req_int));
        bufp->chgBit(oldp+839,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done));
        bufp->chgBit(oldp+840,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_if));
        bufp->chgBit(oldp+841,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_id));
        bufp->chgBit(oldp+842,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_restore_mret_id));
        bufp->chgBit(oldp+843,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_restore_dret_id));
        bufp->chgBit(oldp+844,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_cause));
        bufp->chgBit(oldp+845,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_mtvec_init));
        bufp->chgIData(oldp+846,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_mtval),32);
        bufp->chgBit(oldp+847,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__debug_mode_entering));
        bufp->chgBit(oldp+848,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__debug_csr_save));
        bufp->chgBit(oldp+849,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_instr_ret_wb));
        bufp->chgBit(oldp+850,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_instr_ret_compressed_wb));
        bufp->chgBit(oldp+851,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_iside_wait));
        bufp->chgBit(oldp+852,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_dside_wait));
        bufp->chgBit(oldp+853,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_jump));
        bufp->chgBit(oldp+854,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_tbranch));
        bufp->chgBit(oldp+855,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_set_trap_pc_d));
        bufp->chgCData(oldp+856,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_addr_d),5);
        bufp->chgIData(oldp+857,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_wdata_d),32);
        bufp->chgBit(oldp+858,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_we_wb));
        bufp->chgBit(oldp+859,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_id_done));
        bufp->chgBit(oldp+860,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_valid_d[0]));
        bufp->chgIData(oldp+861,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc),32);
        bufp->chgCData(oldp+862,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d),2);
        bufp->chgBit(oldp+863,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                      >> 5U))));
        bufp->chgBit(oldp+864,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                      >> 4U))));
        bufp->chgCData(oldp+865,((3U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                        >> 2U))),2);
        bufp->chgBit(oldp+866,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                      >> 1U))));
        bufp->chgBit(oldp+867,((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d))));
        bufp->chgBit(oldp+868,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en));
        bufp->chgIData(oldp+869,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_d),32);
        bufp->chgBit(oldp+870,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en));
        bufp->chgBit(oldp+871,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d) 
                                      >> 6U))));
        bufp->chgBit(oldp+872,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d) 
                                      >> 5U))));
        bufp->chgCData(oldp+873,((0x1fU & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d))),5);
        bufp->chgBit(oldp+874,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en));
        bufp->chgIData(oldp+875,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_d),32);
        bufp->chgBit(oldp+876,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en));
        bufp->chgBit(oldp+877,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtvec_en));
        bufp->chgCData(oldp+878,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                  >> 0x1cU)),4);
        bufp->chgSData(oldp+879,((0xfffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                            >> 0x10U))),12);
        bufp->chgBit(oldp+880,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                      >> 0xfU))));
        bufp->chgBit(oldp+881,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                      >> 0xeU))));
        bufp->chgBit(oldp+882,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                      >> 0xdU))));
        bufp->chgBit(oldp+883,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                      >> 0xcU))));
        bufp->chgBit(oldp+884,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                      >> 0xbU))));
        bufp->chgBit(oldp+885,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                      >> 0xaU))));
        bufp->chgBit(oldp+886,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                      >> 9U))));
        bufp->chgCData(oldp+887,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                        >> 6U))),3);
        bufp->chgBit(oldp+888,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                      >> 5U))));
        bufp->chgBit(oldp+889,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                      >> 4U))));
        bufp->chgBit(oldp+890,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                      >> 3U))));
        bufp->chgBit(oldp+891,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                      >> 2U))));
        bufp->chgCData(oldp+892,((3U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d)),2);
        bufp->chgBit(oldp+893,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en));
        bufp->chgIData(oldp+894,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_d),32);
        bufp->chgBit(oldp+895,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en));
        bufp->chgBit(oldp+896,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_en));
        bufp->chgBit(oldp+897,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d) 
                                      >> 7U))));
        bufp->chgBit(oldp+898,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d) 
                                      >> 6U))));
        bufp->chgCData(oldp+899,((7U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d) 
                                        >> 3U))),3);
        bufp->chgBit(oldp+900,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d) 
                                      >> 2U))));
        bufp->chgBit(oldp+901,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d) 
                                      >> 1U))));
        bufp->chgBit(oldp+902,((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d))));
        bufp->chgBit(oldp+903,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_we));
        bufp->chgCData(oldp+904,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d),8);
        bufp->chgIData(oldp+905,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d),32);
        bufp->chgCData(oldp+906,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d),7);
        bufp->chgCData(oldp+907,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d),6);
        bufp->chgCData(oldp+908,((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal) 
                                   << 1U) | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) 
                                             | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal)))),2);
        bufp->chgBit(oldp+909,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) 
                                | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal))));
        bufp->chgBit(oldp+910,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal));
        bufp->chgBit(oldp+911,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal));
        bufp->chgBit(oldp+912,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec));
        bufp->chgBit(oldp+913,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_run));
        bufp->chgBit(oldp+914,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id));
        bufp->chgCData(oldp+915,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns),4);
        bufp->chgBit(oldp+916,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d));
        bufp->chgBit(oldp+917,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d));
        bufp->chgBit(oldp+918,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if));
        bufp->chgBit(oldp+919,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id));
        bufp->chgBit(oldp+920,((6U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns))));
        bufp->chgBit(oldp+921,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_d));
        bufp->chgBit(oldp+922,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d));
        bufp->chgIData(oldp+923,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr),32);
        bufp->chgCData(oldp+924,(((0x40U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_cause))
                                   ? 0x1fU : (0x1fU 
                                              & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_cause)))),5);
        bufp->chgBit(oldp+925,((IData)((0U != (0x60U 
                                               & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_cause))))));
        bufp->chgBit(oldp+926,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req));
        bufp->chgBit(oldp+927,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d));
        bufp->chgCData(oldp+928,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n),2);
        bufp->chgCData(oldp+929,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n),2);
        bufp->chgIData(oldp+930,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d),32);
        bufp->chgBit(oldp+931,(((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req)) 
                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgRegularize_hed04d6de_0_6))));
        bufp->chgBit(oldp+932,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set) 
                                | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgRegularize_hed04d6de_0_6))));
        bufp->chgCData(oldp+933,(((((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set)) 
                                    & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__2__KET__)) 
                                   << 2U) | ((((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set)) 
                                               & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__1__KET__)) 
                                              << 1U) 
                                             | ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set)) 
                                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__0__KET__))))),3);
        bufp->chgCData(oldp+934,((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__2__KET__) 
                                   << 2U) | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__1__KET__) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__0__KET__)))),3);
        bufp->chgBit(oldp+935,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo));
        bufp->chgBit(oldp+936,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set) 
                                | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h7ff92a7d_0_9))));
        bufp->chgBit(oldp+937,((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr)));
        bufp->chgCData(oldp+938,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we),2);
        bufp->chgSData(oldp+939,((0x1fffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d 
                                             >> 2U))),13);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+940,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_data_rvalid));
        bufp->chgBit(oldp+941,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_i[2U] 
                                      >> 1U))));
        bufp->chgCData(oldp+942,((7U & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_i[2U] 
                                         << 2U) | (
                                                   vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_i[1U] 
                                                   >> 0x1eU)))),3);
        bufp->chgCData(oldp+943,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_i[1U] 
                                        >> 0x1bU))),3);
        bufp->chgCData(oldp+944,((3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_i[1U] 
                                        >> 0x19U))),2);
        bufp->chgCData(oldp+945,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_i[1U] 
                                           >> 0x11U))),8);
        bufp->chgBit(oldp+946,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_i[1U] 
                                      >> 0x10U))));
        bufp->chgIData(oldp+947,(((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_i[1U] 
                                   << 0x10U) | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_i[0U] 
                                                >> 0x10U))),32);
        bufp->chgCData(oldp+948,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_i[0U] 
                                           >> 9U))),7);
        bufp->chgCData(oldp+949,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_i[0U] 
                                           >> 2U))),7);
        bufp->chgBit(oldp+950,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_i[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+951,((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_i[0U])));
        bufp->chgCData(oldp+952,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__ibex_lsu_host_adapter__DOT__g_multiple_reqs__DOT__source_q),8);
        bufp->chgBit(oldp+953,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__ibex_lsu_host_adapter__DOT__g_multiple_reqs__DOT__source_q));
        bufp->chgBit(oldp+954,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__intg_error_q));
        bufp->chgBit(oldp+955,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__reqfifo_wready));
        bufp->chgBit(oldp+956,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__reqfifo_rvalid));
        bufp->chgBit(oldp+957,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__sramreqfifo_wready));
        bufp->chgBit(oldp+958,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__sramreqfifo_rready));
        bufp->chgBit(oldp+959,((1U & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__full_o)) 
                                      & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__under_rst))))));
        bufp->chgBit(oldp+960,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__rspfifo_rvalid));
        bufp->chgBit(oldp+961,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__missed_err_gnt_q));
        bufp->chgBit(oldp+962,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__full_o));
        bufp->chgBit(oldp+963,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__full_o) 
                                      | (((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                 >> 1U)) 
                                          == (1U & 
                                              ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                               >> 1U)))
                                          ? ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                             - (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))
                                          : (((IData)(1U) 
                                              - (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)) 
                                             + (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)))))));
        bufp->chgBit(oldp+964,((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
        bufp->chgBit(oldp+965,((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
        bufp->chgBit(oldp+966,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        bufp->chgBit(oldp+967,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__under_rst));
        bufp->chgBit(oldp+968,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                      ^ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)))));
        bufp->chgCData(oldp+969,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q),2);
        bufp->chgCData(oldp+970,((2U & ((~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                            >> 1U)) 
                                        << 1U))),2);
        bufp->chgCData(oldp+971,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q),2);
        bufp->chgCData(oldp+972,((2U & ((~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                            >> 1U)) 
                                        << 1U))),2);
        bufp->chgBit(oldp+973,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                      >> 1U))));
        bufp->chgBit(oldp+974,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                      >> 1U))));
        bufp->chgBit(oldp+975,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__full_o));
        bufp->chgBit(oldp+976,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__full_o) 
                                      | (((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                 >> 1U)) 
                                          == (1U & 
                                              ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                               >> 1U)))
                                          ? ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                             - (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))
                                          : (((IData)(1U) 
                                              - (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)) 
                                             + (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)))))));
        bufp->chgBit(oldp+977,((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
        bufp->chgBit(oldp+978,((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
        bufp->chgBit(oldp+979,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        bufp->chgBit(oldp+980,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__under_rst));
        bufp->chgBit(oldp+981,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty));
        bufp->chgBit(oldp+982,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                      ^ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)))));
        bufp->chgCData(oldp+983,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q),2);
        bufp->chgCData(oldp+984,((2U & ((~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                            >> 1U)) 
                                        << 1U))),2);
        bufp->chgCData(oldp+985,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q),2);
        bufp->chgCData(oldp+986,((2U & ((~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                            >> 1U)) 
                                        << 1U))),2);
        bufp->chgBit(oldp+987,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                      >> 1U))));
        bufp->chgBit(oldp+988,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                      >> 1U))));
        bufp->chgBit(oldp+989,((1U & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                      & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__under_rst))))));
        bufp->chgBit(oldp+990,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__full_o));
        bufp->chgBit(oldp+991,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__full_o) 
                                      | (((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                 >> 1U)) 
                                          == (1U & 
                                              ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                               >> 1U)))
                                          ? ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                             - (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))
                                          : (((IData)(1U) 
                                              - (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)) 
                                             + (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)))))));
        bufp->chgBit(oldp+992,((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
        bufp->chgBit(oldp+993,((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
        bufp->chgBit(oldp+994,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr));
        bufp->chgBit(oldp+995,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        bufp->chgBit(oldp+996,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__under_rst));
        bufp->chgBit(oldp+997,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                      ^ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)))));
        bufp->chgCData(oldp+998,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q),2);
        bufp->chgCData(oldp+999,((2U & ((~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                            >> 1U)) 
                                        << 1U))),2);
        bufp->chgCData(oldp+1000,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q),2);
        bufp->chgCData(oldp+1001,((2U & ((~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                             >> 1U)) 
                                         << 1U))),2);
        bufp->chgBit(oldp+1002,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                       >> 1U))));
        bufp->chgBit(oldp+1003,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                       >> 1U))));
        bufp->chgBit(oldp+1004,(((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)) 
                                 & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr))));
        bufp->chgBit(oldp+1005,((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__core_busy_q)))));
        bufp->chgCData(oldp+1006,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__core_busy_q),4);
        bufp->chgBit(oldp+1007,((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__core_busy_q))));
        bufp->chgBit(oldp+1008,((1U & VL_REDXOR_32(
                                                   (7U 
                                                    & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__core_busy_q) 
                                                       >> 1U))))));
        bufp->chgBit(oldp+1009,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__intr_tx_watermark_o));
        bufp->chgBit(oldp+1010,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__intr_tx_empty_o));
        bufp->chgBit(oldp+1011,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__intr_rx_watermark_o));
        bufp->chgBit(oldp+1012,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__intr_tx_done_o));
        bufp->chgBit(oldp+1013,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__intr_rx_overflow_o));
        bufp->chgBit(oldp+1014,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__intr_rx_frame_err_o));
        bufp->chgBit(oldp+1015,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__intr_rx_break_err_o));
        bufp->chgBit(oldp+1016,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__intr_rx_timeout_o));
        bufp->chgBit(oldp+1017,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__intr_rx_parity_err_o));
        bufp->chgBit(oldp+1018,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_rx__DOT__idle_q));
        bufp->chgBit(oldp+1019,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q));
        bufp->chgBit(oldp+1020,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q));
        bufp->chgBit(oldp+1021,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_done__q));
        bufp->chgBit(oldp+1022,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q));
        bufp->chgBit(oldp+1023,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q));
        bufp->chgBit(oldp+1024,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q));
        bufp->chgBit(oldp+1025,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q));
        bufp->chgBit(oldp+1026,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q));
        bufp->chgBit(oldp+1027,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q));
        bufp->chgBit(oldp+1028,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q));
        bufp->chgBit(oldp+1029,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q));
        bufp->chgBit(oldp+1030,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_done__q));
        bufp->chgBit(oldp+1031,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q));
        bufp->chgBit(oldp+1032,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q));
        bufp->chgBit(oldp+1033,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q));
        bufp->chgBit(oldp+1034,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q));
        bufp->chgBit(oldp+1035,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q));
        bufp->chgBit(oldp+1036,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q));
        bufp->chgBit(oldp+1037,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q));
        bufp->chgBit(oldp+1038,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q));
        bufp->chgBit(oldp+1039,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q));
        bufp->chgBit(oldp+1040,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q));
        bufp->chgBit(oldp+1041,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q));
        bufp->chgBit(oldp+1042,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q));
        bufp->chgBit(oldp+1043,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q));
        bufp->chgCData(oldp+1044,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q),2);
        bufp->chgSData(oldp+1045,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q),16);
        bufp->chgCData(oldp+1046,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q),3);
        bufp->chgCData(oldp+1047,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q),3);
        bufp->chgBit(oldp+1048,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q));
        bufp->chgBit(oldp+1049,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q));
        bufp->chgSData(oldp+1050,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_val_q),16);
        bufp->chgIData(oldp+1051,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q),24);
        bufp->chgBit(oldp+1052,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q));
        bufp->chgBit(oldp+1053,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__wdata_qe));
        bufp->chgBit(oldp+1054,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__fifo_ctrl_qe));
        bufp->chgBit(oldp+1055,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q));
        bufp->chgBit(oldp+1056,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q));
        bufp->chgBit(oldp+1057,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q));
        bufp->chgIData(oldp+1058,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q),32);
        bufp->chgBit(oldp+1059,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__error_q));
        bufp->chgCData(oldp+1060,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q),8);
        bufp->chgCData(oldp+1061,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q),2);
        bufp->chgCData(oldp+1062,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q),3);
        bufp->chgBit(oldp+1063,((1U & VL_REDXOR_32(
                                                   ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_i[0U] 
                                                     ^ 
                                                     vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_i[1U]) 
                                                    ^ 
                                                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_i[2U])))));
        bufp->chgBit(oldp+1064,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__nco_sum_q 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1065,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q));
        bufp->chgCData(oldp+1066,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_depth_prev_q),7);
        bufp->chgIData(oldp+1067,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_timeout_count_q),24);
        bufp->chgBit(oldp+1068,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_fifo_rxrst));
        bufp->chgBit(oldp+1069,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_fifo_txrst));
        bufp->chgBit(oldp+1070,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_uart_idle));
        bufp->chgBit(oldp+1071,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__tx_q));
        bufp->chgBit(oldp+1072,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_out_q));
        bufp->chgBit(oldp+1073,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q));
        bufp->chgBit(oldp+1074,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_wvalid));
        bufp->chgBit(oldp+1075,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_sync));
        bufp->chgBit(oldp+1076,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_in));
        bufp->chgCData(oldp+1077,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__allzero_cnt_q),5);
        bufp->chgBit(oldp+1078,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__event_rx_frame_err));
        bufp->chgBit(oldp+1079,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__event_rx_timeout));
        bufp->chgBit(oldp+1080,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__event_rx_parity_err));
        bufp->chgBit(oldp+1081,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_uart_idle_q));
        bufp->chgBit(oldp+1082,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__break_st_q));
        bufp->chgIData(oldp+1083,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__nco_sum_q),17);
        bufp->chgBit(oldp+1084,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_sync_q1));
        bufp->chgBit(oldp+1085,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_sync_q2));
        bufp->chgBit(oldp+1086,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q)
                                  ? (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_sync) 
                                      & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_sync_q1) 
                                         | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_sync_q2))) 
                                     | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_sync_q1) 
                                        & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_sync_q2)))
                                  : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_sync))));
        bufp->chgBit(oldp+1087,((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_sync) 
                                  & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_sync_q1) 
                                     | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_sync_q2))) 
                                 | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_sync_q1) 
                                    & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_sync_q2)))));
        bufp->chgCData(oldp+1088,(((4U <= (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q))
                                    ? 0x10U : (0x3fU 
                                               & ((IData)(1U) 
                                                  << (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q))))),6);
        bufp->chgCData(oldp+1089,(((6U < (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q))
                                    ? 0x7fU : ((6U 
                                                == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q))
                                                ? 0x3eU
                                                : (0x7fU 
                                                   & ((IData)(1U) 
                                                      << (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q)))))),7);
        bufp->chgBit(oldp+1090,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__g_intr_status__DOT__test_q));
        bufp->chgBit(oldp+1091,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__g_intr_status__DOT__test_q));
        bufp->chgBit(oldp+1092,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__g_intr_status__DOT__test_q));
        bufp->chgBit(oldp+1093,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__sync_rx__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
        bufp->chgCData(oldp+1094,((0x3fU & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))),6);
        bufp->chgBit(oldp+1095,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst));
        bufp->chgCData(oldp+1096,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q),7);
        bufp->chgCData(oldp+1097,((0x40U & ((~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                >> 6U)) 
                                            << 6U))),7);
        bufp->chgBit(oldp+1098,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                       >> 6U))));
        bufp->chgCData(oldp+1099,((0x1fU & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))),5);
        bufp->chgBit(oldp+1100,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst));
        bufp->chgCData(oldp+1101,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q),6);
        bufp->chgCData(oldp+1102,((0x20U & ((~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                >> 5U)) 
                                            << 5U))),6);
        bufp->chgBit(oldp+1103,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                       >> 5U))));
        bufp->chgSData(oldp+1104,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_rx__DOT__sreg_q),11);
        bufp->chgSData(oldp+1105,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_rx__DOT__sreg_d),11);
        bufp->chgCData(oldp+1106,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q),4);
        bufp->chgCData(oldp+1107,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d),4);
        bufp->chgCData(oldp+1108,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_rx__DOT__baud_div_q),4);
        bufp->chgCData(oldp+1109,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d),4);
        bufp->chgBit(oldp+1110,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d));
        bufp->chgBit(oldp+1111,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_rx__DOT__idle_d));
        bufp->chgCData(oldp+1112,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__baud_div_q),4);
        bufp->chgBit(oldp+1113,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__tick_baud_q));
        bufp->chgCData(oldp+1114,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q),4);
        bufp->chgSData(oldp+1115,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__sreg_q),11);
        bufp->chgSData(oldp+1116,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__num_req_outstanding),9);
        bufp->chgCData(oldp+1117,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__dev_select_outstanding),2);
        bufp->chgCData(oldp+1118,((7U & ((vlSelfRef.__VdfgRegularize_ha026946b_0_34[2U] 
                                          << 2U) | 
                                         (vlSelfRef.__VdfgRegularize_ha026946b_0_34[1U] 
                                          >> 0x1eU)))),3);
        bufp->chgCData(oldp+1119,((7U & (vlSelfRef.__VdfgRegularize_ha026946b_0_34[1U] 
                                         >> 0x1bU))),3);
        bufp->chgCData(oldp+1120,((3U & (vlSelfRef.__VdfgRegularize_ha026946b_0_34[1U] 
                                         >> 0x19U))),2);
        bufp->chgCData(oldp+1121,((0xffU & (vlSelfRef.__VdfgRegularize_ha026946b_0_34[1U] 
                                            >> 0x11U))),8);
        bufp->chgBit(oldp+1122,((1U & (vlSelfRef.__VdfgRegularize_ha026946b_0_34[1U] 
                                       >> 0x10U))));
        bufp->chgIData(oldp+1123,(((1U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                    ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                    : 0U)),32);
        bufp->chgCData(oldp+1124,((0x7fU & ((IData)(vlSelfRef.__VdfgRegularize_ha026946b_0_38) 
                                            >> 9U))),7);
        bufp->chgCData(oldp+1125,((0x7fU & ((IData)(vlSelfRef.__VdfgRegularize_ha026946b_0_38) 
                                            >> 2U))),7);
        bufp->chgBit(oldp+1126,((1U & ((IData)(vlSelfRef.__VdfgRegularize_ha026946b_0_38) 
                                       >> 1U))));
        bufp->chgBit(oldp+1127,((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q)))));
        __Vtemp_10[0U] = (IData)((((QData)((IData)(
                                                   ((1U 
                                                     == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                                     ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                                     : 0U))) 
                                   << 0x10U) | (QData)((IData)(
                                                               (0xfffeU 
                                                                & (IData)(vlSelfRef.__VdfgRegularize_ha026946b_0_38))))));
        __Vtemp_10[1U] = ((0xffff0000U & vlSelfRef.__VdfgRegularize_ha026946b_0_34[1U]) 
                          | (IData)(((((QData)((IData)(
                                                       ((1U 
                                                         == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                                         ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                                         : 0U))) 
                                       << 0x10U) | (QData)((IData)(
                                                                   (0xfffeU 
                                                                    & (IData)(vlSelfRef.__VdfgRegularize_ha026946b_0_38))))) 
                                     >> 0x20U)));
        __Vtemp_10[2U] = (1U & vlSelfRef.__VdfgRegularize_ha026946b_0_34[2U]);
        bufp->chgWData(oldp+1128,(__Vtemp_10),65);
        bufp->chgBit(oldp+1131,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U] 
                                       >> 1U))));
        bufp->chgCData(oldp+1132,((7U & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U] 
                                          << 2U) | 
                                         (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                          >> 0x1eU)))),3);
        bufp->chgCData(oldp+1133,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                         >> 0x1bU))),3);
        bufp->chgCData(oldp+1134,((3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                         >> 0x19U))),2);
        bufp->chgCData(oldp+1135,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                            >> 0x11U))),8);
        bufp->chgBit(oldp+1136,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                       >> 0x10U))));
        bufp->chgIData(oldp+1137,(((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U] 
                                    << 0x10U) | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                 >> 0x10U))),32);
        bufp->chgCData(oldp+1138,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                            >> 9U))),7);
        bufp->chgCData(oldp+1139,((0x7fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                            >> 2U))),7);
        bufp->chgBit(oldp+1140,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                       >> 1U))));
        bufp->chgBit(oldp+1141,((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U])));
        bufp->chgCData(oldp+1142,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_err_resp__DOT__err_resp__DOT__err_opcode),3);
        bufp->chgCData(oldp+1143,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_err_resp__DOT__err_resp__DOT__err_source),8);
        bufp->chgCData(oldp+1144,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_err_resp__DOT__err_resp__DOT__err_size),2);
        bufp->chgBit(oldp+1145,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending));
        bufp->chgCData(oldp+1146,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_err_resp__DOT__err_resp__DOT__err_instr_type),4);
        bufp->chgBit(oldp+1147,((1U & VL_REDXOR_32(
                                                   ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[0U] 
                                                     ^ 
                                                     vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[1U]) 
                                                    ^ 
                                                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int[2U])))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[4U] 
                      | vlSelfRef.__Vm_traceActivity
                      [9U])))) {
        bufp->chgBit(oldp+1148,(((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                 & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr))));
        bufp->chgBit(oldp+1149,(((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_rvalid)) 
                                 & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_uart_idle))));
        bufp->chgBit(oldp+1150,(((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_rvalid)) 
                                 & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_uart_idle))));
        bufp->chgIData(oldp+1151,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q)
                                    ? ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__event_rx_timeout)
                                        ? 0U : (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_depth) 
                                                 != (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_depth_prev_q))
                                                 ? 0U
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_depth))
                                                  ? 0U
                                                  : 
                                                 (0xffffffU 
                                                  & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_timeout_count_q 
                                                     + (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q))))))
                                    : 0U)),24);
        bufp->chgBit(oldp+1152,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_depth) 
                                 != (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_depth_prev_q))));
        bufp->chgBit(oldp+1153,(((0U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q))
                                  ? (2U <= (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__allzero_cnt_d))
                                  : ((1U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q))
                                      ? (4U <= (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__allzero_cnt_d))
                                      : ((2U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q))
                                          ? (8U <= (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__allzero_cnt_d))
                                          : (0x10U 
                                             <= (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__allzero_cnt_d)))))));
        bufp->chgBit(oldp+1154,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__event_rx_frame_err) 
                                 & (0U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_data)))));
        bufp->chgBit(oldp+1155,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
                                 & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__event_rx_frame_err)) 
                                    | (0U != (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_data))))));
        bufp->chgBit(oldp+1156,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_depth) 
                                 < ((4U <= (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q))
                                     ? 0x10U : (0x3fU 
                                                & ((IData)(1U) 
                                                   << (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q)))))));
        bufp->chgBit(oldp+1157,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_depth) 
                                 >= ((6U < (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q))
                                      ? 0x7fU : ((6U 
                                                  == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q))
                                                  ? 0x3eU
                                                  : 
                                                 (0x7fU 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q))))))));
        bufp->chgBit(oldp+1158,(((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_rvalid)) 
                                 & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_uart_idle_q)) 
                                    & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_uart_idle)))));
        bufp->chgBit(oldp+1159,(((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_wready)) 
                                 & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_wvalid))));
        bufp->chgBit(oldp+1160,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
                                 & (0x1fU == (0x1fU 
                                              & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgIData(oldp+1161,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q),32);
        bufp->chgIData(oldp+1162,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q),32);
        bufp->chgIData(oldp+1163,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q),32);
        bufp->chgQData(oldp+1164,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order
                                  [0U]),64);
        bufp->chgBit(oldp+1166,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap
                                [0U]));
        bufp->chgBit(oldp+1167,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_halt
                                [0U]));
        bufp->chgBit(oldp+1168,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr
                                [0U]));
        bufp->chgCData(oldp+1169,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode
                                  [0U]),2);
        bufp->chgCData(oldp+1170,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_ixl
                                  [0U]),2);
        bufp->chgIData(oldp+1171,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata
                                  [0U]),32);
        bufp->chgIData(oldp+1172,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_pre_mip),32);
        bufp->chgIData(oldp+1173,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_post_mip),32);
        bufp->chgBit(oldp+1174,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi
                                [1U]));
        bufp->chgBit(oldp+1175,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int
                                [1U]));
        bufp->chgBit(oldp+1176,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req
                                [1U]));
        bufp->chgBit(oldp+1177,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode
                                [0U]));
        bufp->chgQData(oldp+1178,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle
                                  [0U]),64);
        bufp->chgIData(oldp+1180,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcounters[0]),32);
        bufp->chgIData(oldp+1181,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcounters[1]),32);
        bufp->chgIData(oldp+1182,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcounters[2]),32);
        bufp->chgIData(oldp+1183,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcounters[3]),32);
        bufp->chgIData(oldp+1184,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcounters[4]),32);
        bufp->chgIData(oldp+1185,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcounters[5]),32);
        bufp->chgIData(oldp+1186,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcounters[6]),32);
        bufp->chgIData(oldp+1187,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcounters[7]),32);
        bufp->chgIData(oldp+1188,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcounters[8]),32);
        bufp->chgIData(oldp+1189,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcounters[9]),32);
        bufp->chgIData(oldp+1190,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcountersh[0]),32);
        bufp->chgIData(oldp+1191,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcountersh[1]),32);
        bufp->chgIData(oldp+1192,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcountersh[2]),32);
        bufp->chgIData(oldp+1193,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcountersh[3]),32);
        bufp->chgIData(oldp+1194,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcountersh[4]),32);
        bufp->chgIData(oldp+1195,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcountersh[5]),32);
        bufp->chgIData(oldp+1196,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcountersh[6]),32);
        bufp->chgIData(oldp+1197,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcountersh[7]),32);
        bufp->chgIData(oldp+1198,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcountersh[8]),32);
        bufp->chgIData(oldp+1199,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcountersh[9]),32);
        bufp->chgBit(oldp+1200,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_ic_scr_key_valid
                                [0U]));
        bufp->chgBit(oldp+1201,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_irq_valid
                                [1U]));
        bufp->chgIData(oldp+1202,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regs[0]),32);
        bufp->chgIData(oldp+1203,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regs[1]),32);
        bufp->chgIData(oldp+1204,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regs[2]),32);
        bufp->chgIData(oldp+1205,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regs[3]),32);
        bufp->chgIData(oldp+1206,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regs[4]),32);
        bufp->chgIData(oldp+1207,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regs[5]),32);
        bufp->chgIData(oldp+1208,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regs[6]),32);
        bufp->chgIData(oldp+1209,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regs[7]),32);
        bufp->chgIData(oldp+1210,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regs[8]),32);
        bufp->chgIData(oldp+1211,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regs[9]),32);
        bufp->chgIData(oldp+1212,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regsh[0]),32);
        bufp->chgIData(oldp+1213,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regsh[1]),32);
        bufp->chgIData(oldp+1214,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regsh[2]),32);
        bufp->chgIData(oldp+1215,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regsh[3]),32);
        bufp->chgIData(oldp+1216,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regsh[4]),32);
        bufp->chgIData(oldp+1217,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regsh[5]),32);
        bufp->chgIData(oldp+1218,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regsh[6]),32);
        bufp->chgIData(oldp+1219,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regsh[7]),32);
        bufp->chgIData(oldp+1220,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regsh[8]),32);
        bufp->chgIData(oldp+1221,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regsh[9]),32);
        bufp->chgIData(oldp+1222,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0]),32);
        bufp->chgIData(oldp+1223,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[1]),32);
        bufp->chgIData(oldp+1224,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[2]),32);
        bufp->chgIData(oldp+1225,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[3]),32);
        bufp->chgIData(oldp+1226,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[4]),32);
        bufp->chgIData(oldp+1227,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[5]),32);
        bufp->chgIData(oldp+1228,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[6]),32);
        bufp->chgIData(oldp+1229,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[7]),32);
        bufp->chgIData(oldp+1230,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[8]),32);
        bufp->chgIData(oldp+1231,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[9]),32);
        bufp->chgIData(oldp+1232,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[10]),32);
        bufp->chgIData(oldp+1233,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[11]),32);
        bufp->chgIData(oldp+1234,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[12]),32);
        bufp->chgIData(oldp+1235,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[13]),32);
        bufp->chgIData(oldp+1236,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[14]),32);
        bufp->chgIData(oldp+1237,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[15]),32);
        bufp->chgIData(oldp+1238,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[16]),32);
        bufp->chgIData(oldp+1239,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[17]),32);
        bufp->chgIData(oldp+1240,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[18]),32);
        bufp->chgIData(oldp+1241,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[19]),32);
        bufp->chgIData(oldp+1242,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[20]),32);
        bufp->chgIData(oldp+1243,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[21]),32);
        bufp->chgIData(oldp+1244,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[22]),32);
        bufp->chgIData(oldp+1245,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[23]),32);
        bufp->chgIData(oldp+1246,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[24]),32);
        bufp->chgIData(oldp+1247,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[25]),32);
        bufp->chgIData(oldp+1248,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[26]),32);
        bufp->chgIData(oldp+1249,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[27]),32);
        bufp->chgIData(oldp+1250,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[28]),32);
        bufp->chgIData(oldp+1251,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[29]),32);
        bufp->chgIData(oldp+1252,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[30]),32);
        bufp->chgIData(oldp+1253,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[31]),32);
        bufp->chgIData(oldp+1254,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__10__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1255,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__11__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1256,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__12__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1257,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__13__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1258,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__14__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1259,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__15__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1260,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__16__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1261,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__17__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1262,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__18__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1263,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__19__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1264,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__1__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1265,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__20__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1266,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__21__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1267,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__22__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1268,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__23__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1269,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__24__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1270,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__25__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1271,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__26__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1272,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__27__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1273,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__28__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1274,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__29__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1275,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__2__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1276,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__30__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1277,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__31__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1278,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__3__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1279,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__4__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1280,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__5__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1281,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__6__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1282,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__7__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1283,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__8__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1284,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__9__KET____DOT__rf_reg_q),32);
        bufp->chgBit(oldp+1285,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_q));
        bufp->chgQData(oldp+1286,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex[0]),34);
        bufp->chgQData(oldp+1288,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex[1]),34);
        bufp->chgBit(oldp+1290,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                       >> 1U))));
        bufp->chgBit(oldp+1291,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                       >> 2U))));
        bufp->chgCData(oldp+1292,((7U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                         >> 3U))),3);
        bufp->chgBit(oldp+1293,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req));
        bufp->chgBit(oldp+1294,((0U != (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
        bufp->chgBit(oldp+1295,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q));
        bufp->chgBit(oldp+1296,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                       >> 5U))));
        bufp->chgIData(oldp+1297,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q),32);
        bufp->chgIData(oldp+1298,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q),32);
        bufp->chgBit(oldp+1299,((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))));
        bufp->chgCData(oldp+1300,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q),2);
        bufp->chgCData(oldp+1301,((3U & ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))
                                          ? ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                             >> 2U)
                                          : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)))),2);
        bufp->chgBit(oldp+1302,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q));
        bufp->chgCData(oldp+1303,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_q),3);
        bufp->chgBit(oldp+1304,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                       >> 2U))));
        bufp->chgBit(oldp+1305,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1306,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                       >> 0xcU))));
        bufp->chgQData(oldp+1307,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order[0]),64);
        bufp->chgBit(oldp+1309,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap[0]));
        bufp->chgBit(oldp+1310,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_halt[0]));
        bufp->chgBit(oldp+1311,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr[0]));
        bufp->chgCData(oldp+1312,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode[0]),2);
        bufp->chgCData(oldp+1313,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_ixl[0]),2);
        bufp->chgIData(oldp+1314,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata[0]),32);
        bufp->chgBit(oldp+1315,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_intr_q));
        bufp->chgBit(oldp+1316,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_set_trap_pc_q));
        bufp->chgCData(oldp+1317,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_addr_q),5);
        bufp->chgCData(oldp+1318,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_addr_q),5);
        bufp->chgIData(oldp+1319,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_data_q),32);
        bufp->chgIData(oldp+1320,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_data_q),32);
        bufp->chgCData(oldp+1321,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_addr_q),5);
        bufp->chgIData(oldp+1322,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_wdata_q),32);
        bufp->chgIData(oldp+1323,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_rdata_q),32);
        bufp->chgIData(oldp+1324,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_wdata_q),32);
        bufp->chgIData(oldp+1325,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_addr_q),32);
        bufp->chgBit(oldp+1326,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_irq_valid));
        bufp->chgQData(oldp+1327,((1ULL + vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order
                                   [0U])),64);
        bufp->chgBit(oldp+1329,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_mip 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1330,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_mip 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1331,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_mip 
                                       >> 0xfU))));
        bufp->chgSData(oldp+1332,((0x7fffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_mip)),15);
        bufp->chgBit(oldp+1333,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_nmi));
        bufp->chgBit(oldp+1334,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_nmi_int));
        bufp->chgBit(oldp+1335,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_debug_req));
        bufp->chgBit(oldp+1336,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_valid));
        bufp->chgBit(oldp+1337,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip
                                       [0U] >> 0x11U))));
        bufp->chgBit(oldp+1338,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip
                                       [0U] >> 0x10U))));
        bufp->chgBit(oldp+1339,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip
                                       [0U] >> 0xfU))));
        bufp->chgSData(oldp+1340,((0x7fffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip
                                   [0U])),15);
        bufp->chgBit(oldp+1341,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip
                                       [1U] >> 0x11U))));
        bufp->chgBit(oldp+1342,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip
                                       [1U] >> 0x10U))));
        bufp->chgBit(oldp+1343,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip
                                       [1U] >> 0xfU))));
        bufp->chgSData(oldp+1344,((0x7fffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip
                                   [1U])),15);
        bufp->chgBit(oldp+1345,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip
                                       [0U] >> 0x11U))));
        bufp->chgBit(oldp+1346,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip
                                       [0U] >> 0x10U))));
        bufp->chgBit(oldp+1347,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip
                                       [0U] >> 0xfU))));
        bufp->chgSData(oldp+1348,((0x7fffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip
                                   [0U])),15);
        bufp->chgBit(oldp+1349,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi[0]));
        bufp->chgBit(oldp+1350,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi[1]));
        bufp->chgBit(oldp+1351,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int[0]));
        bufp->chgBit(oldp+1352,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int[1]));
        bufp->chgBit(oldp+1353,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req[0]));
        bufp->chgBit(oldp+1354,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req[1]));
        bufp->chgBit(oldp+1355,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode[0]));
        bufp->chgQData(oldp+1356,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle[0]),64);
        bufp->chgIData(oldp+1358,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
                                  [0U][0U]),32);
        bufp->chgIData(oldp+1359,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
                                  [0U][1U]),32);
        bufp->chgIData(oldp+1360,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
                                  [0U][2U]),32);
        bufp->chgIData(oldp+1361,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
                                  [0U][3U]),32);
        bufp->chgIData(oldp+1362,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
                                  [0U][4U]),32);
        bufp->chgIData(oldp+1363,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
                                  [0U][5U]),32);
        bufp->chgIData(oldp+1364,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
                                  [0U][6U]),32);
        bufp->chgIData(oldp+1365,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
                                  [0U][7U]),32);
        bufp->chgIData(oldp+1366,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
                                  [0U][8U]),32);
        bufp->chgIData(oldp+1367,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
                                  [0U][9U]),32);
        bufp->chgIData(oldp+1368,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
                                  [0U][0U]),32);
        bufp->chgIData(oldp+1369,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
                                  [0U][1U]),32);
        bufp->chgIData(oldp+1370,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
                                  [0U][2U]),32);
        bufp->chgIData(oldp+1371,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
                                  [0U][3U]),32);
        bufp->chgIData(oldp+1372,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
                                  [0U][4U]),32);
        bufp->chgIData(oldp+1373,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
                                  [0U][5U]),32);
        bufp->chgIData(oldp+1374,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
                                  [0U][6U]),32);
        bufp->chgIData(oldp+1375,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
                                  [0U][7U]),32);
        bufp->chgIData(oldp+1376,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
                                  [0U][8U]),32);
        bufp->chgIData(oldp+1377,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
                                  [0U][9U]),32);
        bufp->chgBit(oldp+1378,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_ic_scr_key_valid[0]));
        bufp->chgBit(oldp+1379,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_irq_valid[0]));
        bufp->chgBit(oldp+1380,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_irq_valid[1]));
        bufp->chgBit(oldp+1381,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                       >> 4U))));
        bufp->chgCData(oldp+1382,((3U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                         >> 2U))),2);
        bufp->chgBit(oldp+1383,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                       >> 1U))));
        bufp->chgBit(oldp+1384,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1385,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1386,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                       >> 0xfU))));
        bufp->chgSData(oldp+1387,((0x7fffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q)),15);
        bufp->chgIData(oldp+1388,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q),32);
        bufp->chgBit(oldp+1389,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q) 
                                       >> 6U))));
        bufp->chgBit(oldp+1390,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q) 
                                       >> 5U))));
        bufp->chgCData(oldp+1391,((0x1fU & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q))),5);
        bufp->chgCData(oldp+1392,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                   >> 0x1cU)),4);
        bufp->chgSData(oldp+1393,((0xfffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 0x10U))),12);
        bufp->chgBit(oldp+1394,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1395,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1396,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1397,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1398,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                       >> 9U))));
        bufp->chgCData(oldp+1399,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                         >> 6U))),3);
        bufp->chgBit(oldp+1400,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                       >> 5U))));
        bufp->chgBit(oldp+1401,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                       >> 4U))));
        bufp->chgBit(oldp+1402,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                       >> 3U))));
        bufp->chgCData(oldp+1403,((3U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q)),2);
        bufp->chgIData(oldp+1404,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q),32);
        bufp->chgIData(oldp+1405,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q),32);
        bufp->chgBit(oldp+1406,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q) 
                                       >> 2U))));
        bufp->chgCData(oldp+1407,((3U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q))),2);
        bufp->chgIData(oldp+1408,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q),32);
        bufp->chgBit(oldp+1409,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q) 
                                       >> 6U))));
        bufp->chgBit(oldp+1410,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q) 
                                       >> 5U))));
        bufp->chgCData(oldp+1411,((0x1fU & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q))),5);
        bufp->chgIData(oldp+1412,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q),32);
        bufp->chgSData(oldp+1413,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q),13);
        bufp->chgQData(oldp+1414,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0]),64);
        bufp->chgQData(oldp+1416,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[1]),64);
        bufp->chgQData(oldp+1418,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[2]),64);
        bufp->chgQData(oldp+1420,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[3]),64);
        bufp->chgQData(oldp+1422,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[4]),64);
        bufp->chgQData(oldp+1424,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[5]),64);
        bufp->chgQData(oldp+1426,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[6]),64);
        bufp->chgQData(oldp+1428,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[7]),64);
        bufp->chgQData(oldp+1430,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[8]),64);
        bufp->chgQData(oldp+1432,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[9]),64);
        bufp->chgQData(oldp+1434,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[10]),64);
        bufp->chgQData(oldp+1436,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[11]),64);
        bufp->chgQData(oldp+1438,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[12]),64);
        bufp->chgQData(oldp+1440,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[13]),64);
        bufp->chgQData(oldp+1442,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[14]),64);
        bufp->chgQData(oldp+1444,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[15]),64);
        bufp->chgQData(oldp+1446,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[16]),64);
        bufp->chgQData(oldp+1448,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[17]),64);
        bufp->chgQData(oldp+1450,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[18]),64);
        bufp->chgQData(oldp+1452,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[19]),64);
        bufp->chgQData(oldp+1454,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[20]),64);
        bufp->chgQData(oldp+1456,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[21]),64);
        bufp->chgQData(oldp+1458,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[22]),64);
        bufp->chgQData(oldp+1460,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[23]),64);
        bufp->chgQData(oldp+1462,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[24]),64);
        bufp->chgQData(oldp+1464,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[25]),64);
        bufp->chgQData(oldp+1466,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[26]),64);
        bufp->chgQData(oldp+1468,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[27]),64);
        bufp->chgQData(oldp+1470,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[28]),64);
        bufp->chgQData(oldp+1472,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[29]),64);
        bufp->chgQData(oldp+1474,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[30]),64);
        bufp->chgQData(oldp+1476,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[31]),64);
        bufp->chgQData(oldp+1478,((1ULL + vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q)),64);
        bufp->chgQData(oldp+1480,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q),64);
        bufp->chgBit(oldp+1482,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                       >> 7U))));
        bufp->chgBit(oldp+1483,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                       >> 6U))));
        bufp->chgBit(oldp+1484,((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q))));
        bufp->chgQData(oldp+1485,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
        bufp->chgQData(oldp+1487,((0xffffffffffULL 
                                   & (1ULL + vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
        bufp->chgQData(oldp+1489,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
        bufp->chgQData(oldp+1491,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
        bufp->chgQData(oldp+1493,((0xffffffffffULL 
                                   & (1ULL + vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
        bufp->chgQData(oldp+1495,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
        bufp->chgQData(oldp+1497,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
        bufp->chgQData(oldp+1499,((0xffffffffffULL 
                                   & (1ULL + vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
        bufp->chgQData(oldp+1501,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
        bufp->chgQData(oldp+1503,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
        bufp->chgQData(oldp+1505,((0xffffffffffULL 
                                   & (1ULL + vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
        bufp->chgQData(oldp+1507,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
        bufp->chgQData(oldp+1509,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
        bufp->chgQData(oldp+1511,((0xffffffffffULL 
                                   & (1ULL + vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
        bufp->chgQData(oldp+1513,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
        bufp->chgQData(oldp+1515,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
        bufp->chgQData(oldp+1517,((0xffffffffffULL 
                                   & (1ULL + vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
        bufp->chgQData(oldp+1519,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
        bufp->chgQData(oldp+1521,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
        bufp->chgQData(oldp+1523,((0xffffffffffULL 
                                   & (1ULL + vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
        bufp->chgQData(oldp+1525,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
        bufp->chgQData(oldp+1527,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
        bufp->chgQData(oldp+1529,((0xffffffffffULL 
                                   & (1ULL + vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),64);
        bufp->chgQData(oldp+1531,((0xffffffffffULL 
                                   & (1ULL + vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
        bufp->chgQData(oldp+1533,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
        bufp->chgQData(oldp+1535,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
        bufp->chgQData(oldp+1537,((0xffffffffffULL 
                                   & (1ULL + vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
        bufp->chgQData(oldp+1539,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
        bufp->chgQData(oldp+1541,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),64);
        bufp->chgQData(oldp+1543,((0xffffffffffULL 
                                   & (1ULL + vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q))),40);
        bufp->chgQData(oldp+1545,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
        bufp->chgBit(oldp+1547,((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q)))));
        bufp->chgQData(oldp+1548,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q),64);
        bufp->chgQData(oldp+1550,((1ULL + vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q)),64);
        bufp->chgCData(oldp+1552,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q),8);
        bufp->chgIData(oldp+1553,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q),32);
        bufp->chgCData(oldp+1554,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q),7);
        bufp->chgIData(oldp+1555,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q),18);
        bufp->chgCData(oldp+1556,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q),7);
        bufp->chgCData(oldp+1557,((7U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                         >> 2U))),3);
        bufp->chgCData(oldp+1558,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q),3);
        bufp->chgCData(oldp+1559,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q),6);
        bufp->chgQData(oldp+1560,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a),33);
        bufp->chgIData(oldp+1562,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_q[0]),32);
        bufp->chgIData(oldp+1563,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_q[1]),32);
        bufp->chgIData(oldp+1564,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[0]),32);
        bufp->chgIData(oldp+1565,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[1]),32);
        bufp->chgIData(oldp+1566,(((IData)(1U) << (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q))),32);
        bufp->chgIData(oldp+1567,((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q
                                          [1U])),32);
        bufp->chgIData(oldp+1568,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q),32);
        bufp->chgIData(oldp+1569,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q),32);
        bufp->chgBit(oldp+1570,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid));
        bufp->chgCData(oldp+1571,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q),5);
        bufp->chgBit(oldp+1572,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold));
        bufp->chgBit(oldp+1573,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q));
        bufp->chgBit(oldp+1574,((0U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))));
        bufp->chgCData(oldp+1575,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q),3);
        bufp->chgCData(oldp+1576,((3U & (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q
                                                 [1U] 
                                                 >> 0x20U)))),2);
        bufp->chgCData(oldp+1577,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q),2);
        bufp->chgIData(oldp+1578,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_rvfi_stages__BRA__0__KET____DOT__unnamedblk1__DOT__k),32);
        bufp->chgBit(oldp+1579,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set));
        bufp->chgBit(oldp+1580,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q));
        bufp->chgBit(oldp+1581,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q));
        bufp->chgQData(oldp+1582,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0]),34);
        bufp->chgQData(oldp+1584,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1]),34);
        bufp->chgBit(oldp+1586,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q));
        bufp->chgBit(oldp+1587,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q));
        bufp->chgBit(oldp+1588,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q));
        bufp->chgBit(oldp+1589,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q));
        bufp->chgBit(oldp+1590,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q));
        bufp->chgBit(oldp+1591,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q));
        bufp->chgBit(oldp+1592,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q));
        bufp->chgBit(oldp+1593,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug));
        bufp->chgBit(oldp+1594,((IData)((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                          >> 5U) | 
                                         (0U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))))));
        bufp->chgBit(oldp+1595,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                       | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                          >> 2U)))));
        bufp->chgCData(oldp+1596,((0xffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)),8);
        bufp->chgBit(oldp+1597,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q));
        bufp->chgBit(oldp+1598,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q));
        bufp->chgCData(oldp+1599,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q),2);
        bufp->chgCData(oldp+1600,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q),2);
        bufp->chgCData(oldp+1601,(((2U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                          << 1U)) | 
                                   (1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                          >> 1U)))),2);
        bufp->chgIData(oldp+1602,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q),24);
        bufp->chgCData(oldp+1603,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q),2);
        bufp->chgCData(oldp+1604,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q),2);
        bufp->chgBit(oldp+1605,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q));
        bufp->chgBit(oldp+1606,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q));
        bufp->chgBit(oldp+1607,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q));
        bufp->chgBit(oldp+1608,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q));
        bufp->chgBit(oldp+1609,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q));
        bufp->chgCData(oldp+1610,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs),3);
        bufp->chgBit(oldp+1611,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_q));
        bufp->chgBit(oldp+1612,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_bus_err_1_q));
        bufp->chgBit(oldp+1613,((((2U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                                  | (1U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
                                 & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[5U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0xcU])))) {
        bufp->chgBit(oldp+1614,(((3U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                        >> 8U)) > (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))));
        bufp->chgBit(oldp+1615,(((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                                 & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dbg_csr))));
        bufp->chgIData(oldp+1616,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__div_sel_ex)
                                    ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q
                                              [0U])
                                    : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d))),32);
        bufp->chgBit(oldp+1617,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid) 
                                 | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid))));
        bufp->chgQData(oldp+1618,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                    ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                                    : ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1)
                                        ? (1ULL | ((QData)((IData)(
                                                                   (0x7fffffffU 
                                                                    & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a))) 
                                                   << 2U))
                                        : ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2)
                                            ? (1ULL 
                                               | ((QData)((IData)(
                                                                  (0x3fffffffU 
                                                                   & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a))) 
                                                  << 3U))
                                            : ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3)
                                                ? (1ULL 
                                                   | ((QData)((IData)(
                                                                      (0x1fffffffU 
                                                                       & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a))) 
                                                      << 4U))
                                                : (1ULL 
                                                   | ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a)) 
                                                      << 1U))))))),33);
        bufp->chgBit(oldp+1620,(((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q)) 
                                 & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a) 
                                    ^ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)))));
        bufp->chgBit(oldp+1621,(((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                                 & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec))));
        bufp->chgBit(oldp+1622,(((3U != (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                                 & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec) 
                                    | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                       & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec))))));
        bufp->chgBit(oldp+1623,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec) 
                                 | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req))));
        bufp->chgIData(oldp+1624,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req)
                                    ? ((IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                >> 3U)) 
                                       << 2U) : (IData)(
                                                        (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                         >> 1U)))),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+1625,(vlSelfRef.top_verilator__DOT__uart_rx));
        bufp->chgBit(oldp+1626,(vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__txactive));
        bufp->chgIData(oldp+1627,(vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__txcount),32);
        bufp->chgIData(oldp+1628,(vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__txcyccount),32);
        bufp->chgSData(oldp+1629,(vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__txsymbol),10);
        bufp->chgBit(oldp+1630,(vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__seen_reset));
        bufp->chgBit(oldp+1631,(vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__rxactive));
        bufp->chgIData(oldp+1632,(vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__rxcount),32);
        bufp->chgIData(oldp+1633,(vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__rxcyccount),32);
        bufp->chgCData(oldp+1634,(vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__rxsymbol),8);
        bufp->chgIData(oldp+1635,(vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__unnamedblk1__DOT__c),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[7U]))) {
        bufp->chgIData(oldp+1636,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_data_rdata),32);
        bufp->chgIData(oldp+1637,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage),17);
        bufp->chgIData(oldp+1638,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage),17);
        bufp->chgQData(oldp+1639,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage),40);
        bufp->chgQData(oldp+1641,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage),40);
        bufp->chgCData(oldp+1643,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage),5);
        bufp->chgCData(oldp+1644,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage),5);
        bufp->chgIData(oldp+1645,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__file_handle),32);
        bufp->chgIData(oldp+1646,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__unnamedblk2__DOT__fh),32);
        bufp->chgIData(oldp+1647,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+1648,((0xffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[0U])),8);
        bufp->chgCData(oldp+1649,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1650,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1651,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1652,((0xffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[1U])),8);
        bufp->chgCData(oldp+1653,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1654,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1655,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1656,((0xffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[2U])),8);
        bufp->chgCData(oldp+1657,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1658,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1659,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1660,((0xffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[3U])),8);
        bufp->chgCData(oldp+1661,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1662,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1663,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1664,((0xffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[4U])),8);
        bufp->chgCData(oldp+1665,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1666,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1667,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1668,((0xffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[5U])),8);
        bufp->chgCData(oldp+1669,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1670,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1671,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1672,((0xffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[6U])),8);
        bufp->chgCData(oldp+1673,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1674,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1675,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1676,((0xffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[7U])),8);
        bufp->chgCData(oldp+1677,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1678,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1679,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1680,((0xffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[8U])),8);
        bufp->chgCData(oldp+1681,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1682,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1683,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1684,((0xffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[9U])),8);
        bufp->chgCData(oldp+1685,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1686,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1687,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1688,((0xffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[0xaU])),8);
        bufp->chgCData(oldp+1689,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1690,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1691,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1692,((0xffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[0xbU])),8);
        bufp->chgCData(oldp+1693,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1694,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1695,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1696,((0xffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[0xcU])),8);
        bufp->chgCData(oldp+1697,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1698,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1699,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1700,((0xffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[0xdU])),8);
        bufp->chgCData(oldp+1701,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1702,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1703,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1704,((0xffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[0xeU])),8);
        bufp->chgCData(oldp+1705,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1706,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1707,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1708,((0xffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[0xfU])),8);
        bufp->chgCData(oldp+1709,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1710,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1711,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1712,((0xffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[0U])),8);
        bufp->chgCData(oldp+1713,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1714,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1715,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1716,((0xffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[1U])),8);
        bufp->chgCData(oldp+1717,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1718,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1719,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1720,((0xffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[2U])),8);
        bufp->chgCData(oldp+1721,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1722,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1723,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1724,((0xffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[3U])),8);
        bufp->chgCData(oldp+1725,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1726,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1727,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1728,((0xffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[4U])),8);
        bufp->chgCData(oldp+1729,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1730,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1731,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1732,((0xffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[5U])),8);
        bufp->chgCData(oldp+1733,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1734,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1735,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1736,((0xffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[6U])),8);
        bufp->chgCData(oldp+1737,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1738,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1739,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1740,((0xffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[7U])),8);
        bufp->chgCData(oldp+1741,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1742,((0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1743,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                   >> 0x18U)),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[8U]))) {
        bufp->chgIData(oldp+1744,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_id),32);
        bufp->chgIData(oldp+1745,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                   << 1U)),32);
        bufp->chgCData(oldp+1746,((0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+1747,((0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                            >> 0x14U))),5);
        bufp->chgCData(oldp+1748,((0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                            >> 7U))),5);
        bufp->chgIData(oldp+1749,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id),32);
        bufp->chgSData(oldp+1750,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_c_id),16);
        bufp->chgBit(oldp+1751,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_is_compressed_id));
        bufp->chgBit(oldp+1752,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_fetch_err));
        bufp->chgBit(oldp+1753,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_fetch_err_plus2));
        bufp->chgBit(oldp+1754,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_c_insn_id));
        bufp->chgIData(oldp+1755,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_is_compressed_id)
                                    ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_c_id)
                                    : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)),32);
        bufp->chgIData(oldp+1756,((((- (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x14U))),32);
        bufp->chgIData(oldp+1757,((((- (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0xfe0U 
                                                 & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                      >> 7U))))),32);
        bufp->chgIData(oldp+1758,((((- (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x1fU))) 
                                    << 0xdU) | (((0x1000U 
                                                  & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x13U)) 
                                                 | (0x800U 
                                                    & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                       << 4U))) 
                                                | ((0x7e0U 
                                                    & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 7U)))))),32);
        bufp->chgIData(oldp+1759,((0xfffff000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)),32);
        bufp->chgIData(oldp+1760,((((- (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x1fU))) 
                                    << 0x14U) | (((0xff000U 
                                                   & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id) 
                                                  | (0x800U 
                                                     & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                        >> 9U))) 
                                                 | (0x7feU 
                                                    & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                       >> 0x14U))))),32);
        bufp->chgIData(oldp+1761,((0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                            >> 0xfU))),32);
        bufp->chgSData(oldp+1762,(((0x3e0U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0xaU)) 
                                   | (0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 7U)))),10);
        bufp->chgCData(oldp+1763,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 0x1bU)),5);
        bufp->chgIData(oldp+1764,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q),32);
        bufp->chgIData(oldp+1765,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q),32);
        bufp->chgIData(oldp+1766,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U]),32);
        bufp->chgIData(oldp+1767,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U]),32);
        bufp->chgIData(oldp+1768,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U]),32);
        bufp->chgCData(oldp+1769,((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__2__KET__) 
                                    << 2U) | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__)))),3);
        bufp->chgIData(oldp+1770,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q),31);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[9U]))) {
        bufp->chgBit(oldp+1771,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_instr_rvalid));
        bufp->chgBit(oldp+1772,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        bufp->chgIData(oldp+1773,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__cycle),32);
        bufp->chgBit(oldp+1774,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_tx_watermark__DOT__wr_data));
        bufp->chgBit(oldp+1775,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_watermark__DOT__wr_data));
        bufp->chgBit(oldp+1776,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_tx_empty__DOT__wr_data));
        bufp->chgBit(oldp+1777,((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_wready)))));
        bufp->chgBit(oldp+1778,((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_wready)))));
        bufp->chgBit(oldp+1779,((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_rvalid)))));
        bufp->chgBit(oldp+1780,((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_rvalid)))));
        bufp->chgCData(oldp+1781,((7U & (IData)(((QData)((IData)(
                                                                 (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_depth) 
                                                                   << 0x18U) 
                                                                  | vlSelfRef.__VdfgRegularize_h3c5bdd75_0_9))) 
                                                 >> 0x25U)))),3);
        bufp->chgBit(oldp+1782,((1U & (IData)(((QData)((IData)(
                                                               (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_depth) 
                                                                 << 0x18U) 
                                                                | vlSelfRef.__VdfgRegularize_h3c5bdd75_0_9))) 
                                               >> 0x24U)))));
        bufp->chgCData(oldp+1783,((7U & (IData)(((QData)((IData)(
                                                                 (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_depth) 
                                                                   << 0x18U) 
                                                                  | vlSelfRef.__VdfgRegularize_h3c5bdd75_0_9))) 
                                                 >> 0x21U)))),3);
        bufp->chgBit(oldp+1784,((1U & (IData)(((QData)((IData)(
                                                               (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_depth) 
                                                                 << 0x18U) 
                                                                | vlSelfRef.__VdfgRegularize_h3c5bdd75_0_9))) 
                                               >> 0x20U)))));
        bufp->chgCData(oldp+1785,((0xffU & (IData)(
                                                   ((QData)((IData)(
                                                                    (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_depth) 
                                                                      << 0x18U) 
                                                                     | vlSelfRef.__VdfgRegularize_h3c5bdd75_0_9))) 
                                                    >> 0x18U)))),8);
        bufp->chgCData(oldp+1786,((0xffU & (IData)(
                                                   ((QData)((IData)(
                                                                    (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_depth) 
                                                                      << 0x18U) 
                                                                     | vlSelfRef.__VdfgRegularize_h3c5bdd75_0_9))) 
                                                    >> 0x10U)))),8);
        bufp->chgSData(oldp+1787,((0xffffU & (IData)((QData)((IData)(
                                                                     (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_depth) 
                                                                       << 0x18U) 
                                                                      | vlSelfRef.__VdfgRegularize_h3c5bdd75_0_9)))))),16);
        bufp->chgCData(oldp+1788,((0xffU & (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_9 
                                            >> 0x10U))),8);
        bufp->chgBit(oldp+1789,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_watermark__DOT__wr_data));
        bufp->chgBit(oldp+1790,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_tx_empty__DOT__wr_data));
        bufp->chgBit(oldp+1791,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_tx_watermark__DOT__wr_data));
        bufp->chgCData(oldp+1792,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_wdata__q),8);
        bufp->chgCData(oldp+1793,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_depth),6);
        bufp->chgCData(oldp+1794,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_depth),7);
        bufp->chgBit(oldp+1795,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_rready));
        bufp->chgBit(oldp+1796,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_rvalid));
        bufp->chgBit(oldp+1797,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_wready));
        bufp->chgCData(oldp+1798,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_data),8);
        bufp->chgBit(oldp+1799,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_rvalid));
        bufp->chgBit(oldp+1800,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_wready));
        bufp->chgCData(oldp+1801,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__allzero_cnt_d),5);
        bufp->chgBit(oldp+1802,((0U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_depth))));
        bufp->chgBit(oldp+1803,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__event_rx_break_err));
        bufp->chgBit(oldp+1804,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__full_o));
        bufp->chgCData(oldp+1805,((0x3fU & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))),6);
        bufp->chgBit(oldp+1806,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        bufp->chgBit(oldp+1807,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        bufp->chgCData(oldp+1808,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q),7);
        bufp->chgCData(oldp+1809,((0x40U & ((~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                >> 6U)) 
                                            << 6U))),7);
        bufp->chgBit(oldp+1810,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                       >> 6U))));
        bufp->chgBit(oldp+1811,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
                                 & (0x3fU == (0x3fU 
                                              & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
        bufp->chgBit(oldp+1812,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__full_o));
        bufp->chgCData(oldp+1813,((0x1fU & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))),5);
        bufp->chgBit(oldp+1814,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        bufp->chgBit(oldp+1815,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr));
        bufp->chgBit(oldp+1816,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        bufp->chgCData(oldp+1817,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q),6);
        bufp->chgCData(oldp+1818,((0x20U & ((~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                >> 5U)) 
                                            << 5U))),6);
        bufp->chgBit(oldp+1819,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                       >> 5U))));
        bufp->chgBit(oldp+1820,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
                                 & (0x1fU == (0x1fU 
                                              & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
        bufp->chgCData(oldp+1821,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d),4);
        bufp->chgBit(oldp+1822,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__tx_d));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xaU]))) {
        bufp->chgBit(oldp+1823,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_valid
                                [0U]));
        bufp->chgIData(oldp+1824,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_insn
                                  [0U]),32);
        bufp->chgCData(oldp+1825,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_addr
                                  [0U]),5);
        bufp->chgCData(oldp+1826,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_addr
                                  [0U]),5);
        bufp->chgCData(oldp+1827,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_addr
                                  [0U]),5);
        bufp->chgIData(oldp+1828,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_rdata
                                  [0U]),32);
        bufp->chgIData(oldp+1829,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_rdata
                                  [0U]),32);
        bufp->chgIData(oldp+1830,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_rdata
                                  [0U]),32);
        bufp->chgCData(oldp+1831,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_addr
                                  [0U]),5);
        bufp->chgIData(oldp+1832,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_wdata
                                  [0U]),32);
        bufp->chgIData(oldp+1833,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_rdata
                                  [0U]),32);
        bufp->chgIData(oldp+1834,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_addr
                                  [0U]),32);
        bufp->chgCData(oldp+1835,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rmask
                                  [0U]),4);
        bufp->chgCData(oldp+1836,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wmask
                                  [0U]),4);
        bufp->chgIData(oldp+1837,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rdata
                                  [0U]),32);
        bufp->chgIData(oldp+1838,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wdata
                                  [0U]),32);
        bufp->chgBit(oldp+1839,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
        bufp->chgBit(oldp+1840,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle));
        bufp->chgBit(oldp+1841,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_valid[0]));
        bufp->chgIData(oldp+1842,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_insn[0]),32);
        bufp->chgCData(oldp+1843,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_addr[0]),5);
        bufp->chgCData(oldp+1844,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_addr[0]),5);
        bufp->chgCData(oldp+1845,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_addr[0]),5);
        bufp->chgIData(oldp+1846,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_rdata[0]),32);
        bufp->chgIData(oldp+1847,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_rdata[0]),32);
        bufp->chgIData(oldp+1848,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_rdata[0]),32);
        bufp->chgCData(oldp+1849,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_addr[0]),5);
        bufp->chgIData(oldp+1850,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_wdata[0]),32);
        bufp->chgIData(oldp+1851,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_rdata[0]),32);
        bufp->chgIData(oldp+1852,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_addr[0]),32);
        bufp->chgCData(oldp+1853,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rmask[0]),4);
        bufp->chgCData(oldp+1854,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wmask[0]),4);
        bufp->chgIData(oldp+1855,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rdata[0]),32);
        bufp->chgIData(oldp+1856,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wdata[0]),32);
        bufp->chgBit(oldp+1857,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_intr_d));
        bufp->chgCData(oldp+1858,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs),4);
        bufp->chgBit(oldp+1859,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d));
        bufp->chgBit(oldp+1860,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d));
        bufp->chgCData(oldp+1861,((3U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                         >> 1U))),2);
        bufp->chgCData(oldp+1862,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q),3);
        bufp->chgCData(oldp+1863,((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry__BRA__2__KET__) 
                                    << 2U) | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry__BRA__1__KET__) 
                                               << 1U) 
                                              | (1U 
                                                 & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)))))),3);
        bufp->chgBit(oldp+1864,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__insn_is_compressed));
        bufp->chgCData(oldp+1865,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__data_accessed),5);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xbU]))) {
        bufp->chgBit(oldp+1866,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__DOT____Vcellinp__rspfifo__wvalid_i));
        bufp->chgCData(oldp+1867,((3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__reqfifo_rdata 
                                         >> 0xfU))),2);
        bufp->chgBit(oldp+1868,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__reqfifo_rdata 
                                       >> 0xeU))));
        bufp->chgCData(oldp+1869,((0xfU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__reqfifo_rdata 
                                           >> 0xaU))),4);
        bufp->chgCData(oldp+1870,((3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__reqfifo_rdata 
                                         >> 8U))),2);
        bufp->chgCData(oldp+1871,((0xffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__reqfifo_rdata)),8);
        bufp->chgCData(oldp+1872,((0xfU & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__sramreqfifo_rdata) 
                                           >> 1U))),4);
        bufp->chgBit(oldp+1873,((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__sramreqfifo_rdata))));
        bufp->chgBit(oldp+1874,((IData)(((0x8000U == 
                                          (0x1c000U 
                                           & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__reqfifo_rdata)) 
                                         & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__DOT____Vcellinp__rspfifo__wvalid_i)))));
        bufp->chgIData(oldp+1875,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__rdata_tlword),32);
        bufp->chgIData(oldp+1876,((IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__rspfifo_rdata 
                                           >> 8U))),32);
        bufp->chgCData(oldp+1877,((0x7fU & (IData)(
                                                   (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__rspfifo_rdata 
                                                    >> 1U)))),7);
        bufp->chgBit(oldp+1878,((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__rspfifo_rdata))));
        bufp->chgBit(oldp+1879,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__d_error));
        bufp->chgBit(oldp+1880,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__vld_rd_rsp));
        bufp->chgIData(oldp+1881,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__error_blanking_data),32);
        bufp->chgIData(oldp+1882,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__d_data),32);
        bufp->chgCData(oldp+1883,((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__vld_rd_rsp) 
                                    & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__reqfifo_rdata 
                                       >> 0xeU)) ? 0x2aU
                                    : ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__vld_rd_rsp)
                                        ? (0x7fU & (IData)(
                                                           (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__rspfifo_rdata 
                                                            >> 1U)))
                                        : 0x2aU))),7);
        bufp->chgIData(oldp+1884,(((((- (IData)((1U 
                                                 & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__sramreqfifo_rdata) 
                                                    >> 4U)))) 
                                     << 0x18U) | (0xff0000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__sramreqfifo_rdata) 
                                                                    >> 3U)))) 
                                                     << 0x10U))) 
                                   | ((0xff00U & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__sramreqfifo_rdata) 
                                                                 >> 2U)))) 
                                                  << 8U)) 
                                      | (0xffU & (- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__sramreqfifo_rdata) 
                                                                >> 1U)))))))),32);
        bufp->chgIData(oldp+1885,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__reqfifo_rdata),17);
        bufp->chgBit(oldp+1886,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr));
        bufp->chgQData(oldp+1887,(((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__rdata_tlword)) 
                                   << 8U)),40);
        bufp->chgQData(oldp+1889,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__rspfifo_rdata),40);
        bufp->chgBit(oldp+1891,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr));
        bufp->chgCData(oldp+1892,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__sramreqfifo_rdata),5);
        bufp->chgCData(oldp+1893,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage_rdata),8);
        bufp->chgSData(oldp+1894,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__sreg_d),11);
        bufp->chgIData(oldp+1895,(((1U == (IData)(vlSelfRef.__VdfgRegularize_ha026946b_0_31))
                                    ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__d_data
                                    : 0U)),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xcU]))) {
        bufp->chgBit(oldp+1896,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we));
        bufp->chgCData(oldp+1897,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be),4);
        bufp->chgIData(oldp+1898,(((IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                            >> 3U)) 
                                   << 2U)),32);
        bufp->chgIData(oldp+1899,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_wdata),32);
        bufp->chgCData(oldp+1900,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__ibex_lsu_host_adapter__DOT__tl_be),4);
        bufp->chgCData(oldp+1901,(((4U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_0))
                                    ? 1U : 0U)),2);
        bufp->chgSData(oldp+1902,((0xfffU & (IData)(
                                                    (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                     >> 3U)))),12);
        bufp->chgBit(oldp+1903,((1U & VL_REDXOR_32(
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                               >> 3U)))))));
        bufp->chgBit(oldp+1904,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__opcode_allowed));
        bufp->chgBit(oldp+1905,((0U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_0))));
        bufp->chgBit(oldp+1906,((1U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_0))));
        bufp->chgBit(oldp+1907,((4U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_0))));
        bufp->chgCData(oldp+1908,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__ibex_lsu_host_adapter__DOT__tl_be) 
                                   << 1U)),5);
        bufp->chgQData(oldp+1909,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_d_ex[0]),34);
        bufp->chgQData(oldp+1911,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_d_ex[1]),34);
        bufp->chgBit(oldp+1913,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__icache_inval));
        bufp->chgIData(oldp+1914,((IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                           >> 1U))),32);
        bufp->chgBit(oldp+1915,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result));
        bufp->chgBit(oldp+1916,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a));
        bufp->chgBit(oldp+1917,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b));
        bufp->chgIData(oldp+1918,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_id),32);
        bufp->chgCData(oldp+1919,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator),7);
        bufp->chgIData(oldp+1920,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a),32);
        bufp->chgIData(oldp+1921,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b),32);
        bufp->chgIData(oldp+1922,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__result_ex),32);
        bufp->chgBit(oldp+1923,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__mult_sel_ex));
        bufp->chgBit(oldp+1924,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__div_sel_ex));
        bufp->chgCData(oldp+1925,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator),2);
        bufp->chgCData(oldp+1926,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode),2);
        bufp->chgIData(oldp+1927,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex),32);
        bufp->chgIData(oldp+1928,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex),32);
        bufp->chgBit(oldp+1929,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_access));
        bufp->chgCData(oldp+1930,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op),2);
        bufp->chgSData(oldp+1931,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr),12);
        bufp->chgIData(oldp+1932,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int),32);
        bufp->chgBit(oldp+1933,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id));
        bufp->chgCData(oldp+1934,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type),2);
        bufp->chgBit(oldp+1935,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext));
        bufp->chgBit(oldp+1936,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_valid));
        bufp->chgBit(oldp+1937,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_insn_id));
        bufp->chgCData(oldp+1938,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_addr_d),5);
        bufp->chgCData(oldp+1939,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_addr_d),5);
        bufp->chgIData(oldp+1940,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_data_d),32);
        bufp->chgIData(oldp+1941,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_data_d),32);
        bufp->chgCData(oldp+1942,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_mask_int),4);
        bufp->chgIData(oldp+1943,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_wdata_d),32);
        bufp->chgIData(oldp+1944,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_addr_d),32);
        bufp->chgBit(oldp+1945,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                       >> 3U))));
        bufp->chgBit(oldp+1946,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                       >> 7U))));
        bufp->chgBit(oldp+1947,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                       >> 0xbU))));
        bufp->chgSData(oldp+1948,((0x7fffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                              >> 0x10U))),15);
        bufp->chgCData(oldp+1949,((0x1fU & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))),5);
        bufp->chgBit(oldp+1950,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                       >> 6U))));
        bufp->chgCData(oldp+1951,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                         >> 3U))),3);
        bufp->chgBit(oldp+1952,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                       >> 2U))));
        bufp->chgBit(oldp+1953,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                       >> 1U))));
        bufp->chgBit(oldp+1954,((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
        bufp->chgIData(oldp+1955,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int),32);
        bufp->chgBit(oldp+1956,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr));
        bufp->chgBit(oldp+1957,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dbg_csr));
        bufp->chgBit(oldp+1958,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr));
        bufp->chgBit(oldp+1959,((IData)(((0xc00U == 
                                          (0xc00U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) 
                                         & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr)))));
        bufp->chgCData(oldp+1960,((7U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                         >> 5U))),3);
        bufp->chgIData(oldp+1961,(((0x20000U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                << 0xeU)) 
                                   | ((0x10000U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                   << 9U)) 
                                      | ((0x8000U & 
                                          (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                           << 4U)) 
                                         | (0x7fffU 
                                            & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                               >> 0x10U)))))),18);
        bufp->chgIData(oldp+1962,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result),32);
        bufp->chgQData(oldp+1963,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b),33);
        bufp->chgQData(oldp+1965,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext),34);
        bufp->chgBit(oldp+1967,((0U == (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                >> 1U)))));
        bufp->chgBit(oldp+1968,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel));
        bufp->chgQData(oldp+1969,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[0]),34);
        bufp->chgQData(oldp+1971,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1]),34);
        bufp->chgIData(oldp+1973,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev),32);
        bufp->chgQData(oldp+1974,((0x1ffffffffULL & 
                                   (~ ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b)) 
                                       << 1U)))),33);
        bufp->chgBit(oldp+1976,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1));
        bufp->chgBit(oldp+1977,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2));
        bufp->chgBit(oldp+1978,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3));
        bufp->chgBit(oldp+1979,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate));
        bufp->chgQData(oldp+1980,((0x1ffffffffULL & 
                                   ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                     ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b
                                     : ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                                         ? (~ ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b)) 
                                               << 1U))
                                         : ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b)) 
                                            << 1U))))),33);
        bufp->chgBit(oldp+1982,((1U & (((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                         ^ vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b) 
                                        >> 0x1fU) ? 
                                       ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                         >> 0x1fU) 
                                        ^ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                        : (~ (IData)(
                                                     (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                      >> 0x20U)))))));
        bufp->chgBit(oldp+1983,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed));
        bufp->chgBit(oldp+1984,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left));
        bufp->chgBit(oldp+1985,((8U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))));
        bufp->chgCData(oldp+1986,((0x3fU & ((IData)(0x20U) 
                                            - (0x1fU 
                                               & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b)))),6);
        bufp->chgIData(oldp+1987,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand),32);
        bufp->chgQData(oldp+1988,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed),33);
        bufp->chgBit(oldp+1990,((1U & (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                               >> 0x20U)))));
        bufp->chgIData(oldp+1991,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result),32);
        bufp->chgIData(oldp+1992,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev),32);
        bufp->chgCData(oldp+1993,(((0x10U & ((~ (0U 
                                                 != 
                                                 (0xfU 
                                                  & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b 
                                                     >> 0x18U)))) 
                                             << 4U)) 
                                   | (0xfU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b 
                                              >> 0x18U)))),5);
        bufp->chgCData(oldp+1994,((0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b 
                                            >> 0x10U))),5);
        bufp->chgBit(oldp+1995,(((3U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                                 | (6U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))));
        bufp->chgBit(oldp+1996,(((4U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                                 | (7U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))));
        bufp->chgIData(oldp+1997,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                   | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b)),32);
        bufp->chgIData(oldp+1998,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                   & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b)),32);
        bufp->chgIData(oldp+1999,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                   ^ vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b)),32);
        bufp->chgIData(oldp+2000,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result),32);
        bufp->chgBit(oldp+2001,((1U & (((IData)(0x20U) 
                                        - (0x1fU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b)) 
                                       >> 5U))));
        bufp->chgQData(oldp+2002,((0x7ffffffffULL & 
                                   (VL_MULS_QQQ(35, 
                                                (0x7ffffffffULL 
                                                 & VL_EXTENDS_QI(35,17, 
                                                                 (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                   << 0x10U) 
                                                                  | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                (0x7ffffffffULL 
                                                 & VL_EXTENDS_QI(35,17, 
                                                                 (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                   << 0x10U) 
                                                                  | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))) 
                                    + VL_EXTENDS_QQ(35,34, vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)))),35);
        bufp->chgQData(oldp+2004,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum),34);
        bufp->chgBit(oldp+2006,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a));
        bufp->chgBit(oldp+2007,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b));
        bufp->chgBit(oldp+2008,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid));
        bufp->chgBit(oldp+2009,((0U != (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode))));
        bufp->chgQData(oldp+2010,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d),34);
        bufp->chgQData(oldp+2012,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d),34);
        bufp->chgQData(oldp+2014,((0x3ffffffffULL & 
                                   ((0x7ffffffffULL 
                                     & VL_MULS_QQQ(35, 
                                                   (0x7ffffffffULL 
                                                    & VL_EXTENDS_QI(35,17, 
                                                                    (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                      << 0x10U) 
                                                                     | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                   (0x7ffffffffULL 
                                                    & VL_EXTENDS_QI(35,17, 
                                                                    (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                      << 0x10U) 
                                                                     | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b)))))) 
                                    + (0x7ffffffffULL 
                                       & VL_EXTENDS_QQ(35,34, vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))),34);
        bufp->chgBit(oldp+2016,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a));
        bufp->chgBit(oldp+2017,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b));
        bufp->chgBit(oldp+2018,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal));
        bufp->chgIData(oldp+2019,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d),32);
        bufp->chgIData(oldp+2020,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d),32);
        bufp->chgIData(oldp+2021,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d),32);
        bufp->chgIData(oldp+2022,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder),32);
        bufp->chgQData(oldp+2023,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient),33);
        bufp->chgCData(oldp+2025,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d),5);
        bufp->chgBit(oldp+2026,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold));
        bufp->chgBit(oldp+2027,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d));
        bufp->chgCData(oldp+2028,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d),3);
        bufp->chgBit(oldp+2029,((1U & (IData)((1ULL 
                                               & ((VL_MULS_QQQ(35, 
                                                               (0x7ffffffffULL 
                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                               (0x7ffffffffULL 
                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))) 
                                                   + 
                                                   VL_EXTENDS_QQ(35,34, vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)) 
                                                  >> 0x22U))))));
        bufp->chgCData(oldp+2030,(((2U & ((IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                   >> 0x21U)) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)))),2);
        bufp->chgSData(oldp+2031,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a),16);
        bufp->chgSData(oldp+2032,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b),16);
        bufp->chgCData(oldp+2033,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d),2);
        bufp->chgBit(oldp+2034,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn));
        bufp->chgBit(oldp+2035,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn));
        bufp->chgBit(oldp+2036,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec));
        bufp->chgBit(oldp+2037,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec));
        bufp->chgBit(oldp+2038,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec));
        bufp->chgBit(oldp+2039,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec));
        bufp->chgBit(oldp+2040,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d));
        bufp->chgBit(oldp+2041,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec));
        bufp->chgBit(oldp+2042,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec));
        bufp->chgBit(oldp+2043,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec));
        bufp->chgBit(oldp+2044,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel));
        bufp->chgBit(oldp+2045,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we));
        bufp->chgBit(oldp+2046,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec));
        bufp->chgBit(oldp+2047,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec));
        bufp->chgCData(oldp+2048,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel),2);
        bufp->chgCData(oldp+2049,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec),2);
        bufp->chgBit(oldp+2050,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec));
        bufp->chgBit(oldp+2051,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel));
        bufp->chgCData(oldp+2052,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel),3);
        bufp->chgCData(oldp+2053,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec),3);
        bufp->chgBit(oldp+2054,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec));
        bufp->chgBit(oldp+2055,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec));
        bufp->chgBit(oldp+2056,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec));
        bufp->chgBit(oldp+2057,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec));
        bufp->chgBit(oldp+2058,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d));
        bufp->chgBit(oldp+2059,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio));
        bufp->chgBit(oldp+2060,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio));
        bufp->chgBit(oldp+2061,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio));
        bufp->chgBit(oldp+2062,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio));
        bufp->chgBit(oldp+2063,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio));
        bufp->chgBit(oldp+2064,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio));
        bufp->chgBit(oldp+2065,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn));
        bufp->chgBit(oldp+2066,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn));
        bufp->chgBit(oldp+2067,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn));
        bufp->chgBit(oldp+2068,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn));
        bufp->chgBit(oldp+2069,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn));
        bufp->chgBit(oldp+2070,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err));
        bufp->chgBit(oldp+2071,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal));
        bufp->chgCData(oldp+2072,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op),2);
        bufp->chgCData(oldp+2073,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode),7);
        bufp->chgCData(oldp+2074,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu),7);
        bufp->chgCData(oldp+2075,((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d__BRA__1__KET__) 
                                    << 1U) | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d__BRA__0__KET__))),3);
        bufp->chgBit(oldp+2076,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err));
        bufp->chgCData(oldp+2077,((3U & (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                 >> 1U)))),2);
        bufp->chgBit(oldp+2078,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access));
        bufp->chgCData(oldp+2079,((0x3cU & ((IData)(
                                                    (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                     >> 3U)) 
                                            << 2U))),6);
        bufp->chgSData(oldp+2080,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__addr_hit),13);
        bufp->chgBit(oldp+2081,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we) 
                                 & VL_REDXOR_4(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be))));
        bufp->chgCData(oldp+2082,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__dev_sel_s1n_3),2);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[0xcU] 
                      | vlSelfRef.__Vm_traceActivity
                      [0xdU])))) {
        bufp->chgBit(oldp+2083,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_u_o__BRA__1__KET____DOT__dev_select) 
                                 & VL_REDXOR_32(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_wdata))));
        __Vtemp_14[0U] = ((0xfffffffcU & (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[0U] 
                                          << 1U)) | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__dev_sel_s1n_3));
        __Vtemp_14[1U] = (((2U & (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[1U] 
                                  << 1U)) | (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[0U] 
                                             >> 0x1fU)) 
                          | (0xfffffffcU & (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[1U] 
                                            << 1U)));
        __Vtemp_14[2U] = (((2U & (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[2U] 
                                  << 1U)) | (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[1U] 
                                             >> 0x1fU)) 
                          | (0xfffffffcU & (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[2U] 
                                            << 1U)));
        __Vtemp_14[3U] = (((2U & (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[3U] 
                                  << 1U)) | (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[2U] 
                                             >> 0x1fU)) 
                          | (0x1ffcU & (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[3U] 
                                        << 1U)));
        bufp->chgWData(oldp+2084,(__Vtemp_14),109);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xdU]))) {
        bufp->chgCData(oldp+2088,((7U & (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[3U] 
                                         >> 9U))),3);
        bufp->chgCData(oldp+2089,((7U & (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[3U] 
                                         >> 6U))),3);
        bufp->chgCData(oldp+2090,((3U & (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[3U] 
                                         >> 4U))),2);
        bufp->chgCData(oldp+2091,((0xffU & ((vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[3U] 
                                             << 4U) 
                                            | (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[2U] 
                                               >> 0x1cU)))),8);
        bufp->chgIData(oldp+2092,(((vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[2U] 
                                    << 4U) | (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[1U] 
                                              >> 0x1cU))),32);
        bufp->chgCData(oldp+2093,((0xfU & (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[1U] 
                                           >> 0x18U))),4);
        bufp->chgIData(oldp+2094,(((vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[1U] 
                                    << 8U) | (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[0U] 
                                              >> 0x18U))),32);
        bufp->chgCData(oldp+2095,((0x1fU & (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[0U] 
                                            >> 0x13U))),5);
        bufp->chgCData(oldp+2096,((0xfU & (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[0U] 
                                           >> 0xfU))),4);
        bufp->chgCData(oldp+2097,((0x7fU & (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[0U] 
                                            >> 8U))),7);
        bufp->chgCData(oldp+2098,((0x7fU & (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[0U] 
                                            >> 1U))),7);
        bufp->chgBit(oldp+2099,((1U & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[0U])));
        bufp->chgCData(oldp+2100,((3U & (vlSelfRef.__VdfgRegularize_ha026946b_0_36[3U] 
                                         >> 4U))),2);
        bufp->chgCData(oldp+2101,((0xffU & ((vlSelfRef.__VdfgRegularize_ha026946b_0_36[3U] 
                                             << 4U) 
                                            | (vlSelfRef.__VdfgRegularize_ha026946b_0_36[2U] 
                                               >> 0x1cU)))),8);
        bufp->chgBit(oldp+2102,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw));
        bufp->chgIData(oldp+2103,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata),32);
        bufp->chgIData(oldp+2104,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed),32);
        bufp->chgBit(oldp+2105,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn));
        bufp->chgBit(oldp+2106,((3U != (3U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))));
        bufp->chgBit(oldp+2107,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid));
        bufp->chgIData(oldp+2108,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__31__03a0__KET__),32);
        bufp->chgIData(oldp+2109,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__63__03a32__KET__),32);
        bufp->chgCData(oldp+2110,((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__2__KET__) 
                                    << 2U) | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__1__KET__) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__0__KET__)))),3);
        bufp->chgIData(oldp+2111,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata),32);
        bufp->chgBit(oldp+2112,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid));
        bufp->chgBit(oldp+2113,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed));
        bufp->chgBit(oldp+2114,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed));
        bufp->chgBit(oldp+2115,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two));
        bufp->chgIData(oldp+2116,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata),32);
        bufp->chgIData(oldp+2117,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next),32);
        bufp->chgBit(oldp+2118,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                                       >> 2U))));
        bufp->chgBit(oldp+2119,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                                       >> 3U))));
        bufp->chgBit(oldp+2120,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                                       >> 4U))));
        bufp->chgBit(oldp+2121,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                                       >> 5U))));
        bufp->chgBit(oldp+2122,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                                       >> 6U))));
        bufp->chgBit(oldp+2123,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                                       >> 7U))));
        bufp->chgBit(oldp+2124,((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata)));
        bufp->chgBit(oldp+2125,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                                       >> 1U))));
        bufp->chgBit(oldp+2126,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                                       >> 8U))));
        bufp->chgCData(oldp+2127,((3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                                         >> 8U))),2);
        bufp->chgSData(oldp+2128,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                                   >> 0x10U)),16);
        bufp->chgCData(oldp+2129,((0xffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata)),8);
        bufp->chgCData(oldp+2130,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                                         >> 2U))),3);
        bufp->chgCData(oldp+2131,((7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                                         >> 5U))),3);
        bufp->chgIData(oldp+2132,((0xffffffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata)),24);
        bufp->chgBit(oldp+2133,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+2134,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__hold_all_requests));
        bufp->chgBit(oldp+2135,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_u_o__BRA__0__KET____DOT__dev_select));
        bufp->chgBit(oldp+2136,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_u_o__BRA__1__KET____DOT__dev_select));
    }
    bufp->chgBit(oldp+2137,(vlSelfRef.clk_i));
    bufp->chgBit(oldp+2138,(vlSelfRef.rst_ni));
    bufp->chgBit(oldp+2139,(vlSelfRef.top_verilator__DOT__uart_tx));
    bufp->chgBit(oldp+2140,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__data_req_out));
    bufp->chgIData(oldp+2141,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_instr_rdata),32);
    bufp->chgBit(oldp+2142,((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__data_req_out) 
                                   ^ VL_REDXOR_32((
                                                   ((vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[0U] 
                                                     ^ 
                                                     vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[1U]) 
                                                    ^ 
                                                    vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[2U]) 
                                                   ^ 
                                                   vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[3U]))))));
    bufp->chgIData(oldp+2143,(((((4U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_0))
                                  ? 1U : 0U) << 0xfU) 
                               | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__error_det) 
                                   << 0xeU) | ((0x3c00U 
                                                & (vlSelfRef.__VdfgRegularize_ha026946b_0_33 
                                                   >> 4U)) 
                                               | (0x3ffU 
                                                  & ((vlSelfRef.__VdfgRegularize_ha026946b_0_36[3U] 
                                                      << 4U) 
                                                     | (vlSelfRef.__VdfgRegularize_ha026946b_0_36[2U] 
                                                        >> 0x1cU))))))),17);
    bufp->chgBit(oldp+2144,(((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)) 
                             & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr))));
    bufp->chgQData(oldp+2145,((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__sramreqfifo_rready))
                                ? ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__rdata_tlword)) 
                                   << 8U) : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage)),40);
    bufp->chgBit(oldp+2147,(((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)) 
                             & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr))));
    bufp->chgBit(oldp+2148,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__gen_no_rs3_flop__DOT__unused_clk));
    bufp->chgIData(oldp+2149,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
                              [(0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                         >> 0xfU))]),32);
    bufp->chgIData(oldp+2150,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
                              [(0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                         >> 0x14U))]),32);
    bufp->chgBit(oldp+2151,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch));
    bufp->chgBit(oldp+2152,((IData)(((0U == (0xf80U 
                                             & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                                     & (0U != (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))))));
    bufp->chgBit(oldp+2153,((1U & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn)) 
                                   & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec)) 
                                      & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
                                         & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id)) 
                                            & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_fetch_err)))))))));
    bufp->chgBit(oldp+2154,(((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we)) 
                             & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle)) 
                                   & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec))))));
    bufp->chgBit(oldp+2155,((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                              & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle)) 
                                 & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec))) 
                             & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we))));
    bufp->chgBit(oldp+2156,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                             & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec))));
    bufp->chgBit(oldp+2157,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                             & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec))));
    bufp->chgBit(oldp+2158,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req));
    bufp->chgBit(oldp+2159,((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) 
                              | (0U != (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
                             & (0U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns)))));
    bufp->chgBit(oldp+2160,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_load));
    bufp->chgBit(oldp+2161,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_store));
    bufp->chgCData(oldp+2162,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle)
                                ? 0U : (0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0xfU)))),5);
    bufp->chgIData(oldp+2163,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle)
                                ? 0U : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
                               [(0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0xfU))])),32);
    bufp->chgIData(oldp+2164,(((0U != (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))
                                ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb
                                : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_rdata_ext)),32);
    bufp->chgBit(oldp+2165,(((~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn) 
                                 & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))) 
                             & (IData)(vlSelfRef.__VdfgRegularize_ha026946b_0_0))));
    bufp->chgBit(oldp+2166,(((0U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op)) 
                             & (IData)(vlSelfRef.__VdfgRegularize_ha026946b_0_30))));
    bufp->chgBit(oldp+2167,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr) 
                             & (IData)(vlSelfRef.__VdfgRegularize_ha026946b_0_30))));
    bufp->chgIData(oldp+2168,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_mtvec_init)
                                ? 0x100001U : (1U | 
                                               (0xffffff00U 
                                                & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)))),32);
    bufp->chgIData(oldp+2169,((1U | ((((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_div_wait) 
                                         << 0xcU) | 
                                        ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_mul_wait) 
                                         << 0xbU)) 
                                       | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_instr_ret_compressed_wb) 
                                           << 0xaU) 
                                          | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_tbranch) 
                                             << 9U))) 
                                      | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_branch) 
                                          << 8U) | 
                                         (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_jump) 
                                           << 7U) | 
                                          ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_store) 
                                           << 6U)))) 
                                     | ((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_load) 
                                          << 5U) | 
                                         (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_iside_wait) 
                                           << 4U) | 
                                          ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_dside_wait) 
                                           << 3U))) 
                                        | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_instr_ret_wb) 
                                           << 2U))))),32);
    bufp->chgQData(oldp+2170,((0xffffffffffULL & ((8U 
                                                   & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                                      | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we))
                                                   ? 
                                                  ((8U 
                                                    & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                                    ? 
                                                   (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                                      >> 0x20U))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))))
                                                   : 
                                                  (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                   + (QData)((IData)(
                                                                     ((~ 
                                                                       ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                                        >> 3U)) 
                                                                      & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_dside_wait)))))))),40);
    bufp->chgQData(oldp+2172,((0xffffffffffULL & ((0x10U 
                                                   & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                                      | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we))
                                                   ? 
                                                  ((0x10U 
                                                    & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                                    ? 
                                                   (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                                      >> 0x20U))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))))
                                                   : 
                                                  (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                   + (QData)((IData)(
                                                                     ((~ 
                                                                       ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                                        >> 4U)) 
                                                                      & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_iside_wait)))))))),40);
    bufp->chgBit(oldp+2174,(((~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                 >> 5U)) & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_load))));
    bufp->chgQData(oldp+2175,((0xffffffffffULL & ((0x20U 
                                                   & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                                      | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we))
                                                   ? 
                                                  ((0x20U 
                                                    & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                                    ? 
                                                   (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                                      >> 0x20U))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))))
                                                   : 
                                                  (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                   + (QData)((IData)(
                                                                     ((~ 
                                                                       ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                                        >> 5U)) 
                                                                      & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_load)))))))),40);
    bufp->chgBit(oldp+2177,(((~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                 >> 6U)) & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_store))));
    bufp->chgQData(oldp+2178,((0xffffffffffULL & ((0x40U 
                                                   & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                                      | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we))
                                                   ? 
                                                  ((0x40U 
                                                    & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                                    ? 
                                                   (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                                      >> 0x20U))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))))
                                                   : 
                                                  (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                   + (QData)((IData)(
                                                                     ((~ 
                                                                       ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                                        >> 6U)) 
                                                                      & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_store)))))))),40);
    bufp->chgQData(oldp+2180,((0xffffffffffULL & ((0x80U 
                                                   & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                                      | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we))
                                                   ? 
                                                  ((0x80U 
                                                    & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                                    ? 
                                                   (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                                      >> 0x20U))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))))
                                                   : 
                                                  (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                   + (QData)((IData)(
                                                                     ((~ 
                                                                       ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                                        >> 7U)) 
                                                                      & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_jump)))))))),40);
    bufp->chgQData(oldp+2182,((0xffffffffffULL & ((0x100U 
                                                   & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                                      | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we))
                                                   ? 
                                                  ((0x100U 
                                                    & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                                    ? 
                                                   (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                                      >> 0x20U))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))))
                                                   : 
                                                  (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                   + (QData)((IData)(
                                                                     ((~ 
                                                                       ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                                        >> 8U)) 
                                                                      & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_branch)))))))),40);
    bufp->chgQData(oldp+2184,((0xffffffffffULL & ((0x200U 
                                                   & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                                      | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we))
                                                   ? 
                                                  ((0x200U 
                                                    & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                                    ? 
                                                   (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                                      >> 0x20U))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))))
                                                   : 
                                                  (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                   + (QData)((IData)(
                                                                     ((~ 
                                                                       ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                                        >> 9U)) 
                                                                      & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_tbranch)))))))),40);
    bufp->chgQData(oldp+2186,((0xffffffffffULL & ((0x400U 
                                                   & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                                      | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we))
                                                   ? 
                                                  ((0x400U 
                                                    & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                                    ? 
                                                   (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                                      >> 0x20U))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))))
                                                   : 
                                                  (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                   + (QData)((IData)(
                                                                     ((~ 
                                                                       ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                                        >> 0xaU)) 
                                                                      & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_instr_ret_compressed_wb)))))))),40);
    bufp->chgQData(oldp+2188,((0xffffffffffULL & ((0x800U 
                                                   & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                                      | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we))
                                                   ? 
                                                  ((0x800U 
                                                    & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                                    ? 
                                                   (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                                      >> 0x20U))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))))
                                                   : 
                                                  (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                   + (QData)((IData)(
                                                                     ((~ 
                                                                       ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                                        >> 0xbU)) 
                                                                      & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_mul_wait)))))))),40);
    bufp->chgQData(oldp+2190,((0xffffffffffULL & ((0x1000U 
                                                   & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                                      | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we))
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                                    ? 
                                                   (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                                      >> 0x20U))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))))
                                                   : 
                                                  (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                   + (QData)((IData)(
                                                                     ((~ 
                                                                       ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                                        >> 0xcU)) 
                                                                      & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_div_wait)))))))),40);
    bufp->chgQData(oldp+2192,(((4U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                      | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we))
                                ? ((4U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                    ? (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                        << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q)))
                                    : (((QData)((IData)(
                                                        (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q 
                                                         >> 0x20U))) 
                                        << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))))
                                : (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q 
                                   + (QData)((IData)(
                                                     ((~ 
                                                       ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                        >> 2U)) 
                                                      & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_instr_ret_wb))))))),64);
    bufp->chgCData(oldp+2194,((0x1fU & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle)
                                         ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b
                                         : (- vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b)))),6);
    bufp->chgBit(oldp+2195,(((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_valid_clear)) 
                             & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
                                | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q) 
                                   | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw))))));
    bufp->chgBit(oldp+2196,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                             & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec) 
                                & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_valid)) 
                                   | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle))))));
    bufp->chgIData(oldp+2197,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                                ? 0U : (0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0xfU)))),32);
    bufp->chgIData(oldp+2198,(((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                ? ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                    ? 4U : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                             ? ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_is_compressed_id)
                                                 ? 2U
                                                 : 4U)
                                             : (((- (IData)(
                                                            (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x1fU))) 
                                                 << 0x14U) 
                                                | (((0xff000U 
                                                     & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id) 
                                                    | (0x800U 
                                                       & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                          >> 9U))) 
                                                   | (0x7feU 
                                                      & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x14U))))))
                                : ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                    ? ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                        ? (0xfffff000U 
                                           & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                        : (((- (IData)(
                                                       (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                        >> 0x1fU))) 
                                            << 0xdU) 
                                           | (((0x1000U 
                                                & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x13U)) 
                                               | (0x800U 
                                                  & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     << 4U))) 
                                              | ((0x7e0U 
                                                  & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                       >> 7U))))))
                                    : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                        ? (((- (IData)(
                                                       (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | ((0xfe0U 
                                               & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 7U))))
                                        : (((- (IData)(
                                                       (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x14U)))))),32);
    bufp->chgBit(oldp+2199,((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op_en) 
                              & ((1U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op)) 
                                 | (2U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op))))
                              ? ((0x300U == (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0x14U)) 
                                 | (((0x304U == (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0x14U)) 
                                     | (0x747U == (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x14U))) 
                                    | (0x1dU == (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0x19U))))
                              : ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op_en) 
                                 & ((0U != (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op)) 
                                    & ((0x7b0U == (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x14U)) 
                                       | (((0x7b1U 
                                            == (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x14U)) 
                                           | (0x7b2U 
                                              == (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x14U))) 
                                          | (0x7b3U 
                                             == (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0x14U)))))))));
    bufp->chgBit(oldp+2200,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_he98638a0_0_4) 
                             & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))));
    bufp->chgBit(oldp+2201,(((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)) 
                             & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_he98638a0_0_4))));
    bufp->chgCData(oldp+2202,((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) 
                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))
                                ? 1U : ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d)
                                         ? 4U : 0U))),3);
    bufp->chgBit(oldp+2203,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req));
    bufp->chgBit(oldp+2204,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) 
                             | ((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op_en) 
                                  & ((1U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op)) 
                                     | (2U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op))))
                                  ? ((0x300U == (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0x14U)) 
                                     | (((0x304U == 
                                          (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                           >> 0x14U)) 
                                         | (0x747U 
                                            == (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x14U))) 
                                        | (0x1dU == 
                                           (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                            >> 0x19U))))
                                  : ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op_en) 
                                     & ((0U != (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op)) 
                                        & ((0x7b0U 
                                            == (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x14U)) 
                                           | (((0x7b1U 
                                                == 
                                                (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0x14U)) 
                                               | (0x7b2U 
                                                  == 
                                                  (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x14U))) 
                                              | (0x7b3U 
                                                 == 
                                                 (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x14U))))))) 
                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q)))));
    bufp->chgBit(oldp+2205,(((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op_en) 
                               & ((1U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op)) 
                                  | (2U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op))))
                               ? ((0x300U == (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x14U)) 
                                  | (((0x304U == (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x14U)) 
                                      | (0x747U == 
                                         (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x14U))) 
                                     | (0x1dU == (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x19U))))
                               : ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op_en) 
                                  & ((0U != (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op)) 
                                     & ((0x7b0U == 
                                         (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x14U)) 
                                        | (((0x7b1U 
                                             == (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0x14U)) 
                                            | (0x7b2U 
                                               == (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x14U))) 
                                           | (0x7b3U 
                                              == (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x14U))))))) 
                             & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q))));
    bufp->chgBit(oldp+2206,(((3U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                             & ((4U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns)) 
                                & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                   | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                      >> 2U))))));
    bufp->chgBit(oldp+2207,(((7U != (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                             & (7U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns)))));
    bufp->chgBit(oldp+2208,(((8U != (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                             & (8U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns)))));
    bufp->chgBit(oldp+2209,(((9U != (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                             & (9U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns)))));
    bufp->chgBit(oldp+2210,(((6U != (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                             & (6U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns)))));
    bufp->chgBit(oldp+2211,(((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q)) 
                             & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d))));
    bufp->chgIData(oldp+2212,(((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                ? ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                    ? 0x100080U : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                                    ? 0x100080U
                                                    : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q))
                                : ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                    ? ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                        ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q
                                        : ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_pc_mux_id))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_pc_mux_id))
                                                ? 0x1a110808U
                                                : 0x1a110800U)
                                            : ((1U 
                                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_pc_mux_id))
                                                ? (
                                                   (0xffffff00U 
                                                    & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q) 
                                                   | (((0x40U 
                                                        & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_cause))
                                                        ? 0x1fU
                                                        : 
                                                       (0x1fU 
                                                        & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_cause))) 
                                                      << 2U))
                                                : (0xffffff00U 
                                                   & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q))))
                                    : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                        ? (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                   >> 1U))
                                        : 0x100080U)))),32);
    bufp->chgBit(oldp+2213,((1U & ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                    ? ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                        ? 0x100080U
                                        : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                            ? 0x100080U
                                            : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q))
                                    : ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                        ? ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                            ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q
                                            : ((2U 
                                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_pc_mux_id))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_pc_mux_id))
                                                    ? 0x1a110808U
                                                    : 0x1a110800U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_pc_mux_id))
                                                    ? 
                                                   ((0xffffff00U 
                                                     & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q) 
                                                    | (((0x40U 
                                                         & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_cause))
                                                         ? 0x1fU
                                                         : 
                                                        (0x1fU 
                                                         & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_cause))) 
                                                       << 2U))
                                                    : 
                                                   (0xffffff00U 
                                                    & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q))))
                                        : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                            ? (IData)(
                                                      (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                       >> 1U))
                                            : 0x100080U))))));
    bufp->chgBit(oldp+2214,(((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)
                              ? ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                  ? (((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)) 
                                      & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__)) 
                                     | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__))
                                  : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err))
                              : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err))));
    bufp->chgBit(oldp+2215,((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                             & (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                 >> 1U) & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__)) 
                                           & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__))))));
    bufp->chgBit(oldp+2216,(((~ ((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)
                                  ? ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                      ? (((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)) 
                                          & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__)) 
                                         | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__))
                                      : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err))
                                  : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err))) 
                             & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw))));
    bufp->chgCData(oldp+2217,((3U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_instr_rvalid)
                                      ? VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n), 1U)
                                      : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n)))),2);
    bufp->chgCData(oldp+2218,((3U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_instr_rvalid)
                                      ? VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n), 1U)
                                      : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n)))),2);
    bufp->chgIData(oldp+2219,((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set)
                                 ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr
                                 : (0xfffffffcU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q)) 
                               + ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgRegularize_hed04d6de_0_6) 
                                  << 2U))),32);
    bufp->chgBit(oldp+2220,((1U & (~ (3U == (3U & (
                                                   ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                                    >> 1U) 
                                                   | ((2U 
                                                       & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                                            >> 1U))))))))));
    bufp->chgCData(oldp+2221,((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__2__KET__) 
                                << 2U) | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__1__KET__) 
                                           << 1U) | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__0__KET__)))),3);
    bufp->chgIData(oldp+2222,(((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                ? ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                                    << 0x10U) | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                                 >> 0x10U))
                                : ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_instr_rdata 
                                    << 0x10U) | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                                 >> 0x10U)))),32);
    bufp->chgBit(oldp+2223,(((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                              ? (((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)) 
                                  & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__)) 
                                 | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__))
                              : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err))));
    bufp->chgBit(oldp+2224,((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                              >> 1U) & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__)) 
                                        & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__)))));
    bufp->chgBit(oldp+2225,((1U & (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                    >> 1U) | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                              & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid))))));
    bufp->chgIData(oldp+2226,((0x7fffffffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                              + ((2U 
                                                  & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                     << 1U)) 
                                                 | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))))),31);
    bufp->chgIData(oldp+2227,((0x7fffffffU & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set)
                                               ? (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr 
                                                  >> 1U)
                                               : (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                  + 
                                                  ((2U 
                                                    & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                       << 1U)) 
                                                   | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)))))),31);
    bufp->chgBit(oldp+2228,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) 
                             & (0U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))));
    bufp->chgBit(oldp+2229,(((2U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                             & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__data_req_out) 
                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req)))));
    bufp->chgIData(oldp+2230,((~ vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
                               [(0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0xfU))])),32);
    bufp->chgIData(oldp+2231,((~ vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
                               [(0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x14U))])),32);
    bufp->chgIData(oldp+2232,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid),32);
    bufp->chgIData(oldp+2233,(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid),32);
    bufp->chgCData(oldp+2234,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                ? 0U : (0xffU & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(9,9,32, 
                                                                    (0x3fU 
                                                                     & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))
                                                   ? 0U
                                                   : 
                                                  (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0x1ffU 
                                                      & VL_SHIFTL_III(9,9,32, 
                                                                      (0x3fU 
                                                                       & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(9,9,32, 
                                                                     (0x3fU 
                                                                      & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))) 
                                                 | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                    (0xfU 
                                                     & (VL_SHIFTL_III(9,9,32, 
                                                                      (0x3fU 
                                                                       & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(9,9,32, 
                                                                     (0x3fU 
                                                                      & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))))),8);
    bufp->chgCData(oldp+2235,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_wdata__DOT__wr_en)
                                ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_wdata__DOT__wr_data)
                                : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_wdata__q))),8);
    bufp->chgCData(oldp+2236,(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                ? 0U : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage_rdata))),8);
    bufp->chgBit(oldp+2237,((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                                   ^ (IData)(((0x18ULL 
                                               == (0x78ULL 
                                                   & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)) 
                                              & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_18)))))));
    bufp->chgCData(oldp+2238,((0xffU & (((0U == (0x1fU 
                                                 & VL_SHIFTL_III(9,9,32, 
                                                                 (0x3fU 
                                                                  & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))
                                          ? 0U : (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & VL_SHIFTL_III(9,9,32, 
                                                                     (0x3fU 
                                                                      & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(9,9,32, 
                                                                    (0x3fU 
                                                                     & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))) 
                                        | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                           (0xfU & 
                                            (VL_SHIFTL_III(9,9,32, 
                                                           (0x3fU 
                                                            & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_SHIFTL_III(9,9,32, 
                                                               (0x3fU 
                                                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))))),8);
    bufp->chgBit(oldp+2239,((1U & (((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                    & VL_REDXOR_8(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage_rdata)) 
                                   ^ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q)))));
    __Vtemp_15[0U] = (IData)((((QData)((IData)(((1U 
                                                 == (IData)(vlSelfRef.__VdfgRegularize_ha026946b_0_31))
                                                 ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__d_data
                                                 : 0U))) 
                               << 0x10U) | (QData)((IData)(
                                                           (0xfffeU 
                                                            & (IData)(vlSelfRef.__VdfgRegularize_ha026946b_0_37))))));
    __Vtemp_15[1U] = ((0xffff0000U & vlSelfRef.__VdfgRegularize_ha026946b_0_35[1U]) 
                      | (IData)(((((QData)((IData)(
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__VdfgRegularize_ha026946b_0_31))
                                                     ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__d_data
                                                     : 0U))) 
                                   << 0x10U) | (QData)((IData)(
                                                               (0xfffeU 
                                                                & (IData)(vlSelfRef.__VdfgRegularize_ha026946b_0_37))))) 
                                 >> 0x20U)));
    __Vtemp_15[2U] = (1U & vlSelfRef.__VdfgRegularize_ha026946b_0_35[2U]);
    bufp->chgWData(oldp+2240,(__Vtemp_15),65);
}

void Vtop_verilator___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root__trace_cleanup\n"); );
    // Init
    Vtop_verilator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_verilator___024root*>(voidSelf);
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xeU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xfU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x10U] = 0U;
}
