// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_verilator.h for the primary calling header

#include "Vtop_verilator__pch.h"
#include "Vtop_verilator___024root.h"

void Vtop_verilator___024root___ico_sequent__TOP__0(Vtop_verilator___024root* vlSelf);

void Vtop_verilator___024root___eval_ico(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___eval_ico\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop_verilator___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop_verilator___024root___ico_sequent__TOP__0(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___ico_sequent__TOP__0\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.clk_i)))) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = (1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__core_busy_q));
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__gen_no_rs3_flop__DOT__unused_clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch));
}

void Vtop_verilator___024root___eval_triggers__ico(Vtop_verilator___024root* vlSelf);

bool Vtop_verilator___024root___eval_phase__ico(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___eval_phase__ico\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop_verilator___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop_verilator___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop_verilator___024root___act_sequent__TOP__0(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___act_sequent__TOP__1(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___act_comb__TOP__0(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___act_comb__TOP__1(Vtop_verilator___024root* vlSelf);

void Vtop_verilator___024root___eval_act(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___eval_act\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((6ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtop_verilator___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtop_verilator___024root___act_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((6ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtop_verilator___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0xeULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtop_verilator___024root___act_comb__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtop_verilator___024root___act_sequent__TOP__0(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___act_sequent__TOP__0\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op_en 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_access) 
           & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
              & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr) 
           & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id)) 
              & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op_en)));
    vlSelfRef.__VdfgRegularize_ha026946b_0_30 = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_access) 
                                                 & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op_en) 
                                                    | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_insn_id)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_en = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch0_en = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch1_en = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_en = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we = 0U;
    if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                      >> 7U)))) {
                            if ((0x40U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)))) {
                                                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)))) {
                                                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                if ((0x20U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)))) {
                                                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((0x400U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                if ((0x200U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                        if ((0x80U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((0x20U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                    if ((0x10U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)))) {
                                                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch0_en = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch1_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x800U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
            if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                        if ((0x80U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((0x10U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)))));
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)))));
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)))));
                                    } else if ((2U 
                                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)))));
                                    } else if ((1U 
                                                & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)))) {
                                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)))));
                                    }
                                }
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((0x10U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)))));
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)))));
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)))));
                                    } else if ((2U 
                                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)))));
                                    } else if ((1U 
                                                & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)))) {
                                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_d 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we)
            ? (0x1ffdU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)
            : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d 
        = ((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we))
            ? ((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                ? (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q)))
                : (((QData)((IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q 
                                     >> 0x20U))) << 0x20U) 
                   | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))))
            : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))
                ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q
                : (1ULL + vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q)));
}

VL_INLINE_OPT void Vtop_verilator___024root___act_comb__TOP__0(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___act_comb__TOP__0\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0xffffffffffULL & ((0x40U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                        | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we))
                               ? ((0x40U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                   ? (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                   : (((QData)((IData)(
                                                       (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                        >> 0x20U))) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))))
                               : (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                  + (QData)((IData)(
                                                    ((~ 
                                                      ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                       >> 6U)) 
                                                     & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_store)))))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0xffffffffffULL & ((0x20U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                        | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we))
                               ? ((0x20U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                   ? (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                   : (((QData)((IData)(
                                                       (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                        >> 0x20U))) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))))
                               : (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                  + (QData)((IData)(
                                                    ((~ 
                                                      ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                       >> 5U)) 
                                                     & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_load)))))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0xffffffffffULL & ((0x100U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                         | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we))
                               ? ((0x100U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                   ? (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                   : (((QData)((IData)(
                                                       (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                        >> 0x20U))) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))))
                               : (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                  + (QData)((IData)(
                                                    ((~ 
                                                      ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                       >> 8U)) 
                                                     & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_branch)))))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0xffffffffffULL & ((0x1000U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                          | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we))
                               ? ((0x1000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                   ? (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                   : (((QData)((IData)(
                                                       (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                        >> 0x20U))) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))))
                               : (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                  + (QData)((IData)(
                                                    ((~ 
                                                      ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                       >> 0xcU)) 
                                                     & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_div_wait)))))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0xffffffffffULL & ((0x800U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                         | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we))
                               ? ((0x800U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                   ? (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                   : (((QData)((IData)(
                                                       (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                        >> 0x20U))) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))))
                               : (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                  + (QData)((IData)(
                                                    ((~ 
                                                      ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                       >> 0xbU)) 
                                                     & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_mul_wait)))))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
            | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) 
               | (IData)(vlSelfRef.__VdfgRegularize_ha026946b_0_0))) 
           | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) 
              | ((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op_en) 
                   & ((1U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op)) 
                      | (2U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op))))
                   ? ((0x300U == (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0x14U)) | (((0x304U 
                                                  == 
                                                  (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x14U)) 
                                                 | (0x747U 
                                                    == 
                                                    (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x14U))) 
                                                | (0x1dU 
                                                   == 
                                                   (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x19U))))
                   : ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op_en) 
                      & ((0U != (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op)) 
                         & ((0x7b0U == (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                        >> 0x14U)) 
                            | (((0x7b1U == (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                            >> 0x14U)) 
                                | (0x7b2U == (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x14U))) 
                               | (0x7b3U == (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0x14U))))))) 
                 & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q))));
}

