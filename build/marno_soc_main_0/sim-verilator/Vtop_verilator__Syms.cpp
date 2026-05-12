// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop_verilator__pch.h"
#include "Vtop_verilator.h"
#include "Vtop_verilator___024root.h"
#include "Vtop_verilator_prim_sha2_pkg.h"
#include "Vtop_verilator_uart_reg_pkg.h"
#include "Vtop_verilator_ibex_pkg.h"

void Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__mhpmcounter_get_TOP(Vtop_verilator__Syms* __restrict vlSymsp, IData/*31:0*/ index, QData/*63:0*/ &mhpmcounter_get__Vfuncrtn);
void Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__mhpmcounter_num_TOP(Vtop_verilator__Syms* __restrict vlSymsp, IData/*31:0*/ &mhpmcounter_num__Vfuncrtn);
void Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__simutil_get_scramble_key_TOP(Vtop_verilator__Syms* __restrict vlSymsp, VlWide<4>/*127:0*/ &val, IData/*31:0*/ &simutil_get_scramble_key__Vfuncrtn);
void Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__simutil_get_scramble_nonce_TOP(Vtop_verilator__Syms* __restrict vlSymsp, VlWide<10>/*319:0*/ &nonce, IData/*31:0*/ &simutil_get_scramble_nonce__Vfuncrtn);
void Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem_TOP(Vtop_verilator__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ &val, IData/*31:0*/ &simutil_get_mem__Vfuncrtn);
void Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_memload_TOP(Vtop_verilator__Syms* __restrict vlSymsp, std::string file);
void Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem_TOP(Vtop_verilator__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ val, IData/*31:0*/ &simutil_set_mem__Vfuncrtn);

// FUNCTIONS
Vtop_verilator__Syms::~Vtop_verilator__Syms()
{
}

