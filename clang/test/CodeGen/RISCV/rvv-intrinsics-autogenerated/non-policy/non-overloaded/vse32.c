// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py
// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

// CHECK-RV64-LABEL: @test_vse32_v_f32mf2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.vse.nxv1f32.i64(<vscale x 1 x float> [[VALUE:%.*]], ptr [[BASE:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret void
//
void test_vse32_v_f32mf2(float *base, vfloat32mf2_t value, size_t vl) {
  return vse32_v_f32mf2(base, value, vl);
}

// CHECK-RV64-LABEL: @test_vse32_v_f32m1(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.vse.nxv2f32.i64(<vscale x 2 x float> [[VALUE:%.*]], ptr [[BASE:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret void
//
void test_vse32_v_f32m1(float *base, vfloat32m1_t value, size_t vl) {
  return vse32_v_f32m1(base, value, vl);
}

// CHECK-RV64-LABEL: @test_vse32_v_f32m2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.vse.nxv4f32.i64(<vscale x 4 x float> [[VALUE:%.*]], ptr [[BASE:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret void
//
void test_vse32_v_f32m2(float *base, vfloat32m2_t value, size_t vl) {
  return vse32_v_f32m2(base, value, vl);
}

// CHECK-RV64-LABEL: @test_vse32_v_f32m4(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.vse.nxv8f32.i64(<vscale x 8 x float> [[VALUE:%.*]], ptr [[BASE:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret void
//
void test_vse32_v_f32m4(float *base, vfloat32m4_t value, size_t vl) {
  return vse32_v_f32m4(base, value, vl);
}

// CHECK-RV64-LABEL: @test_vse32_v_f32m8(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.vse.nxv16f32.i64(<vscale x 16 x float> [[VALUE:%.*]], ptr [[BASE:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret void
//
void test_vse32_v_f32m8(float *base, vfloat32m8_t value, size_t vl) {
  return vse32_v_f32m8(base, value, vl);
}

// CHECK-RV64-LABEL: @test_vse32_v_i32mf2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.vse.nxv1i32.i64(<vscale x 1 x i32> [[VALUE:%.*]], ptr [[BASE:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret void
//
void test_vse32_v_i32mf2(int32_t *base, vint32mf2_t value, size_t vl) {
  return vse32_v_i32mf2(base, value, vl);
}

// CHECK-RV64-LABEL: @test_vse32_v_i32m1(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.vse.nxv2i32.i64(<vscale x 2 x i32> [[VALUE:%.*]], ptr [[BASE:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret void
//
void test_vse32_v_i32m1(int32_t *base, vint32m1_t value, size_t vl) {
  return vse32_v_i32m1(base, value, vl);
}

// CHECK-RV64-LABEL: @test_vse32_v_i32m2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.vse.nxv4i32.i64(<vscale x 4 x i32> [[VALUE:%.*]], ptr [[BASE:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret void
//
void test_vse32_v_i32m2(int32_t *base, vint32m2_t value, size_t vl) {
  return vse32_v_i32m2(base, value, vl);
}

// CHECK-RV64-LABEL: @test_vse32_v_i32m4(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.vse.nxv8i32.i64(<vscale x 8 x i32> [[VALUE:%.*]], ptr [[BASE:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret void
//
void test_vse32_v_i32m4(int32_t *base, vint32m4_t value, size_t vl) {
  return vse32_v_i32m4(base, value, vl);
}

// CHECK-RV64-LABEL: @test_vse32_v_i32m8(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.vse.nxv16i32.i64(<vscale x 16 x i32> [[VALUE:%.*]], ptr [[BASE:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret void
//
void test_vse32_v_i32m8(int32_t *base, vint32m8_t value, size_t vl) {
  return vse32_v_i32m8(base, value, vl);
}

// CHECK-RV64-LABEL: @test_vse32_v_u32mf2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.vse.nxv1i32.i64(<vscale x 1 x i32> [[VALUE:%.*]], ptr [[BASE:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret void
//
void test_vse32_v_u32mf2(uint32_t *base, vuint32mf2_t value, size_t vl) {
  return vse32_v_u32mf2(base, value, vl);
}