void Vtop_verilator___024root___nba_sequent__TOP__0(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___nba_sequent__TOP__1(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___nba_sequent__TOP__2(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___nba_sequent__TOP__3(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___nba_sequent__TOP__4(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___nba_sequent__TOP__5(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___nba_sequent__TOP__6(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___nba_comb__TOP__0(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___nba_sequent__TOP__7(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___nba_sequent__TOP__8(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___nba_comb__TOP__1(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___nba_sequent__TOP__9(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___nba_comb__TOP__2(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___nba_comb__TOP__3(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___nba_comb__TOP__5(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___nba_comb__TOP__6(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___nba_comb__TOP__7(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___nba_comb__TOP__8(Vtop_verilator___024root* vlSelf);

void Vtop_verilator___024root___eval_nba(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___eval_nba\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x30ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_verilator___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((0x60ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_verilator___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((0x120ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_verilator___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_verilator___024root___nba_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_verilator___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_verilator___024root___nba_sequent__TOP__5(vlSelf);
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
    }
    if ((0x30ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_verilator___024root___nba_sequent__TOP__6(vlSelf);
        vlSelfRef.__Vm_traceActivity[9U] = 1U;
    }
    if ((0x130ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_verilator___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x60ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_verilator___024root___nba_sequent__TOP__7(vlSelf);
        vlSelfRef.__Vm_traceActivity[0xaU] = 1U;
        Vtop_verilator___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0x30ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_verilator___024root___nba_comb__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[0xbU] = 1U;
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_verilator___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((0x60ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_verilator___024root___nba_comb__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[0xcU] = 1U;
    }
    if ((0x70ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_verilator___024root___nba_comb__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[0xdU] = 1U;
    }
    if ((0x66ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_verilator___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[0xeU] = 1U;
    }
    if ((0x62ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_verilator___024root___nba_comb__TOP__5(vlSelf);
    }
    if ((0x66ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_verilator___024root___nba_comb__TOP__6(vlSelf);
    }
    if ((0x72ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_verilator___024root___nba_comb__TOP__7(vlSelf);
        vlSelfRef.__Vm_traceActivity[0xfU] = 1U;
    }
    if ((0x76ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_verilator___024root___nba_comb__TOP__8(vlSelf);
    }
    if ((0x7eULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_verilator___024root___act_comb__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x10U] = 1U;
    }
}

VL_INLINE_OPT void Vtop_verilator___024root___nba_sequent__TOP__1(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___nba_sequent__TOP__1\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*17:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v0;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v0 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v0;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v0 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v1;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v1 = 0;
    CData/*0:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v0;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v0 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v0;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v0 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v1;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v1 = 0;
    CData/*0:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v0;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v0 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v0;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v0 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v1;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v1 = 0;
    CData/*0:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v0;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v0 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v0;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v0 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v1;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v1 = 0;
    CData/*0:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_irq_valid__v0;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_irq_valid__v0 = 0;
    CData/*0:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_irq_valid__v1;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_irq_valid__v1 = 0;
    IData/*31:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v0;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v0 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v0;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v0 = 0;
    IData/*31:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v1;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v1 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v1;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v1 = 0;
    IData/*31:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v2;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v2 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v2;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v2 = 0;
    IData/*31:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v3;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v3 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v3;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v3 = 0;
    IData/*31:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v4;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v4 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v4;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v4 = 0;
    IData/*31:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v5;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v5 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v5;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v5 = 0;
    IData/*31:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v6;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v6 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v6;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v6 = 0;
    IData/*31:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v7;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v7 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v7;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v7 = 0;
    IData/*31:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v8;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v8 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v8;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v8 = 0;
    IData/*31:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v9;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v9 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v9;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v9 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v10;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v10 = 0;
    IData/*31:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata__v0;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata__v0 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata__v0;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata__v0 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata__v1;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata__v1 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_ic_scr_key_valid__v0;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_ic_scr_key_valid__v0 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_ic_scr_key_valid__v1;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_ic_scr_key_valid__v1 = 0;
    CData/*0:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v2;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v2 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v2;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v2 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v3;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v3 = 0;
    CData/*0:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr__v0;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr__v0 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr__v0;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr__v0 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr__v1;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr__v1 = 0;
    QData/*63:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order__v0;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order__v0 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order__v0;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order__v0 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order__v1;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order__v1 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_halt__v0;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_halt__v0 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_halt__v1;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_halt__v1 = 0;
    CData/*0:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap__v0;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap__v0 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap__v0;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap__v0 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap__v1;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap__v1 = 0;
    CData/*1:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode__v0;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode__v0 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode__v0;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode__v0 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode__v1;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode__v1 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_ixl__v0;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_ixl__v0 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_ixl__v1;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_ixl__v1 = 0;
    CData/*0:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode__v0;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode__v0 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode__v0;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode__v0 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode__v1;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode__v1 = 0;
    QData/*63:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle__v0;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle__v0 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle__v0;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle__v0 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle__v1;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle__v1 = 0;
    IData/*31:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v0;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v0 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v0;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v0 = 0;
    IData/*31:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v1;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v1 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v1;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v1 = 0;
    IData/*31:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v2;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v2 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v2;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v2 = 0;
    IData/*31:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v3;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v3 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v3;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v3 = 0;
    IData/*31:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v4;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v4 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v4;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v4 = 0;
    IData/*31:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v5;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v5 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v5;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v5 = 0;
    IData/*31:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v6;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v6 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v6;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v6 = 0;
    IData/*31:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v7;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v7 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v7;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v7 = 0;
    IData/*31:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v8;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v8 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v8;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v8 = 0;
    IData/*31:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v9;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v9 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v9;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v9 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v10;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v10 = 0;
    IData/*17:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v2;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v2 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v2;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v2 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v3;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v3 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip__v0;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip__v0 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip__v1;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip__v1 = 0;
    CData/*0:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v2;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v2 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v2;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v2 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v3;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v3 = 0;
    CData/*0:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v2;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v2 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v2;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v2 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v3;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v3 = 0;
    QData/*33:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v0;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v0 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v0;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v0 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v1;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v1 = 0;
    QData/*33:0*/ __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v2;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v2 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v2;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v2 = 0;
    CData/*0:0*/ __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v3;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v3 = 0;
    // Body
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_ic_scr_key_valid__v0 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_ic_scr_key_valid__v1 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_halt__v0 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_halt__v1 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_ixl__v0 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_ixl__v1 = 0U;
    vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rmask__v0 = 0U;
    vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rmask__v1 = 0U;
    vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rdata__v0 = 0U;
    vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rdata__v1 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr__v0 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr__v1 = 0U;
    vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_addr__v0 = 0U;
    vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_addr__v1 = 0U;
    vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wdata__v0 = 0U;
    vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wdata__v1 = 0U;
    vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_rdata__v0 = 0U;
    vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_rdata__v1 = 0U;
    vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_rdata__v0 = 0U;
    vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_rdata__v1 = 0U;
    vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_wdata__v0 = 0U;
    vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_wdata__v1 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order__v0 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order__v1 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip__v0 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip__v1 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v2 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v3 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v2 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v3 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v2 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v3 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v2 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v3 = 0U;
    vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_addr__v0 = 0U;
    vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_addr__v1 = 0U;
    vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_addr__v0 = 0U;
    vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_addr__v1 = 0U;
    vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_addr__v0 = 0U;
    vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_addr__v1 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle__v0 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle__v1 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode__v0 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode__v1 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode__v0 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode__v1 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v0 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v1 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v2 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v3 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v4 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v5 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v6 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v7 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v8 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v9 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v10 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v0 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v1 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v2 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v3 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v4 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v5 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v6 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v7 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v8 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v9 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v10 = 0U;
    vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wmask__v0 = 0U;
    vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wmask__v1 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap__v0 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap__v1 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata__v0 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata__v1 = 0U;
    vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_rdata__v0 = 0U;
    vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_rdata__v1 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v0 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v1 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v2 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v3 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v0 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v1 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v0 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v1 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v0 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v1 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v0 = 0U;
    __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v1 = 0U;
    vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_insn__v0 = 0U;
    vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_insn__v1 = 0U;
    vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_addr__v0 = 0U;
    vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_addr__v1 = 0U;
    vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_rdata__v0 = 0U;
    vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_rdata__v1 = 0U;
    if (vlSelfRef.rst_ni) {
        if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_id_done) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_rvfi_stages__BRA__0__KET____DOT__unnamedblk1__DOT__k = 0xaU;
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_ic_scr_key_valid__v0 = 1U;
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_halt__v0 = 1U;
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_ixl__v0 = 1U;
            vlSelfRef.__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rmask__v0 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_mask_int;
            vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rmask__v0 = 1U;
            vlSelfRef.__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rdata__v0 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_rdata_d;
            vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rdata__v0 = 1U;
            __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr__v0 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_intr_d;
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr__v0 = 1U;
            vlSelfRef.__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_addr__v0 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_addr_d;
            vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_addr__v0 = 1U;
            vlSelfRef.__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wdata__v0 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_wdata_d;
            vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wdata__v0 = 1U;
            vlSelfRef.__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_rdata__v0 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_data_d;
            vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_rdata__v0 = 1U;
            vlSelfRef.__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_rdata__v0 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_data_d;
            vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_rdata__v0 = 1U;
            vlSelfRef.__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_wdata__v0 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_wdata_d;
            vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_wdata__v0 = 1U;
            __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order__v0 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order_d;
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order__v0 = 1U;
            vlSelfRef.__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_addr__v0 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_addr_d;
            vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_addr__v0 = 1U;
            vlSelfRef.__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_addr__v0 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_addr_d;
            vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_addr__v0 = 1U;
            vlSelfRef.__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_addr__v0 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_addr_d;
            vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_addr__v0 = 1U;
            __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle__v0 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q;
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle__v0 = 1U;
            __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode__v0 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q;
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode__v0 = 1U;
            __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode__v0 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode__v0 = 1U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_hde830202__0 
                = (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                          [3U]);
            __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v0 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_hde830202__0;
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v0 = 1U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_hde830202__0 
                = (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                          [4U]);
            __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v1 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_hde830202__0;
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v1 = 1U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_hde830202__0 
                = (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                          [5U]);
            __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v2 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_hde830202__0;
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v2 = 1U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_hde830202__0 
                = (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                          [6U]);
            __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v3 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_hde830202__0;
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v3 = 1U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_hde830202__0 
                = (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                          [7U]);
            __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v4 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_hde830202__0;
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v4 = 1U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_hde830202__0 
                = (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                          [8U]);
            __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v5 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_hde830202__0;
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v5 = 1U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_hde830202__0 
                = (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                          [9U]);
            __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v6 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_hde830202__0;
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v6 = 1U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_hde830202__0 
                = (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                          [0xaU]);
            __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v7 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_hde830202__0;
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v7 = 1U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_hde830202__0 
                = (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                          [0xbU]);
            __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v8 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_hde830202__0;
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v8 = 1U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_hde830202__0 
                = (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                          [0xcU]);
            __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v9 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_hde830202__0;
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v9 = 1U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h68cfa8b6__0 
                = (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                           [3U] >> 0x20U));
            __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v0 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h68cfa8b6__0;
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v0 = 1U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h68cfa8b6__0 
                = (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                           [4U] >> 0x20U));
            __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v1 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h68cfa8b6__0;
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v1 = 1U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h68cfa8b6__0 
                = (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                           [5U] >> 0x20U));
            __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v2 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h68cfa8b6__0;
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v2 = 1U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h68cfa8b6__0 
                = (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                           [6U] >> 0x20U));
            __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v3 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h68cfa8b6__0;
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v3 = 1U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h68cfa8b6__0 
                = (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                           [7U] >> 0x20U));
            __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v4 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h68cfa8b6__0;
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v4 = 1U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h68cfa8b6__0 
                = (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                           [8U] >> 0x20U));
            __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v5 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h68cfa8b6__0;
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v5 = 1U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h68cfa8b6__0 
                = (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                           [9U] >> 0x20U));
            __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v6 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h68cfa8b6__0;
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v6 = 1U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h68cfa8b6__0 
                = (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                           [0xaU] >> 0x20U));
            __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v7 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h68cfa8b6__0;
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v7 = 1U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h68cfa8b6__0 
                = (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                           [0xbU] >> 0x20U));
            __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v8 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h68cfa8b6__0;
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v8 = 1U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h68cfa8b6__0 
                = (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                           [0xcU] >> 0x20U));
            __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v9 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h68cfa8b6__0;
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v9 = 1U;
            vlSelfRef.__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wmask__v0 
                = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we)
                    ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_mask_int)
                    : 0U);
            vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wmask__v0 = 1U;
            __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap__v0 
                = ((~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn) 
                       & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))) 
                   & (IData)(vlSelfRef.__VdfgRegularize_ha026946b_0_0));
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap__v0 = 1U;
            __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata__v0 
                = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set)
                    ? (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                               >> 1U)) : (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                          << 1U));
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata__v0 = 1U;
            vlSelfRef.__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_rdata__v0 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_id;
            vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_rdata__v0 = 1U;
            vlSelfRef.__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_insn__v0 
                = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_is_compressed_id)
                    ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_c_id)
                    : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id);
            vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_insn__v0 = 1U;
            if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                vlSelfRef.__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_addr__v0 = 0U;
                vlSelfRef.__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_rdata__v0 = 0U;
            } else {
                vlSelfRef.__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_addr__v0 
                    = (0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                >> 0xfU));
                vlSelfRef.__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_rdata__v0 
                    = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
                    [(0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                               >> 0xfU))];
            }
            vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_addr__v0 = 1U;
            vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_rdata__v0 = 1U;
        }
        if (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_id_done) 
             | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_irq_valid
             [0U])) {
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip__v0 = 1U;
            __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v2 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi
                [0U];
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v2 = 1U;
            __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v2 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int
                [0U];
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v2 = 1U;
            __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v2 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req
                [0U];
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v2 = 1U;
            __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v2 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip
                [0U];
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v2 = 1U;
        }
        if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_we_ex))) {
            __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v0 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_d_ex
                [0U];
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_we_ex))) {
            __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v2 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_d_ex
                [1U];
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v2 = 1U;
        }
        if ((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_d) 
              & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d)) 
             | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_irq_valid))) {
            __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v0 
                = ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                             | (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_valid))))) 
                   && (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_nmi));
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v0 = 1U;
            __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v0 
                = ((~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                       | (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_valid)))) 
                   & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_nmi_int));
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v0 = 1U;
            __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v0 
                = ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                             | (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_valid))))) 
                   && (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_debug_req));
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v0 = 1U;
            __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v0 
                = ((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                          | (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_valid))))
                    ? 0U : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_mip);
            __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v0 = 1U;
        }
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_addr_q 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_addr_d;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_rdata_q 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_rdata_d;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_wdata_q 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_wdata_d;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_addr_q 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_addr_d;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_addr_q 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_addr_d;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_addr_q 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_addr_d;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_data_q 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_data_d;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_data_q 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_data_d;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_wdata_q 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_wdata_d;
        if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d;
        }
        if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                = (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                   >> 8U);
        }
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_d;
        }
        if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_en) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                = ((0x20000U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                << 0xeU)) | ((0x10000U 
                                              & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                 << 9U)) 
                                             | ((0x8000U 
                                                 & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                    << 4U)) 
                                                | (0x7fffU 
                                                   & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                      >> 0x10U)))));
        }
        if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_en) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
        if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_d;
        }
        if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch0_en) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
        if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch1_en) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_d;
        if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtvec_en) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q 
                = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_mtvec_init)
                    ? 0x100001U : (1U | (0xffffff00U 
                                         & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
        }
        if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_instr_rvalid) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q 
                = (3U & VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n), 1U));
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q 
                = (3U & VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n), 1U));
        } else {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q 
                = (3U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n));
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q 
                = (3U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n));
        }
        if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_en) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q 
                = (7U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                         >> 2U));
        }
        if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d;
        }
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_q 
            = (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) 
                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))
                ? 1U : ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d)
                         ? 4U : 0U));
        if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_we) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d;
        }
        if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d;
        }
        if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q 
                = (3U & (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                 >> 1U)));
        }
        if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q 
                = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req)
                    ? ((IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                >> 3U)) << 2U) : (IData)(
                                                         (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                          >> 1U)));
        }
        if ((2U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__1__KET____DOT__rf_reg_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((4U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__2__KET____DOT__rf_reg_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((8U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__3__KET____DOT__rf_reg_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x10U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__4__KET____DOT__rf_reg_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x20U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__5__KET____DOT__rf_reg_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x40U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__6__KET____DOT__rf_reg_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x80U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__7__KET____DOT__rf_reg_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x100U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__8__KET____DOT__rf_reg_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x200U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__9__KET____DOT__rf_reg_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x400U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__10__KET____DOT__rf_reg_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x800U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__11__KET____DOT__rf_reg_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x1000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__12__KET____DOT__rf_reg_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x2000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__13__KET____DOT__rf_reg_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x4000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__14__KET____DOT__rf_reg_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x8000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__15__KET____DOT__rf_reg_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x10000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__16__KET____DOT__rf_reg_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x20000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__17__KET____DOT__rf_reg_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x40000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__18__KET____DOT__rf_reg_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x80000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__19__KET____DOT__rf_reg_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x100000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__20__KET____DOT__rf_reg_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x200000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__21__KET____DOT__rf_reg_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x400000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__22__KET____DOT__rf_reg_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x800000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__23__KET____DOT__rf_reg_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x1000000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__24__KET____DOT__rf_reg_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x2000000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__25__KET____DOT__rf_reg_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x4000000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__26__KET____DOT__rf_reg_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x8000000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__27__KET____DOT__rf_reg_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x10000000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__28__KET____DOT__rf_reg_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x20000000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__29__KET____DOT__rf_reg_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x40000000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__30__KET____DOT__rf_reg_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
             >> 0x1fU)) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__31__KET____DOT__rf_reg_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d;
        }
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d;
        if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_d) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_valid = 0U;
        }
        if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d;
        }
        if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_d;
        }
        if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d;
        }
    } else {
        __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_ic_scr_key_valid__v1 = 1U;
        __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_halt__v1 = 1U;
        __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_ixl__v1 = 1U;
        vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rmask__v1 = 1U;
        vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rdata__v1 = 1U;
        __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr__v1 = 1U;
        vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_addr__v1 = 1U;
        vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wdata__v1 = 1U;
        vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_rdata__v1 = 1U;
        vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_rdata__v1 = 1U;
        vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_wdata__v1 = 1U;
        __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order__v1 = 1U;
        __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip__v1 = 1U;
        __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v3 = 1U;
        __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v3 = 1U;
        __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v3 = 1U;
        __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v3 = 1U;
        vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_addr__v1 = 1U;
        vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_addr__v1 = 1U;
        vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_addr__v1 = 1U;
        __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle__v1 = 1U;
        __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode__v1 = 1U;
        __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode__v1 = 1U;
        __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v10 = 1U;
        __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v10 = 1U;
        vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wmask__v1 = 1U;
        __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap__v1 = 1U;
        __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata__v1 = 1U;
        vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_rdata__v1 = 1U;
        __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v1 = 1U;
        __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v3 = 1U;
        __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v1 = 1U;
        __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v1 = 1U;
        __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v1 = 1U;
        __VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v1 = 1U;
        vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_insn__v1 = 1U;
        vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_addr__v1 = 1U;
        vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_rdata__v1 = 1U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_addr_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_rdata_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_wdata_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_addr_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_addr_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_addr_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_data_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_data_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_wdata_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q = 0ULL;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0ULL;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0ULL;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0ULL;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0ULL;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0ULL;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0ULL;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0ULL;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0ULL;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0ULL;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0ULL;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q = 1U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q = 4U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q = 0x40000003U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__1__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__2__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__3__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__4__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__5__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__6__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__7__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__8__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__9__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__10__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__11__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__12__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__13__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__14__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__15__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__16__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__17__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__18__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__19__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__20__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__21__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__22__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__23__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__24__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__25__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__26__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__27__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__28__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__29__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__30__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__31__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q = 0ULL;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q = 3U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_valid = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q = 0x10U;
    }
    vlSelfRef.__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_valid__v0 
        = ((IData)(vlSelfRef.rst_ni) && vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_valid_d
           [0U]);
    vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_valid__v0 = 1U;
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_irq_valid__v1 
        = ((IData)(vlSelfRef.rst_ni) && vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_irq_valid
           [0U]);
    __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_irq_valid__v0 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_irq_valid));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_intr_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_intr_d));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_bus_err_1_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_bus_err_1_d));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_set_trap_pc_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_set_trap_pc_d));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_d));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_d));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set_raw_d));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_d));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_d));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d));
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_ic_scr_key_valid__v0) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_ic_scr_key_valid[0U] = 0U;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_ic_scr_key_valid__v1) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_ic_scr_key_valid[0U] = 0U;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_halt__v0) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_halt[0U] = 0U;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_halt__v1) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_halt[0U] = 0U;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_ixl__v0) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_ixl[0U] = 1U;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_ixl__v1) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_ixl[0U] = 1U;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr__v0) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr[0U] 
            = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr__v0;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr__v1) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr[0U] = 0U;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order__v0) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order[0U] 
            = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order__v0;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order__v1) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order[0U] = 0ULL;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip__v0) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip[0U] = 0U;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip__v1) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip[0U] = 0U;
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_irq_valid[0U] 
        = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_irq_valid__v0;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_irq_valid[1U] 
        = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_irq_valid__v1;
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle__v0) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle[0U] 
            = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle__v0;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle__v1) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle[0U] = 0ULL;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode__v0) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode[0U] 
            = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode__v0;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode__v1) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode[0U] = 3U;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode__v0) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode[0U] 
            = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode__v0;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode__v1) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode[0U] = 0U;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v0) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][0U] 
            = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v0;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v1) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][1U] 
            = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v1;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v2) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][2U] 
            = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v2;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v3) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][3U] 
            = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v3;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v4) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][4U] 
            = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v4;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v5) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][5U] 
            = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v5;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v6) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][6U] 
            = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v6;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v7) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][7U] 
            = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v7;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v8) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][8U] 
            = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v8;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v9) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][9U] 
            = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v9;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v10) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][0U] = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][1U] = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][2U] = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][3U] = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][4U] = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][5U] = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][6U] = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][7U] = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][8U] = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][9U] = 0U;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v0) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][0U] 
            = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v0;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v1) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][1U] 
            = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v1;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v2) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][2U] 
            = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v2;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v3) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][3U] 
            = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v3;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v4) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][4U] 
            = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v4;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v5) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][5U] 
            = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v5;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v6) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][6U] 
            = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v6;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v7) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][7U] 
            = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v7;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v8) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][8U] 
            = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v8;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v9) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][9U] 
            = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v9;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v10) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][0U] = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][1U] = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][2U] = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][3U] = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][4U] = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][5U] = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][6U] = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][7U] = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][8U] = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][9U] = 0U;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap__v0) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap[0U] 
            = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap__v0;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap__v1) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap[0U] = 0U;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata__v0) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata[0U] 
            = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata__v0;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata__v1) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata[0U] = 0U;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v0) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0U] 
            = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v0;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v1) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0U] = 0ULL;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v2) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
            = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v2;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v3) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] = 0ULL;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v0) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi[0U] 
            = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v0;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v1) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi[0U] = 0U;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v2) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi[1U] 
            = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v2;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v3) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi[1U] = 0U;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v0) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int[0U] 
            = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v0;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v1) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int[0U] = 0U;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v2) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int[1U] 
            = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v2;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v3) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int[1U] = 0U;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v0) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req[0U] 
            = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v0;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v1) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req[0U] = 0U;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v2) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req[1U] 
            = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v2;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v3) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req[1U] = 0U;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v0) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip[0U] 
            = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v0;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v1) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip[0U] = 0U;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v2) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip[1U] 
            = __VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v2;
    }
    if (__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v3) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip[1U] = 0U;
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order_d 
        = (1ULL + vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order
           [0U]);
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_post_mip = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_post_mip 
        = ((0xfffffff7U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_post_mip) 
           | (8U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip
                    [0U] >> 0xeU)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_post_mip 
        = ((0xffffff7fU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_post_mip) 
           | (0x80U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip
                       [0U] >> 9U)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_post_mip 
        = ((0xfffff7ffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_post_mip) 
           | (0x800U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip
                        [0U] >> 4U)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_post_mip 
        = ((0x8000ffffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_post_mip) 
           | (0x7fff0000U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip
                             [0U] << 0x10U)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcounters[0U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
        [0U][0U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcounters[1U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
        [0U][1U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcounters[2U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
        [0U][2U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcounters[3U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
        [0U][3U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcounters[4U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
        [0U][4U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcounters[5U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
        [0U][5U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcounters[6U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
        [0U][6U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcounters[7U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
        [0U][7U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcounters[8U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
        [0U][8U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcounters[9U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
        [0U][9U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcountersh[0U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
        [0U][0U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcountersh[1U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
        [0U][1U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcountersh[2U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
        [0U][2U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcountersh[3U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
        [0U][3U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcountersh[4U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
        [0U][4U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcountersh[5U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
        [0U][5U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcountersh[6U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
        [0U][6U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcountersh[7U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
        [0U][7U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcountersh[8U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
        [0U][8U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcountersh[9U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
        [0U][9U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_q[0U] 
        = (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q
                  [0U]);
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_q[1U] 
        = (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q
                  [1U]);
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[0U] 
        = (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q
                  [0U]);
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[1U] 
        = (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q
                  [1U]);
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex[0U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q
        [0U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex[1U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q
        [1U];
    if ((1U & (~ (IData)(vlSelfRef.rst_ni)))) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_nmi = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_nmi_int = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_debug_req = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_mip = 0U;
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_pre_mip = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_pre_mip 
        = ((0xfffffff7U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_pre_mip) 
           | (8U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip
                    [1U] >> 0xeU)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_pre_mip 
        = ((0xffffff7fU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_pre_mip) 
           | (0x80U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip
                       [1U] >> 9U)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_pre_mip 
        = ((0xfffff7ffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_pre_mip) 
           | (0x800U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip
                        [1U] >> 4U)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_pre_mip 
        = ((0x8000ffffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_pre_mip) 
           | (0x7fff0000U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip
                             [1U] << 0x10U)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_irq_valid = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[2U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[3U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[4U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[5U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[6U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[7U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[8U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[9U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0xaU] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0xbU] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0xcU] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[1U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__1__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[2U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__2__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[3U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__3__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[4U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__4__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[5U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__5__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[6U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__6__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[7U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__7__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[8U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__8__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[9U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__9__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xaU] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__10__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xbU] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__11__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xcU] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__12__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xdU] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__13__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xeU] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__14__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xfU] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__15__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x10U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__16__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x11U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__17__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x12U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__18__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x13U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__19__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x14U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__20__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x15U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__21__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x16U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__22__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x17U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__23__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x18U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__24__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x19U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__25__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1aU] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__26__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1bU] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__27__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1cU] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__28__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1dU] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__29__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1eU] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__30__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1fU] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__31__KET____DOT__rf_reg_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req = 0U;
    if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req = 1U;
            }
        }
    } else if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req 
            = ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
               || (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q));
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regs[0U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcounters
        [0U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regs[1U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcounters
        [1U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regs[2U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcounters
        [2U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regs[3U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcounters
        [3U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regs[4U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcounters
        [4U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regs[5U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcounters
        [5U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regs[6U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcounters
        [6U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regs[7U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcounters
        [7U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regs[8U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcounters
        [8U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regs[9U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcounters
        [9U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regsh[0U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcountersh
        [0U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regsh[1U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcountersh
        [1U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regsh[2U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcountersh
        [2U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regsh[3U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcountersh
        [3U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regsh[4U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcountersh
        [4U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regsh[5U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcountersh
        [5U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regsh[6U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcountersh
        [6U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regsh[7U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcountersh
        [7U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regsh[8U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcountersh
        [8U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regsh[9U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcountersh
        [9U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a = 1ULL;
    if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold = 0U;
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = 1U;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a 
                = ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? 1ULL : (1ULL | ((QData)((IData)(
                                                      vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                                      [0U])) 
                                      << 1U)));
        }
    } else {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a 
            = ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                               [0U])) 
                               << 1U)) : 1ULL) : 1ULL);
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug 
        = (1U & ((3U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))
                  ? (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                     >> 0xfU) : ((0U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                                 & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                    >> 0xcU))));
}

void Vtop_verilator___024root____Vdpiimwrap_top_verilator__DOT__u_uartdpi__DOT__uartdpi_write_TOP(QData/*63:0*/ ctx, IData/*31:0*/ data, IData/*31:0*/ &uartdpi_write__Vfuncrtn);
void Vtop_verilator___024root____Vdpiimwrap_top_verilator__DOT__u_uartdpi__DOT__uartdpi_can_read_TOP(QData/*63:0*/ ctx, IData/*31:0*/ &uartdpi_can_read__Vfuncrtn);
void Vtop_verilator___024root____Vdpiimwrap_top_verilator__DOT__u_uartdpi__DOT__uartdpi_read_TOP(QData/*63:0*/ ctx, CData/*7:0*/ &uartdpi_read__Vfuncrtn);

VL_INLINE_OPT void Vtop_verilator___024root___nba_sequent__TOP__2(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___nba_sequent__TOP__2\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_top_verilator__DOT__u_uartdpi__DOT__uartdpi_can_read__270__Vfuncout;
    __Vfunc_top_verilator__DOT__u_uartdpi__DOT__uartdpi_can_read__270__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_top_verilator__DOT__u_uartdpi__DOT__uartdpi_read__271__Vfuncout;
    __Vfunc_top_verilator__DOT__u_uartdpi__DOT__uartdpi_read__271__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top_verilator__DOT__u_uartdpi__DOT__uartdpi_write__272__Vfuncout;
    __Vfunc_top_verilator__DOT__u_uartdpi__DOT__uartdpi_write__272__Vfuncout = 0;
    IData/*31:0*/ __Vdly__top_verilator__DOT__u_uartdpi__DOT__txcyccount;
    __Vdly__top_verilator__DOT__u_uartdpi__DOT__txcyccount = 0;
    IData/*31:0*/ __Vdly__top_verilator__DOT__u_uartdpi__DOT__rxcyccount;
    __Vdly__top_verilator__DOT__u_uartdpi__DOT__rxcyccount = 0;
    IData/*31:0*/ __Vdly__top_verilator__DOT__u_uartdpi__DOT__rxcount;
    __Vdly__top_verilator__DOT__u_uartdpi__DOT__rxcount = 0;
    CData/*7:0*/ __Vdly__top_verilator__DOT__u_uartdpi__DOT__rxsymbol;
    __Vdly__top_verilator__DOT__u_uartdpi__DOT__rxsymbol = 0;
    // Body
    __Vdly__top_verilator__DOT__u_uartdpi__DOT__rxcyccount 
        = vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__rxcyccount;
    __Vdly__top_verilator__DOT__u_uartdpi__DOT__rxcount 
        = vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__rxcount;
    __Vdly__top_verilator__DOT__u_uartdpi__DOT__rxsymbol 
        = vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__rxsymbol;
    __Vdly__top_verilator__DOT__u_uartdpi__DOT__txcyccount 
        = vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__txcyccount;
    __Vdly__top_verilator__DOT__u_uartdpi__DOT__rxcyccount 
        = ((IData)(1U) + vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__rxcyccount);
    if (vlSelfRef.rst_ni) {
        if (vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__rxactive) {
            if ((0U == vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__rxcount)) {
                if ((0x1aU == vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__rxcyccount)) {
                    if (vlSelfRef.top_verilator__DOT__uart_tx) {
                        vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__rxactive = 0U;
                    } else {
                        __Vdly__top_verilator__DOT__u_uartdpi__DOT__rxcount 
                            = ((IData)(1U) + vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__rxcount);
                        __Vdly__top_verilator__DOT__u_uartdpi__DOT__rxcyccount = 0U;
                    }
                }
            } else if (VL_GTES_III(32, 8U, vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__rxcount)) {
                if ((0x35U == vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__rxcyccount)) {
                    __Vdly__top_verilator__DOT__u_uartdpi__DOT__rxsymbol 
                        = (((~ ((IData)(1U) << (7U 
                                                & (vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__rxcount 
                                                   - (IData)(1U))))) 
                            & (IData)(__Vdly__top_verilator__DOT__u_uartdpi__DOT__rxsymbol)) 
                           | (0xffU & ((IData)(vlSelfRef.top_verilator__DOT__uart_tx) 
                                       << (7U & (vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__rxcount 
                                                 - (IData)(1U))))));
                    __Vdly__top_verilator__DOT__u_uartdpi__DOT__rxcyccount = 0U;
                    __Vdly__top_verilator__DOT__u_uartdpi__DOT__rxcount 
                        = ((IData)(1U) + vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__rxcount);
                }
            } else if ((0x35U == vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__rxcyccount)) {
                if (vlSelfRef.top_verilator__DOT__uart_tx) {
                    if (VL_UNLIKELY(((0U != ([&]() {
                                            Vtop_verilator___024root____Vdpiimwrap_top_verilator__DOT__u_uartdpi__DOT__uartdpi_write_TOP(vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__ctx, (IData)(vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__rxsymbol), __Vfunc_top_verilator__DOT__u_uartdpi__DOT__uartdpi_write__272__Vfuncout);
                                        }(), __Vfunc_top_verilator__DOT__u_uartdpi__DOT__uartdpi_write__272__Vfuncout))))) {
                        VL_WRITEF_NX("Exiting the Sonata simulator because the magic UART string was seen.\n",0);
                        VL_FINISH_MT("../src/lowrisc_dv_dpi_sv_uartdpi_0.1/uartdpi.sv", 138, "");
                    }
                }
                vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__rxactive = 0U;
            }
        } else if (((~ (IData)(vlSelfRef.top_verilator__DOT__uart_tx)) 
                    & (IData)(vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__seen_reset))) {
            __Vdly__top_verilator__DOT__u_uartdpi__DOT__rxcount = 0U;
            vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__rxactive = 1U;
            __Vdly__top_verilator__DOT__u_uartdpi__DOT__rxcyccount = 0U;
        }
    } else {
        vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__rxactive = 0U;
        vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__seen_reset = 1U;
    }
    if (vlSelfRef.rst_ni) {
        if (vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__txactive) {
            __Vdly__top_verilator__DOT__u_uartdpi__DOT__txcyccount 
                = ((IData)(1U) + vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__txcyccount);
            vlSelfRef.top_verilator__DOT__uart_rx = 
                ((9U >= (0xfU & vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__txcount)) 
                 && (1U & ((IData)(vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__txsymbol) 
                           >> (0xfU & vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__txcount))));
            if ((0x35U == vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__txcyccount)) {
                __Vdly__top_verilator__DOT__u_uartdpi__DOT__txcyccount = 0U;
                if ((9U == vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__txcount)) {
                    vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__txactive = 0U;
                } else {
                    vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__txcount 
                        = ((IData)(1U) + vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__txcount);
                }
            }
        } else {
            vlSelfRef.top_verilator__DOT__uart_rx = 1U;
            if ((0U != ([&]() {
                            Vtop_verilator___024root____Vdpiimwrap_top_verilator__DOT__u_uartdpi__DOT__uartdpi_can_read_TOP(vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__ctx, __Vfunc_top_verilator__DOT__u_uartdpi__DOT__uartdpi_can_read__270__Vfuncout);
                        }(), __Vfunc_top_verilator__DOT__u_uartdpi__DOT__uartdpi_can_read__270__Vfuncout))) {
                vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__unnamedblk1__DOT__c 
                    = VL_EXTENDS_II(32,8, ([&]() {
                            Vtop_verilator___024root____Vdpiimwrap_top_verilator__DOT__u_uartdpi__DOT__uartdpi_read_TOP(vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__ctx, __Vfunc_top_verilator__DOT__u_uartdpi__DOT__uartdpi_read__271__Vfuncout);
                        }(), (IData)(__Vfunc_top_verilator__DOT__u_uartdpi__DOT__uartdpi_read__271__Vfuncout)));
                vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__txcount = 0U;
                vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__txsymbol 
                    = (0x200U | (0x1feU & (vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__unnamedblk1__DOT__c 
                                           << 1U)));
                vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__txactive = 1U;
                __Vdly__top_verilator__DOT__u_uartdpi__DOT__txcyccount = 0U;
            }
        }
    } else {
        vlSelfRef.top_verilator__DOT__uart_rx = 1U;
        vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__txactive = 0U;
    }
    vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__rxcyccount 
        = __Vdly__top_verilator__DOT__u_uartdpi__DOT__rxcyccount;
    vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__rxcount 
        = __Vdly__top_verilator__DOT__u_uartdpi__DOT__rxcount;
    vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__rxsymbol 
        = __Vdly__top_verilator__DOT__u_uartdpi__DOT__rxsymbol;
    vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__txcyccount 
        = __Vdly__top_verilator__DOT__u_uartdpi__DOT__txcyccount;
}

VL_INLINE_OPT void Vtop_verilator___024root___nba_sequent__TOP__4(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___nba_sequent__TOP__4\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((((5U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                        & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q)) 
                       & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_fetch_err))) 
                      & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d))))) {
        VL_WRITEF_NX("%t: Illegal instruction (hart 0) at PC 0x%x: 0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,32,
                     vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_id,
                     32,vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id);
    }
}

VL_INLINE_OPT void Vtop_verilator___024root___nba_sequent__TOP__5(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___nba_sequent__TOP__5\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req)) 
         & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgRegularize_hed04d6de_0_6))) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d;
    }
    if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__2__KET__) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__2__KET__ = 0U;
    }
    if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__0__KET__) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U] 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__31__03a0__KET__;
    }
    if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__1__KET__) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__63__03a32__KET__;
    }
    if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__2__KET__) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U] 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_instr_rdata;
    }
    if (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set) 
         | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgRegularize_hed04d6de_0_6))) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_d;
    }
    if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_fetch_err_plus2 
            = (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
               & (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                   >> 1U) & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__)) 
                             & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__))));
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_c_insn_id 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_fetch_err 
            = ((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)
                ? ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                    ? (((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)) 
                        & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__)) 
                       | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__))
                    : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err))
                : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err));
    }
    if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__0__KET__) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__ 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d__BRA__0__KET__;
    }
    if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__1__KET__) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__ 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d__BRA__1__KET__;
    }
    if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_id 
            = (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
               << 1U);
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_c_id 
            = (0xffffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata);
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_is_compressed_id 
            = (3U != (3U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata));
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed;
    }
    if (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set) 
         | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h7ff92a7d_0_9))) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d;
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_he9d5f5c2__0 
        = (0U != (((2U == (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                 >> 0xcU))) << 2U) 
                  | (((1U == (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                    >> 0xcU))) << 1U) 
                     | (0U == (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0xcU))))));
}

VL_INLINE_OPT void Vtop_verilator___024root___nba_sequent__TOP__6(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___nba_sequent__TOP__6\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__cycle 
        = vlSelfRef.__Vdly__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__cycle;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_data 
        = (0xffU & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                     ? ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                        >> 1U) : ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                                  >> 2U)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelfRef.__Vdly__top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelfRef.__Vdly__top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__sramreqfifo_rready) 
            & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__under_rst))) 
           & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__full_o)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_instr_rvalid 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__allzero_cnt_d 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__break_st_q) 
            | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
               & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__event_rx_frame_err)) 
                  | (0U != (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_data)))))
            ? 0U : (0x1fU & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__allzero_cnt_q) 
                             + ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__event_rx_frame_err) 
                                & (0U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_data))))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt 
        = (0x40U & ((~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                        >> 6U)) << 6U));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__full_o 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (0x40U ^ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt 
        = (0x20U & ((~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                        >> 5U)) << 5U));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__full_o 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (0x20U ^ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    if (vlSelfRef.rst_ni) {
        if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_wdata__DOT__wr_en) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_wdata__q 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_wdata__DOT__wr_data;
        }
    } else {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_wdata__q = 0U;
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__event_rx_break_err 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__break_st_q)) 
           & ((0U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q))
               ? (2U <= (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__allzero_cnt_d))
               : ((1U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q))
                   ? (4U <= (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__allzero_cnt_d))
                   : ((2U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q))
                       ? (8U <= (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__allzero_cnt_d))
                       : (0x10U <= (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__allzero_cnt_d))))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_rvalid 
        = (1U & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                 & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_depth 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__full_o)
            ? 0x40U : (0x7fU & (((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                        >> 6U)) == 
                                 (1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                        >> 6U))) ? 
                                ((0x3fU & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                 - (0x3fU & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                                 : (((IData)(0x40U) 
                                     - (0x3fU & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                    + (0x3fU & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_wready 
        = (1U & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_wready 
        = (1U & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_depth 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__full_o)
            ? 0x20U : (0x3fU & (((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                        >> 5U)) == 
                                 (1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                        >> 5U))) ? 
                                ((0x1fU & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                 - (0x1fU & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                                 : (((IData)(0x20U) 
                                     - (0x1fU & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                    + (0x1fU & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_rvalid 
        = (1U & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                 & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_watermark__DOT__wr_data 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_depth) 
            >= ((6U < (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q))
                 ? 0x7fU : ((6U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q))
                             ? 0x3eU : (0x7fU & ((IData)(1U) 
                                                 << (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q)))))) 
           | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__g_intr_status__DOT__test_q));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_timeout_count_d 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q)
            ? ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__event_rx_timeout)
                ? 0U : (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_depth) 
                         != (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_depth_prev_q))
                         ? 0U : ((0U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_depth))
                                  ? 0U : (0xffffffU 
                                          & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_timeout_count_q 
                                             + (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q))))))
            : 0U);
    vlSelfRef.__VdfgRegularize_h3c5bdd75_0_9 = (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_depth) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_val_q));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_wvalid) 
           & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_wready)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__wdata_qe) 
           & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_wready)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_tx_empty__DOT__wr_data 
        = ((0U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_depth)) 
           | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__g_intr_status__DOT__test_q));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_tx_watermark__DOT__wr_data 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_depth) 
            < ((4U <= (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q))
                ? 0x10U : (0x3fU & ((IData)(1U) << (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q))))) 
           | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__g_intr_status__DOT__test_q));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_rready 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_uart_idle) 
           & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_rvalid) 
              & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x3fU == (0x3fU & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x1fU == (0x1fU & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q;
        if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_rready) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
                = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                    ? 0xbU : 0xaU);
        } else if (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__tick_baud_q) 
                    & (0U != (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q)))) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
                = (0xfU & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q) 
                           - (IData)(1U)));
        }
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__tx_d 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__tx_q;
        if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_rready)))) {
            if (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__tick_baud_q) 
                 & (0U != (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q)))) {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__tx_d 
                    = (1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__sreg_q));
            }
        }
    } else {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__tx_d = 1U;
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_rvalid) 
           & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_rready)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x1fU == (0x1fU & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
}

