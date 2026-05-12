// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_verilator.h for the primary calling header

#include "Vtop_verilator__pch.h"
#include "Vtop_verilator__Syms.h"
#include "Vtop_verilator___024root.h"

extern const VlUnpacked<CData/*0:0*/, 128> Vtop_verilator__ConstPool__TABLE_h1108c7a2_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_verilator__ConstPool__TABLE_h1081b21f_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_verilator__ConstPool__TABLE_hb4c8edaf_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_verilator__ConstPool__TABLE_h6899625e_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop_verilator__ConstPool__TABLE_ha40c8fc7_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop_verilator__ConstPool__TABLE_h7cb7ed45_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop_verilator__ConstPool__TABLE_h98c9ea19_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop_verilator__ConstPool__TABLE_hc3f62677_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop_verilator__ConstPool__TABLE_hd5e7746b_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop_verilator__ConstPool__TABLE_h44cbadda_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop_verilator__ConstPool__TABLE_h4f37ef58_0;
extern const VlUnpacked<CData/*3:0*/, 32> Vtop_verilator__ConstPool__TABLE_hd6769704_0;

VL_INLINE_OPT void Vtop_verilator___024root___nba_comb__TOP__2(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___nba_comb__TOP__2\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_he98638a0_0_6;
    top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_he98638a0_0_6 = 0;
    QData/*33:0*/ __VdfgRegularize_h3c5bdd75_0_2;
    __VdfgRegularize_h3c5bdd75_0_2 = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    SData/*9:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*6:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*4:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [(0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                   >> 0x14U))];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [(0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                   >> 0xfU))];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_he98638a0_0_7 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_fetch_err)) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_fetch_err));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d__BRA__1__KET__ 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
            >> 2U) & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__2__KET__));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d__BRA__0__KET__ 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
            >> 1U) & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h7ff92a7d_0_7 
        = (1U & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                 | (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__icache_inval = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_access = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode 
        = (0x7fU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id);
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_wdata_d 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle)
            ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
           [(0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                      >> 0x14U))] : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_wdata_q);
    if ((0x40U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((0x20U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((0x10U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((8U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((0U == (7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0xcU)))) {
                            if ((0U == (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                        >> 0x14U))) {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec = 1U;
                            } else if ((1U == (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0x14U))) {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn = 1U;
                            } else if ((0x302U == (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x14U))) {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec = 1U;
                            } else if ((0x7b2U == (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x14U))) {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec = 1U;
                            } else if ((0x105U == (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x14U))) {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec = 1U;
                            } else {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                            if ((1U & (~ VL_ONEHOT_I(
                                                     ((((0x105U 
                                                         == 
                                                         (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                          >> 0x14U)) 
                                                        << 4U) 
                                                       | (((0x7b2U 
                                                            == 
                                                            (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x14U)) 
                                                           << 3U) 
                                                          | ((0x302U 
                                                              == 
                                                              (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                               >> 0x14U)) 
                                                             << 2U))) 
                                                      | (((1U 
                                                           == 
                                                           (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                            >> 0x14U)) 
                                                          << 1U) 
                                                         | (0U 
                                                            == 
                                                            (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x14U)))))))) {
                                if ((0U != ((((0x105U 
                                               == (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x14U)) 
                                              << 4U) 
                                             | (((0x7b2U 
                                                  == 
                                                  (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x14U)) 
                                                 << 3U) 
                                                | ((0x302U 
                                                    == 
                                                    (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x14U)) 
                                                   << 2U))) 
                                            | (((1U 
                                                 == 
                                                 (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x14U)) 
                                                << 1U) 
                                               | (0U 
                                                  == 
                                                  (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x14U)))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:594: Assertion failed in %Ntop_verilator.u_soc_mod.u_ibex_top_tracing.u_ibex_top.u_ibex_core.id_stage_i.decoder_i: unique case, but multiple matches found for '12'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1),
                                                     -12,
                                                     vlSymsp->name(),
                                                     12,
                                                     (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                      >> 0x14U));
                                        VL_STOP_MT("../src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_decoder.sv", 594, "");
                                    }
                                }
                            }
                            if ((IData)((0U != (0xf8f80U 
                                                & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)))) {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            if ((1U & (~ VL_ONEHOT_I(
                                                     (((3U 
                                                        == 
                                                        (3U 
                                                         & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                            >> 0xcU))) 
                                                       << 2U) 
                                                      | (((2U 
                                                           == 
                                                           (3U 
                                                            & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                               >> 0xcU))) 
                                                          << 1U) 
                                                         | (1U 
                                                            == 
                                                            (3U 
                                                             & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                >> 0xcU))))))))) {
                                if ((0U != (((3U == 
                                              (3U & 
                                               (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0xcU))) 
                                             << 2U) 
                                            | (((2U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0xcU))) 
                                                << 1U) 
                                               | (1U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                      >> 0xcU))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:630: Assertion failed in %Ntop_verilator.u_soc_mod.u_ibex_top_tracing.u_ibex_top.u_ibex_core.id_stage_i.decoder_i: unique case, but multiple matches found for '2'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1),
                                                     -12,
                                                     vlSymsp->name(),
                                                     2,
                                                     (3U 
                                                      & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0xcU)));
                                        VL_STOP_MT("../src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_decoder.sv", 630, "");
                                    }
                                }
                            }
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_access = 1U;
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel = 1U;
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                            if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0xeU)))) {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                            }
                            if ((1U == (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0xcU)))) {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 1U;
                            } else if ((2U == (3U & 
                                               (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0xcU)))) {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 2U;
                            } else if ((3U == (3U & 
                                               (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0xcU)))) {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 3U;
                            } else {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                            }
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
                        }
                    } else {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((8U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                            if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                            } else {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                            }
                        } else {
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                        if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                        } else {
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                        }
                        if ((0U != (7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0xcU)))) {
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                    } else {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec = 1U;
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                        = ((1U & (~ (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0xeU))) && 
                           (1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0xdU)));
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                } else {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((0x20U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((0x10U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((8U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            } else if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                    } else {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                    if ((5U == ((4U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                       >> 0x18U)) | 
                                (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                       >> 0xcU))))) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                >> 0x1fU)) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x40000000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                            = ((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x1dU)) || 
                               ((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                       >> 0x1cU)) || 
                                ((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                        >> 0x1bU)) 
                                 || ((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                            >> 0x1aU)) 
                                     || ((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x19U)) 
                                         || ((0x4000U 
                                              & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                              ? ((1U 
                                                  & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0xdU)) 
                                                 || (1U 
                                                     & (~ 
                                                        (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0xcU))))
                                              : ((1U 
                                                  & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0xdU)) 
                                                 || (1U 
                                                     & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                        >> 0xcU)))))))));
                    } else if ((0x20000000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x10000000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x8000000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x4000000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x2000000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((0x4000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            if ((0x2000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                if ((0x1000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 3U;
                                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                } else {
                                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 3U;
                                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                }
                            } else if ((0x1000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 2U;
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            } else {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 2U;
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            }
                        } else if ((0x2000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            if ((0x1000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            } else {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 1U;
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            }
                        } else if ((0x1000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                        } else {
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 0U;
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                        }
                    } else {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                    }
                } else {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else if ((8U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        } else if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        } else if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (~ VL_ONEHOT_I((((2U == (3U 
                                                   & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                      >> 0xcU))) 
                                           << 2U) | 
                                          (((1U == 
                                             (3U & 
                                              (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0xcU))) 
                                            << 1U) 
                                           | (0U == 
                                              (3U & 
                                               (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0xcU))))))))) {
                    if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_he9d5f5c2__0) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:306: Assertion failed in %Ntop_verilator.u_soc_mod.u_ibex_top_tracing.u_ibex_top.u_ibex_core.id_stage_i.decoder_i: unique case, but multiple matches found for '2'h%x'\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name(),
                                         2,(3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0xcU)));
                            VL_STOP_MT("../src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_decoder.sv", 306, "");
                        }
                    }
                }
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec = 1U;
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we = 1U;
                if ((0x4000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
                if ((0U == (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0xcU)))) {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 2U;
                } else if ((1U == (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                         >> 0xcU)))) {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 1U;
                } else if ((2U == (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                         >> 0xcU)))) {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 0U;
                } else {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((0x10U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((8U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        } else if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                } else {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                    = ((0x4000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                        ? ((1U & (~ (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0xdU))) && 
                           ((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 0xcU)) && ((1U 
                                                  & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x1aU)) 
                                                 || ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                      >> 0x1fU) 
                                                     || ((0x40000000U 
                                                          & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                          ? 
                                                         ((1U 
                                                           & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                              >> 0x1dU)) 
                                                          || ((1U 
                                                               & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                  >> 0x1cU)) 
                                                              || ((1U 
                                                                   & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                      >> 0x1bU)) 
                                                                  || (0U 
                                                                      != 
                                                                      (3U 
                                                                       & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                          >> 0x19U))))))
                                                          : 
                                                         ((1U 
                                                           & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                              >> 0x1dU)) 
                                                          || ((1U 
                                                               & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                  >> 0x1cU)) 
                                                              || ((1U 
                                                                   & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                      >> 0x1bU)) 
                                                                  || (0U 
                                                                      != 
                                                                      (3U 
                                                                       & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                          >> 0x19U)))))))))))
                        : ((1U & (~ (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0xdU))) && 
                           ((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 0xcU)) && ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x1fU) 
                                                 || ((1U 
                                                      & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x1eU)) 
                                                     || ((1U 
                                                          & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x1dU)) 
                                                         || ((1U 
                                                              & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                 >> 0x1cU)) 
                                                             || ((1U 
                                                                  & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                     >> 0x1bU)) 
                                                                 || (0U 
                                                                     != 
                                                                     (3U 
                                                                      & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                         >> 0x19U)))))))))));
            } else {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((8U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (~ VL_ONEHOT_I((((1U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0xcU))) 
                                               << 1U) 
                                              | (0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0xcU)))))))) {
                        if ((0U != (((1U == (7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0xcU))) 
                                     << 1U) | (0U == 
                                               (7U 
                                                & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:566: Assertion failed in %Ntop_verilator.u_soc_mod.u_ibex_top_tracing.u_ibex_top.u_ibex_core.id_stage_i.decoder_i: unique case, but multiple matches found for '3'h%x'\n",0,
                                             64,VL_TIME_UNITED_Q(1),
                                             -12,vlSymsp->name(),
                                             3,(7U 
                                                & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0xcU)));
                                VL_STOP_MT("../src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_decoder.sv", 566, "");
                            }
                        }
                    }
                    if ((0U == (7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0xcU)))) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                    } else if ((1U == (7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0xcU)))) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                        if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__icache_inval = 1U;
                        }
                    } else {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    } else if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((1U & (~ VL_ONEHOT_I((((2U == (3U & 
                                               (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0xcU))) 
                                       << 2U) | (((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                       >> 0xcU))) 
                                                  << 1U) 
                                                 | (0U 
                                                    == 
                                                    (3U 
                                                     & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                        >> 0xcU))))))))) {
                if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_he9d5f5c2__0) {
                    if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:323: Assertion failed in %Ntop_verilator.u_soc_mod.u_ibex_top_tracing.u_ibex_top.u_ibex_core.id_stage_i.decoder_i: unique case, but multiple matches found for '2'h%x'\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     2,(3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0xcU)));
                        VL_STOP_MT("../src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_decoder.sv", 323, "");
                    }
                }
            }
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec = 1U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 0U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext 
                = (1U & (~ (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                            >> 0xeU)));
            if ((0U == (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                              >> 0xcU)))) {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 2U;
            } else if ((1U == (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0xcU)))) {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 1U;
            } else if ((2U == (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0xcU)))) {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 0U;
                if ((0x4000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    }
    if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_c_insn_id) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    }
    if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_access = 0U;
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0x2cU;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 3U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu 
        = (0x7fU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id);
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__mult_sel_ex = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__div_sel_ex = 0U;
    if ((0x40U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((0x20U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((0x10U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if ((0U == (7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                } else {
                                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 0U;
                                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec 
                                        = ((0x4000U 
                                            & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                            ? 3U : 0U);
                                }
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 4U;
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                            } else {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                        } else {
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                        }
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((0x4000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x2000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                ? ((0x1000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                    ? 0x1cU : 0x1aU)
                                : ((0x1000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                    ? 0x1bU : 0x19U));
                    } else if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                         >> 0xdU)))) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x1000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                ? 0x1eU : 0x1dU);
                    }
                    if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                    } else {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 2U;
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                    }
                }
            }
        }
    } else if ((0x20U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((0x10U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 3U;
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 3U;
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                        if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x1aU)))) {
                            if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x1fU)))) {
                                if ((0x40000000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                    if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x1dU)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x1cU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x1bU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x1aU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x19U)))) {
                                                        if (
                                                            (0x4000U 
                                                             & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                     >> 0xdU)))) {
                                                                if (
                                                                    (0x1000U 
                                                                     & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 8U;
                                                                }
                                                            }
                                                        } else if (
                                                                   (1U 
                                                                    & (~ 
                                                                       (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                        >> 0xdU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                     >> 0xcU)))) {
                                                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x1dU)))) {
                                    if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x1cU)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x1bU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x1aU)))) {
                                                if (
                                                    (0x2000000U 
                                                     & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x4000U 
                                                         & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                        if (
                                                            (0x2000U 
                                                             & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                            if (
                                                                (0x1000U 
                                                                 & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__div_sel_ex = 1U;
                                                            } else {
                                                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__div_sel_ex = 1U;
                                                            }
                                                        } else if (
                                                                   (0x1000U 
                                                                    & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__div_sel_ex = 1U;
                                                        } else {
                                                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__div_sel_ex = 1U;
                                                        }
                                                    } else if (
                                                               (0x2000U 
                                                                & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                        if (
                                                            (0x1000U 
                                                             & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__mult_sel_ex = 1U;
                                                        } else {
                                                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__mult_sel_ex = 1U;
                                                        }
                                                    } else if (
                                                               (0x1000U 
                                                                & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__mult_sel_ex = 1U;
                                                    } else {
                                                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__mult_sel_ex = 1U;
                                                    }
                                                } else {
                                                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator 
                                                        = 
                                                        ((0x4000U 
                                                          & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                          ? 
                                                         ((0x2000U 
                                                           & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                           ? 
                                                          ((0x1000U 
                                                            & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                            ? 4U
                                                            : 3U)
                                                           : 
                                                          ((0x1000U 
                                                            & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                            ? 9U
                                                            : 2U))
                                                          : 
                                                         ((0x2000U 
                                                           & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                           ? 
                                                          ((0x1000U 
                                                            & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                            ? 0x2cU
                                                            : 0x2bU)
                                                           : 
                                                          ((0x1000U 
                                                            & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                            ? 0xaU
                                                            : 0U)));
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
        } else if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                             >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                        if ((1U & (~ (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0xeU)))) {
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 1U;
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        }
                    }
                }
            }
        }
    } else if ((0x10U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 3U;
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                    if ((0x4000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((0x2000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator 
                                = ((0x1000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                    ? 4U : 3U);
                        } else if ((0x1000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            if ((0U == (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                        >> 0x1bU))) {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 9U;
                            } else if ((8U == (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0x1bU))) {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 8U;
                            }
                        } else {
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 2U;
                        }
                    } else {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x2000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                ? ((0x1000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                    ? 0x2cU : 0x2bU)
                                : ((0x1000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                    ? 0xaU : 0U));
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((0U == (7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0xcU)))) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                    } else if ((1U == (7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0xcU)))) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                    }
                    if ((1U & (~ VL_ONEHOT_I((((1U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0xcU))) 
                                               << 1U) 
                                              | (0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0xcU)))))))) {
                        if ((0U != (((1U == (7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0xcU))) 
                                     << 1U) | (0U == 
                                               (7U 
                                                & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:1141: Assertion failed in %Ntop_verilator.u_soc_mod.u_ibex_top_tracing.u_ibex_top.u_ibex_core.id_stage_i.decoder_i: unique case, but multiple matches found for '3'h%x'\n",0,
                                             64,VL_TIME_UNITED_Q(1),
                                             -12,vlSymsp->name(),
                                             3,(7U 
                                                & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0xcU)));
                                VL_STOP_MT("../src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_decoder.sv", 1141, "");
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                         >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
            }
        }
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
        = (1ULL | ((QData)((IData)((~ vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex))) 
                   << 1U));
    if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
        if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b 
                = (0xffffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex 
                              >> 0x10U));
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a 
                = (0xffffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex 
                              >> 0x10U));
        } else {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b 
                = (0xffffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex);
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a 
                = (0xffffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex 
                              >> 0x10U));
        }
    } else {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b 
            = (0xffffU & ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                           ? (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex 
                              >> 0x10U) : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex));
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a 
            = (0xffffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex);
    }
    if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
                = ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ (IData)(
                                                          vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                                          [0U])))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ (IData)(
                                                                             vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q
                                                                             [1U])))) 
                                                  << 1U)));
        }
    } else {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
            = ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ (IData)(
                                                          vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q
                                                          [1U])))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex))) 
                                                  << 1U)))
                : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex))) 
                                                  << 1U))));
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)))))))) {
        if ((0U != (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_id_stage.sv:423: Assertion failed in %Ntop_verilator.u_soc_mod.u_ibex_top_tracing.u_ibex_top.u_ibex_core.id_stage_i.rf_wdata_id_mux: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel));
                VL_STOP_MT("../src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_id_stage.sv", 423, "");
            }
        }
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a 
        = (1U & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
                  [(0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                             >> 0xfU))] >> 0x1fU) & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b 
        = (IData)((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                    >> 1U) & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
                              [(0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                         >> 0x14U))] 
                              >> 0x1fU)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a 
        = ((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q) 
                  >> 1U)) && (1U & ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                                     ? ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                                        & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex 
                                           >> 0x1fU))
                                     : ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                                        & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex 
                                           >> 0x1fU)))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op 
        = ((IData)(((0U == (0xf8000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                    & ((2U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op)) 
                       | (3U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op)))))
            ? 0U : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
        [0U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b 
            = ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q)) 
               && (IData)((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                            >> 1U) & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex 
                                      >> 0x1fU))));
        if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d = 0U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold = 0U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = ((0x3fffc0000ULL & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum) 
                   | (IData)((IData)((0x3ffffU & (IData)(
                                                         (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                                          [0U] 
                                                          >> 0x10U))))));
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = ((0x3ffffULL & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum) 
                   | ((QData)((IData)((0xffffU & (- (IData)(
                                                            ((0U 
                                                              != (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode)) 
                                                             & (IData)(
                                                                       (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                                                        [0U] 
                                                                        >> 0x21U)))))))) 
                      << 0x12U));
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = 1U;
        } else if ((0U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d = 0U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold = 0U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = (QData)((IData)((0xffffU & (IData)(
                                                     (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                                      [0U] 
                                                      >> 0x10U)))));
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = 1U;
        } else {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d = 3U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                [0U];
        }
    } else {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b 
            = ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q)) 
               && (IData)((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                            >> 1U) & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex 
                                      >> 0x1fU))));
        if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d = 2U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = (QData)((IData)((0xffffU & (IData)(
                                                     (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                                      [0U] 
                                                      >> 0x10U)))));
        } else {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d = 1U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum = 0ULL;
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type)) 
                                << 1U) | (0U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_core.sv:1731: Assertion failed in %Ntop_verilator.u_soc_mod.u_ibex_top_tracing.u_ibex_top.u_ibex_core: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type));
                VL_STOP_MT("../src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_core.sv", 1731, "");
            }
        }
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_mask_int 
        = ((0U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type))
            ? 0xfU : ((1U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type))
                       ? 3U : ((2U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type))
                                ? 1U : 0U)));
    if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 6U;
    } else {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec;
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__mult_sel_ex));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__div_sel_ex));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__div_sel_ex) 
           | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__mult_sel_ex));
    if ((1U & (~ VL_ONEHOT_I(((((4U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                                | (7U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))) 
                               << 1U) | ((3U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                                         | (6U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))))))) {
        if ((0U != ((((4U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                      | (7U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))) 
                     << 1U) | ((3U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                               | (6U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_alu.sv:392: Assertion failed in %Ntop_verilator.u_soc_mod.u_ibex_top_tracing.u_ibex_top.u_ibex_core.ex_block_i.alu_i: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("../src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_alu.sv", 392, "");
            }
        }
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d 
        = (0x3ffffffffULL & ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                              ? ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                                  ? ((0x7ffffffffULL 
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
                                        & VL_EXTENDS_QQ(35,34, vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)))
                                  : ((0U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                                      ? (((QData)((IData)(
                                                          (0xffffU 
                                                           & ((IData)(
                                                                      (0x7ffffffffULL 
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
                                                                                | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))))) 
                                                              + (IData)(
                                                                        (0x7ffffffffULL 
                                                                         & VL_EXTENDS_QQ(35,34, vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(
                                                                      vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                                                      [0U])))))
                                      : ((0x7ffffffffULL 
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
                                            & VL_EXTENDS_QQ(35,34, vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)))))
                              : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                                  ? ((0U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                                      ? (((QData)((IData)(
                                                          (0xffffU 
                                                           & ((IData)(
                                                                      (0x7ffffffffULL 
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
                                                                                | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))))) 
                                                              + (IData)(
                                                                        (0x7ffffffffULL 
                                                                         & VL_EXTENDS_QQ(35,34, vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(
                                                                      vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                                                      [0U])))))
                                      : ((0x7ffffffffULL 
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
                                            & VL_EXTENDS_QQ(35,34, vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))
                                  : ((0x7ffffffffULL 
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
                                        & VL_EXTENDS_QQ(35,34, vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))));
    __Vtableidx5 = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left 
        = Vtop_verilator__ConstPool__TABLE_h1108c7a2_0
        [__Vtableidx5];
    __Vtableidx3 = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed 
        = Vtop_verilator__ConstPool__TABLE_h1081b21f_0
        [__Vtableidx3];
    __Vtableidx2 = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1 
        = Vtop_verilator__ConstPool__TABLE_hb4c8edaf_0
        [__Vtableidx2];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2 
        = Vtop_verilator__ConstPool__TABLE_hb4c8edaf_0
        [__Vtableidx2];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3 
        = Vtop_verilator__ConstPool__TABLE_hb4c8edaf_0
        [__Vtableidx2];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate 
        = Vtop_verilator__ConstPool__TABLE_h6899625e_0
        [__Vtableidx2];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr 
        = ((1U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op)) 
           | ((2U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op)) 
              | (3U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op))));
    __Vtableidx1 = ((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q) 
                      << 5U) | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q) 
                                 << 4U) | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn) 
                                           << 3U))) 
                    | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn) 
                        << 2U) | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) 
                                   << 1U) | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio 
        = Vtop_verilator__ConstPool__TABLE_ha40c8fc7_0
        [__Vtableidx1];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio 
        = Vtop_verilator__ConstPool__TABLE_h7cb7ed45_0
        [__Vtableidx1];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio 
        = Vtop_verilator__ConstPool__TABLE_h98c9ea19_0
        [__Vtableidx1];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio 
        = Vtop_verilator__ConstPool__TABLE_hc3f62677_0
        [__Vtableidx1];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio 
        = Vtop_verilator__ConstPool__TABLE_hd5e7746b_0
        [__Vtableidx1];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio 
        = Vtop_verilator__ConstPool__TABLE_h44cbadda_0
        [__Vtableidx1];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
        = ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
            ? ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                    ? 0U : (0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0xfU))) : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_id)
            : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q
                : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
               [(0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                          >> 0xfU))]));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec) 
            | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req))
            ? ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                ? ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? 4U : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                             ? ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_is_compressed_id)
                                 ? 2U : 4U) : (((- (IData)(
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
                        ? (0xfffff000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                        : (((- (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                        >> 0x1fU))) 
                            << 0xdU) | (((0x1000U & 
                                          (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
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
                        ? (((- (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                        >> 0x1fU))) 
                            << 0xcU) | ((0xfe0U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                            >> 7U))))
                        : (((- (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                        >> 0x1fU))) 
                            << 0xcU) | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                        >> 0x14U)))))
            : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
           [(0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                      >> 0x14U))]);
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec) 
           | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_valid 
        = ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel))) 
           || ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid) 
               | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid)));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate) 
                               << 1U) | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)))))) {
        if ((0U != (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate) 
                     << 1U) | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_alu.sv:97: Assertion failed in %Ntop_verilator.u_soc_mod.u_ibex_top_tracing.u_ibex_top.u_ibex_core.ex_block_i.alu_i: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("../src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_alu.sv", 97, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I(((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3) 
                                << 3U) | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2) 
                                          << 2U)) | 
                              (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1) 
                                << 1U) | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel))))))) {
        if ((0U != ((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3) 
                      << 3U) | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2) 
                                << 2U)) | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_alu.sv:85: Assertion failed in %Ntop_verilator.u_soc_mod.u_ibex_top_tracing.u_ibex_top.u_ibex_core.ex_block_i.alu_i: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("../src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_alu.sv", 85, "");
            }
        }
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((((((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                << 0x1fU) | (0x40000000U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                            << 0x1dU))) 
              | ((0x20000000U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                 << 0x1bU)) | (0x10000000U 
                                               & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                  << 0x19U)))) 
             | (((0x8000000U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                << 0x17U)) | (0x4000000U 
                                              & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                 << 0x15U))) 
                | ((0x2000000U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                  << 0x13U)) | (0x1000000U 
                                                & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                   << 0x11U))))) 
            | ((((0x800000U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                               << 0xfU)) | (0x400000U 
                                            & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                               << 0xdU))) 
                | ((0x200000U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                 << 0xbU)) | (0x100000U 
                                              & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                 << 9U)))) 
               | (((0x80000U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                << 7U)) | (0x40000U 
                                           & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                              << 5U))) 
                  | ((0x20000U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                  << 3U)) | (0x10000U 
                                             & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                << 1U)))))) 
           | (((((0x8000U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                             >> 1U)) | (0x4000U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                   >> 3U))) 
                | ((0x2000U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                               >> 5U)) | (0x1000U & 
                                          (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                           >> 7U)))) 
               | (((0x800U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                              >> 9U)) | (0x400U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                   >> 0xbU))) 
                  | ((0x200U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                >> 0xdU)) | (0x100U 
                                             & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                >> 0xfU))))) 
              | ((((0x80U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                             >> 0x11U)) | (0x40U & 
                                           (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                            >> 0x13U))) 
                  | ((0x20U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                               >> 0x15U)) | (0x10U 
                                             & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                >> 0x17U)))) 
                 | (((8U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                            >> 0x19U)) | (4U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                >> 0x1bU))) 
                    | ((2U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                              >> 0x1dU)) | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                            >> 0x1fU))))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result 
        = (((3U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
            | (6U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))
            ? (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
               | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b)
            : (((4U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                | (7U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))
                ? (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                   & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b)
                : (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                   ^ vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_access)
            ? (0xfffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b)
            : 0U);
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
        = (0x3ffffffffULL & (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                               ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                               : ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1)
                                   ? (1ULL | ((QData)((IData)(
                                                              (0x7fffffffU 
                                                               & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a))) 
                                              << 2U))
                                   : ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2)
                                       ? (1ULL | ((QData)((IData)(
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
                                                 << 1U)))))) 
                             + (0x1ffffffffULL & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                                   ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b
                                                   : 
                                                  ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                                                    ? 
                                                   (~ 
                                                    ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b)) 
                                                     << 1U))
                                                    : 
                                                   ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b)) 
                                                    << 1U))))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dbg_csr = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                  >> 0xbU)))) {
        if ((0x400U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
            if ((0x200U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                if ((0x100U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                    if ((0x80U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                      >> 6U)))) {
                            if ((0x20U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                if ((0x10U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                                    >> 2U)))) {
                                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dbg_csr = 1U;
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
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 0U;
    if ((0x800U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
        if ((0x400U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
            if ((0x200U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                if ((0x100U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                    if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                  >> 7U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                      >> 6U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                          >> 5U)))) {
                                if ((0x10U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                                     >> 1U)))) {
                                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                            }
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))
                                                    ? 0U
                                                    : 0x16U);
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((0x80U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x40U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x20U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x10U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                        if ((8U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                            if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        } else if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                             >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)))) {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        }
                    } else {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        } else if ((0x200U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
            if ((0x100U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                if ((0x80U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                    if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                      >> 5U)))) {
                            if ((0x10U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x1fU 
                                                 & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))] 
                                               >> 0x20U));
                            } else if ((8U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x1fU 
                                                 & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))] 
                                               >> 0x20U));
                            } else if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x1fU 
                                                 & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))] 
                                               >> 0x20U));
                            } else if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x1fU 
                                                 & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))] 
                                               >> 0x20U));
                            } else if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)))) {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x1fU 
                                                 & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))] 
                                               >> 0x20U));
                            }
                        }
                    }
                    if ((0x40U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x20U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                         >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                      >> 5U)))) {
                            if ((0x10U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                              [(0x1fU 
                                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))]);
                            } else if ((8U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                              [(0x1fU 
                                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))]);
                            } else if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                              [(0x1fU 
                                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))]);
                            } else if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                              [(0x1fU 
                                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))]);
                            } else if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)))) {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                              [(0x1fU 
                                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))]);
                            }
                        }
                    }
                    if ((0x40U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x20U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                         >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        } else {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
        }
    } else if ((0x400U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
        if ((0x200U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
            if ((0x100U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                if ((0x80U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                    if ((0x40U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                      >> 5U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                          >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                                    >> 1U)))) {
                                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))
                                                    ? 0U
                                                    : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q));
                                        }
                                    }
                                }
                            }
                        }
                        if ((0x20U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((0x10U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((8U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        }
                    } else if ((0x20U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                        if ((0x10U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                              >> 2U)))) {
                                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                        = ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))
                                                ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q
                                                : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q)
                                            : ((1U 
                                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))
                                                ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q
                                                : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q));
                                }
                            }
                            if ((8U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            } else if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        } else {
                            if ((8U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                        if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)))) {
                                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                        }
                                    } else if ((1U 
                                                & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)))) {
                                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                                 >> 2U)))) {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                            }
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        }
                    } else {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        } else {
            if ((0x100U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                if ((0x80U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                    if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                  >> 6U)))) {
                        if ((0x20U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                          >> 4U)))) {
                                if ((8U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)))) {
                                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
        }
    } else if ((0x200U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
        if ((0x100U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
            if ((0x80U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                              >> 6U)))) {
                    if ((0x20U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                        if ((0x10U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = ((8U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))
                                    ? ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))
                                        ? ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))
                                                ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xfU]
                                                : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xeU])
                                            : ((1U 
                                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))
                                                ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xdU]
                                                : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xcU]))
                                        : ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))
                                                ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xbU]
                                                : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xaU])
                                            : ((1U 
                                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))
                                                ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [9U]
                                                : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [8U])))
                                    : ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))
                                        ? ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))
                                                ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [7U]
                                                : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [6U])
                                            : ((1U 
                                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))
                                                ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [5U]
                                                : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [4U]))
                                        : ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))
                                                ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [3U]
                                                : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [2U])
                                            : ((1U 
                                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))
                                                ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [1U]
                                                : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0U]))));
                        } else if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                             >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                          >> 2U)))) {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))
                                        ? ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))
                                            ? (((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                 [0xfU] 
                                                 << 0x18U) 
                                                | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [0xeU] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [0xdU] 
                                                   << 8U) 
                                                  | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                  [0xcU]))
                                            : (((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                 [0xbU] 
                                                 << 0x18U) 
                                                | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [0xaU] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [9U] 
                                                   << 8U) 
                                                  | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                  [8U])))
                                        : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))
                                            ? (((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                 [7U] 
                                                 << 0x18U) 
                                                | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [6U] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [5U] 
                                                   << 8U) 
                                                  | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                  [4U]))
                                            : (((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                 [3U] 
                                                 << 0x18U) 
                                                | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [2U] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [1U] 
                                                   << 8U) 
                                                  | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                  [0U]))));
                            }
                        }
                    }
                }
                if ((0x40U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x20U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                    if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        }
                    }
                } else {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else if ((0x40U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)))) {
                                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = (0xfffffff7U 
                                               & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int);
                                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = (0xffffff7fU 
                                               & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int);
                                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = (0xfffff7ffU 
                                               & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int);
                                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = (0x8000ffffU 
                                               & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int);
                                    }
                                }
                            } else {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))
                                        ? ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))
                                            ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q
                                            : (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q)))) 
                                                << 0x1fU) 
                                               | ((((0x40U 
                                                     & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q))
                                                     ? 0x3ffffffU
                                                     : 0U) 
                                                   << 5U) 
                                                  | (0x1fU 
                                                     & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q)))))
                                        : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))
                                            ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q
                                            : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q));
                            }
                        }
                    }
                }
                if ((0x20U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x10U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((8U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                    if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                }
            } else if ((0x20U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                if ((0x10U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
                        [(0x1fU & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))];
                } else if ((8U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
                        [(0x1fU & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))];
                } else if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
                        [(0x1fU & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))];
                } else if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                    if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
                            [(0x1fU & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))];
                    }
                } else if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)))) {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)))) {
                                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                }
                            } else if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        }
                    }
                }
            } else if ((0x10U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                if ((8U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                    if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                            if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)))) {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                        if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        }
                    } else {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else {
                    if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)))) {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                        if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)))) {
                            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                        }
                    }
                }
                if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                    if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                    if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)))) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    }
                    if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q;
                } else {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xfffffff7U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (8U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                    >> 0xeU)));
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xffffff7fU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x80U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                       >> 9U)));
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xfffff7ffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x800U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                        >> 4U)));
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0x8000ffffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x7fff0000U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                             << 0x10U)));
                }
            } else {
                if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0x40101104U;
                    } else {
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                            = ((0xfffffff7U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                               | (8U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                        >> 2U)));
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                            = ((0xffffff7fU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                               | (0x80U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                           << 3U)));
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                            = ((0xffffe7ffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                               | (0x1800U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                             << 9U)));
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                            = ((0xfffdffffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                               | (0x20000U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                              << 0x10U)));
                        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                            = ((0xffdfffffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                               | (0x200000U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                               << 0x15U)));
                    }
                }
                if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            }
        } else {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
        }
    } else {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
    }
    if (((0x3a0U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)) 
         | ((0x3a1U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)) 
            | ((0x3a2U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)) 
               | ((0x3a3U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)) 
                  | ((0x3b0U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)) 
                     | ((0x3b1U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)) 
                        | ((0x3b2U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)) 
                           | ((0x3b3U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)) 
                              | ((0x3b4U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)) 
                                 | ((0x3b5U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)) 
                                    | ((0x3b6U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)) 
                                       | ((0x3b7U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)) 
                                          | ((0x3b8U 
                                              == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)) 
                                             | ((0x3b9U 
                                                 == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)) 
                                                | ((0x3baU 
                                                    == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)) 
                                                   | ((0x3bbU 
                                                       == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)) 
                                                      | ((0x3bcU 
                                                          == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)) 
                                                         | ((0x3bdU 
                                                             == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)) 
                                                            | ((0x3beU 
                                                                == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)) 
                                                               | (0x3bfU 
                                                                  == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr)))))))))))))))))))))) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d 
        = (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q
                  [1U]);
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access 
        = (((0U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type)) 
            & (0U != (3U & (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                    >> 1U))))) | (IData)(
                                                         ((1U 
                                                           == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type)) 
                                                          & (6ULL 
                                                             == 
                                                             (6ULL 
                                                              & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal 
        = (1U & ((1U & ((IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                 [0U] >> 0x1fU)) ^ (IData)(
                                                           (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q
                                                            [1U] 
                                                            >> 0x1fU))))
                  ? (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                             [0U] >> 0x1fU)) : (~ (IData)(
                                                          (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                           >> 0x20U)))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__addr_hit 
        = ((((((0xcU == (0xfU & (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                         >> 3U)))) 
               << 0xcU) | ((0xbU == (0xfU & (IData)(
                                                    (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                     >> 3U)))) 
                           << 0xbU)) | (((0xaU == (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                              >> 3U)))) 
                                         << 0xaU) | 
                                        ((9U == (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                            >> 3U)))) 
                                         << 9U))) | 
            (((8U == (0xfU & (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                      >> 3U)))) << 8U) 
             | (((7U == (0xfU & (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                         >> 3U)))) 
                 << 7U) | ((6U == (0xfU & (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                   >> 3U)))) 
                           << 6U)))) | ((((5U == (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                             >> 3U)))) 
                                          << 5U) | 
                                         (((4U == (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                              >> 3U)))) 
                                           << 4U) | 
                                          ((3U == (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                              >> 3U)))) 
                                           << 3U))) 
                                        | (((2U == 
                                             (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                         >> 3U)))) 
                                            << 2U) 
                                           | (((1U 
                                                == 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                            >> 3U)))) 
                                               << 1U) 
                                              | (0U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                             >> 3U))))))));
    __Vtableidx4 = (((0U != (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                     >> 1U))) << 9U) 
                    | ((0x100U & ((((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                     ^ vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b) 
                                    >> 0x1fU) ? ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                  >> 0x1fU) 
                                                 ^ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                    : (~ (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                  >> 0x20U)))) 
                                  << 8U)) | (((0U == (IData)(
                                                             (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                              >> 1U))) 
                                              << 7U) 
                                             | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result 
        = Vtop_verilator__ConstPool__TABLE_h4f37ef58_0
        [__Vtableidx4];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_wdata 
        = ((1U & (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                          >> 2U))) ? ((1U & (IData)(
                                                    (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                     >> 1U)))
                                       ? ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
                                           [(0x1fU 
                                             & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x14U))] 
                                           << 0x18U) 
                                          | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
                                             [(0x1fU 
                                               & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x14U))] 
                                             >> 8U))
                                       : ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
                                           [(0x1fU 
                                             & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x14U))] 
                                           << 0x10U) 
                                          | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
                                             [(0x1fU 
                                               & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x14U))] 
                                             >> 0x10U)))
            : ((1U & (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                              >> 1U))) ? ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
                                           [(0x1fU 
                                             & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x14U))] 
                                           << 8U) | 
                                          (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
                                           [(0x1fU 
                                             & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x14U))] 
                                           >> 0x18U))
                : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
               [(0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                          >> 0x14U))]));
    __Vtableidx6 = (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q) 
                     << 4U) | ((0xcU & ((IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                 >> 1U)) 
                                        << 2U)) | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be 
        = Vtop_verilator__ConstPool__TABLE_hd6769704_0
        [__Vtableidx6];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left)
            ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev
            : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a);
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
        = (0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                           (((QData)((IData)(
                                                             ((8U 
                                                               == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                                                              & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand 
                                                                 >> 0x1fU)))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand))), 
                                           (0x1fU & 
                                            ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle)
                                              ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b
                                              : (- vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b)))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
        = ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op))
            ? ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op))
                ? ((~ vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a) 
                   & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int)
                : (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                   | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int))
            : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a);
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_access) 
           & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr) 
              | ((IData)(((0xc00U == (0xc00U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr))) 
                          & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr))) 
                 | (((3U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_addr) 
                            >> 8U)) > (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                    | ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                       & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dbg_csr))))));
    if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                if ((2U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))) {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d 
                        = (0U == (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                          >> 1U)));
                }
            }
            if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d 
                    = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a)
                        ? (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                   >> 1U)) : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex);
            }
        }
        if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d 
                    = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)
                        ? (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                   >> 1U)) : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex);
            }
        }
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1U] 
        = (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d));
    if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder 
            = (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                       >> 1U));
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient 
            = ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q)) 
               | (QData)((IData)(((IData)(1U) << (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q)))));
    } else {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder 
            = (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q
                      [0U]);
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient 
            = (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q));
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d 
        = ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
            ? ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? 0U : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                         ? 6U : 5U)) : ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                                         ? ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                                             ? ((1U 
                                                 == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q))
                                                 ? 4U
                                                 : 3U)
                                             : 3U) : 
                                        ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                                          ? 2U : ((2U 
                                                   == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                                                   ? 
                                                  (((~ 
                                                     ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                                      >> 1U)) 
                                                    & (0U 
                                                       == (IData)(
                                                                  (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                   >> 1U))))
                                                    ? 6U
                                                    : 1U)
                                                   : 
                                                  (((~ 
                                                     ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                                      >> 1U)) 
                                                    & (0U 
                                                       == (IData)(
                                                                  (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                   >> 1U))))
                                                    ? 6U
                                                    : 1U)))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_d_ex[1U] 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
            ? (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d))
            : 0ULL);
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_addr_d 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle)
            ? (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                       >> 1U)) : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_addr_q);
    if ((1U & (~ VL_ONEHOT_I((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__addr_hit))))) {
        if ((0U != (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__addr_hit))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: uart_reg_top.sv:1668: Assertion failed in %Ntop_verilator.u_soc_mod.u_uart.u_reg: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("../src/lowrisc_ip_uart_0.1/rtl/uart_reg_top.sv", 1668, "");
            }
        }
    }
    if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_0 
            = (0xfU & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be)));
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_0 
            = ((0xfU == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be))
                ? 0U : 1U);
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__ibex_lsu_host_adapter__DOT__tl_be 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be;
    } else {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_0 = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_0 = 4U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__ibex_lsu_host_adapter__DOT__tl_be = 0xfU;
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = (((((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed) 
                << 0x1fU) | (0x40000000U & ((IData)(
                                                    (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                     >> 1U)) 
                                            << 0x1eU))) 
              | ((0x20000000U & ((IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                          >> 2U)) << 0x1dU)) 
                 | (0x10000000U & ((IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                            >> 3U)) 
                                   << 0x1cU)))) | (
                                                   ((0x8000000U 
                                                     & ((IData)(
                                                                (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                                 >> 4U)) 
                                                        << 0x1bU)) 
                                                    | (0x4000000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                                   >> 5U)) 
                                                          << 0x1aU))) 
                                                   | ((0x2000000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                                   >> 6U)) 
                                                          << 0x19U)) 
                                                      | (0x1000000U 
                                                         & ((IData)(
                                                                    (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                                     >> 7U)) 
                                                            << 0x18U))))) 
            | ((((0x800000U & ((IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                        >> 8U)) << 0x17U)) 
                 | (0x400000U & ((IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                          >> 9U)) << 0x16U))) 
                | ((0x200000U & ((IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                          >> 0xaU)) 
                                 << 0x15U)) | (0x100000U 
                                               & ((IData)(
                                                          (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                           >> 0xbU)) 
                                                  << 0x14U)))) 
               | (((0x80000U & ((IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                         >> 0xcU)) 
                                << 0x13U)) | (0x40000U 
                                              & ((IData)(
                                                         (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                          >> 0xdU)) 
                                                 << 0x12U))) 
                  | ((0x20000U & ((IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                           >> 0xeU)) 
                                  << 0x11U)) | (0x10000U 
                                                & ((IData)(
                                                           (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                            >> 0xfU)) 
                                                   << 0x10U)))))) 
           | (((((0x8000U & ((IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                      >> 0x10U)) << 0xfU)) 
                 | (0x4000U & ((IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                        >> 0x11U)) 
                               << 0xeU))) | ((0x2000U 
                                              & ((IData)(
                                                         (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                          >> 0x12U)) 
                                                 << 0xdU)) 
                                             | (0x1000U 
                                                & ((IData)(
                                                           (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                            >> 0x13U)) 
                                                   << 0xcU)))) 
               | (((0x800U & ((IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                       >> 0x14U)) << 0xbU)) 
                   | (0x400U & ((IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                         >> 0x15U)) 
                                << 0xaU))) | ((0x200U 
                                               & ((IData)(
                                                          (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                           >> 0x16U)) 
                                                  << 9U)) 
                                              | (0x100U 
                                                 & ((IData)(
                                                            (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                             >> 0x17U)) 
                                                    << 8U))))) 
              | ((((0x80U & ((IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                      >> 0x18U)) << 7U)) 
                   | (0x40U & ((IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                        >> 0x19U)) 
                               << 6U))) | ((0x20U & 
                                            ((IData)(
                                                     (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                      >> 0x1aU)) 
                                             << 5U)) 
                                           | (0x10U 
                                              & ((IData)(
                                                         (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                          >> 0x1bU)) 
                                                 << 4U)))) 
                 | (((8U & ((IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                     >> 0x1cU)) << 3U)) 
                     | (4U & ((IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                       >> 0x1dU)) << 2U))) 
                    | ((2U & ((IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                       >> 0x1eU)) << 1U)) 
                       | (1U & (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                        >> 0x1fU))))))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left)
            ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev
            : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_insn_id 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
           & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id) 
              | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn) 
                 | (((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                     & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec)) 
                    | ((3U != (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                       & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec) 
                          | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                             & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec))))))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q;
    if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d 
                    = (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient);
            }
        } else if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d = 0U;
        }
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d 
        = (0x1fU & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q) 
                    - (IData)(1U)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
        [0U];
    if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? ((2U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                        ? (((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q)) 
                            & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a) 
                               ^ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)))
                            ? (QData)((IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                               >> 1U)))
                            : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                           [0U]) : ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a)
                                     ? (QData)((IData)(
                                                       (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                        >> 1U)))
                                     : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                    [0U])) : ((2U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                                               ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient
                                               : (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder))));
        }
    } else if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder)) 
                    << 1U) | (QData)((IData)((1U & 
                                              (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                                               >> (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d))))));
        } else {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = (QData)((IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                                   >> 0x1fU)));
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
        }
    } else if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
    } else {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
            = ((2U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                ? 0x3ffffffffULL : (QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex)));
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
    }
    vlSelfRef.__VdfgRegularize_ha026946b_0_29 = ((0U 
                                                  == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_0)) 
                                                 | (1U 
                                                    == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_0)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__opcode_allowed 
        = ((0U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_0)) 
           | ((1U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_0)) 
              | (4U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_0))));
    vlSelfRef.__VdfgRegularize_h3c5bdd75_0_14[0U] = (IData)(
                                                            (0x48001ULL 
                                                             | (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__ibex_lsu_host_adapter__DOT__tl_be)) 
                                                                 << 0x38U) 
                                                                | ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_wdata)) 
                                                                   << 0x18U))));
    vlSelfRef.__VdfgRegularize_h3c5bdd75_0_14[1U] = 
        ((0xc0000000U & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_14[1U]) 
         | (IData)(((0x48001ULL | (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__ibex_lsu_host_adapter__DOT__tl_be)) 
                                    << 0x38U) | ((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_wdata)) 
                                                 << 0x18U))) 
                    >> 0x20U)));
    vlSelfRef.__VdfgRegularize_h3c5bdd75_0_14[1U] = 
        ((0x3fffffffU & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_14[1U]) 
         | ((IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                     >> 3U)) << 0x1eU));
    vlSelfRef.__VdfgRegularize_h3c5bdd75_0_14[2U] = 
        (0xfffffffU & ((IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                >> 3U)) >> 2U));
    top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_he98638a0_0_6 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_insn_id)) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_he98638a0_0_7));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_insn_id) 
           & (6U != (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)));
    __VdfgRegularize_h3c5bdd75_0_2 = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__div_sel_ex)
                                       ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d
                                       : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d);
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__dev_sel_s1n_3 = 2U;
    if ((0x100000U == (0xfffe0000U & ((vlSelfRef.__VdfgRegularize_h3c5bdd75_0_14[2U] 
                                       << 4U) | (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_14[1U] 
                                                 >> 0x1cU))))) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__dev_sel_s1n_3 = 0U;
    } else if ((0x80000000U == (0xfffff000U & ((vlSelfRef.__VdfgRegularize_h3c5bdd75_0_14[2U] 
                                                << 4U) 
                                               | (vlSelfRef.__VdfgRegularize_h3c5bdd75_0_14[1U] 
                                                  >> 0x1cU))))) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__dev_sel_s1n_3 = 1U;
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result = 0U;
    if ((0x40U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))) {
        if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))) {
                                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result = 0U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result 
            = ((0x20U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                ? ((0x10U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                    ? 0U : ((8U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                             ? ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                 ? ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                     ? 0U : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                              ? 0U : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)))
                                 : ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                     ? ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                         ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                         : 0U) : 0U))
                             : 0U)) : ((0x10U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                        ? ((8U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                            ? ((4U 
                                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                     ? 0U
                                                     : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))
                                                    : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                     ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                                     : (IData)(
                                                               (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                >> 1U)))))
                                            : ((4U 
                                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? (IData)(
                                                              (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                               >> 1U))
                                                    : 0U)
                                                : 0U))
                                        : ((8U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                            ? ((4U 
                                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                     ? 0U
                                                     : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result))
                                                : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result)
                                            : ((4U 
                                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result
                                                    : (IData)(
                                                              (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                               >> 1U)))))));
    }
    if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_d_ex[0U] 
            = __VdfgRegularize_h3c5bdd75_0_2;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__result_ex 
            = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__div_sel_ex)
                ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q
                          [0U]) : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d));
    } else {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_d_ex[0U] = 0ULL;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__result_ex 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result;
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a 
        = ((IData)(top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_he98638a0_0_6) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b 
        = ((IData)(top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_he98638a0_0_6) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec));
    if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
        if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_addr_d 
                = (0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                            >> 0xfU));
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_data_d 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
                [(0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                           >> 0xfU))];
        } else {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_addr_d 
                = (0x1fU & 0U);
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_data_d = 0U;
        }
        if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_addr_d 
                = (0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                            >> 0x14U));
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_data_d 
                = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
                [(0x1fU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                           >> 0x14U))];
        } else {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_addr_d 
                = (0x1fU & 0U);
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_data_d = 0U;
        }
    } else {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_addr_d 
            = (0x1fU & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_addr_q));
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_data_d 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_data_q;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_addr_d 
            = (0x1fU & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_addr_q));
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_data_d 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_data_q;
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn) 
            | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn) 
               | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d) 
                  | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err)))) 
           & (6U != (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[0U] 
        = __VdfgRegularize_h3c5bdd75_0_2;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_id 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
            ? ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int
                : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__result_ex)
            : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__result_ex);
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[0U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_id;
}

VL_INLINE_OPT void Vtop_verilator___024root___nba_comb__TOP__7(Vtop_verilator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_verilator___024root___nba_comb__TOP__7\n"); );
    Vtop_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vfunc_tl_a_user_chk__246__Vfuncout;
    __Vfunc_tl_a_user_chk__246__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_tl_a_user_chk__246__user;
    __Vfunc_tl_a_user_chk__246__user = 0;
    CData/*0:0*/ __Vfunc_tl_a_user_chk__246__malformed_err;
    __Vfunc_tl_a_user_chk__246__malformed_err = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__247__Vfuncout;
    __Vfunc_mubi4_test_invalid__247__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__247__val;
    __Vfunc_mubi4_test_invalid__247__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__249__Vfuncout;
    __Vfunc_mubi4_test_invalid__249__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__249__val;
    __Vfunc_mubi4_test_invalid__249__val = 0;
    QData/*56:0*/ __Vfunc_get_cmd_intg__251__unused_cmd_payload;
    __Vfunc_get_cmd_intg__251__unused_cmd_payload = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__264__Vfuncout;
    __Vfunc_mubi4_test_invalid__264__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__264__val;
    __Vfunc_mubi4_test_invalid__264__val = 0;
    VlWide<3>/*95:0*/ __Vtemp_37;
    // Body
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[0U] 
        = (1U | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[0U]));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[1U] 
        = ((1U & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[1U]) 
           | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[1U]));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[2U] 
        = ((1U & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[2U]) 
           | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[2U]));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[3U] 
        = ((0x1000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[3U]) 
           | (0x1fffU & ((1U & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[3U]) 
                         | (0xffeU & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[3U]))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[3U] 
        = ((0xfffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[3U]) 
           | (0x1fffU & (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__data_req_out) 
                          & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__hold_all_requests)) 
                             & (2U <= (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__dev_sel_s1n_3)))) 
                         << 0xcU)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_o[0U] 
        = (1U | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[0U]));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_o[1U] 
        = ((1U & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[1U]) 
           | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[1U]));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_o[2U] 
        = ((1U & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[2U]) 
           | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[2U]));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_o[3U] 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__data_req_out) 
            << 0xcU) | ((1U & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[3U]) 
                        | (0xffeU & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[3U])));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__DOT____Vcellinp__reqfifo__wvalid_i 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__data_req_out) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_u_o__BRA__1__KET____DOT__dev_select));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__DOT____Vcellinp__reqfifo__wvalid_i 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__data_req_out) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_u_o__BRA__0__KET____DOT__dev_select));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o[2U][0U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[0U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o[2U][1U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[1U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o[2U][2U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[2U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o[2U][3U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[3U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__blanked_auser 
        = ((0x7fc000U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_o[0U] 
                         >> 1U)) | ((([&]() {
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__250__tl[0U] 
                            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_o[0U];
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__250__tl[1U] 
                            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_o[1U];
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__250__tl[2U] 
                            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_o[2U];
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__250__tl[3U] 
                            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_o[3U];
                        vlSelfRef.__Vfunc_get_cmd_intg__251__tl[0U] 
                            = vlSelfRef.__Vfunc_get_bad_cmd_intg__250__tl[0U];
                        vlSelfRef.__Vfunc_get_cmd_intg__251__tl[1U] 
                            = vlSelfRef.__Vfunc_get_bad_cmd_intg__250__tl[1U];
                        vlSelfRef.__Vfunc_get_cmd_intg__251__tl[2U] 
                            = vlSelfRef.__Vfunc_get_bad_cmd_intg__250__tl[2U];
                        vlSelfRef.__Vfunc_get_cmd_intg__251__tl[3U] 
                            = vlSelfRef.__Vfunc_get_bad_cmd_intg__250__tl[3U];
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__252__tl[0U] 
                            = vlSelfRef.__Vfunc_get_cmd_intg__251__tl[0U];
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__252__tl[1U] 
                            = vlSelfRef.__Vfunc_get_cmd_intg__251__tl[1U];
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__252__tl[2U] 
                            = vlSelfRef.__Vfunc_get_cmd_intg__251__tl[2U];
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__252__tl[3U] 
                            = vlSelfRef.__Vfunc_get_cmd_intg__251__tl[3U];
                        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                        vlSelf->__Vfunc_extract_h2d_cmd_intg__252__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 1903497002339315458ull);
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__252__payload 
                            = ((0x78000000000ULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__252__payload) 
                               | (((QData)((IData)(
                                                   ((vlSelfRef.__Vfunc_extract_h2d_cmd_intg__252__tl[2U] 
                                                     << 4U) 
                                                    | (vlSelfRef.__Vfunc_extract_h2d_cmd_intg__252__tl[1U] 
                                                       >> 0x1cU)))) 
                                   << 7U) | (QData)((IData)(
                                                            ((0x70U 
                                                              & (vlSelfRef.__Vfunc_extract_h2d_cmd_intg__252__tl[3U] 
                                                                 >> 5U)) 
                                                             | (0xfU 
                                                                & (vlSelfRef.__Vfunc_extract_h2d_cmd_intg__252__tl[1U] 
                                                                   >> 0x18U)))))));
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__252__payload 
                            = ((0x7fffffffffULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__252__payload) 
                               | ((QData)((IData)((0xfU 
                                                   & (vlSelfRef.__Vfunc_extract_h2d_cmd_intg__252__tl[0U] 
                                                      >> 0xfU)))) 
                                  << 0x27U));
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__252__Vfuncout 
                            = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__252__payload;
                        vlSelfRef.__Vfunc_get_cmd_intg__251__cmd 
                            = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__252__Vfuncout;
                        vlSelfRef.__Vfunc_get_cmd_intg__251__cmd_intg 
                            = (0x7fU & (IData)((([&]() {
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__253__data_i 
                                                = vlSelfRef.__Vfunc_get_cmd_intg__251__cmd;
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__253__data_o 
                                                = vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__253__data_i;
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__253__data_o 
                                                = (
                                                   (0xfdffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__253__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x103fff800007fffULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__253__data_o))))) 
                                                      << 0x39U));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__253__data_o 
                                                = (
                                                   (0xfbffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__253__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x17c1ff801ff801fULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__253__data_o))))) 
                                                      << 0x3aU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__253__data_o 
                                                = (
                                                   (0xf7ffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__253__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x1bde1f87e0781e1ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__253__data_o))))) 
                                                      << 0x3bU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__253__data_o 
                                                = (
                                                   (0xefffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__253__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x1deee3b8e388e22ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__253__data_o))))) 
                                                      << 0x3cU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__253__data_o 
                                                = (
                                                   (0xdfffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__253__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x1ef76cdb2c93244ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__253__data_o))))) 
                                                      << 0x3dU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__253__data_o 
                                                = (
                                                   (0xbfffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__253__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x1f7bb56d5525488ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__253__data_o))))) 
                                                      << 0x3eU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__253__data_o 
                                                = (
                                                   (0x7fffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__253__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x1fbdda769a46910ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__253__data_o))))) 
                                                      << 0x3fU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__253__data_o 
                                                = (0x5400000000000000ULL 
                                                   ^ vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__253__data_o);
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__253__Vfuncout 
                                                = vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__253__data_o;
                                        }(), vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__253__Vfuncout) 
                                                >> 0x39U)));
                        __Vfunc_get_cmd_intg__251__unused_cmd_payload 
                            = (0x1ffffffffffffffULL 
                               & ([&]() {
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__254__data_i 
                                        = vlSelfRef.__Vfunc_get_cmd_intg__251__cmd;
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__254__data_o 
                                        = vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__254__data_i;
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__254__data_o 
                                        = ((0xfdffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__254__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x103fff800007fffULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__254__data_o))))) 
                                              << 0x39U));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__254__data_o 
                                        = ((0xfbffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__254__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x17c1ff801ff801fULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__254__data_o))))) 
                                              << 0x3aU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__254__data_o 
                                        = ((0xf7ffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__254__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x1bde1f87e0781e1ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__254__data_o))))) 
                                              << 0x3bU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__254__data_o 
                                        = ((0xefffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__254__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x1deee3b8e388e22ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__254__data_o))))) 
                                              << 0x3cU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__254__data_o 
                                        = ((0xdfffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__254__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x1ef76cdb2c93244ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__254__data_o))))) 
                                              << 0x3dU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__254__data_o 
                                        = ((0xbfffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__254__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x1f7bb56d5525488ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__254__data_o))))) 
                                              << 0x3eU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__254__data_o 
                                        = ((0x7fffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__254__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x1fbdda769a46910ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__254__data_o))))) 
                                              << 0x3fU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__254__data_o 
                                        = (0x5400000000000000ULL 
                                           ^ vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__254__data_o);
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__254__Vfuncout 
                                        = vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__254__data_o;
                                }(), vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__254__Vfuncout));
                        vlSelfRef.__Vfunc_get_cmd_intg__251__Vfuncout 
                            = vlSelfRef.__Vfunc_get_cmd_intg__251__cmd_intg;
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__250__cmd_intg 
                            = vlSelfRef.__Vfunc_get_cmd_intg__251__Vfuncout;
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__250__Vfuncout 
                            = (0x7fU & (~ (IData)(vlSelfRef.__Vfunc_get_bad_cmd_intg__250__cmd_intg)));
                    }(), (IData)(vlSelfRef.__Vfunc_get_bad_cmd_intg__250__Vfuncout)) 
                                     << 7U) | ([&]() {
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__257__data_o = 0xffffffffULL;
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__257__data_o 
                        = (0x7effffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__257__data_o);
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__257__data_o 
                        = ((0x7dffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__257__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xdeba8050ULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__257__data_o))))) 
                              << 0x21U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__257__data_o 
                        = ((0x7bffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__257__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x413d89aaULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__257__data_o))))) 
                              << 0x22U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__257__data_o 
                        = ((0x77ffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__257__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x31234ed1ULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__257__data_o))))) 
                              << 0x23U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__257__data_o 
                        = ((0x6fffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__257__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xc2c1323bULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__257__data_o))))) 
                              << 0x24U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__257__data_o 
                        = ((0x5fffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__257__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x2dcc624cULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__257__data_o))))) 
                              << 0x25U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__257__data_o 
                        = ((0x3fffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__257__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x98505586ULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__257__data_o))))) 
                              << 0x26U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__257__data_o 
                        = (0x2a00000000ULL ^ vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__257__data_o);
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__257__Vfuncout 
                        = vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__257__data_o;
                    vlSelfRef.__Vfunc_get_data_intg__256__enc_data 
                        = vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__257__Vfuncout;
                    vlSelfRef.__Vfunc_get_data_intg__256__data_intg 
                        = (0x7fU & (IData)((vlSelfRef.__Vfunc_get_data_intg__256__enc_data 
                                            >> 0x20U)));
                    vlSelfRef.__Vfunc_get_data_intg__256__Vfuncout 
                        = vlSelfRef.__Vfunc_get_data_intg__256__data_intg;
                    vlSelfRef.__Vfunc_get_bad_data_intg__255__data_intg 
                        = vlSelfRef.__Vfunc_get_data_intg__256__Vfuncout;
                    vlSelfRef.__Vfunc_get_bad_data_intg__255__Vfuncout 
                        = (0x7fU & (~ (IData)(vlSelfRef.__Vfunc_get_bad_data_intg__255__data_intg)));
                }(), (IData)(vlSelfRef.__Vfunc_get_bad_data_intg__255__Vfuncout))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__a_ack 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q)) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__DOT____Vcellinp__reqfifo__wvalid_i));
    if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__DOT____Vcellinp__reqfifo__wvalid_i) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_data_we 
            = vlSelfRef.__VdfgRegularize_ha026946b_0_29;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT____Vcellout__sram_a_device_adapter__addr_o 
            = (0x1fffU & (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                  >> 3U)));
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__wmask_combined 
            = ((((- (IData)((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__ibex_lsu_host_adapter__DOT__tl_be) 
                                   >> 3U)))) << 0x18U) 
                | (0xff0000U & ((- (IData)((1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__ibex_lsu_host_adapter__DOT__tl_be) 
                                                  >> 2U)))) 
                                << 0x10U))) | ((0xff00U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__ibex_lsu_host_adapter__DOT__tl_be) 
                                                                  >> 1U)))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__ibex_lsu_host_adapter__DOT__tl_be)))))));
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__wdata_combined 
            = (((((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__ibex_lsu_host_adapter__DOT__tl_be) 
                    >> 3U) & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_data_we))
                   ? (vlSelfRef.__VdfgRegularize_ha026946b_0_32 
                      >> 0x18U) : 0U) << 0x18U) | (
                                                   ((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__ibex_lsu_host_adapter__DOT__tl_be) 
                                                      >> 2U) 
                                                     & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_data_we))
                                                     ? 
                                                    (0xffU 
                                                     & (vlSelfRef.__VdfgRegularize_ha026946b_0_32 
                                                        >> 0x10U))
                                                     : 0U) 
                                                   << 0x10U)) 
               | ((((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__ibex_lsu_host_adapter__DOT__tl_be) 
                      >> 1U) & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_data_we))
                     ? (0xffU & (vlSelfRef.__VdfgRegularize_ha026946b_0_32 
                                 >> 8U)) : 0U) << 8U) 
                  | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__ibex_lsu_host_adapter__DOT__tl_be) 
                      & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_data_we))
                      ? (0xffU & vlSelfRef.__VdfgRegularize_ha026946b_0_32)
                      : 0U)));
    } else {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_data_we = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT____Vcellout__sram_a_device_adapter__addr_o = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__wmask_combined = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__wdata_combined = 0U;
    }
    vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[0U] = (IData)(
                                                            (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata)) 
                                                              << 0x18U) 
                                                             | (QData)((IData)(
                                                                               (1U 
                                                                                | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_u_o__BRA__1__KET____DOT__dev_select)
                                                                                 ? 0x24000U
                                                                                 : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__blanked_auser) 
                                                                                << 1U))))));
    vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[1U] = 
        ((0xff000000U & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[1U]) 
         | (IData)(((((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata)) 
                      << 0x18U) | (QData)((IData)((1U 
                                                   | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_u_o__BRA__1__KET____DOT__dev_select)
                                                        ? 0x24000U
                                                        : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__blanked_auser) 
                                                      << 1U))))) 
                    >> 0x20U)));
    vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[1U] = 
        ((0xffffffU & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[1U]) 
         | ((IData)((0xfffffffffffffULL & (((QData)((IData)(
                                                            vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[3U])) 
                                            << 0x28U) 
                                           | (((QData)((IData)(
                                                               vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[2U])) 
                                               << 8U) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[1U])) 
                                                 >> 0x18U))))) 
            << 0x18U));
    vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[2U] = 
        (((IData)((0xfffffffffffffULL & (((QData)((IData)(
                                                          vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[3U])) 
                                          << 0x28U) 
                                         | (((QData)((IData)(
                                                             vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[2U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[1U])) 
                                               >> 0x18U))))) 
          >> 8U) | ((IData)(((0xfffffffffffffULL & 
                              (((QData)((IData)(vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[3U])) 
                                << 0x28U) | (((QData)((IData)(
                                                              vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[2U])) 
                                              << 8U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[1U])) 
                                                >> 0x18U)))) 
                             >> 0x20U)) << 0x18U));
    vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[3U] = 
        (0xfffU & ((IData)(((0xfffffffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[3U])) 
                                                    << 0x28U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[2U])) 
                                                       << 8U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[1U])) 
                                                         >> 0x18U)))) 
                            >> 0x20U)) >> 8U));
    vlSelfRef.__VdfgRegularize_ha026946b_0_33 = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_u_o__BRA__0__KET____DOT__dev_select)
                                                  ? 0x24000U
                                                  : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__blanked_auser);
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (4U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_0)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (IData)(vlSelfRef.__VdfgRegularize_ha026946b_0_29));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__a_wmask 
        = ((((0xffU == (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__wmask_combined 
                        >> 0x18U)) << 3U) | ((0xffU 
                                              == (0xffU 
                                                  & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__wmask_combined 
                                                     >> 0x10U))) 
                                             << 2U)) 
           | (((0xffU == (0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__wmask_combined 
                                   >> 8U))) << 1U) 
              | (0xffU == (0xffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__wmask_combined))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o[1U][0U] 
        = vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[0U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o[1U][1U] 
        = vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[1U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o[1U][2U] 
        = vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[2U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o[1U][3U] 
        = ((0x1000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
            [1U][3U]) | (0x1fffU & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[3U]));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o[1U][3U] 
        = ((0xfffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
            [1U][3U]) | (0x1fffU & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__DOT____Vcellinp__reqfifo__wvalid_i) 
                                    << 0xcU)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U] 
        = (1U | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[0U]));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[1U]) 
           | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[1U]));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((1U & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[2U]) 
           | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[2U]));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[3U] 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__DOT____Vcellinp__reqfifo__wvalid_i) 
            << 0xcU) | ((1U & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[3U]) 
                        | (0xffeU & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_13[3U])));
    vlSelfRef.__VdfgRegularize_h3c5bdd75_0_12[0U] = (IData)(
                                                            (((QData)((IData)(vlSelfRef.__VdfgRegularize_ha026946b_0_32)) 
                                                              << 0x18U) 
                                                             | (QData)((IData)(
                                                                               (1U 
                                                                                | (vlSelfRef.__VdfgRegularize_ha026946b_0_33 
                                                                                << 1U))))));
    vlSelfRef.__VdfgRegularize_h3c5bdd75_0_12[1U] = 
        (((IData)((0xfffffffffffffULL & (((QData)((IData)(
                                                          vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[3U])) 
                                          << 0x28U) 
                                         | (((QData)((IData)(
                                                             vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[2U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[1U])) 
                                               >> 0x18U))))) 
          << 0x18U) | (IData)(((((QData)((IData)(vlSelfRef.__VdfgRegularize_ha026946b_0_32)) 
                                 << 0x18U) | (QData)((IData)(
                                                             (1U 
                                                              | (vlSelfRef.__VdfgRegularize_ha026946b_0_33 
                                                                 << 1U))))) 
                               >> 0x20U)));
    vlSelfRef.__VdfgRegularize_h3c5bdd75_0_12[2U] = 
        (((IData)((0xfffffffffffffULL & (((QData)((IData)(
                                                          vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[3U])) 
                                          << 0x28U) 
                                         | (((QData)((IData)(
                                                             vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[2U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[1U])) 
                                               >> 0x18U))))) 
          >> 8U) | ((IData)(((0xfffffffffffffULL & 
                              (((QData)((IData)(vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[3U])) 
                                << 0x28U) | (((QData)((IData)(
                                                              vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[2U])) 
                                              << 8U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[1U])) 
                                                >> 0x18U)))) 
                             >> 0x20U)) << 0x18U));
    vlSelfRef.__VdfgRegularize_h3c5bdd75_0_12[3U] = 
        ((IData)(((0xfffffffffffffULL & (((QData)((IData)(
                                                          vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[3U])) 
                                          << 0x28U) 
                                         | (((QData)((IData)(
                                                             vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[2U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.__VdfgRegularize_h3c5bdd75_0_15[1U])) 
                                               >> 0x18U)))) 
                  >> 0x20U)) >> 8U);
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d[1U][0U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d[1U][1U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d[1U][2U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d[1U][3U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[3U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o[1U][0U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o[1U][1U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o[1U][2U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o[1U][3U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[3U];
    __Vfunc_mubi4_test_invalid__249__val = (0xfU & 
                                            (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U] 
                                             >> 0xfU));
    __Vfunc_mubi4_test_invalid__249__Vfuncout = (1U 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__249__val)) 
                                                     | (9U 
                                                        == (IData)(__Vfunc_mubi4_test_invalid__249__val)))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_type_err 
        = __Vfunc_mubi4_test_invalid__249__Vfuncout;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_wr_err 
        = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__248__val 
                    = (0xfU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U] 
                               >> 0xfU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__248__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__248__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__248__Vfuncout)) 
           & ((0U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_0)) 
              | (1U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_0))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__instr_error 
        = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_invalid__243__val 
                    = (0xfU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U] 
                               >> 0xfU));
                vlSelfRef.__Vfunc_mubi4_test_invalid__243__Vfuncout 
                    = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__243__val)) 
                                | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__243__val)))));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__243__Vfuncout)) 
           | ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__244__val 
                    = (0xfU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U] 
                               >> 0xfU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__244__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__244__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__244__Vfuncout)));
    __Vfunc_tl_a_user_chk__246__user = (0x7fffffU & 
                                        (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U] 
                                         >> 1U));
    __Vfunc_mubi4_test_invalid__247__val = (0xfU & 
                                            (__Vfunc_tl_a_user_chk__246__user 
                                             >> 0xeU));
    __Vfunc_mubi4_test_invalid__247__Vfuncout = (1U 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__247__val)) 
                                                     | (9U 
                                                        == (IData)(__Vfunc_mubi4_test_invalid__247__val)))));
    __Vfunc_tl_a_user_chk__246__malformed_err = __Vfunc_mubi4_test_invalid__247__Vfuncout;
    __Vfunc_tl_a_user_chk__246__Vfuncout = __Vfunc_tl_a_user_chk__246__malformed_err;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__malformed_meta_err 
        = __Vfunc_tl_a_user_chk__246__Vfuncout;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk = 0U;
    if ((0x1000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[3U])) {
        if ((0U == (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[3U] 
                          >> 4U)))) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = 1U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                = (1U & (~ (0U != (0xeU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                                           >> 0x18U)))));
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                = (0U != (1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                                >> 0x18U)));
        } else if ((1U == (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[3U] 
                                 >> 4U)))) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk 
                = (1U & (~ (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                            >> 0x1cU)));
            if ((0x20000000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U])) {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (0U != (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                                             >> 0x18U)))));
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                                    >> 0x1aU)));
            } else {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (0U != (0xcU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                                               >> 0x18U)))));
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                                    >> 0x18U)));
            }
        } else if ((2U == (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[3U] 
                                 >> 4U)))) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk 
                = (1U & (~ (0U != (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                                         >> 0x1cU)))));
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = 1U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                = (0xfU == (0xfU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                                    >> 0x18U)));
        } else {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = 0U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = 0U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Ntop_verilator.u_soc_mod.u_uart.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[3U] 
                                           >> 4U)));
                    VL_STOP_MT("../src/lowrisc_tlul_common_0.1/rtl/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk = 0U;
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o[0U][0U] 
        = vlSelfRef.__VdfgRegularize_h3c5bdd75_0_12[0U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o[0U][1U] 
        = vlSelfRef.__VdfgRegularize_h3c5bdd75_0_12[1U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o[0U][2U] 
        = vlSelfRef.__VdfgRegularize_h3c5bdd75_0_12[2U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o[0U][3U] 
        = ((0x1000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
            [0U][3U]) | (0x1fffU & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_12[3U]));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o[0U][3U] 
        = ((0xfffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_o
            [0U][3U]) | (0x1fffU & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__DOT____Vcellinp__reqfifo__wvalid_i) 
                                    << 0xcU)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U] 
        = (1U | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_12[0U]));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
        = ((1U & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_12[1U]) 
           | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_12[1U]));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
        = ((1U & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_12[2U]) 
           | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_12[2U]));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[3U] 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__DOT____Vcellinp__reqfifo__wvalid_i) 
            << 0xcU) | ((1U & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_12[3U]) 
                        | (0xffeU & vlSelfRef.__VdfgRegularize_h3c5bdd75_0_12[3U])));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__err_internal 
        = (1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__malformed_meta_err) 
                 | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__instr_error) 
                    | ((~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__opcode_allowed) 
                           & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                              & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk) 
                                 & ((4U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_0)) 
                                    | ((1U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_0)) 
                                       | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk))))))) 
                       | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_type_err) 
                          | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_wr_err))))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d[0U][0U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d[0U][1U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d[0U][2U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_h2d[0U][3U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[3U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o[0U][0U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o[0U][1U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o[0U][2U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellout__u_s1n_3__tl_d_o[0U][3U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[3U];
    __Vfunc_mubi4_test_invalid__264__val = (0xfU & 
                                            (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U] 
                                             >> 0xfU));
    __Vfunc_mubi4_test_invalid__264__Vfuncout = (1U 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__264__val)) 
                                                     | (9U 
                                                        == (IData)(__Vfunc_mubi4_test_invalid__264__val)))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__instr_type_err 
        = __Vfunc_mubi4_test_invalid__264__Vfuncout;
    if ((0x1000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[3U])) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__unnamedblk1__DOT__i = 4U;
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__instr_wr_err 
        = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__263__val 
                    = (0xfU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U] 
                               >> 0xfU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__263__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__263__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__263__Vfuncout)) 
           & ((0U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_0)) 
              | (1U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_0))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__instr_error 
        = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_invalid__259__val 
                    = (0xfU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U] 
                               >> 0xfU));
                vlSelfRef.__Vfunc_mubi4_test_invalid__259__Vfuncout 
                    = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__259__val)) 
                                | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__259__val)))));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__259__Vfuncout)) 
           | (0U & ([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__260__val 
                        = (0xfU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U] 
                                   >> 0xfU));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__260__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__260__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__260__Vfuncout))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__addr_sz_chk = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__mask_chk = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__fulldata_chk = 0U;
    if ((0x1000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[3U])) {
        if ((0U == (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[3U] 
                          >> 4U)))) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__addr_sz_chk = 1U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__mask_chk 
                = (1U & (~ (0U != (0xeU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                                           >> 0x18U)))));
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__fulldata_chk 
                = (0U != (1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                                >> 0x18U)));
        } else if ((1U == (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[3U] 
                                 >> 4U)))) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__addr_sz_chk 
                = (1U & (~ (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                            >> 0x1cU)));
            if ((0x20000000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U])) {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (0U != (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                                             >> 0x18U)))));
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                                    >> 0x1aU)));
            } else {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (0U != (0xcU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                                               >> 0x18U)))));
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                                    >> 0x18U)));
            }
        } else if ((2U == (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[3U] 
                                 >> 4U)))) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__addr_sz_chk 
                = (1U & (~ (0U != (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                                         >> 0x1cU)))));
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__mask_chk = 1U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__fulldata_chk 
                = (0xfU == (0xfU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                                    >> 0x18U)));
        } else {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__addr_sz_chk = 0U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__mask_chk = 0U;
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[3U] 
                                                 >> 4U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[3U] 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[3U] 
                                                    >> 4U))))))))) {
            if ((0U != (((2U == (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[3U] 
                                       >> 4U))) << 2U) 
                        | (((1U == (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[3U] 
                                          >> 4U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[3U] 
                                                   >> 4U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:62: Assertion failed in %Ntop_verilator.u_soc_mod.sram_a_device_adapter.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[3U] 
                                           >> 4U)));
                    VL_STOP_MT("../src/lowrisc_tlul_common_0.1/rtl/tlul_err.sv", 62, "");
                }
            }
        }
    } else {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__addr_sz_chk = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__mask_chk = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__fulldata_chk = 0U;
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_re 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_we 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__error_det 
        = (1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__instr_error) 
                 | ((~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__opcode_allowed) 
                        & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__addr_sz_chk) 
                           & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__mask_chk) 
                              & ((4U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_0)) 
                                 | ((1U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_0)) 
                                    | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__fulldata_chk))))))) 
                    | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__instr_type_err) 
                       | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_err__DOT__instr_wr_err)))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__wr_err 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_we) 
           & ((IData)(((0ULL == (0x78ULL & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)) 
                       & (0U != (3U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_0))))) 
              | ((IData)(((8ULL == (0x78ULL & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)) 
                          & (0U != (3U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_0))))) 
                 | ((IData)(((0x10ULL == (0x78ULL & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)) 
                             & (0U != (3U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_0))))) 
                    | ((IData)(((0x18ULL == (0x78ULL 
                                             & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)) 
                                & (0U != (1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_0))))) 
                       | ((IData)(((0x20ULL == (0x78ULL 
                                                & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)) 
                                   & (0U != (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_0)))) 
                          | ((IData)(((0x28ULL == (0x78ULL 
                                                   & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)) 
                                      & (0U != (1U 
                                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_0))))) 
                             | ((IData)(((0x30ULL == 
                                          (0x78ULL 
                                           & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)) 
                                         & (0U != (1U 
                                                   & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_0))))) 
                                | ((IData)(((0x38ULL 
                                             == (0x78ULL 
                                                 & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)) 
                                            & (0U != 
                                               (1U 
                                                & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_0))))) 
                                   | ((IData)(((0x40ULL 
                                                == 
                                                (0x78ULL 
                                                 & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)) 
                                               & (0U 
                                                  != 
                                                  (1U 
                                                   & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_0))))) 
                                      | ((IData)(((0x48ULL 
                                                   == 
                                                   (0x78ULL 
                                                    & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)) 
                                                  & (0U 
                                                     != 
                                                     (7U 
                                                      & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_0))))) 
                                         | ((IData)(
                                                    ((0x50ULL 
                                                      == 
                                                      (0x78ULL 
                                                       & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)) 
                                                     & (0U 
                                                        != 
                                                        (1U 
                                                         & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_0))))) 
                                            | ((IData)(
                                                       ((0x58ULL 
                                                         == 
                                                         (0x78ULL 
                                                          & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)) 
                                                        & (0U 
                                                           != 
                                                           (3U 
                                                            & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_0))))) 
                                               | (IData)(
                                                         ((0x60ULL 
                                                           == 
                                                           (0x78ULL 
                                                            & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)) 
                                                          & (0U 
                                                             != (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_0)))))))))))))))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__sram_ack 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__DOT____Vcellinp__reqfifo__wvalid_i) 
           & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__error_det)) 
              & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__reqfifo_wready)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_error 
        = (((~ (0U != (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__addr_hit))) 
            & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_re) 
               | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_we))) 
           | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__wr_err));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = (((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_data_we)) 
            & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__sram_ack)) 
           & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__sramreqfifo_wready)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__DOT__reqfifo__DOT__full_o 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__sram_ack) 
            | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__missed_err_gnt_q)) 
           & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__reqfifo_wready) 
              & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__sramreqfifo_wready)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_19 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_error)) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_re));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_18 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_error)) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_we));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__DOT____Vcellinp__reqfifo__wvalid_i) 
            & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__DOT__reqfifo__DOT__full_o)) 
           & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__reqfifo_wready)));
    vlSelfRef.__VdfgRegularize_ha026946b_0_37 = (((
                                                   ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__vld_rd_rsp) 
                                                    & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__reqfifo_rdata 
                                                       >> 0xeU))
                                                    ? 0x2aU
                                                    : 
                                                   ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__vld_rd_rsp)
                                                     ? 
                                                    (0x7fU 
                                                     & (IData)(
                                                               (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__rspfifo_rdata 
                                                                >> 1U)))
                                                     : 0x2aU)) 
                                                  << 2U) 
                                                 | ((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__d_error) 
                                                      & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__DOT____Vcellinp__rspfifo__wvalid_i)) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__DOT__reqfifo__DOT__full_o)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__status_re 
        = (IData)(((0x28ULL == (0x78ULL & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)) 
                   & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_19)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__rdata_re 
        = (IData)(((0x30ULL == (0x78ULL & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)) 
                   & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_19)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_wdata__DOT__wr_en 
        = (IData)(((0x38ULL == (0x78ULL & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)) 
                   & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_18)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ovrd_txen__DOT__qe 
        = (IData)(((0x50ULL == (0x78ULL & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)) 
                   & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_18)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__qe 
        = (IData)(((0x60ULL == (0x78ULL & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)) 
                   & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_18)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__wr_en 
        = (IData)(((0x40ULL == (0x78ULL & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)) 
                   & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_18)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__qe 
        = (IData)(((8ULL == (0x78ULL & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)) 
                   & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_18)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__qe 
        = (IData)(((0x20ULL == (0x78ULL & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)) 
                   & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_18)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__intr_state_we 
        = (IData)(((0ULL == (0x78ULL & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)) 
                   & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_18)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__intr_test_we 
        = (IData)(((0x10ULL == (0x78ULL & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)) 
                   & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_18)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
    vlSelfRef.__VdfgRegularize_ha026946b_0_35[0U] = (IData)(
                                                            (((QData)((IData)(
                                                                              ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__DOT____Vcellinp__rspfifo__wvalid_i)
                                                                                ? 
                                                                               (3U 
                                                                                & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__reqfifo_rdata 
                                                                                >> 8U))
                                                                                : 0U))) 
                                                              << 0x39U) 
                                                             | (((QData)((IData)(
                                                                                ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__DOT____Vcellinp__rspfifo__wvalid_i)
                                                                                 ? 
                                                                                (0xffU 
                                                                                & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__reqfifo_rdata)
                                                                                 : 0U))) 
                                                                 << 0x31U) 
                                                                | (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__d_data)) 
                                                                    << 0x10U) 
                                                                   | (QData)((IData)(vlSelfRef.__VdfgRegularize_ha026946b_0_37))))));
    vlSelfRef.__VdfgRegularize_ha026946b_0_35[1U] = 
        ((0xc0000000U & vlSelfRef.__VdfgRegularize_ha026946b_0_35[1U]) 
         | (IData)(((((QData)((IData)(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__DOT____Vcellinp__rspfifo__wvalid_i)
                                        ? (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__reqfifo_rdata 
                                                 >> 8U))
                                        : 0U))) << 0x39U) 
                     | (((QData)((IData)(((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__DOT____Vcellinp__rspfifo__wvalid_i)
                                           ? (0xffU 
                                              & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__reqfifo_rdata)
                                           : 0U))) 
                         << 0x31U) | (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__d_data)) 
                                       << 0x10U) | (QData)((IData)(vlSelfRef.__VdfgRegularize_ha026946b_0_37))))) 
                    >> 0x20U)));
    vlSelfRef.__VdfgRegularize_ha026946b_0_35[1U] = 
        ((0x3fffffffU & vlSelfRef.__VdfgRegularize_ha026946b_0_35[1U]) 
         | ((IData)(vlSelfRef.__VdfgRegularize_ha026946b_0_31) 
            << 0x1eU));
    vlSelfRef.__VdfgRegularize_ha026946b_0_35[2U] = 
        (1U & ((IData)(vlSelfRef.__VdfgRegularize_ha026946b_0_31) 
               >> 2U));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_rvalid) 
           & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__rdata_re)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_wdata__DOT__wr_data 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_wdata__DOT__wr_en)
            ? (0xffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata)
            : 0U);
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ovrd_txen__DOT__wr_data 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ovrd_txen__DOT__qe) 
           & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata);
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ovrd_txval__DOT__wr_data 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ovrd_txen__DOT__qe) 
           & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
              >> 1U));
    if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__qe) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_timeout_ctrl_val__DOT__wr_data 
            = (0xffffffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata);
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__wr_data 
            = (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
               >> 0x1fU);
    } else {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_timeout_ctrl_val__DOT__wr_data = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__wr_data = 0U;
    }
    if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__wr_en) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_fifo_ctrl_rxrst__DOT__wr_data 
            = (1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata);
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_fifo_ctrl_txrst__DOT__wr_data 
            = (1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                     >> 1U));
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__wr_data 
            = (7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                     >> 2U));
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_fifo_ctrl_txilvl__DOT__wr_data 
            = (7U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                     >> 5U));
    } else {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_fifo_ctrl_rxrst__DOT__wr_data = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_fifo_ctrl_txrst__DOT__wr_data = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__wr_data = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_fifo_ctrl_txilvl__DOT__wr_data = 0U;
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_tx_watermark__DOT__wr_data 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__qe) 
           & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata);
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_watermark__DOT__wr_data 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__qe) 
           & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
              >> 1U));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_tx_done__DOT__wr_data 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__qe) 
           & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
              >> 2U));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_overflow__DOT__wr_data 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__qe) 
           & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
              >> 3U));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_frame_err__DOT__wr_data 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__qe) 
           & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
              >> 4U));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_data 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__qe) 
           & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
              >> 5U));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_timeout__DOT__wr_data 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__qe) 
           & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
              >> 6U));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_parity_err__DOT__wr_data 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__qe) 
           & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
              >> 7U));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_tx_empty__DOT__wr_data 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__qe) 
           & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
              >> 8U));
    if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__qe) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_tx__DOT__wr_data 
            = (1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata);
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_rx__DOT__wr_data 
            = (1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                     >> 1U));
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_nf__DOT__wr_data 
            = (1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                     >> 2U));
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_slpbk__DOT__wr_data 
            = (1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                     >> 4U));
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__wr_data 
            = (1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                     >> 5U));
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_parity_en__DOT__wr_data 
            = (1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                     >> 6U));
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_parity_odd__DOT__wr_data 
            = (1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                     >> 7U));
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_rxblvl__DOT__wr_data 
            = (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                     >> 8U));
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_nco__DOT__wr_data 
            = (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
               >> 0x10U);
    } else {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_tx__DOT__wr_data = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_rx__DOT__wr_data = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_nf__DOT__wr_data = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_slpbk__DOT__wr_data = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__wr_data = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_parity_en__DOT__wr_data = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_parity_odd__DOT__wr_data = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_rxblvl__DOT__wr_data = 0U;
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_ctrl_nco__DOT__wr_data = 0U;
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__g_intr_event__DOT__new_event 
        = (((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
             >> 4U) & (0x1ffU == (0x1ffU & (- (IData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__intr_test_we)))))) 
           | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__event_rx_frame_err));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__g_intr_event__DOT__new_event 
        = (((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
             >> 5U) & (0x1ffU == (0x1ffU & (- (IData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__intr_test_we)))))) 
           | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__event_rx_break_err));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__g_intr_event__DOT__new_event 
        = (((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
             >> 6U) & (0x1ffU == (0x1ffU & (- (IData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__intr_test_we)))))) 
           | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__event_rx_timeout));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__g_intr_event__DOT__new_event 
        = (((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
             >> 7U) & (0x1ffU == (0x1ffU & (- (IData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__intr_test_we)))))) 
           | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__event_rx_parity_err));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__g_intr_event__DOT__new_event 
        = (((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
             >> 3U) & (0x1ffU == (0x1ffU & (- (IData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__intr_test_we)))))) 
           | ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_wready)) 
              & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__rx_fifo_wvalid)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_tx_done__DOT__g_intr_event__DOT__new_event 
        = (((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
             >> 2U) & (0x1ffU == (0x1ffU & (- (IData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__intr_test_we)))))) 
           | ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_fifo_rvalid)) 
              & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_uart_idle_q)) 
                 & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__tx_uart_idle))));
    __Vtemp_37[0U] = (IData)((((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__status_re)) 
                               << 0x3fU) | (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__status_re)) 
                                             << 0x3dU) 
                                            | (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__status_re)) 
                                                << 0x3bU) 
                                               | (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__status_re)) 
                                                   << 0x39U) 
                                                  | (((QData)((IData)(
                                                                      ((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__rdata_re) 
                                                                         << 0x10U) 
                                                                        | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_wdata__q) 
                                                                           << 8U)) 
                                                                       | ((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__wdata_qe) 
                                                                            << 7U) 
                                                                           | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q) 
                                                                              << 4U)) 
                                                                          | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__fifo_ctrl_qe) 
                                                                              << 3U) 
                                                                             | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q)))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__fifo_ctrl_qe) 
                                                                           << 0x1fU) 
                                                                          | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q) 
                                                                             << 0x1eU)) 
                                                                         | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__fifo_ctrl_qe) 
                                                                             << 0x1dU) 
                                                                            | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q) 
                                                                               << 0x1cU))) 
                                                                        | ((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__fifo_ctrl_qe) 
                                                                             << 0x1bU) 
                                                                            | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q) 
                                                                               << 0x1aU)) 
                                                                           | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q) 
                                                                               << 0x19U) 
                                                                              | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q) 
                                                                                << 0x18U) 
                                                                                | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q))))))))))));
    __Vtemp_37[1U] = (IData)(((((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__status_re)) 
                                << 0x3fU) | (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__status_re)) 
                                              << 0x3dU) 
                                             | (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__status_re)) 
                                                 << 0x3bU) 
                                                | (((QData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__status_re)) 
                                                    << 0x39U) 
                                                   | (((QData)((IData)(
                                                                       ((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__rdata_re) 
                                                                          << 0x10U) 
                                                                         | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_wdata__q) 
                                                                            << 8U)) 
                                                                        | ((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__wdata_qe) 
                                                                             << 7U) 
                                                                            | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q) 
                                                                               << 4U)) 
                                                                           | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__fifo_ctrl_qe) 
                                                                               << 3U) 
                                                                              | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q)))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        (((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__fifo_ctrl_qe) 
                                                                            << 0x1fU) 
                                                                           | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q) 
                                                                              << 0x1eU)) 
                                                                          | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__fifo_ctrl_qe) 
                                                                              << 0x1dU) 
                                                                             | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q) 
                                                                                << 0x1cU))) 
                                                                         | ((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__fifo_ctrl_qe) 
                                                                              << 0x1bU) 
                                                                             | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q) 
                                                                                << 0x1aU)) 
                                                                            | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q) 
                                                                                << 0x19U) 
                                                                               | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q) 
                                                                                << 0x18U) 
                                                                                | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q))))))))))) 
                              >> 0x20U));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[0U] 
        = __Vtemp_37[0U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[1U] 
        = __Vtemp_37[1U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[2U] 
        = ((0xffffffe0U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[2U]) 
           | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__status_re) 
               << 3U) | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__status_re) 
                         << 1U)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[2U] 
        = ((0x1fU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[2U]) 
           | (0xffffffe0U & (((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                               << 0x1fU) | ((IData)(
                                                    ((0x18ULL 
                                                      == 
                                                      (0x78ULL 
                                                       & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)) 
                                                     & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____VdfgRegularize_hfbc725bf_0_18))) 
                                            << 0x1eU)) 
                             | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q) 
                                 << 0xeU) | (((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q) 
                                                << 0xcU) 
                                               | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q) 
                                                  << 0xbU)) 
                                              | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q) 
                                                  << 0xaU) 
                                                 | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
                                                    << 9U))) 
                                             | ((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q) 
                                                  << 8U) 
                                                 | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q) 
                                                    << 7U)) 
                                                | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q) 
                                                    << 6U) 
                                                   | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q) 
                                                      << 5U))))))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[3U] 
        = (((((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q) 
                << 0x1fU) | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                             << 0x1eU)) | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_done__q) 
                                            << 0x1dU) 
                                           | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q) 
                                              << 0x1cU))) 
             | ((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q) 
                  << 0x1bU) | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q) 
                               << 0x1aU)) | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q) 
                                              << 0x19U) 
                                             | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q) 
                                                << 0x18U)))) 
            | (((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q) 
                  << 0x17U) | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q) 
                               << 0x16U)) | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q) 
                                              << 0x15U) 
                                             | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_done__q) 
                                                << 0x14U))) 
               | ((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q) 
                    << 0x13U) | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q) 
                                 << 0x12U)) | ((0x20000U 
                                                & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                                                   << 9U)) 
                                               | ((0x1ffU 
                                                   == 
                                                   (0x1ffU 
                                                    & (- (IData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__intr_test_we))))) 
                                                  << 0x10U))))) 
           | (((((0x8000U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                             << 8U)) | ((0x1ffU == 
                                         (0x1ffU & 
                                          (- (IData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__intr_test_we))))) 
                                        << 0xeU)) | 
                ((0x2000U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                             << 7U)) | ((0x1ffU == 
                                         (0x1ffU & 
                                          (- (IData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__intr_test_we))))) 
                                        << 0xcU))) 
               | (((0x800U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                              << 6U)) | ((0x1ffU == 
                                          (0x1ffU & 
                                           (- (IData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__intr_test_we))))) 
                                         << 0xaU)) 
                  | ((0x200U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                                << 5U)) | ((0x1ffU 
                                            == (0x1ffU 
                                                & (- (IData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__intr_test_we))))) 
                                           << 8U)))) 
              | ((((0x80U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                             << 4U)) | ((0x1ffU == 
                                         (0x1ffU & 
                                          (- (IData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__intr_test_we))))) 
                                        << 6U)) | (
                                                   (0x20U 
                                                    & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                                                       << 3U)) 
                                                   | ((0x1ffU 
                                                       == 
                                                       (0x1ffU 
                                                        & (- (IData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__intr_test_we))))) 
                                                      << 4U))) 
                 | (((8U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                            << 2U)) | ((0x1ffU == (0x1ffU 
                                                   & (- (IData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__intr_test_we))))) 
                                       << 2U)) | ((2U 
                                                   & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                                                      << 1U)) 
                                                  | (0x1ffU 
                                                     == 
                                                     (0x1ffU 
                                                      & (- (IData)((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__intr_test_we))))))))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[4U] 
        = (0xfU & ((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q) 
                     << 3U) | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q) 
                               << 2U)) | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q) 
                                           << 1U) | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_i[0U] 
        = vlSelfRef.__VdfgRegularize_ha026946b_0_35[0U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_i[1U] 
        = vlSelfRef.__VdfgRegularize_ha026946b_0_35[1U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_i[2U] 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__DOT____Vcellinp__rspfifo__wvalid_i) 
            << 1U) | vlSelfRef.__VdfgRegularize_ha026946b_0_35[2U]);
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i[0U][0U] 
        = ((0xffff0000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
            [0U][0U]) | ((0xfffeU & (IData)(vlSelfRef.__VdfgRegularize_ha026946b_0_37)) 
                         | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__DOT__reqfifo__DOT__full_o)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i[0U][0U] 
        = ((0xffffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
            [0U][0U]) | (((1U == (IData)(vlSelfRef.__VdfgRegularize_ha026946b_0_31))
                           ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__d_data
                           : 0U) << 0x10U));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i[0U][1U] 
        = ((0xffff0000U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
            [0U][1U]) | (((1U == (IData)(vlSelfRef.__VdfgRegularize_ha026946b_0_31))
                           ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__sram_a_device_adapter__DOT__d_data
                           : 0U) >> 0x10U));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i[0U][1U] 
        = ((0xffffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
            [0U][1U]) | (0xffff0000U & vlSelfRef.__VdfgRegularize_ha026946b_0_35[1U]));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i[0U][2U] 
        = ((2U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
            [0U][2U]) | (1U & vlSelfRef.__VdfgRegularize_ha026946b_0_35[2U]));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i[0U][2U] 
        = ((1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
            [0U][2U]) | (3U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__DOT____Vcellinp__rspfifo__wvalid_i) 
                               << 1U)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x3fU == (0x3fU & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__qe 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__g_intr_event__DOT__new_event) 
           | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__intr_state_we));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_data 
        = ((~ ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                >> 4U) & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__intr_state_we))) 
           & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__g_intr_event__DOT__new_event)
               ? ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__g_intr_event__DOT__new_event) 
                  | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q))
               : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_break_err__DOT__qe 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__g_intr_event__DOT__new_event) 
           | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__intr_state_we));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_data 
        = ((~ ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                >> 5U) & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__intr_state_we))) 
           & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__g_intr_event__DOT__new_event)
               ? ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__g_intr_event__DOT__new_event) 
                  | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q))
               : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_timeout__DOT__qe 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__g_intr_event__DOT__new_event) 
           | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__intr_state_we));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_data 
        = ((~ ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                >> 6U) & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__intr_state_we))) 
           & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__g_intr_event__DOT__new_event)
               ? ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__g_intr_event__DOT__new_event) 
                  | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q))
               : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__qe 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__g_intr_event__DOT__new_event) 
           | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__intr_state_we));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_data 
        = ((~ ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                >> 7U) & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__intr_state_we))) 
           & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__g_intr_event__DOT__new_event)
               ? ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__g_intr_event__DOT__new_event) 
                  | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q))
               : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__qe 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__g_intr_event__DOT__new_event) 
           | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__intr_state_we));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_data 
        = ((~ ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                >> 3U) & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__intr_state_we))) 
           & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__g_intr_event__DOT__new_event)
               ? ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__g_intr_event__DOT__new_event) 
                  | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q))
               : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__qe 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_tx_done__DOT__g_intr_event__DOT__new_event) 
           | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__intr_state_we));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__wr_data 
        = ((~ ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__reg_wdata 
                >> 2U) & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT__intr_state_we))) 
           & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_tx_done__DOT__g_intr_event__DOT__new_event)
               ? ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__uart_core__DOT__intr_hw_tx_done__DOT__g_intr_event__DOT__new_event) 
                  | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_done__q))
               : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_done__q)));
    if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[2U] 
                                             >> 0xcU))) 
                               << 2U) | (((1U == (3U 
                                                  & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[2U] 
                                                     >> 0xcU))) 
                                          << 1U) | 
                                         (0U == (3U 
                                                 & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[2U] 
                                                    >> 0xcU))))))))) {
        if ((0U != (((2U == (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[2U] 
                                   >> 0xcU))) << 2U) 
                    | (((1U == (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[2U] 
                                      >> 0xcU))) << 1U) 
                       | (0U == (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[2U] 
                                       >> 0xcU))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: uart_core.sv:113: Assertion failed in %Ntop_verilator.u_soc_mod.u_uart.uart_core: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (3U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_uart__DOT__reg2hw[2U] 
                                    >> 0xcU)));
                VL_STOP_MT("../src/lowrisc_ip_uart_0.1/rtl/uart_core.sv", 113, "");
            }
        }
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_d2h[0U][0U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_i[0U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_d2h[0U][1U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_i[1U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__tl_s1n_3_ds_d2h[0U][2U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_i[2U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellinp__u_s1n_3__tl_d_i[0U][0U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_i[0U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellinp__u_s1n_3__tl_d_i[0U][1U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_i[1U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT____Vcellinp__u_s1n_3__tl_d_i[0U][2U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT____Vcellinp__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_i[2U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__hfifo_reqready 
        = (1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
           [2U][0U]);
    if ((0U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__dev_sel_s1n_3))) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__hfifo_reqready 
            = (1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
               [0U][0U]);
    }
    if ((1U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__dev_sel_s1n_3))) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__hfifo_reqready 
            = (1U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
               [1U][0U]);
    }
    if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__hold_all_requests) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__hfifo_reqready = 0U;
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[0U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
        [2U][0U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[1U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
        [2U][1U];
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[2U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
        [2U][2U];
    if ((0U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__dev_select_outstanding))) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[0U] 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
            [0U][0U];
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[1U] 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
            [0U][1U];
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[2U] 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
            [0U][2U];
    }
    if ((1U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__dev_select_outstanding))) {
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[0U] 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
            [1U][0U];
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[1U] 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
            [1U][1U];
        vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[2U] 
            = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_u_i
            [1U][2U];
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__fifo_h__DOT__reqfifo__DOT__full_o 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__data_req_out) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__hfifo_reqready));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1 
        = (((2U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
            | (4U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
           & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[2U] 
              >> 1U));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2 
        = ((0U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
           & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[2U] 
               >> 1U) & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_q)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
        = ((1U == (7U & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[2U] 
                          << 2U) | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[1U] 
                                    >> 0x1eU)))) ? 
           ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[1U] 
             << 0x10U) | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[0U] 
                          >> 0x10U)) : 0U);
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err 
        = (1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q) 
                 | ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[0U] 
                     >> 1U) | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_valid 
        = (((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[2U] 
             >> 1U) | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)) 
           & (0U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs;
    if ((4U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if ((2U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[2U])) {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d = 0U;
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update 
                        = (1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q)));
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d 
                        = (1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[0U] 
                                 >> 1U));
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update 
                        = (1U & (~ (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[0U] 
                                    >> 1U)));
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
        } else if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
        } else if ((2U & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[2U])) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
            if ((IData)(((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[2U] 
                          >> 1U) | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)))) {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d = 0U;
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update 
                    = (1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q)));
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d 
                    = (1U & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[0U] 
                              >> 1U) | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)));
            }
        }
        if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__fifo_h__DOT__reqfifo__DOT__full_o) 
                 | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update 
                    = (1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q)));
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
            }
        } else if ((IData)(((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[2U] 
                             >> 1U) | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)))) {
            if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__fifo_h__DOT__reqfifo__DOT__full_o) {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update 
                    = (1U & (~ ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[0U] 
                                 >> 1U) | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))));
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
            } else {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update = 0U;
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 3U;
            }
        } else if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__fifo_h__DOT__reqfifo__DOT__full_o) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 4U;
        }
    } else {
        if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
            vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d = 0U;
            if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d = 0U;
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d = 0U;
            }
        }
        if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__fifo_h__DOT__reqfifo__DOT__full_o) 
                 | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update = 1U;
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 2U;
            }
        } else if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) {
            if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__fifo_h__DOT__reqfifo__DOT__full_o) {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update = 1U;
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns 
                    = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access)
                        ? 2U : 0U);
            } else {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns 
                    = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access)
                        ? 1U : 3U);
            }
        }
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__accept_t_req 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__data_req_out) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__fifo_h__DOT__reqfifo__DOT__full_o));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q;
    if ((1U & (~ ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                if (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__fifo_h__DOT__reqfifo__DOT__full_o) 
                     | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update = 1U;
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d = 0U;
                }
            } else if ((IData)(((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[2U] 
                                 >> 1U) | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)))) {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d 
                    = (1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__fifo_h__DOT__reqfifo__DOT__full_o)));
            } else if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__fifo_h__DOT__reqfifo__DOT__full_o) {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__fifo_h__DOT__reqfifo__DOT__full_o) 
                 | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update = 1U;
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d = 1U;
            }
        } else if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) {
            if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__fifo_h__DOT__reqfifo__DOT__full_o) {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update = 1U;
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d 
                    = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access;
            }
        }
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_d 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2)) 
           & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1) 
              | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_q)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_bus_err_1_d 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2)) 
           & (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1) 
               & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[0U] 
                  >> 1U)) | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_bus_err_1_q)));
    vlSelfRef.__VdfgRegularize_ha026946b_0_21 = ((0xff00U 
                                                  & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                       >> 0x10U)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_we_lsu 
        = ((0U == (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
           & ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__tl_t_p[2U] 
               >> 1U) & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err)) 
                         & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q)))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_d 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err) 
           & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q)) 
              & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_valid)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_d 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err) 
           & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q) 
              & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_valid)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_alu = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set_raw_d = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw = 0U;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_branch = 0U;
    if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
            if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
                if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec) {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw 
                        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we) 
                           & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_valid));
                }
                if (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)
                      ? (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_valid)
                      : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_valid))) {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = 0U;
                } else {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv 
                        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec;
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch 
                        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec;
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump 
                        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec;
                }
            } else {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = 0U;
            }
        } else {
            if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec) {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = 1U;
            } else if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec) {
                if ((1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_valid)))) {
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = 1U;
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw = 0U;
                    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv = 1U;
                }
            } else if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec) {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d 
                    = (1U & (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                              >> 1U) | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)));
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch 
                    = (1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result) 
                             | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                >> 1U)));
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set_raw_d 
                    = (1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result) 
                             | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                >> 1U)));
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_branch = 1U;
            } else if (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec) {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = 1U;
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump = 1U;
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw 
                    = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec;
            } else {
                vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = 0U;
            }
            if ((1U & (~ VL_ONEHOT_I(((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec) 
                                        << 3U) | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec) 
                                                  << 2U)) 
                                      | (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec) 
                                          << 1U) | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec))))))) {
                if ((0U != ((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec) 
                              << 3U) | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec) 
                                        << 2U)) | (
                                                   ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec))))) {
                    if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: ibex_id_stage.sv:809: Assertion failed in %Ntop_verilator.u_soc_mod.u_ibex_top_tracing.u_ibex_top.u_ibex_core.id_stage_i: unique case, but multiple matches found for '1'h1'\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name());
                        VL_STOP_MT("../src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_id_stage.sv", 809, "");
                    }
                }
            }
        }
        if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) 
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q)))))))) {
            if ((0U != (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) 
                         << 1U) | (1U & (~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: ibex_id_stage.sv:807: Assertion failed in %Ntop_verilator.u_soc_mod.u_ibex_top_tracing.u_ibex_top.u_ibex_core.id_stage_i: unique case, but multiple matches found for '1'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 1,(IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q));
                    VL_STOP_MT("../src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_id_stage.sv", 807, "");
                }
            }
        }
    }
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__ibex_lsu_host_adapter__DOT__g_multiple_reqs__DOT__source_d 
        = (1U & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__xbar__DOT__u_s1n_3__DOT__accept_t_req)
                  ? ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__ibex_lsu_host_adapter__DOT__g_multiple_reqs__DOT__source_q)) 
                     & ((IData)(1U) + (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__ibex_lsu_host_adapter__DOT__g_multiple_reqs__DOT__source_q)))
                  : (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__ibex_lsu_host_adapter__DOT__g_multiple_reqs__DOT__source_q)));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_rdata_ext 
        = ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q))
            ? ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                ? ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                        ? (((- (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                                        >> 0x1fU))) 
                            << 8U) | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                                      >> 0x18U)) : 
                       VL_SHIFTR_III(32,32,32, vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core, 0x18U))
                    : ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                        ? (((- (IData)((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                                              >> 0x17U)))) 
                            << 8U) | (0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                                               >> 0x10U)))
                        : (0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                                    >> 0x10U)))) : 
               ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                 ? ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                     ? (((- (IData)((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                                           >> 0xfU)))) 
                         << 8U) | (0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                                            >> 8U)))
                     : (0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                                 >> 8U))) : ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                              ? (((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                                                                 >> 7U)))) 
                                                  << 8U) 
                                                 | (0xffU 
                                                    & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core))
                                              : (0xffU 
                                                 & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core))))
            : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q))
                ? ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                            ? (((- (IData)((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                                                  >> 7U)))) 
                                << 0x10U) | (IData)(vlSelfRef.__VdfgRegularize_ha026946b_0_21))
                            : (IData)(vlSelfRef.__VdfgRegularize_ha026946b_0_21))
                        : ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                            ? (((- (IData)((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                                            >> 0x1fU))) 
                                << 0x10U) | (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                                             >> 0x10U))
                            : VL_SHIFTR_III(32,32,32, vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core, 0x10U)))
                    : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                            ? (((- (IData)((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                                                  >> 0x17U)))) 
                                << 0x10U) | (0xffffU 
                                             & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                                                >> 8U)))
                            : (0xffffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                                          >> 8U))) : 
                       ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                         ? (((- (IData)((1U & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                                               >> 0xfU)))) 
                             << 0x10U) | (0xffffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core))
                         : (0xffffU & vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core))))
                : ((2U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                            << 8U) | (0xffU & (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                               >> 0x10U)))
                        : ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                            << 0x10U) | (0xffffU & 
                                         (vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                          >> 8U))))
                    : ((1U & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core 
                            << 0x18U) | vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q)
                        : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__data_rdata_core))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_d) 
           | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_d));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set 
        = ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_div_wait 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_mul_wait 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec) 
           & (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__stall 
        = (((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
            & ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec) 
               & ((~ (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_valid)) 
                  | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle)))) 
           | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump) 
              | ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv) 
                 | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch))));
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[1U] 
        = vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_rdata_ext;
    vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_rdata_d 
        = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_valid)
            ? vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_rdata_ext
            : vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_rdata_q);
    vlSelfRef.__VdfgRegularize_ha026946b_0_0 = ((IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d) 
                                                | (IData)(vlSelfRef.top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu));
}
