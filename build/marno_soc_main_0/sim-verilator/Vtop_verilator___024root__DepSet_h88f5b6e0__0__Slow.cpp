// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_verilator.h for the primary calling header

#include "Vtop_verilator__pch.h"
#include "Vtop_verilator___024root.h"

VL_ATTR_COLD void Vtop_verilator___024root___eval_static__TOP(Vtop_verilator___024root* vlSelf);

VL_ATTR_COLD void Vtop_verilator___024root___eval_static(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___eval_static\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop_verilator___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec__0 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.__Vtrigprevexpr___TOP__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done__0 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done;
    vlSelfRef.__Vtrigprevexpr___TOP__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_ready__0 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_ready;
    vlSelfRef.__Vtrigprevexpr___TOP__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec__1 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.__Vtrigprevexpr___TOP__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done__1 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done;
    vlSelfRef.__Vtrigprevexpr___TOP__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_ready__1 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_ready;
    vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0 = vlSelfRef.clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_ni__0 = vlSelfRef.rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__gen_no_rs3_flop__DOT__unused_clk__0 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__gen_no_rs3_flop__DOT__unused_clk;
}

VL_ATTR_COLD void Vtop_verilator___024root___eval_static__TOP(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___eval_static__TOP\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__log_file_path = 
        std::string{"uart0.log"};
}

VL_ATTR_COLD void Vtop_verilator___024root___eval_initial__TOP(Vtop_verilator___024root* vlSelf);
VL_ATTR_COLD void Vtop_verilator___024root____Vm_traceActivitySetAll(Vtop_verilator___024root* vlSelf);

VL_ATTR_COLD void Vtop_verilator___024root___eval_initial(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___eval_initial\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop_verilator___024root___eval_initial__TOP(vlSelf);
    Vtop_verilator___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vtop_verilator___024root___eval_final__TOP(Vtop_verilator___024root* vlSelf);

VL_ATTR_COLD void Vtop_verilator___024root___eval_final(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___eval_final\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop_verilator___024root___eval_final__TOP(vlSelf);
    Vtop_verilator___024root____Vm_traceActivitySetAll(vlSelf);
}

void Vtop_verilator___024root____Vdpiimwrap_top_verilator__DOT__u_uartdpi__DOT__uartdpi_close_TOP(QData/*63:0*/ ctx);

VL_ATTR_COLD void Vtop_verilator___024root___eval_final__TOP(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___eval_final__TOP\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((0U != vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__file_handle)))) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__unnamedblk1__DOT__fh 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__file_handle;
        VL_FCLOSE_I(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__unnamedblk1__DOT__fh); }
    Vtop_verilator___024root____Vdpiimwrap_top_verilator__DOT__u_uartdpi__DOT__uartdpi_close_TOP(vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__ctx);
    vlSelfRef.top_verilator__DOT__u_uartdpi__DOT__ctx = 0ULL;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_verilator___024root___dump_triggers__stl(Vtop_verilator___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop_verilator___024root___eval_phase__stl(Vtop_verilator___024root* vlSelf);

VL_ATTR_COLD void Vtop_verilator___024root___eval_settle(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___eval_settle\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtop_verilator___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../src/marno_soc_main_0/dv/top_verilator.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop_verilator___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_verilator___024root___dump_triggers__stl(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___dump_triggers__stl\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] top_verilator.u_soc_mod.u_ibex_top_tracing.u_ibex_top.u_ibex_core.id_stage_i.instr_executing_spec)\n");
    }
    if ((4ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] top_verilator.u_soc_mod.u_ibex_top_tracing.u_ibex_top.u_ibex_core.id_stage_i.instr_done)\n");
    }
    if ((8ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] top_verilator.u_soc_mod.u_ibex_top_tracing.u_ibex_top.u_ibex_core.if_stage_i.fetch_ready)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_verilator___024root___stl_sequent__TOP__0(Vtop_verilator___024root* vlSelf);