VL_INLINE_OPT void Vtop_verilator___024root___nba_comb__TOP__0(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___nba_comb__TOP__0\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_verilator__DOT__uart_tx = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q)
                                              ? (IData)(vlSelfRef.top_verilator__DOT__uart_rx)
                                              : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_out_q));
}

VL_INLINE_OPT void Vtop_verilator___024root___nba_sequent__TOP__8(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___nba_sequent__TOP__8\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_ni) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q 
            = ((((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set)) 
                 & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__2__KET__)) 
                << 2U) | ((((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set)) 
                            & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__1__KET__)) 
                           << 1U) | ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set)) 
                                     & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__0__KET__))));
    } else {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q = 0U;
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_d));
    if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d 
            = (1U & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                     & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                        >> 2U)));
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle 
            = (1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q)));
    } else {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d 
            = (1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q));
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle = 0U;
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry__BRA__2__KET__ 
        = (IData)((2U == (6U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry__BRA__1__KET__ 
        = (IData)((1U == (3U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_intr_d 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle)
            ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_set_trap_pc_q)
            : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_intr_q));
}

VL_INLINE_OPT void Vtop_verilator___024root___nba_comb__TOP__1(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___nba_comb__TOP__1\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage_rdata 
        = (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, 
                                                   (0x1fU 
                                                    & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))
                      ? 0U : (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[
                              (((IData)(7U) + (0xffU 
                                               & VL_SHIFTL_III(8,8,32, 
                                                               (0x1fU 
                                                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))) 
                               >> 5U)] << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & VL_SHIFTL_III(8,8,32, 
                                                              (0x1fU 
                                                               & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))) 
                    | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[
                       (7U & (VL_SHIFTL_III(8,8,32, 
                                            (0x1fU 
                                             & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U) 
                              >> 5U))] >> (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, 
                                                         (0x1fU 
                                                          & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__reqfifo_rdata 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
            ? 0U : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage);
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__sramreqfifo_rdata 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
            ? 0U : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage));
    if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__sreg_d 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__sreg_q;
        if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_rready) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__sreg_d 
                = (0x400U | ((0x200U & (((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q)) 
                                         | (((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                             & VL_REDXOR_8(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage_rdata)) 
                                            ^ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q))) 
                                        << 9U)) | (
                                                   ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                                     ? 0U
                                                     : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage_rdata)) 
                                                   << 1U)));
        } else if (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__tick_baud_q) 
                    & (0U != (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q)))) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__sreg_d 
                = (0x400U | (0x3ffU & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__sreg_q) 
                                       >> 1U)));
        }
    } else {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__sreg_d = 0x7ffU;
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__error_blanking_data 
        = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__262__val 
                    = (0xfU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__reqfifo_rdata 
                               >> 0xaU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__262__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__262__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__262__Vfuncout))
            ? 0U : 0xffffffffU);
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__DOT____Vcellinp__rspfifo__wvalid_i 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__reqfifo_rvalid) 
           & (IData)(((0x8000U != (0x1c000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__reqfifo_rdata)) 
                      | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__rspfifo_rvalid))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__rdata_tlword 
        = (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_data_rdata 
           & ((((- (IData)((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__sramreqfifo_rdata) 
                                  >> 4U)))) << 0x18U) 
               | (0xff0000U & ((- (IData)((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__sramreqfifo_rdata) 
                                                 >> 3U)))) 
                               << 0x10U))) | ((0xff00U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__sramreqfifo_rdata) 
                                                                 >> 2U)))) 
                                                  << 8U)) 
                                              | (0xffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__sramreqfifo_rdata) 
                                                                  >> 1U))))))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__reqfifo_rvalid) 
           & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__DOT____Vcellinp__rspfifo__wvalid_i)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__rspfifo_rvalid) 
           & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(((0x8000U == (0x1c000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__reqfifo_rdata)) 
                         & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__DOT____Vcellinp__rspfifo__wvalid_i)))));
    vlSelfRef.__VdfgRegularize_ha026946b_0_31 = (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__DOT____Vcellinp__rspfifo__wvalid_i) 
                                                  & (1U 
                                                     != 
                                                     (3U 
                                                      & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__reqfifo_rdata 
                                                         >> 0xfU))))
                                                  ? 0U
                                                  : 1U);
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__vld_rd_rsp 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__DOT____Vcellinp__rspfifo__wvalid_i) 
           & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__reqfifo_rvalid) 
              & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__rspfifo_rvalid) 
                 & (0x8000U == (0x18000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__reqfifo_rdata)))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__rspfifo_rdata 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)
            ? 0ULL : (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                       & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__sramreqfifo_rready))
                       ? ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__rdata_tlword)) 
                          << 8U) : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__d_error 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__reqfifo_rvalid) 
           & ((1U == (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__reqfifo_rdata 
                            >> 0xfU))) ? ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__rspfifo_rdata) 
                                          | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__reqfifo_rdata 
                                             >> 0xeU))
               : (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__reqfifo_rdata 
                  >> 0xeU)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__d_data 
        = (((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__d_error)) 
            & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__vld_rd_rsp))
            ? (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__rspfifo_rdata 
                       >> 8U)) : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__error_blanking_data);
}

