// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_verilator.h for the primary calling header

#include "Vtop_verilator__pch.h"
#include "Vtop_verilator__Syms.h"
#include "Vtop_verilator_prim_sha2_pkg.h"

// Parameter definitions for Vtop_verilator_prim_sha2_pkg
constexpr VlUnpacked<IData/*31:0*/, 8> Vtop_verilator_prim_sha2_pkg::__PVT__InitHash_256;
constexpr VlUnpacked<QData/*63:0*/, 8> Vtop_verilator_prim_sha2_pkg::__PVT__InitHash_384;
constexpr VlUnpacked<QData/*63:0*/, 8> Vtop_verilator_prim_sha2_pkg::__PVT__InitHash_512;
constexpr VlUnpacked<IData/*31:0*/, 64> Vtop_verilator_prim_sha2_pkg::__PVT__CubicRootPrime256;
constexpr VlUnpacked<QData/*63:0*/, 80> Vtop_verilator_prim_sha2_pkg::__PVT__CubicRootPrime512;


void Vtop_verilator_prim_sha2_pkg___ctor_var_reset(Vtop_verilator_prim_sha2_pkg* vlSelf);

Vtop_verilator_prim_sha2_pkg::Vtop_verilator_prim_sha2_pkg(Vtop_verilator__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_verilator_prim_sha2_pkg___ctor_var_reset(this);
}

void Vtop_verilator_prim_sha2_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_verilator_prim_sha2_pkg::~Vtop_verilator_prim_sha2_pkg() {
}
