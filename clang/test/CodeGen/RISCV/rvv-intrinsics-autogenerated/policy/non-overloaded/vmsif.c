// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py
// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

// CHECK-RV64-LABEL: @test_vmsif_m_b1_mu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 64 x i1> @llvm.riscv.vmsif.mask.nxv64i1.i64(<vscale x 64 x i1> [[MASKEDOFF:%.*]], <vscale x 64 x i1> [[OP1:%.*]], <vscale x 64 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 64 x i1> [[TMP0]]
//
vbool1_t test_vmsif_m_b1_mu(vbool1_t mask, vbool1_t maskedoff, vbool1_t op1, size_t vl) {
  return vmsif_m_b1_mu(mask, maskedoff, op1, vl);
}

// CHECK-RV64-LABEL: @test_vmsif_m_b2_mu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 32 x i1> @llvm.riscv.vmsif.mask.nxv32i1.i64(<vscale x 32 x i1> [[MASKEDOFF:%.*]], <vscale x 32 x i1> [[OP1:%.*]], <vscale x 32 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 32 x i1> [[TMP0]]
//
vbool2_t test_vmsif_m_b2_mu(vbool2_t mask, vbool2_t maskedoff, vbool2_t op1, size_t vl) {
  return vmsif_m_b2_mu(mask, maskedoff, op1, vl);
}

// CHECK-RV64-LABEL: @test_vmsif_m_b4_mu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x i1> @llvm.riscv.vmsif.mask.nxv16i1.i64(<vscale x 16 x i1> [[MASKEDOFF:%.*]], <vscale x 16 x i1> [[OP1:%.*]], <vscale x 16 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x i1> [[TMP0]]
//
vbool4_t test_vmsif_m_b4_mu(vbool4_t mask, vbool4_t maskedoff, vbool4_t op1, size_t vl) {
  return vmsif_m_b4_mu(mask, maskedoff, op1, vl);
}

// CHECK-RV64-LABEL: @test_vmsif_m_b8_mu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x i1> @llvm.riscv.vmsif.mask.nxv8i1.i64(<vscale x 8 x i1> [[MASKEDOFF:%.*]], <vscale x 8 x i1> [[OP1:%.*]], <vscale x 8 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x i1> [[TMP0]]
//
vbool8_t test_vmsif_m_b8_mu(vbool8_t mask, vbool8_t maskedoff, vbool8_t op1, size_t vl) {
  return vmsif_m_b8_mu(mask, maskedoff, op1, vl);
}

// CHECK-RV64-LABEL: @test_vmsif_m_b16_mu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x i1> @llvm.riscv.vmsif.mask.nxv4i1.i64(<vscale x 4 x i1> [[MASKEDOFF:%.*]], <vscale x 4 x i1> [[OP1:%.*]], <vscale x 4 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x i1> [[TMP0]]
//
vbool16_t test_vmsif_m_b16_mu(vbool16_t mask, vbool16_t maskedoff, vbool16_t op1, size_t vl) {
  return vmsif_m_b16_mu(mask, maskedoff, op1, vl);
}

// CHECK-RV64-LABEL: @test_vmsif_m_b32_mu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i1> @llvm.riscv.vmsif.mask.nxv2i1.i64(<vscale x 2 x i1> [[MASKEDOFF:%.*]], <vscale x 2 x i1> [[OP1:%.*]], <vscale x 2 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x i1> [[TMP0]]
//
vbool32_t test_vmsif_m_b32_mu(vbool32_t mask, vbool32_t maskedoff, vbool32_t op1, size_t vl) {
  return vmsif_m_b32_mu(mask, maskedoff, op1, vl);
}

// CHECK-RV64-LABEL: @test_vmsif_m_b64_mu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x i1> @llvm.riscv.vmsif.mask.nxv1i1.i64(<vscale x 1 x i1> [[MASKEDOFF:%.*]], <vscale x 1 x i1> [[OP1:%.*]], <vscale x 1 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x i1> [[TMP0]]
//
vbool64_t test_vmsif_m_b64_mu(vbool64_t mask, vbool64_t maskedoff, vbool64_t op1, size_t vl) {
  return vmsif_m_b64_mu(mask, maskedoff, op1, vl);
}