VL_INLINE_OPT void Vtop_verilator___024root___nba_sequent__TOP__9(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___nba_sequent__TOP__9\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_instr_rdata 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
            [(0x1fffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d 
                         >> 2U))];
    }
    if (vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[vlSelfRef.__VdlyDim0__top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [vlSelfRef.__VdlyDim0__top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0]) 
               | (IData)(vlSelfRef.__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[vlSelfRef.__VdlyDim0__top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [vlSelfRef.__VdlyDim0__top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1]) 
               | ((IData)(vlSelfRef.__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[vlSelfRef.__VdlyDim0__top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [vlSelfRef.__VdlyDim0__top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2]) 
               | ((IData)(vlSelfRef.__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[vlSelfRef.__VdlyDim0__top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3] 
            = ((0xffffffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [vlSelfRef.__VdlyDim0__top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3]) 
               | ((IData)(vlSelfRef.__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3) 
                  << 0x18U));
    }
}

VL_INLINE_OPT void Vtop_verilator___024root___nba_comb__TOP__3(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___nba_comb__TOP__3\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q)) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_instr_rvalid));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__63__03a32__KET__ 
        = ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U]
            : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_instr_rdata);
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__31__03a0__KET__ 
        = ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U]
            : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_instr_rdata);
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
        = ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U]
            : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_instr_rdata);
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next = 0U;
    if ((IData)((0U != (0xffU & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__addr_hit))))) {
        if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__addr_hit))) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q) 
                         << 7U) | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q) 
                                   << 6U)) | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q) 
                                               << 5U) 
                                              | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q) 
                                                 << 4U))) 
                      | ((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                           << 3U) | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_done__q) 
                                     << 2U)) | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q)))));
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffeffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q) 
                      << 8U));
        } else if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__addr_hit))) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q) 
                         << 7U) | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q) 
                                   << 6U)) | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q) 
                                               << 5U) 
                                              | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q) 
                                                 << 4U))) 
                      | ((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q) 
                           << 3U) | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_done__q) 
                                     << 2U)) | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q)))));
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffeffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q) 
                      << 8U));
        } else if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__addr_hit))) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next 
                = (0xfffffe00U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next);
        } else if ((8U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__addr_hit))) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next 
                = (0xfffffffeU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next);
        } else if ((0x10U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__addr_hit))) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff8U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q) 
                       << 2U) | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q) 
                                  << 1U) | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q))));
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffc0fU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q) 
                       << 8U) | ((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q) 
                                   << 7U) | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q) 
                                             << 6U)) 
                                 | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
                                     << 5U) | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q) 
                                               << 4U)))));
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q) 
                      << 0x10U));
        } else if ((0x20U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__addr_hit))) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff0U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_rvalid)) 
                         & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_uart_idle)) 
                        << 3U) | (4U & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_rvalid)) 
                                        << 2U))) | 
                      ((2U & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_wready)) 
                              << 1U)) | (1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_wready))))));
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffffcfU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((0x20U & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_rvalid)) 
                                << 5U)) | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_rx__DOT__idle_q) 
                                           << 4U)));
        } else {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((0x40U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__addr_hit))
                       ? ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                           ? 0U : (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_SHIFTL_III(9,9,32, 
                                                               (0x3fU 
                                                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))
                                              ? 0U : 
                                             (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                              (((IData)(7U) 
                                                + (0x1ffU 
                                                   & VL_SHIFTL_III(9,9,32, 
                                                                   (0x3fU 
                                                                    & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
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
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(9,9,32, 
                                                                   (0x3fU 
                                                                    & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))))
                       : 0U));
        }
    } else if ((0x100U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__addr_hit))) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xffffff00U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next) 
               | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q) 
                   << 5U) | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q) 
                             << 2U)));
    } else if ((0x200U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__addr_hit))) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xffffff00U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next) 
               | (0xffU & (IData)(((QData)((IData)(
                                                   (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_depth) 
                                                     << 0x18U) 
                                                    | vlSelfRef.__VdfgRegularize_h3c5bdd75_0_9))) 
                                   >> 0x18U))));
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xff00ffffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next) 
               | (0xff0000U & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_9));
    } else if ((0x400U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__addr_hit))) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xfffffffcU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next) 
               | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q) 
                   << 1U) | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q)));
    } else if ((0x800U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__addr_hit))) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xffff0000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next) 
               | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_val_q));
    } else if ((0x1000U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__addr_hit))) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xff000000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next) 
               | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q);
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next 
            = ((0x7fffffffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next) 
               | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q) 
                  << 0x1fU));
    } else {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next = 0xffffffffU;
    }
    vlSelfRef.__VdfgRegularize_ha026946b_0_36[0U] = 
        vlSelfRef.__VdfgRegularize_h3c5bdd75_0_14[0U];
    vlSelfRef.__VdfgRegularize_ha026946b_0_36[1U] = 
        vlSelfRef.__VdfgRegularize_h3c5bdd75_0_14[1U];
    vlSelfRef.__VdfgRegularize_ha026946b_0_36[2U] = 
        (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__ibex_lsu_host_adapter__DOT__g_multiple_reqs__DOT__source_q) 
          << 0x1cU) | vlSelfRef.__VdfgRegularize_h3c5bdd75_0_14[2U]);
    vlSelfRef.__VdfgRegularize_ha026946b_0_36[3U] = 
        (0x20U | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__ibex_lsu_host_adapter__DOT__g_multiple_reqs__DOT__source_q) 
                  >> 4U));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__hold_all_requests 
        = ((0U != (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__num_req_outstanding)) 
           & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__dev_sel_s1n_3) 
              != (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__dev_select_outstanding)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h7ff92a7d_0_11 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__2__KET__ 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry__BRA__2__KET__));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h7ff92a7d_0_3 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry__BRA__1__KET__));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid 
        = (1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                 | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h7ff92a7d_0_7) 
           & (3U != (3U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h7ff92a7d_0_7) 
           & (3U != (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                           >> 0x10U))));
    if ((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
            = ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                ? ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                    << 0x10U) | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                 >> 0x10U)) : ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_instr_rdata 
                                                << 0x10U) 
                                               | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                                  >> 0x10U)));
        if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two = 1U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw 
                = (1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid));
        } else {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two = 0U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw 
                = (1U & (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                          >> 1U) | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                    & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid))));
        }
    } else {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw 
            = (1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid));
    }
    vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[0U] = 
        vlSelfRef.__VdfgRegularize_ha026946b_0_36[0U];
    vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[1U] = 
        vlSelfRef.__VdfgRegularize_ha026946b_0_36[1U];
    vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[2U] = 
        vlSelfRef.__VdfgRegularize_ha026946b_0_36[2U];
    vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[3U] = 
        (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_0) 
          << 9U) | vlSelfRef.__VdfgRegularize_ha026946b_0_36[3U]);
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_u_o__BRA__1__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__hold_all_requests)) 
           & (1U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__dev_sel_s1n_3)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_u_o__BRA__0__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__hold_all_requests)) 
           & (0U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__dev_sel_s1n_3)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__0__KET__ 
        = (1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h7ff92a7d_0_11) 
                 | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__2__KET__ 
        = (IData)((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                    >> 2U) | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__2__KET__)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__1__KET__ 
        = (1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h7ff92a7d_0_3) 
                 | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                    >> 1U)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 0U;
    if ((2U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((1U & (~ vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))) {
            if ((0x8000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x4000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x12023U | (((0xc000000U 
                                             & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                << 0x13U)) 
                                            | ((0x2000000U 
                                                & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0xdU)) 
                                               | (0x1f00000U 
                                                  & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x12U)))) 
                                           | (0xe00U 
                                              & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)));
                    }
                    if ((0x2000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                } else {
                    if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = ((0x1000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)
                                ? ((0U != (0x1fU & 
                                           (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            >> 2U)))
                                    ? (0x33U | ((0x1f00000U 
                                                 & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    << 0x12U)) 
                                                | ((0xf8000U 
                                                    & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                       << 8U)) 
                                                   | (0xf80U 
                                                      & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))))
                                    : ((0U == (0x1fU 
                                               & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  >> 7U)))
                                        ? 0x100073U
                                        : (0xe7U | 
                                           (0xf8000U 
                                            & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 8U)))))
                                : ((0U != (0x1fU & 
                                           (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            >> 2U)))
                                    ? (0x33U | ((0x1f00000U 
                                                 & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    << 0x12U)) 
                                                | (0xf80U 
                                                   & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))
                                    : (0x67U | (0xf8000U 
                                                & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 8U)))));
                    }
                    if ((0x2000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    } else if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                         >> 0xcU)))) {
                        if ((0U == (0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             >> 2U)))) {
                            if ((0U == (0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 >> 7U)))) {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    }
                }
            } else if ((0x4000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0xdU)))) {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x12003U | ((0xc000000U 
                                        & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                           << 0x18U)) 
                                       | ((0x2000000U 
                                           & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0xdU)) 
                                          | ((0x1c00000U 
                                              & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0x12U)) 
                                             | (0xf80U 
                                                & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))));
                }
                if ((0x2000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((0U == (0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            >> 7U)))) {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            } else {
                if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0xdU)))) {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x1013U | ((0x1f00000U & 
                                       (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                        << 0x12U)) 
                                      | ((0xf8000U 
                                          & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 8U)) 
                                         | (0xf80U 
                                            & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))));
                }
                if ((0x2000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((0x1000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            }
        }
    } else if ((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((0x8000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((0x4000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x40063U | (((- (IData)((1U 
                                                & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0xcU)))) 
                                    << 0x1cU) | ((0xc000000U 
                                                  & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x15U)) 
                                                 | ((0x2000000U 
                                                     & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                        << 0x17U)) 
                                                    | ((0x38000U 
                                                        & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                           << 8U)) 
                                                       | (((0x1000U 
                                                            & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                               >> 1U)) 
                                                           | (0xc00U 
                                                              & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) 
                                                          | ((0x300U 
                                                              & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                 << 5U)) 
                                                             | (0x80U 
                                                                & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                   >> 5U)))))))));
            } else if ((0x2000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x6fU | (((((0x80000000U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x13U)) 
                                   | (0x40000000U & 
                                      (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                       << 0x16U))) 
                                  | ((0x30000000U & 
                                      (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                       << 0x13U)) | 
                                     ((0x8000000U & 
                                       (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                        << 0x15U)) 
                                      | (0x4000000U 
                                         & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x13U))))) 
                                 | ((0x2000000U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x17U)) 
                                    | ((0x1000000U 
                                        & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                           << 0xdU)) 
                                       | (0xe00000U 
                                          & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 0x12U))))) 
                                | ((0x1ff000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                >> 0xcU)))) 
                                                 << 0xcU)) 
                                   | (0x80U & ((~ (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0xfU)) 
                                               << 7U)))));
            } else if ((0x800U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x400U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xcU)))) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = ((0x40U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)
                                ? ((0x20U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)
                                    ? (0x847433U | 
                                       ((0x700000U 
                                         & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x12U)) 
                                        | ((0x38000U 
                                            & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 8U)) 
                                           | (0x380U 
                                              & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))))
                                    : (0x846433U | 
                                       ((0x700000U 
                                         & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x12U)) 
                                        | ((0x38000U 
                                            & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 8U)) 
                                           | (0x380U 
                                              & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))))
                                : ((0x20U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)
                                    ? (0x844433U | 
                                       ((0x700000U 
                                         & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x12U)) 
                                        | ((0x38000U 
                                            & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 8U)) 
                                           | (0x380U 
                                              & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))))
                                    : (0x40840433U 
                                       | ((0x700000U 
                                           & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x12U)) 
                                          | ((0x38000U 
                                              & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)) 
                                             | (0x380U 
                                                & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))))));
                    }
                } else {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x47413U | (((((- (IData)(
                                                     (1U 
                                                      & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                         >> 0xcU)))) 
                                          << 0x1aU) 
                                         | (0x2000000U 
                                            & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0xdU))) 
                                        | (0x1f00000U 
                                           & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x12U))) 
                                       | ((0x38000U 
                                           & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 8U)) 
                                          | (0x380U 
                                             & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))));
                }
            } else {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x45413U | ((0x40000000U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x14U)) 
                                   | (((0x1f00000U 
                                        & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                           << 0x12U)) 
                                       | (0x38000U 
                                          & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 8U))) 
                                      | (0x380U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))));
            }
            if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                          >> 0xeU)))) {
                if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0xdU)))) {
                    if ((0x800U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        if ((0x400U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                            if ((0x1000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    } else if ((0x1000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                }
            }
        } else if ((0x4000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((0x2000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x37U | (((- (IData)((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0xcU)))) 
                                 << 0x11U) | ((0x1f000U 
                                               & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0xaU)) 
                                              | (0xf80U 
                                                 & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))));
                if ((2U == (0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                     >> 7U)))) {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x10113U | (((- (IData)(
                                                   (1U 
                                                    & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                       >> 0xcU)))) 
                                        << 0x1dU) | 
                                       (((0x18000000U 
                                          & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 0x18U)) 
                                         | (0x4000000U 
                                            & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x15U))) 
                                        | ((0x2000000U 
                                            & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x17U)) 
                                           | (0x1000000U 
                                              & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0x12U))))));
                }
                if ((0U == ((0x20U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                      >> 7U)) | (0x1fU 
                                                 & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    >> 2U))))) {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            } else {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x13U | (((- (IData)((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0xcU)))) 
                                 << 0x1aU) | ((0x2000000U 
                                               & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0xdU)) 
                                              | ((0x1f00000U 
                                                  & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x12U)) 
                                                 | (0xf80U 
                                                    & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))));
            }
        } else {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                = ((0x2000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)
                    ? (0x6fU | (((((0x80000000U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x13U)) 
                                   | (0x40000000U & 
                                      (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                       << 0x16U))) 
                                  | ((0x30000000U & 
                                      (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                       << 0x13U)) | 
                                     ((0x8000000U & 
                                       (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                        << 0x15U)) 
                                      | (0x4000000U 
                                         & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x13U))))) 
                                 | ((0x2000000U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x17U)) 
                                    | ((0x1000000U 
                                        & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                           << 0xdU)) 
                                       | (0xe00000U 
                                          & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 0x12U))))) 
                                | ((0x1ff000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                >> 0xcU)))) 
                                                 << 0xcU)) 
                                   | (0x80U & ((~ (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0xfU)) 
                                               << 7U)))))
                    : (0x13U | ((((- (IData)((1U & 
                                              (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               >> 0xcU)))) 
                                  << 0x1aU) | ((0x2000000U 
                                                & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0xdU)) 
                                               | (0x1f00000U 
                                                  & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x12U)))) 
                                | ((0xf8000U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                << 8U)) 
                                   | (0xf80U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))));
        }
    } else if ((0x8000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((0x4000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                          >> 0xdU)))) {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x842023U | ((((0x4000000U & 
                                       (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                        << 0x15U)) 
                                      | (0x2000000U 
                                         & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0xdU))) 
                                     | (0x700000U & 
                                        (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                         << 0x12U))) 
                                    | ((0x38000U & 
                                        (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                         << 8U)) | 
                                       ((0xc00U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata) 
                                        | (0x200U & 
                                           (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 3U))))));
            }
            if ((0x2000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
        } else {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        }
    } else if ((0x4000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                      >> 0xdU)))) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                = (0x42403U | ((0x4000000U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x15U)) 
                               | ((0x3800000U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0xdU)) 
                                  | ((0x400000U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x10U)) 
                                     | ((0x38000U & 
                                         (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                          << 8U)) | 
                                        (0x380U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 5U)))))));
        }
        if ((0x2000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        }
    } else {
        if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                      >> 0xdU)))) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                = (0x10413U | ((0x3c000000U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x13U)) 
                               | ((0x3000000U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0xdU)) 
                                  | ((0x800000U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x12U)) 
                                     | ((0x400000U 
                                         & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x10U)) 
                                        | (0x380U & 
                                           (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 5U)))))));
        }
        if ((0x2000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        } else if ((0U == (0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                    >> 5U)))) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        }
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_u_o__BRA__1__KET____DOT__dev_select)
            ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_wdata
            : 0xffffffffU);
    vlSelfRef.__VdfgRegularize_ha026946b_0_32 = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_u_o__BRA__0__KET____DOT__dev_select)
                                                  ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_wdata
                                                  : 0xffffffffU);
}

