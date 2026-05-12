// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP_VERILATOR__SYMS_H_
#define VERILATED_VTOP_VERILATOR__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop_verilator.h"

// INCLUDE MODULE CLASSES
#include "Vtop_verilator___024root.h"
#include "Vtop_verilator_prim_sha2_pkg.h"
#include "Vtop_verilator_uart_reg_pkg.h"
#include "Vtop_verilator_ibex_pkg.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using Vtop_verilator__Vcb_mhpmcounter_get_t = void (*) (Vtop_verilator__Syms* __restrict vlSymsp, IData/*31:0*/ index, QData/*63:0*/ &mhpmcounter_get__Vfuncrtn);
using Vtop_verilator__Vcb_mhpmcounter_num_t = void (*) (Vtop_verilator__Syms* __restrict vlSymsp, IData/*31:0*/ &mhpmcounter_num__Vfuncrtn);
using Vtop_verilator__Vcb_simutil_get_mem_t = void (*) (Vtop_verilator__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ &val, IData/*31:0*/ &simutil_get_mem__Vfuncrtn);
using Vtop_verilator__Vcb_simutil_get_scramble_key_t = void (*) (Vtop_verilator__Syms* __restrict vlSymsp, VlWide<4>/*127:0*/ &val, IData/*31:0*/ &simutil_get_scramble_key__Vfuncrtn);
using Vtop_verilator__Vcb_simutil_get_scramble_nonce_t = void (*) (Vtop_verilator__Syms* __restrict vlSymsp, VlWide<10>/*319:0*/ &nonce, IData/*31:0*/ &simutil_get_scramble_nonce__Vfuncrtn);
using Vtop_verilator__Vcb_simutil_memload_t = void (*) (Vtop_verilator__Syms* __restrict vlSymsp, std::string file);
using Vtop_verilator__Vcb_simutil_set_mem_t = void (*) (Vtop_verilator__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ val, IData/*31:0*/ &simutil_set_mem__Vfuncrtn);

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop_verilator__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop_verilator* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop_verilator___024root       TOP;
    Vtop_verilator_ibex_pkg        TOP__ibex_pkg;
    Vtop_verilator_prim_sha2_pkg   TOP__prim_sha2_pkg;
    Vtop_verilator_uart_reg_pkg    TOP__uart_reg_pkg;

    // SCOPE NAMES
    VerilatedScope __Vscope_top_verilator;
    VerilatedScope __Vscope_top_verilator__u_soc_mod__sram_a_device_adapter__u_err;
    VerilatedScope __Vscope_top_verilator__u_soc_mod__u_ibex_top_tracing__u_ibex_top__u_ibex_core;
    VerilatedScope __Vscope_top_verilator__u_soc_mod__u_ibex_top_tracing__u_ibex_top__u_ibex_core__cs_registers_i;
    VerilatedScope __Vscope_top_verilator__u_soc_mod__u_ibex_top_tracing__u_ibex_top__u_ibex_core__ex_block_i__alu_i;
    VerilatedScope __Vscope_top_verilator__u_soc_mod__u_ibex_top_tracing__u_ibex_top__u_ibex_core__id_stage_i;
    VerilatedScope __Vscope_top_verilator__u_soc_mod__u_ibex_top_tracing__u_ibex_top__u_ibex_core__id_stage_i__controller_i;
    VerilatedScope __Vscope_top_verilator__u_soc_mod__u_ibex_top_tracing__u_ibex_top__u_ibex_core__id_stage_i__decoder_i;
    VerilatedScope __Vscope_top_verilator__u_soc_mod__u_ibex_top_tracing__u_ibex_top__u_ibex_core__id_stage_i__rf_wdata_id_mux;
    VerilatedScope __Vscope_top_verilator__u_soc_mod__u_ibex_top_tracing__u_ibex_top__u_ibex_core__if_stage_i;
    VerilatedScope __Vscope_top_verilator__u_soc_mod__u_ibex_top_tracing__u_ibex_tracer;
    VerilatedScope __Vscope_top_verilator__u_soc_mod__u_ibex_top_tracing__u_ibex_tracer__decode_store_insn;
    VerilatedScope __Vscope_top_verilator__u_soc_mod__u_ibex_top_tracing__u_ibex_tracer__unnamedblk2__unnamedblk3;
    VerilatedScope __Vscope_top_verilator__u_soc_mod__u_ram__gen_generic__u_impl_generic;
    VerilatedScope __Vscope_top_verilator__u_soc_mod__u_ram__gen_generic__u_impl_generic__unnamedblk3;
    VerilatedScope __Vscope_top_verilator__u_soc_mod__u_uart__u_reg;
    VerilatedScope __Vscope_top_verilator__u_soc_mod__u_uart__u_reg__u_reg_if__u_err;
    VerilatedScope __Vscope_top_verilator__u_soc_mod__u_uart__uart_core;

    // CONSTRUCTORS
    Vtop_verilator__Syms(VerilatedContext* contextp, const char* namep, Vtop_verilator* modelp);
    ~Vtop_verilator__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