// CHECK-RV64-LABEL: @test_vse32_v_u32m1(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.vse.nxv2i32.i64(<vscale x 2 x i32> [[VALUE:%.*]], ptr [[BASE:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret void
//
void test_vse32_v_u32m1(uint32_t *base, vuint32m1_t value, size_t vl) {
  return vse32_v_u32m1(base, value, vl);
}

// CHECK-RV64-LABEL: @test_vse32_v_u32m2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.vse.nxv4i32.i64(<vscale x 4 x i32> [[VALUE:%.*]], ptr [[BASE:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret void
//
void test_vse32_v_u32m2(uint32_t *base, vuint32m2_t value, size_t vl) {
  return vse32_v_u32m2(base, value, vl);
}

// CHECK-RV64-LABEL: @test_vse32_v_u32m4(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.vse.nxv8i32.i64(<vscale x 8 x i32> [[VALUE:%.*]], ptr [[BASE:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret void
//
void test_vse32_v_u32m4(uint32_t *base, vuint32m4_t value, size_t vl) {
  return vse32_v_u32m4(base, value, vl);
}

// CHECK-RV64-LABEL: @test_vse32_v_u32m8(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.vse.nxv16i32.i64(<vscale x 16 x i32> [[VALUE:%.*]], ptr [[BASE:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret void
//
void test_vse32_v_u32m8(uint32_t *base, vuint32m8_t value, size_t vl) {
  return vse32_v_u32m8(base, value, vl);
}

// CHECK-RV64-LABEL: @test_vse32_v_f32mf2_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.vse.mask.nxv1f32.i64(<vscale x 1 x float> [[VALUE:%.*]], ptr [[BASE:%.*]], <vscale x 1 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret void
//
void test_vse32_v_f32mf2_m(vbool64_t mask, float *base, vfloat32mf2_t value, size_t vl) {
  return vse32_v_f32mf2_m(mask, base, value, vl);
}

// CHECK-RV64-LABEL: @test_vse32_v_f32m1_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.vse.mask.nxv2f32.i64(<vscale x 2 x float> [[VALUE:%.*]], ptr [[BASE:%.*]], <vscale x 2 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret void
//
void test_vse32_v_f32m1_m(vbool32_t mask, float *base, vfloat32m1_t value, size_t vl) {
  return vse32_v_f32m1_m(mask, base, value, vl);
}

// CHECK-RV64-LABEL: @test_vse32_v_f32m2_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.vse.mask.nxv4f32.i64(<vscale x 4 x float> [[VALUE:%.*]], ptr [[BASE:%.*]], <vscale x 4 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret void
//
void test_vse32_v_f32m2_m(vbool16_t mask, float *base, vfloat32m2_t value, size_t vl) {
  return vse32_v_f32m2_m(mask, base, value, vl);
}

// CHECK-RV64-LABEL: @test_vse32_v_f32m4_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.vse.mask.nxv8f32.i64(<vscale x 8 x float> [[VALUE:%.*]], ptr [[BASE:%.*]], <vscale x 8 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret void
//
void test_vse32_v_f32m4_m(vbool8_t mask, float *base, vfloat32m4_t value, size_t vl) {
  return vse32_v_f32m4_m(mask, base, value, vl);
}

// CHECK-RV64-LABEL: @test_vse32_v_f32m8_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.vse.mask.nxv16f32.i64(<vscale x 16 x float> [[VALUE:%.*]], ptr [[BASE:%.*]], <vscale x 16 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret void
//
void test_vse32_v_f32m8_m(vbool4_t mask, float *base, vfloat32m8_t value, size_t vl) {
  return vse32_v_f32m8_m(mask, base, value, vl);
}

// CHECK-RV64-LABEL: @test_vse32_v_i32mf2_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.vse.mask.nxv1i32.i64(<vscale x 1 x i32> [[VALUE:%.*]], ptr [[BASE:%.*]], <vscale x 1 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret void
//
void test_vse32_v_i32mf2_m(vbool64_t mask, int32_t *base, vint32mf2_t value, size_t vl) {
  return vse32_v_i32mf2_m(mask, base, value, vl);
}