VL_INLINE_OPT void Vtop_verilator___024root___nba_comb__TOP__5(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___nba_comb__TOP__5\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
           & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) 
              & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_store = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_load = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__data_req_out = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_store 
                        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we;
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_load 
                        = (1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we)));
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__data_req_out = 1U;
        } else if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__data_req_out = 1U;
        } else if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__data_req_out = 1U;
        }
    }
}

VL_INLINE_OPT void Vtop_verilator___024root___nba_comb__TOP__6(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___nba_comb__TOP__6\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0xffffffffffULL & ((0x40U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                        | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we))
                               ? ((0x40U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                   ? (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                   : (((QData)((IData)(
                                                       (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                        >> 0x20U))) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))))
                               : (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                  + (QData)((IData)(
                                                    ((~ 
                                                      ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                       >> 6U)) 
                                                     & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_store)))))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0xffffffffffULL & ((0x20U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                        | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we))
                               ? ((0x20U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                   ? (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                   : (((QData)((IData)(
                                                       (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                        >> 0x20U))) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))))
                               : (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                  + (QData)((IData)(
                                                    ((~ 
                                                      ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                       >> 5U)) 
                                                     & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_load)))))));
}

VL_INLINE_OPT void Vtop_verilator___024root___nba_comb__TOP__8(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___nba_comb__TOP__8\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0xffffffffffULL & ((0x100U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                         | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we))
                               ? ((0x100U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                   ? (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                   : (((QData)((IData)(
                                                       (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                        >> 0x20U))) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))))
                               : (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                  + (QData)((IData)(
                                                    ((~ 
                                                      ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                       >> 8U)) 
                                                     & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_branch)))))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0xffffffffffULL & ((0x1000U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                          | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we))
                               ? ((0x1000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                   ? (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                   : (((QData)((IData)(
                                                       (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                        >> 0x20U))) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))))
                               : (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                  + (QData)((IData)(
                                                    ((~ 
                                                      ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                       >> 0xcU)) 
                                                     & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_div_wait)))))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0xffffffffffULL & ((0x800U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                         | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we))
                               ? ((0x800U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)
                                   ? (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
                                   : (((QData)((IData)(
                                                       (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                                        >> 0x20U))) 
                                       << 0x20U) | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))))
                               : (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                                  + (QData)((IData)(
                                                    ((~ 
                                                      ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                       >> 0xbU)) 
                                                     & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_mul_wait)))))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
            | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) 
               | (IData)(vlSelfRef.__VdfgRegularize_ha026946b_0_0))) 
           | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) 
              | ((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op_en) 
                   & ((1U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op)) 
                      | (2U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op))))
                   ? ((0x300U == (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0x14U)) | (((0x304U 
                                                  == 
                                                  (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x14U)) 
                                                 | (0x747U 
                                                    == 
                                                    (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x14U))) 
                                                | (0x1dU 
                                                   == 
                                                   (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x19U))))
                   : ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op_en) 
                      & ((0U != (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op)) 
                         & ((0x7b0U == (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                        >> 0x14U)) 
                            | (((0x7b1U == (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                            >> 0x14U)) 
                                | (0x7b2U == (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x14U))) 
                               | (0x7b3U == (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0x14U))))))) 
                 & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q))));
}

void Vtop_verilator___024root___eval_triggers__act(Vtop_verilator___024root* vlSelf);

bool Vtop_verilator___024root___eval_phase__act(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___eval_phase__act\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<9> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop_verilator___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop_verilator___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop_verilator___024root___eval_phase__nba(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___eval_phase__nba\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop_verilator___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_verilator___024root___dump_triggers__ico(Vtop_verilator___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_verilator___024root___dump_triggers__nba(Vtop_verilator___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_verilator___024root___dump_triggers__act(Vtop_verilator___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_verilator___024root___eval(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___eval\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtop_verilator___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../src/marno_soc_main_0/dv/top_verilator.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop_verilator___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop_verilator___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../src/marno_soc_main_0/dv/top_verilator.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop_verilator___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../src/marno_soc_main_0/dv/top_verilator.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop_verilator___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop_verilator___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop_verilator___024root___eval_debug_assertions(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___eval_debug_assertions\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk_i & 0xfeU)))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY(((vlSelfRef.rst_ni & 0xfeU)))) {
        Verilated::overWidthError("rst_ni");}
}
#endif  // VL_DEBUG