VL_ATTR_COLD void Vtop_verilator___024root___stl_sequent__TOP__1(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___act_sequent__TOP__0(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___act_sequent__TOP__1(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___act_comb__TOP__0(Vtop_verilator___024root* vlSelf);
void Vtop_verilator___024root___act_comb__TOP__1(Vtop_verilator___024root* vlSelf);

VL_ATTR_COLD void Vtop_verilator___024root___eval_stl(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___eval_stl\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop_verilator___024root___stl_sequent__TOP__0(vlSelf);
        Vtop_verilator___024root____Vm_traceActivitySetAll(vlSelf);
        Vtop_verilator___024root___stl_sequent__TOP__1(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop_verilator___024root___act_sequent__TOP__0(vlSelf);
        Vtop_verilator___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop_verilator___024root___act_sequent__TOP__1(vlSelf);
        Vtop_verilator___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop_verilator___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0xfULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop_verilator___024root___act_comb__TOP__1(vlSelf);
        Vtop_verilator___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtop_verilator___024root___eval_triggers__stl(Vtop_verilator___024root* vlSelf);

VL_ATTR_COLD bool Vtop_verilator___024root___eval_phase__stl(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___eval_phase__stl\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop_verilator___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop_verilator___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_verilator___024root___dump_triggers__ico(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___dump_triggers__ico\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: Internal 'ico' trigger - DPI export trigger\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_verilator___024root___dump_triggers__act(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___dump_triggers__act\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: Internal 'act' trigger - DPI export trigger\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] top_verilator.u_soc_mod.u_ibex_top_tracing.u_ibex_top.u_ibex_core.id_stage_i.instr_executing_spec)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] top_verilator.u_soc_mod.u_ibex_top_tracing.u_ibex_top.u_ibex_core.id_stage_i.instr_done)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] top_verilator.u_soc_mod.u_ibex_top_tracing.u_ibex_top.u_ibex_core.if_stage_i.fetch_ready)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge clk_i)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(negedge rst_ni)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(posedge top_verilator.u_soc_mod.u_ibex_top_tracing.u_ibex_top.u_ibex_core.id_stage_i.decoder_i.gen_no_rs3_flop.unused_clk)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @(negedge top_verilator.u_soc_mod.u_ibex_top_tracing.u_ibex_top.u_ibex_core.id_stage_i.decoder_i.gen_no_rs3_flop.unused_clk)\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(negedge clk_i)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_verilator___024root___dump_triggers__nba(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___dump_triggers__nba\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: Internal 'nba' trigger - DPI export trigger\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] top_verilator.u_soc_mod.u_ibex_top_tracing.u_ibex_top.u_ibex_core.id_stage_i.instr_executing_spec)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] top_verilator.u_soc_mod.u_ibex_top_tracing.u_ibex_top.u_ibex_core.id_stage_i.instr_done)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] top_verilator.u_soc_mod.u_ibex_top_tracing.u_ibex_top.u_ibex_core.if_stage_i.fetch_ready)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge clk_i)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(negedge rst_ni)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(posedge top_verilator.u_soc_mod.u_ibex_top_tracing.u_ibex_top.u_ibex_core.id_stage_i.decoder_i.gen_no_rs3_flop.unused_clk)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @(negedge top_verilator.u_soc_mod.u_ibex_top_tracing.u_ibex_top.u_ibex_core.id_stage_i.decoder_i.gen_no_rs3_flop.unused_clk)\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(negedge clk_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_verilator___024root____Vm_traceActivitySetAll(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root____Vm_traceActivitySetAll\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
    vlSelfRef.__Vm_traceActivity[9U] = 1U;
    vlSelfRef.__Vm_traceActivity[0xaU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xbU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xcU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xdU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xeU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xfU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x10U] = 1U;
}

VL_ATTR_COLD void Vtop_verilator___024root___ctor_var_reset(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___ctor_var_reset\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    vlSelf->top_verilator__DOT__uart_rx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13205798087604581904ull);
    vlSelf->top_verilator__DOT__uart_tx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3064691083502884552ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_data_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4682127024640032954ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_data_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9586501552106333317ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_data_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 38327759842251499ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_instr_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14809486371590735009ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_instr_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1462029071361018144ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT____Vcellout__sram_a_device_adapter__addr_o = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 15532998264374811988ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__double_fault_seen_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12033980910595316355ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_pre_mip = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10824737825974704546ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_post_mip = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8989954887902998326ull);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcounters[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4765884428261400141ull);
    }
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__rvfi_ext_mhpmcountersh[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8195178365529325722ull);
    }
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16948910384159848249ull);
    }
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__unused_perf_regsh[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16878602602270376010ull);
    }
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__core_busy_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9664329078165278712ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3693533018551598932ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__ic_tag_rdata[__Vi0] = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 12593844410547566609ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__ic_data_rdata[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11859985440730254664ull);
    }
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 451985616567616578ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10342686405101578556ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_c_id = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15114877142895965487ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_is_compressed_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5265100901185759517ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_fetch_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1566298951010209897ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_fetch_err_plus2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12999993263152115222ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_c_insn_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12286021414014912557ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9947816275425029851ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_d_ex[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 4889462291793730084ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 18278232719758661042ull);
    }
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_we_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4831935461061328148ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__icache_inval = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18107252486621814932ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_valid_clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1505897304675586972ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4302904407390546360ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 176921148875193359ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_pc_mux_id = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9470005527114765740ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_cause = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7993174535766043948ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9549974828901112146ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ctrl_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1203893992559320621ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12193856920142489404ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_we_lsu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11086007037548501753ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7306591309525358738ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_we_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9998617160181060024ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__result_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10739410964868259739ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__mult_sel_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1623360730878817844ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__div_sel_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1013497063701782389ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10876173823849346149ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16747696902748331081ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_access = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13042860877647381384ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4843209737319302482ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10386084795755041804ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6178371906431586276ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7615807609601000558ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18081111409231705204ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_req_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11236884479235163241ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_addr[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 5191129300015409906ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17075213435699987600ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pmp_req_err[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17401674774368597461ull);
    }
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__data_req_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11067938379550795791ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_if = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5652995114901628612ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 509190600819014040ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_restore_mret_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10157747346454177004ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_restore_dret_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17788427519915591353ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_cause = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1285679069437605892ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_mtvec_init = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10818861101396293692ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_mtval = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1407029988832593944ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__debug_mode_entering = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10498878673570656695ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__debug_csr_save = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6247670299923098501ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_instr_ret_wb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4233971584324113009ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_instr_ret_compressed_wb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4236979666552365378ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_iside_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 917799057766185967ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_dside_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12335326556488360990ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_mul_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11607616357805106769ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_div_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14227856072013120529ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9340964719531302681ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9306431292565647443ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_tbranch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7589863620737563316ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11117578788426072333ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3327529081492939829ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_insn_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1322477891555100503ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2949931309097261942ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14382256924880907017ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_insn[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8551196146918297281ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9633763058251815380ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_halt[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11126145228838182607ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2775179014140512622ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3742860446987078233ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_ixl[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2098146060683488208ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6198263528880036361ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3866855691090589834ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15051626531703188048ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_rdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15642444939411913596ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_rdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14455349847819636393ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_rdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2514760042417222657ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11987818415752401818ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_wdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4936688350582146919ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_rdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17343781450142997335ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6525635444406456843ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12423042320579107179ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rmask[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10655366734202610535ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wmask[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6672088844867174557ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8552420643237830724ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9517526112844587986ull);
    }
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_intr_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5948362801147044034ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_intr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14932663255761029083ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_set_trap_pc_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18364567483927068474ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_set_trap_pc_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11877548036979727760ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_addr_d = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12380459521933803899ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_addr_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15012524836052888740ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_addr_d = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5929834043154497361ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_addr_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7007837245900560132ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_data_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 815129001347816145ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_data_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1355393928535859304ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_data_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11720667274982189264ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_data_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3265458916438333588ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_addr_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4012451200487034621ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_addr_d = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11490531378773887291ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_wdata_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 966403211754907216ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_wdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13038237415399304944ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_we_wb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4377147905100346175ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_mask_int = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8580030914183193137ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_rdata_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9919412163326179782ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3245054911561330662ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_wdata_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18009971327513678260ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_wdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10351790057825563332ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_addr_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1087428435302610582ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1877312959571866748ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_irq_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5867143787896050808ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order_d = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6727341353150093960ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_id_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11544290404810228476ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_mip = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 330156304034394375ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_nmi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4606607406496855185ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_nmi_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7478310146681437614ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_debug_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16571972019618856064ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9836807458949670193ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip[__Vi0] = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 13088345892255474868ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip[__Vi0] = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 9977142606147262910ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4403856374103270796ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4671071696996789288ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12582659082371875615ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8425888311114391687ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10770192667348596072ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 10; ++__Vi1) {
            vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11235853592935149943ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 10; ++__Vi1) {
            vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7358736417546441830ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_ic_scr_key_valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18309885300116046912ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_irq_valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5725113189281434362ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_valid_d[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10163555360134409878ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 14992927218358786295ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14438960687245992103ull);
    }
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_rvfi_stages__BRA__0__KET____DOT__unnamedblk1__DOT__k = 0;
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_hde830202__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7255248448824636162ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h68cfa8b6__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17994884983891153203ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15769860853063104756ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2911294072407732672ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7170790423950693753ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8387980666358549966ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14528454505795244618ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5837476384746987812ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16532033499768477501ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12515759516541748929ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4351355831785933625ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5126107653825881237ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_tag_ram_input[__Vi0] = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 4341518056088644568ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_data_ram_input[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17492729455261665802ull);
    }
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14991325037810293333ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16679431647065062279ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4624325059912238860ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14782249589663410512ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18267987245611425314ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17145541673075944929ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1979130202632117595ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5167251220846654670ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7478479096148640470ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12309457772003871355ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16524138702476059589ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10972743555003662018ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12672536255780470865ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8639600922283252056ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgRegularize_hed04d6de_0_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1729047788439775291ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__63__03a32__KET__ = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15916708085271052090ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__31__03a0__KET__ = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4592661768888422235ull);
    VL_SCOPED_RAND_RESET_W(96, vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q, __VscopeHash, 4703814957707934625ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16418837840025560364ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16039076919000818609ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17227483772781894587ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6328025837309416998ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12313304423384115060ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15655313143052976051ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1685361420812204803ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9537279828149166926ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9262858357753334586ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 903840046399353745ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2913503682047671895ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12428557514738625612ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2502021681489100894ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12123421600323363866ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10586173343176516370ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13796788542991522100ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1865507118846583611ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11794943001676257367ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13220849715488070682ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14884448400882708231ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7685207392525171596ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6411632273599748441ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1346233404978049141ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13044166417758504443ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d = VL_SCOPED_RAND_RESET_I(31, __VscopeHash, 7996777564129888895ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q = VL_SCOPED_RAND_RESET_I(31, __VscopeHash, 2370927545683754674ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h7ff92a7d_0_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12129811968139945916ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h7ff92a7d_0_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15664789655707614509ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h7ff92a7d_0_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10232073282504427134ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h7ff92a7d_0_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3153220586689488517ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17363994362956692526ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11678517539022688422ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16895469915775678254ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11170406312186701371ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6333663177584179851ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10991737956399350891ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7946216405797162935ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set_raw_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 418427318892979146ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 784893289493769683ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17129184572073683199ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6276517546386254016ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3569367218022340994ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8548449537013496565ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16200587099160408647ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2042107835220816433ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14722638951633548394ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7011385006125018324ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_run = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6200189258710957637ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5377101443516143928ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6178242784648787063ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8874039206968796794ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12310200015652925819ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14541753780528674057ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18107434018348703731ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16758816305188449745ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2643228862675856794ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14525508507121560453ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1754898289584166877ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 647835351070446688ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6436270658045668869ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2851883245414092158ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_alu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1956391271789174565ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 17503111426196028647ull);
    }
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2707523180968609699ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3735186304323239792ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 177125048786810880ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15312868030141430904ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1884595714924184527ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13606383213270930422ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5895834006025596291ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2337123512588035372ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14363833087375353143ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9302006861672529985ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11946332240381708470ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1023682155923681018ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17948602305228015260ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4050736420852229053ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4236689186910035770ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15915379240963493728ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10483385764542457070ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_he98638a0_0_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15765461763714415994ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_he98638a0_0_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6795580555486814551ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17388173355289773391ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15283671075603098490ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9905732230669245015ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 724127780485876182ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3633541210987879812ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 789380998228691799ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__gen_no_rs3_flop__DOT__unused_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2941565094344777665ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_he9d5f5c2__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7226812273713998600ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2303424826095868117ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16540962759431432599ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1952566524735365503ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2358171419740186537ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16262142432881244316ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6948866418363026747ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13695431891367757368ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12659551486044103584ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 159061222497119300ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12856972434134330321ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10239547141406919695ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17473784310900636068ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3792566612149069268ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3739289852022661496ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18080462045696257491ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6635668178203417081ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8457896510795962428ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5182770401721095954ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14402799208345233796ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3726723455008472232ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1340623002711705328ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14188369815960347360ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9191136373063125952ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2529037775619683077ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4123773042163714226ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1830687607647507954ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5065116915650651939ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5045184246037622696ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3967785249343734419ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5589024581035586940ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3352586775331312417ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3372226315645476173ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6983722884614553776ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12202429702654939362ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8759344447978128701ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17509248825423703112ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3183234724146413036ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2346891384503645637ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6222202764631491612ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 13983478904510672695ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 8077227849419017874ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 16681181295998004006ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7586267840429992577ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_q[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1549893021234902017ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_d[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5687507583556974073ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 13657154440734493880ull);
    }
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13807556691184883076ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16468304256904731548ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15289926405659466518ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5304121000242822711ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11624850777956268535ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11716169087457299718ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10158374127319936907ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17129032414331100761ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10693160467750257729ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 12370121731788424199ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10823531586371313501ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10768218444393176354ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6144902840331063413ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1868669460628011882ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11558463082729702837ull);
    }
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 11865707572772422353ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4926323871590775010ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13143915892483318865ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 582084209089113537ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 6630991693510517295ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 11020263365914755111ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11600997505065570224ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17487338396951490860ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1029977760497566089ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12393223831482569403ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6052243241526317391ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4690928815434681308ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2167557644438290746ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10256877625604210645ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3465362861769252902ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 3320980622674877784ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10054913152338917803ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10673473369832163831ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3352260965491732612ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14705731077498824452ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9990810616500214181ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14886603295727276696ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18407372909718589551ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11490210879341257126ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1582361240924268968ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8477448955831058866ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10513796105100899486ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8953601260372653857ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4243119373485989361ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7972628828696358842ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7318979625965575542ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7993858167902744512ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9740185528927790634ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16901537588393950095ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1514474572842692289ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 8438715718316662080ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2030233553605349511ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9653919610783206172ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2875501644615810362ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10833377383639359607ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5667864522540498136ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16080254637145019227ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_rdata_ext = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 330048511338867663ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1040090464946103208ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10492595310121170113ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14199857495625998673ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14691960896341172551ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16536189776072586897ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 89932351843515415ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6391043047773985625ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1986725725526129506ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18162104115678083945ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13646330988447025972ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12964297078419516865ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16079997111984949218ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16000358578123545698ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2264766951493891923ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_bus_err_1_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11707311019798208484ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_bus_err_1_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11356089371389555109ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9457341430506206503ull);
    }
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13900900001979011026ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9428606600888809718ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8745016591303134309ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9448240614991312234ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16202885088755647211ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9222140094322637875ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4868636091140068441ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15542678507088331250ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4912037629852250493ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9707716593347274581ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10130643725177637444ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7161365558830083431ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2592592511710964750ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5485579262696591975ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtvec_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5421228488983861510ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18417289117824010673ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17919847333065652055ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8505760538468054854ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8491434233092483753ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch0_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1780626128890707669ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch1_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6714919859599498484ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1718770289268202389ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8444989597389104767ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15859632643110431484ull);
    }
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_d = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 6307378281009906505ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 18198327870526838022ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4507588337095507999ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9199347248142739439ull);
    }
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10333211867867020502ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16423495946979937344ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2920151469760727471ull);
    }
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10588388394900933948ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 54445675995789698ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1246107827839540605ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10592473112959406412ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 544988926201862762ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17629001590787414274ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dbg_csr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16030638674613505673ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11996703832261443858ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4587605219037547094ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8034587064609823149ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 980613799847169748ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 17711377476858099992ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 580065928172503806ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7840820915016550898ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15560481952014808073ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9797258822464340948ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8516894259476934780ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12926426863237207424ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3782247392288221990ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12451072403846344616ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16878688556219811091ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6307729800879950482ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7502864853686047127ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17374585402419257008ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11797041956167683098ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14707980668342011570ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10782966396603825791ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11538695244140498533ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 7593503398933593920ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 9431504110647467861ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 12287350956816636259ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 4457888511110036638ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 3732374549227249844ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 4873267544128740254ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 10526940014506130084ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 2355471595202568542ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 4617433285873962449ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 16580547913609268956ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 3690556277254379639ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 9636810087417078321ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 3068277233914117837ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 1536193632293485808ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 10719304193455811011ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 508995363898291805ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 17562476311806459667ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 6704273969750034815ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 1661887221046421661ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 7019312952536686434ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9276220452745173839ull);
    }
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18394150559609669251ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__1__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13458456629991784893ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__2__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4590649048796433231ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__3__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7491432035968787520ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__4__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12428910839708023194ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__5__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18058316578797069005ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__6__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5374070766854017321ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__7__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17066107784965902304ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__8__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17699789220901684075ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__9__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8453588093129389319ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__10__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8968078898619836496ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__11__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14055053016279882746ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__12__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18305528907131593484ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__13__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3709179014717401341ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__14__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18024245278062873477ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__15__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8921021478381665314ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__16__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12844598231073860238ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__17__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7496842007971342450ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__18__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1897232901617282830ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__19__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 783162848093768174ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__20__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4443166069228317387ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__21__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8530561841741788445ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__22__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8883788648462773397ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__23__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1161677809955357093ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__24__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9023469294826161623ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__25__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4815509203507416026ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__26__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 668017897148409019ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__27__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11094588625056491707ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__28__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13146589133071997022ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__29__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4274979431835087149ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__30__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12393583229481369855ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__31__KET____DOT__rf_reg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15493781109350404230ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__file_handle = 0;
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__cycle = 0;
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__insn_is_compressed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 237481002692006339ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__data_accessed = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12360842952697280614ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__trace_log_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7835510533528387446ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__unnamedblk1__DOT__fh = 0;
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__unnamedblk2__DOT__fh = 0;
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__intr_tx_watermark_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4492580658547427956ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__intr_tx_empty_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6949642521663385915ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__intr_rx_watermark_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13251664224201130889ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__intr_tx_done_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10440736812754704504ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__intr_rx_overflow_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8799904697696850821ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__intr_rx_frame_err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3979523777254701037ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__intr_rx_break_err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17092601493493313500ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__intr_rx_timeout_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 767013446840678339ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__intr_rx_parity_err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7852954940757405381ull);
    VL_SCOPED_RAND_RESET_W(132, vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw, __VscopeHash, 5559494137200125377ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 529105551198560754ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1120233362671234972ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13193624909305527798ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8201558699880642075ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__wr_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9065445892014935397ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_rdata_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6818037898147491937ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__intr_state_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1603062695089633463ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__intr_test_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 234347917614325840ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__status_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3717992376471303662ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__rdata_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10622815519592364525ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3832239448872808898ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13581424042757563136ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_done__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17230076551669767984ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11374283706876317122ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13014394973451780656ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18220591515753073116ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13842973254536757032ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6717464658528882ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13521890786140490691ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17570279689149758151ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 708981585256022374ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_done__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6660698042468024615ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13894925443589025442ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10050896855287149479ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7472763666006396238ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 48796828958892414ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7819629913049609697ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13665792139860650288ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6718446405011392877ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13197964115689488515ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7771175598229354862ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13164657403586858810ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13048726326411755474ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17918109274070809305ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12742914896246952810ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7647241023801524852ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6461586763015911024ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__wdata_qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3225378036610300650ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_wdata__q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8746382539209543598ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__fifo_ctrl_qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1154278778557346305ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2633096878321780864ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14041439851856961543ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10083554015851263719ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1430360503095168727ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12611520301074991321ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13761232382350594699ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11389668999134679946ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 815528349890961468ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__addr_hit = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 8141084043509318846ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8013851756826677710ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_18 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17368941689305161764ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_19 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7297756086700308292ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18114245557683155077ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__a_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 861372370749273294ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4592697479697390379ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__error_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1543181757952978598ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__err_internal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16041021254878489026ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__instr_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4802942146010140939ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__malformed_meta_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13137962645004427052ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8140312827950010762ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14298593530873844945ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11716263577471997387ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__rd_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10326530263534335101ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__wr_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18280879891027444825ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_wr_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5137692535917696198ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_type_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12366202036058636956ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14285426164276819691ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17015706758818168379ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15486635832293626372ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_tx_watermark__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2716995495594311221ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_watermark__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17025646810109511960ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 625658681466743597ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16200132161821883913ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11153536635926664965ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16486969254784300310ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1565081343608852463ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8254225845108291279ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_break_err__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2146151273778132808ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2240861164740273735ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_timeout__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9824852814377416272ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12445096696462310972ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10321722264547472477ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18234645326290610464ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_tx_empty__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4837137166343499658ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_tx_watermark__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14966503825126172375ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_watermark__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13378550081094000093ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_tx_done__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11004491117770487801ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_overflow__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9851937410442713019ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_frame_err__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7603511600266023813ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4258397429367446928ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16756176724758770817ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_timeout__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7494617839031084594ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_parity_err__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8052840125646116347ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_tx_empty__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13420473352188936677ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_tx__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12969524400058336344ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_rx__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9733265188155517903ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_nf__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6781017170137046800ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_slpbk__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2144661603384129558ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10187610078536975092ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13914579881338674229ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_parity_en__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6484128734495488682ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_parity_odd__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6683995491967984852ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_rxblvl__DOT__wr_data = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9982442647170286118ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_nco__DOT__wr_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10738586300039832642ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_wdata__DOT__wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11853338888603769758ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_wdata__DOT__wr_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1596051552563414718ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_fifo_ctrl_rxrst__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14992227348052564693ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_fifo_ctrl_txrst__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15315877965992501221ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1528158427864226622ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__wr_data = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5713399093864899086ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_fifo_ctrl_txilvl__DOT__wr_data = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2783061207474527001ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ovrd_txen__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2463148287936841148ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ovrd_txen__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10899530536603164579ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ovrd_txval__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10503086960367524039ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_timeout_ctrl_val__DOT__wr_data = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 15257080471757813234ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5248562083307860273ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11447553884094609645ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_val_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2524744728760720291ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_depth = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9377830431630796588ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_depth = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8780117809310704677ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_depth_prev_q = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3200060820476272733ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_timeout_count_d = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 10953524456591281725ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_timeout_count_q = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11722185104547688131ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_fifo_rxrst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17351253297960847761ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_fifo_txrst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13290788009929592739ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14091404817191184996ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6036218424593347112ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 939813034895670080ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_uart_idle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6418537657201626923ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_out_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2050027656456415718ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10475839054287518635ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9477346638050735394ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3217283330339685414ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2142328717342162425ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18179515465597807628ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2209348271861868991ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__allzero_cnt_d = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16328708569520695525ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__allzero_cnt_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13090229001913443412ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__event_rx_frame_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12127260580958892781ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__event_rx_break_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7902066826769701877ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__event_rx_timeout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17380128542820987110ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__event_rx_parity_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5193515082740696559ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_uart_idle_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 659195817833311714ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__break_st_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 949519191721471418ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__nco_sum_q = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 6703575424678599057ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_sync_q1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8183303485784289100ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_sync_q2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11786027662783344825ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__full_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17488529808770043807ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8479664619168653150ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13518499378756950466ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9869425393081104557ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15438636104309247737ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage, __VscopeHash, 4617661965718220534ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage_rdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12831360477258150044ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14858368977225150688ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5283018332534714003ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11923197453955901270ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13792417405122101905ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16656517324573081122ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13383696018579111879ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__baud_div_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5924118653338090604ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__tick_baud_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3589924193568823433ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10986679939357552477ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4245722261656186350ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__sreg_q = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17362863608889792337ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__sreg_d = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1757094638595841445ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__tx_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11471892901709605024ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_tx__DOT__tx_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4192292470248984345ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__sync_rx__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14640838827421287624ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15616254654314092311ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_rx__DOT__sreg_q = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2858854635834863809ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_rx__DOT__sreg_d = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13994594158739083199ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1289488579664837205ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10462581702194659482ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_rx__DOT__baud_div_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1261805387601227372ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10329586938682976448ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9114348429553725777ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7950312413389606414ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_rx__DOT__idle_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17609270920344453591ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__uart_rx__DOT__idle_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8087417434925794852ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__full_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6833117066513504786ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2137696068674813455ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 233181100921302387ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6886279858965813326ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1459894800758661570ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage, __VscopeHash, 5463630413377287251ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11799790394556541185ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 506160346376526367ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7003721047614435933ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8650757166708814205ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9665282691300593883ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9548207617108290482ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__g_intr_status__DOT__test_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17806370860983236150ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__g_intr_status__DOT__test_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11295316152812287948ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__g_intr_status__DOT__test_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11664301203679118873ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_tx_done__DOT__g_intr_event__DOT__new_event = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12842661605856557706ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__g_intr_event__DOT__new_event = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18028485638218339645ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__g_intr_event__DOT__new_event = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14075959071462527309ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__g_intr_event__DOT__new_event = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6084359139173140787ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__g_intr_event__DOT__new_event = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5709676490743427483ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__g_intr_event__DOT__new_event = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8857824417813212557ull);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17535357052559796801ull);
    }
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__a_wmask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8041663592484151463ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid = 0;
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid = 0;
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk3__DOT__show_mem_paths = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12107450952179814554ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(109, vlSelf->top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d[__Vi0], __VscopeHash, 521685455412293931ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(66, vlSelf->top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_d2h[__Vi0], __VscopeHash, 13073700115716008828ull);
    }
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__dev_sel_s1n_3 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3014366829856319463ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(66, vlSelf->top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellinp__u_s1n_3__tl_d_i[__Vi0], __VscopeHash, 1916961176800663889ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(109, vlSelf->top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o[__Vi0], __VscopeHash, 14748721592180290748ull);
    }
    VL_SCOPED_RAND_RESET_W(109, vlSelf->top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_o, __VscopeHash, 7166361022935560370ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__num_req_outstanding = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9073805302526814333ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__dev_select_outstanding = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14918548896955420919ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__hold_all_requests = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18064386850391047633ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__accept_t_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16972845601734632290ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(109, vlSelf->top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o[__Vi0], __VscopeHash, 63076280716127358ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(66, vlSelf->top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i[__Vi0], __VscopeHash, 7336965987024443916ull);
    }
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__blanked_auser = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12153625683839147377ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p, __VscopeHash, 3258183785862771238ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__hfifo_reqready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18299051169472945513ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_u_o__BRA__0__KET____DOT__dev_select = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3042432875019700191ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_u_o__BRA__1__KET____DOT__dev_select = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 687091145215284688ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_i, __VscopeHash, 15013679431100952984ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o, __VscopeHash, 11132771023830103192ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_i, __VscopeHash, 17946149080601874615ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o, __VscopeHash, 3331825271427300550ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i, __VscopeHash, 15457990548846302408ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__fifo_h__DOT__reqfifo__DOT__full_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12582272239372055129ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__DOT____Vcellinp__reqfifo__wvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13805670020097055622ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__DOT____Vcellinp__rspfifo__wvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7807495440149771923ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__DOT__reqfifo__DOT__full_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9617272324147828573ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__DOT____Vcellinp__reqfifo__wvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9210043112768296671ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_err_resp__DOT__err_resp__DOT__err_opcode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7449139475473206418ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_err_resp__DOT__err_resp__DOT__err_source = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5239565818267239413ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_err_resp__DOT__err_resp__DOT__err_size = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13524116122318744021ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_err_resp__DOT__err_resp__DOT__err_rsp_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3621226241279167810ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_err_resp__DOT__err_resp__DOT__err_instr_type = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2228452548505557066ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_err_resp__DOT__err_resp__DOT__tl_h_o_int, __VscopeHash, 5766636320527560867ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__ibex_lsu_host_adapter__DOT__tl_be = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15303773620893385369ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__ibex_lsu_host_adapter__DOT__g_multiple_reqs__DOT__source_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4588112113545820192ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__ibex_lsu_host_adapter__DOT__g_multiple_reqs__DOT__source_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17828600461431865675ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__error_det = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7639132103543720553ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__instr_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9586094711100811479ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__intg_error_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1223300698173176295ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__reqfifo_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1578452400547923691ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__reqfifo_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15726606494460495064ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__reqfifo_rdata = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 2666071536861444178ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__sramreqfifo_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 560420939245330530ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__sramreqfifo_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12526168007438590292ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__sramreqfifo_rdata = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6303411091004700702ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__rspfifo_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17354034036936808961ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__rspfifo_rdata = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 9633528232917779231ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__sram_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14621278728794499986ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__d_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7097781720203288585ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__vld_rd_rsp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16023646065563505335ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__error_blanking_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3050511961917913249ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__d_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7577204149867367486ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__missed_err_gnt_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10648154458008253253ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__wmask_combined = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5789749028576130515ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__wdata_combined = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2129180142120964852ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__rdata_tlword = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6981570521607164384ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__opcode_allowed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2126385694078262541ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__instr_wr_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11158060650859325685ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__instr_type_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4265654370263771325ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__addr_sz_chk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 161606012643868775ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__mask_chk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4576043106651387242ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__fulldata_chk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4514451949429458251ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2085586500102450300ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__full_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 260345324791238750ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7801986863211823191ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3256756500739632187ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3591849365970252025ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__under_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6349998234008295344ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 14378712060752786282ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3357279196078098286ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14917453796526221403ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1530078651428710950ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9254715308955560326ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5423080165319393125ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14146940098121539302ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__full_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4188516764715772311ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3390592364352050902ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10038270106923883804ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12063209049410105287ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__under_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 31841942503486279ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8638832177613128628ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6252806695775584723ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4917428782819878123ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9812159748674402848ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15431613199344532340ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2201850573705127564ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5947247819951298555ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__full_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11435222377568110360ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 459380136789071310ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3864226349973050640ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1348373689891364105ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__under_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6844888738137276053ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3455773035999336477ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 13812164492589299648ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17562496865558423146ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12847048015362371006ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7604915362161927675ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4354565351029955210ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18107749946033747467ull);
    vlSelf->top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18437184444141515148ull);
    vlSelf->top_verilator__DOT__u_uartdpi__DOT__ctx = 0;
    vlSelf->top_verilator__DOT__u_uartdpi__DOT__txactive = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14380231685974255246ull);
    vlSelf->top_verilator__DOT__u_uartdpi__DOT__txcount = 0;
    vlSelf->top_verilator__DOT__u_uartdpi__DOT__txcyccount = 0;
    vlSelf->top_verilator__DOT__u_uartdpi__DOT__txsymbol = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 603324047175170426ull);
    vlSelf->top_verilator__DOT__u_uartdpi__DOT__seen_reset = 0;
    vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxactive = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17166850750391902358ull);
    vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxcount = 0;
    vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxcyccount = 0;
    vlSelf->top_verilator__DOT__u_uartdpi__DOT__rxsymbol = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 452571287341033330ull);
    vlSelf->top_verilator__DOT__u_uartdpi__DOT__unnamedblk1__DOT__c = 0;
    vlSelf->__VdfgRegularize_h3c5bdd75_0_9 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 15537222061203554002ull);
    VL_SCOPED_RAND_RESET_W(108, vlSelf->__VdfgRegularize_h3c5bdd75_0_12, __VscopeHash, 15313140282232384870ull);
    VL_SCOPED_RAND_RESET_W(108, vlSelf->__VdfgRegularize_h3c5bdd75_0_13, __VscopeHash, 12338871959296374506ull);
    VL_SCOPED_RAND_RESET_W(92, vlSelf->__VdfgRegularize_h3c5bdd75_0_14, __VscopeHash, 10120710355804364587ull);
    VL_SCOPED_RAND_RESET_W(108, vlSelf->__VdfgRegularize_h3c5bdd75_0_15, __VscopeHash, 13969587993832176261ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_cb_insn__11__imm = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10020004542293536739ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_cb_insn__11__jump_target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6264375821619220339ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_compressed_store_insn__14__imm = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6848191004975389268ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_cb_insn__15__imm = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17229460543238329615ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_cb_insn__15__jump_target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11942918642166468357ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_compressed_store_insn__16__imm = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14514816535810283406ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_cb_insn__22__imm = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4055507940436188055ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_cb_insn__22__jump_target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3981087550456517268ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_cb_sr_insn__25__shamt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9047490373396411884ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_cb_sr_insn__28__shamt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8378410672404182807ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_cb_insn__43__imm = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3223738641305564999ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_cb_insn__43__jump_target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14586603813346759809ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_cb_sr_insn__46__shamt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15358045502751132079ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_cb_sr_insn__49__shamt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5230524607980191051ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_ci_caddi16sp_insn__52__nzimm = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11354381459282291808ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_ci_clui_insn__53__nzimm = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4158219626184860984ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_compressed_load_insn__56__imm = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1061255253831958995ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_ci_cli_insn__57__imm = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16788289760248451566ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_compressed_load_insn__58__imm = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14999589010073511755ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_ci_cslli_insn__63__shamt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8975861968467566995ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_ci_caddi_insn__64__nzimm = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8615453971531077141ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_ciw_insn__66__nzuimm = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10780071804974665806ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_b_insn__71__branch_target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17512493074229064069ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_b_insn__71__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14816540758360430684ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_b_insn__72__branch_target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15088181576865455003ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_b_insn__72__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7730189247709760060ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_b_insn__73__branch_target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2597482339593851418ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_b_insn__73__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2821220094889452058ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_b_insn__74__branch_target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11845067464681229261ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_b_insn__74__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2065643390721856878ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_b_insn__75__branch_target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7855546178859823914ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_b_insn__75__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16341731989098209234ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_b_insn__76__branch_target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14295345184070226627ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_b_insn__76__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6061993679660490375ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_i_shift_insn__84__shamt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6632111235687774739ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_i_shift_insn__85__shamt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17356959189319299048ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_i_shift_insn__86__shamt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4788014659240797475ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_csr_insn__97__csr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17104626645716325740ull);
    vlSelf->__Vfunc_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__get_csr_name__98__csr_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8521980337369640981ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_csr_insn__99__csr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1549855737266557867ull);
    vlSelf->__Vfunc_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__get_csr_name__100__csr_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12825690842735351072ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_csr_insn__101__csr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7739296613419179652ull);
    vlSelf->__Vfunc_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__get_csr_name__102__csr_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10078922479633047705ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_csr_insn__103__csr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7662887190975181876ull);
    vlSelf->__Vfunc_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__get_csr_name__104__csr_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4841183779965858796ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_csr_insn__105__csr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16771771186179215791ull);
    vlSelf->__Vfunc_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__get_csr_name__106__csr_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1087172984639205481ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_csr_insn__107__csr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7637006785578999979ull);
    vlSelf->__Vfunc_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__get_csr_name__108__csr_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8709311419186626280ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_load_insn__122__size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17757167278170677570ull);
    vlSelf->__Vfunc_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__get_fence_description__128__bits = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10310420961643662989ull);
    vlSelf->__Vfunc_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__get_fence_description__129__bits = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4108591487491054848ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_i_shift_insn__134__shamt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4823727437352035540ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_i_shift_insn__152__shamt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15980040889780934101ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_i_shift_insn__153__shamt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15431319956841073078ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_i_shift_insn__154__shamt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12184208968059130001ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_i_shift_insn__155__shamt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9681708670401512325ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_i_shift_insn__225__shamt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2529335948090956723ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_i_shift_insn__226__shamt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12922293465851653858ull);
    vlSelf->__Vtask_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__decode_i_funnelshift_insn__231__shamt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7349331111762547213ull);
    vlSelf->__Vfunc_mubi4_test_invalid__243__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8603847773502920652ull);
    vlSelf->__Vfunc_mubi4_test_invalid__243__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3638659410403671605ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__244__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8830707597879389447ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__244__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7262830966964124439ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__248__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9022570811669742233ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__248__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 671546191380870283ull);
    vlSelf->__Vdpi_export_trigger = 0;
    vlSelf->__Vfunc_get_bad_cmd_intg__250__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2762499074679032877ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__Vfunc_get_bad_cmd_intg__250__tl, __VscopeHash, 351522754517145392ull);
    vlSelf->__Vfunc_get_bad_cmd_intg__250__cmd_intg = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6120591893019384004ull);
    vlSelf->__Vfunc_get_cmd_intg__251__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16896264206107652064ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__Vfunc_get_cmd_intg__251__tl, __VscopeHash, 15779600199890051671ull);
    vlSelf->__Vfunc_get_cmd_intg__251__cmd_intg = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 901247889495375349ull);
    vlSelf->__Vfunc_get_cmd_intg__251__cmd = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 10054708475246523170ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__252__Vfuncout = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 10768609565404380729ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__Vfunc_extract_h2d_cmd_intg__252__tl, __VscopeHash, 12677526930971972971ull);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__252__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 1903497002339315458ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__253__Vfuncout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5380288732654330606ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__253__data_i = VL_SCOPED_RAND_RESET_Q(57, __VscopeHash, 15528325330571514670ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__253__data_o = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4325403559499087131ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__254__Vfuncout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3260336343159631268ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__254__data_i = VL_SCOPED_RAND_RESET_Q(57, __VscopeHash, 3825162266857421206ull);
    vlSelf->__Vfunc_prim_secded_inv_64_57_enc__254__data_o = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8421841165175900644ull);
    vlSelf->__Vfunc_get_bad_data_intg__255__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12570176227165317318ull);
    vlSelf->__Vfunc_get_bad_data_intg__255__data_intg = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17739907391853151099ull);
    vlSelf->__Vfunc_get_data_intg__256__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2870493902112461159ull);
    vlSelf->__Vfunc_get_data_intg__256__data_intg = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4343798854092161262ull);
    vlSelf->__Vfunc_get_data_intg__256__enc_data = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 7835126893516334799ull);
    vlSelf->__Vfunc_prim_secded_inv_39_32_enc__257__Vfuncout = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 16615650985525088272ull);
    vlSelf->__Vfunc_prim_secded_inv_39_32_enc__257__data_o = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 467500748450914760ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__258__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8904737514672820339ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__258__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5274252458542276360ull);
    vlSelf->__Vfunc_mubi4_test_invalid__259__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15443244221746400789ull);
    vlSelf->__Vfunc_mubi4_test_invalid__259__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16520166572839895504ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__260__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11903182117231043536ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__260__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13277030412979797490ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__262__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16997628585995027802ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__262__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3724589311252481276ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__263__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5946308089951423330ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__263__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12327908443412608765ull);
    vlSelf->__VdfgRegularize_ha026946b_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11897403603236695420ull);
    vlSelf->__VdfgRegularize_ha026946b_0_21 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8946566818985491704ull);
    vlSelf->__VdfgRegularize_ha026946b_0_29 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18017271620486179405ull);
    vlSelf->__VdfgRegularize_ha026946b_0_30 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18430854215609003145ull);
    vlSelf->__VdfgRegularize_ha026946b_0_31 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1926985117821469836ull);
    vlSelf->__VdfgRegularize_ha026946b_0_32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3500438582836649394ull);
    vlSelf->__VdfgRegularize_ha026946b_0_33 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 578755369281773444ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_ha026946b_0_34, __VscopeHash, 2152208834296930690ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_ha026946b_0_35, __VscopeHash, 13155999990860332079ull);
    VL_SCOPED_RAND_RESET_W(105, vlSelf->__VdfgRegularize_ha026946b_0_36, __VscopeHash, 1986157274527493266ull);
    vlSelf->__VdfgRegularize_ha026946b_0_37 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14606873634218542720ull);
    vlSelf->__VdfgRegularize_ha026946b_0_38 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9494156151122208178ull);
    vlSelf->__Vdly__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_tracer__DOT__cycle = 0;
    vlSelf->__Vdly__top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9664060310285151760ull);
    vlSelf->__Vdly__top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2797322629885858692ull);
    vlSelf->__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wdata__v0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14684261139327663928ull);
    vlSelf->__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wdata__v0 = 0;
    vlSelf->__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wdata__v1 = 0;
    vlSelf->__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rdata__v0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7534615280886773490ull);
    vlSelf->__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rdata__v0 = 0;
    vlSelf->__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rdata__v1 = 0;
    vlSelf->__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_wdata__v0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11572085904043196800ull);
    vlSelf->__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_wdata__v0 = 0;
    vlSelf->__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_wdata__v1 = 0;
    vlSelf->__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_addr__v0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14351918496385579371ull);
    vlSelf->__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_addr__v0 = 0;
    vlSelf->__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_addr__v1 = 0;
    vlSelf->__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_rdata__v0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14846075273265634536ull);
    vlSelf->__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_rdata__v0 = 0;
    vlSelf->__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_rdata__v1 = 0;
    vlSelf->__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_rdata__v0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13000268983819076481ull);
    vlSelf->__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_rdata__v0 = 0;
    vlSelf->__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_rdata__v1 = 0;
    vlSelf->__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_rdata__v0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9655872864416784842ull);
    vlSelf->__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_rdata__v0 = 0;
    vlSelf->__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_rdata__v1 = 0;
    vlSelf->__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_rdata__v0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6871082805164308078ull);
    vlSelf->__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_rdata__v0 = 0;
    vlSelf->__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_rdata__v1 = 0;
    vlSelf->__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_addr__v0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6411237979799167785ull);
    vlSelf->__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_addr__v0 = 0;
    vlSelf->__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_addr__v1 = 0;
    vlSelf->__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_addr__v0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1781027286674772879ull);
    vlSelf->__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_addr__v0 = 0;
    vlSelf->__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_addr__v1 = 0;
    vlSelf->__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_insn__v0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15931972781702398181ull);
    vlSelf->__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_insn__v0 = 0;
    vlSelf->__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_insn__v1 = 0;
    vlSelf->__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rmask__v0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6786233051637956945ull);
    vlSelf->__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rmask__v0 = 0;
    vlSelf->__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rmask__v1 = 0;
    vlSelf->__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wmask__v0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16960549461017700195ull);
    vlSelf->__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wmask__v0 = 0;
    vlSelf->__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wmask__v1 = 0;
    vlSelf->__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_valid__v0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17689673706023198685ull);
    vlSelf->__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_valid__v0 = 0;
    vlSelf->__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_addr__v0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12765306049050182640ull);
    vlSelf->__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_addr__v0 = 0;
    vlSelf->__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_addr__v1 = 0;
    vlSelf->__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_addr__v0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14337343291639411308ull);
    vlSelf->__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_addr__v0 = 0;
    vlSelf->__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_addr__v1 = 0;
    vlSelf->__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12425777762380769214ull);
    vlSelf->__VdlyDim0__top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 7955843832946248340ull);
    vlSelf->__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1597979086783921584ull);
    vlSelf->__VdlyDim0__top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1 = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 3409041541985102275ull);
    vlSelf->__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7274557317051627071ull);
    vlSelf->__VdlyDim0__top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2 = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 15186526164670384008ull);
    vlSelf->__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2 = 0;
    vlSelf->__VdlyVal__top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 579752948131592391ull);
    vlSelf->__VdlyDim0__top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3 = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 8174720580967595782ull);
    vlSelf->__VdlySet__top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13367751627039750176ull);
    vlSelf->__Vtrigprevexpr___TOP__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12409854847246044767ull);
    vlSelf->__Vtrigprevexpr___TOP__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_ready__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14719417612734708301ull);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec__1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17665545741724947249ull);
    vlSelf->__Vtrigprevexpr___TOP__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done__1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11934929095082506440ull);
    vlSelf->__Vtrigprevexpr___TOP__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_ready__1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15660343421516897346ull);
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12668644789224949103ull);
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2605432789578622122ull);
    vlSelf->__Vtrigprevexpr___TOP__top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__gen_no_rs3_flop__DOT__unused_clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14301687158307198971ull);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