// CHECK-RV64-LABEL: @test_vse32_v_i32m1_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.vse.mask.nxv2i32.i64(<vscale x 2 x i32> [[VALUE:%.*]], ptr [[BASE:%.*]], <vscale x 2 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret void
//
void test_vse32_v_i32m1_m(vbool32_t mask, int32_t *base, vint32m1_t value, size_t vl) {
  return vse32_v_i32m1_m(mask, base, value, vl);
}

// CHECK-RV64-LABEL: @test_vse32_v_i32m2_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.vse.mask.nxv4i32.i64(<vscale x 4 x i32> [[VALUE:%.*]], ptr [[BASE:%.*]], <vscale x 4 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret void
//
void test_vse32_v_i32m2_m(vbool16_t mask, int32_t *base, vint32m2_t value, size_t vl) {
  return vse32_v_i32m2_m(mask, base, value, vl);
}

// CHECK-RV64-LABEL: @test_vse32_v_i32m4_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.vse.mask.nxv8i32.i64(<vscale x 8 x i32> [[VALUE:%.*]], ptr [[BASE:%.*]], <vscale x 8 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret void
//
void test_vse32_v_i32m4_m(vbool8_t mask, int32_t *base, vint32m4_t value, size_t vl) {
  return vse32_v_i32m4_m(mask, base, value, vl);
}

// CHECK-RV64-LABEL: @test_vse32_v_i32m8_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.vse.mask.nxv16i32.i64(<vscale x 16 x i32> [[VALUE:%.*]], ptr [[BASE:%.*]], <vscale x 16 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret void
//
void test_vse32_v_i32m8_m(vbool4_t mask, int32_t *base, vint32m8_t value, size_t vl) {
  return vse32_v_i32m8_m(mask, base, value, vl);
}

// CHECK-RV64-LABEL: @test_vse32_v_u32mf2_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.vse.mask.nxv1i32.i64(<vscale x 1 x i32> [[VALUE:%.*]], ptr [[BASE:%.*]], <vscale x 1 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret void
//
void test_vse32_v_u32mf2_m(vbool64_t mask, uint32_t *base, vuint32mf2_t value, size_t vl) {
  return vse32_v_u32mf2_m(mask, base, value, vl);
}

// CHECK-RV64-LABEL: @test_vse32_v_u32m1_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.vse.mask.nxv2i32.i64(<vscale x 2 x i32> [[VALUE:%.*]], ptr [[BASE:%.*]], <vscale x 2 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret void
//
void test_vse32_v_u32m1_m(vbool32_t mask, uint32_t *base, vuint32m1_t value, size_t vl) {
  return vse32_v_u32m1_m(mask, base, value, vl);
}

// CHECK-RV64-LABEL: @test_vse32_v_u32m2_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.vse.mask.nxv4i32.i64(<vscale x 4 x i32> [[VALUE:%.*]], ptr [[BASE:%.*]], <vscale x 4 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret void
//
void test_vse32_v_u32m2_m(vbool16_t mask, uint32_t *base, vuint32m2_t value, size_t vl) {
  return vse32_v_u32m2_m(mask, base, value, vl);
}

// CHECK-RV64-LABEL: @test_vse32_v_u32m4_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.vse.mask.nxv8i32.i64(<vscale x 8 x i32> [[VALUE:%.*]], ptr [[BASE:%.*]], <vscale x 8 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret void
//
void test_vse32_v_u32m4_m(vbool8_t mask, uint32_t *base, vuint32m4_t value, size_t vl) {
  return vse32_v_u32m4_m(mask, base, value, vl);
}

// CHECK-RV64-LABEL: @test_vse32_v_u32m8_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    call void @llvm.riscv.vse.mask.nxv16i32.i64(<vscale x 16 x i32> [[VALUE:%.*]], ptr [[BASE:%.*]], <vscale x 16 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret void
//
void test_vse32_v_u32m8_m(vbool4_t mask, uint32_t *base, vuint32m8_t value, size_t vl) {
  return vse32_v_u32m8_m(mask, base, value, vl);
}