Vtop_verilator__Syms::Vtop_verilator__Syms(VerilatedContext* contextp, const char* namep, Vtop_verilator* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__ibex_pkg{this, Verilated::catName(namep, "ibex_pkg")}
    , TOP__prim_sha2_pkg{this, Verilated::catName(namep, "prim_sha2_pkg")}
    , TOP__uart_reg_pkg{this, Verilated::catName(namep, "uart_reg_pkg")}
{
        // Check resources
        Verilated::stackCheck(1733);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__ibex_pkg = &TOP__ibex_pkg;
    TOP.__PVT__prim_sha2_pkg = &TOP__prim_sha2_pkg;
    TOP.__PVT__uart_reg_pkg = &TOP__uart_reg_pkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__ibex_pkg.__Vconfigure(true);
    TOP__prim_sha2_pkg.__Vconfigure(true);
    TOP__uart_reg_pkg.__Vconfigure(true);
    // Setup scopes
    __Vscope_top_verilator.configure(this, name(), "top_verilator", "top_verilator", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_verilator__u_soc_mod__sram_a_device_adapter__u_err.configure(this, name(), "top_verilator.u_soc_mod.sram_a_device_adapter.u_err", "u_err", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_verilator__u_soc_mod__u_ibex_top_tracing__u_ibex_top__u_ibex_core.configure(this, name(), "top_verilator.u_soc_mod.u_ibex_top_tracing.u_ibex_top.u_ibex_core", "u_ibex_core", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_verilator__u_soc_mod__u_ibex_top_tracing__u_ibex_top__u_ibex_core__cs_registers_i.configure(this, name(), "top_verilator.u_soc_mod.u_ibex_top_tracing.u_ibex_top.u_ibex_core.cs_registers_i", "cs_registers_i", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_verilator__u_soc_mod__u_ibex_top_tracing__u_ibex_top__u_ibex_core__ex_block_i__alu_i.configure(this, name(), "top_verilator.u_soc_mod.u_ibex_top_tracing.u_ibex_top.u_ibex_core.ex_block_i.alu_i", "alu_i", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_verilator__u_soc_mod__u_ibex_top_tracing__u_ibex_top__u_ibex_core__id_stage_i.configure(this, name(), "top_verilator.u_soc_mod.u_ibex_top_tracing.u_ibex_top.u_ibex_core.id_stage_i", "id_stage_i", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_verilator__u_soc_mod__u_ibex_top_tracing__u_ibex_top__u_ibex_core__id_stage_i__controller_i.configure(this, name(), "top_verilator.u_soc_mod.u_ibex_top_tracing.u_ibex_top.u_ibex_core.id_stage_i.controller_i", "controller_i", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_verilator__u_soc_mod__u_ibex_top_tracing__u_ibex_top__u_ibex_core__id_stage_i__decoder_i.configure(this, name(), "top_verilator.u_soc_mod.u_ibex_top_tracing.u_ibex_top.u_ibex_core.id_stage_i.decoder_i", "decoder_i", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_verilator__u_soc_mod__u_ibex_top_tracing__u_ibex_top__u_ibex_core__id_stage_i__rf_wdata_id_mux.configure(this, name(), "top_verilator.u_soc_mod.u_ibex_top_tracing.u_ibex_top.u_ibex_core.id_stage_i.rf_wdata_id_mux", "rf_wdata_id_mux", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_verilator__u_soc_mod__u_ibex_top_tracing__u_ibex_top__u_ibex_core__if_stage_i.configure(this, name(), "top_verilator.u_soc_mod.u_ibex_top_tracing.u_ibex_top.u_ibex_core.if_stage_i", "if_stage_i", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_verilator__u_soc_mod__u_ibex_top_tracing__u_ibex_tracer.configure(this, name(), "top_verilator.u_soc_mod.u_ibex_top_tracing.u_ibex_tracer", "u_ibex_tracer", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_verilator__u_soc_mod__u_ibex_top_tracing__u_ibex_tracer__decode_store_insn.configure(this, name(), "top_verilator.u_soc_mod.u_ibex_top_tracing.u_ibex_tracer.decode_store_insn", "decode_store_insn", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_verilator__u_soc_mod__u_ibex_top_tracing__u_ibex_tracer__unnamedblk2__unnamedblk3.configure(this, name(), "top_verilator.u_soc_mod.u_ibex_top_tracing.u_ibex_tracer.unnamedblk2.unnamedblk3", "unnamedblk3", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_verilator__u_soc_mod__u_ram__gen_generic__u_impl_generic.configure(this, name(), "top_verilator.u_soc_mod.u_ram.gen_generic.u_impl_generic", "u_impl_generic", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_verilator__u_soc_mod__u_ram__gen_generic__u_impl_generic__unnamedblk3.configure(this, name(), "top_verilator.u_soc_mod.u_ram.gen_generic.u_impl_generic.unnamedblk3", "unnamedblk3", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_verilator__u_soc_mod__u_uart__u_reg.configure(this, name(), "top_verilator.u_soc_mod.u_uart.u_reg", "u_reg", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_verilator__u_soc_mod__u_uart__u_reg__u_reg_if__u_err.configure(this, name(), "top_verilator.u_soc_mod.u_uart.u_reg.u_reg_if.u_err", "u_err", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_verilator__u_soc_mod__u_uart__uart_core.configure(this, name(), "top_verilator.u_soc_mod.u_uart.uart_core", "uart_core", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_top_verilator.exportInsert(__Vfinal, "mhpmcounter_get", (void*)(&Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__mhpmcounter_get_TOP));
        __Vscope_top_verilator.exportInsert(__Vfinal, "mhpmcounter_num", (void*)(&Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__mhpmcounter_num_TOP));
        __Vscope_top_verilator__u_soc_mod__u_ibex_top_tracing__u_ibex_top__u_ibex_core__if_stage_i.exportInsert(__Vfinal, "simutil_get_scramble_key", (void*)(&Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__simutil_get_scramble_key_TOP));
        __Vscope_top_verilator__u_soc_mod__u_ibex_top_tracing__u_ibex_top__u_ibex_core__if_stage_i.exportInsert(__Vfinal, "simutil_get_scramble_nonce", (void*)(&Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_soc_mod__DOT__u_ibex_top_tracing__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__simutil_get_scramble_nonce_TOP));
        __Vscope_top_verilator__u_soc_mod__u_ram__gen_generic__u_impl_generic.exportInsert(__Vfinal, "simutil_get_mem", (void*)(&Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem_TOP));
        __Vscope_top_verilator__u_soc_mod__u_ram__gen_generic__u_impl_generic.exportInsert(__Vfinal, "simutil_memload", (void*)(&Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_memload_TOP));
        __Vscope_top_verilator__u_soc_mod__u_ram__gen_generic__u_impl_generic.exportInsert(__Vfinal, "simutil_set_mem", (void*)(&Vtop_verilator___024root____Vdpiexp_top_verilator__DOT__u_soc_mod__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem_TOP));
    }
}
