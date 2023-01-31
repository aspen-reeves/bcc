// RUN: llvm-mc -triple x86_64-unknown-unknown --show-encoding %s | FileCheck %s

// CHECK:      vbcstnebf162ps  268435456(%rbp,%r14,8), %xmm2
// CHECK: encoding: [0xc4,0xa2,0x7a,0xb1,0x94,0xf5,0x00,0x00,0x00,0x10]
               vbcstnebf162ps  268435456(%rbp,%r14,8), %xmm2

// CHECK:      vbcstnebf162ps  291(%r8,%rax,4), %xmm2
// CHECK: encoding: [0xc4,0xc2,0x7a,0xb1,0x94,0x80,0x23,0x01,0x00,0x00]
               vbcstnebf162ps  291(%r8,%rax,4), %xmm2

// CHECK:      vbcstnebf162ps  (%rip), %xmm2
// CHECK: encoding: [0xc4,0xe2,0x7a,0xb1,0x15,0x00,0x00,0x00,0x00]
               vbcstnebf162ps  (%rip), %xmm2

// CHECK:      vbcstnebf162ps  -64(,%rbp,2), %xmm2
// CHECK: encoding: [0xc4,0xe2,0x7a,0xb1,0x14,0x6d,0xc0,0xff,0xff,0xff]
               vbcstnebf162ps  -64(,%rbp,2), %xmm2

// CHECK:      vbcstnebf162ps  254(%rcx), %xmm2
// CHECK: encoding: [0xc4,0xe2,0x7a,0xb1,0x91,0xfe,0x00,0x00,0x00]
               vbcstnebf162ps  254(%rcx), %xmm2

// CHECK:      vbcstnebf162ps  -256(%rdx), %xmm2
// CHECK: encoding: [0xc4,0xe2,0x7a,0xb1,0x92,0x00,0xff,0xff,0xff]
               vbcstnebf162ps  -256(%rdx), %xmm2

// CHECK:      vbcstnebf162ps  268435456(%rbp,%r14,8), %ymm2
// CHECK: encoding: [0xc4,0xa2,0x7e,0xb1,0x94,0xf5,0x00,0x00,0x00,0x10]
               vbcstnebf162ps  268435456(%rbp,%r14,8), %ymm2

// CHECK:      vbcstnebf162ps  291(%r8,%rax,4), %ymm2
// CHECK: encoding: [0xc4,0xc2,0x7e,0xb1,0x94,0x80,0x23,0x01,0x00,0x00]
               vbcstnebf162ps  291(%r8,%rax,4), %ymm2

// CHECK:      vbcstnebf162ps  (%rip), %ymm2
// CHECK: encoding: [0xc4,0xe2,0x7e,0xb1,0x15,0x00,0x00,0x00,0x00]
               vbcstnebf162ps  (%rip), %ymm2

// CHECK:      vbcstnebf162ps  -64(,%rbp,2), %ymm2
// CHECK: encoding: [0xc4,0xe2,0x7e,0xb1,0x14,0x6d,0xc0,0xff,0xff,0xff]
               vbcstnebf162ps  -64(,%rbp,2), %ymm2

// CHECK:      vbcstnebf162ps  254(%rcx), %ymm2
// CHECK: encoding: [0xc4,0xe2,0x7e,0xb1,0x91,0xfe,0x00,0x00,0x00]
               vbcstnebf162ps  254(%rcx), %ymm2

// CHECK:      vbcstnebf162ps  -256(%rdx), %ymm2
// CHECK: encoding: [0xc4,0xe2,0x7e,0xb1,0x92,0x00,0xff,0xff,0xff]
               vbcstnebf162ps  -256(%rdx), %ymm2

// CHECK:      vbcstnesh2ps  268435456(%rbp,%r14,8), %xmm2
// CHECK: encoding: [0xc4,0xa2,0x79,0xb1,0x94,0xf5,0x00,0x00,0x00,0x10]
               vbcstnesh2ps  268435456(%rbp,%r14,8), %xmm2

// CHECK:      vbcstnesh2ps  291(%r8,%rax,4), %xmm2
// CHECK: encoding: [0xc4,0xc2,0x79,0xb1,0x94,0x80,0x23,0x01,0x00,0x00]
               vbcstnesh2ps  291(%r8,%rax,4), %xmm2

// CHECK:      vbcstnesh2ps  (%rip), %xmm2
// CHECK: encoding: [0xc4,0xe2,0x79,0xb1,0x15,0x00,0x00,0x00,0x00]
               vbcstnesh2ps  (%rip), %xmm2

// CHECK:      vbcstnesh2ps  -64(,%rbp,2), %xmm2
// CHECK: encoding: [0xc4,0xe2,0x79,0xb1,0x14,0x6d,0xc0,0xff,0xff,0xff]
               vbcstnesh2ps  -64(,%rbp,2), %xmm2

// CHECK:      vbcstnesh2ps  254(%rcx), %xmm2
// CHECK: encoding: [0xc4,0xe2,0x79,0xb1,0x91,0xfe,0x00,0x00,0x00]
               vbcstnesh2ps  254(%rcx), %xmm2

// CHECK:      vbcstnesh2ps  -256(%rdx), %xmm2
// CHECK: encoding: [0xc4,0xe2,0x79,0xb1,0x92,0x00,0xff,0xff,0xff]
               vbcstnesh2ps  -256(%rdx), %xmm2

// CHECK:      vbcstnesh2ps  268435456(%rbp,%r14,8), %ymm2
// CHECK: encoding: [0xc4,0xa2,0x7d,0xb1,0x94,0xf5,0x00,0x00,0x00,0x10]
               vbcstnesh2ps  268435456(%rbp,%r14,8), %ymm2

// CHECK:      vbcstnesh2ps  291(%r8,%rax,4), %ymm2
// CHECK: encoding: [0xc4,0xc2,0x7d,0xb1,0x94,0x80,0x23,0x01,0x00,0x00]
               vbcstnesh2ps  291(%r8,%rax,4), %ymm2

// CHECK:      vbcstnesh2ps  (%rip), %ymm2
// CHECK: encoding: [0xc4,0xe2,0x7d,0xb1,0x15,0x00,0x00,0x00,0x00]
               vbcstnesh2ps  (%rip), %ymm2

// CHECK:      vbcstnesh2ps  -64(,%rbp,2), %ymm2
// CHECK: encoding: [0xc4,0xe2,0x7d,0xb1,0x14,0x6d,0xc0,0xff,0xff,0xff]
               vbcstnesh2ps  -64(,%rbp,2), %ymm2

// CHECK:      vbcstnesh2ps  254(%rcx), %ymm2
// CHECK: encoding: [0xc4,0xe2,0x7d,0xb1,0x91,0xfe,0x00,0x00,0x00]
               vbcstnesh2ps  254(%rcx), %ymm2

// CHECK:      vbcstnesh2ps  -256(%rdx), %ymm2
// CHECK: encoding: [0xc4,0xe2,0x7d,0xb1,0x92,0x00,0xff,0xff,0xff]
               vbcstnesh2ps  -256(%rdx), %ymm2

// CHECK:      vcvtneebf162ps  268435456(%rbp,%r14,8), %xmm2
// CHECK: encoding: [0xc4,0xa2,0x7a,0xb0,0x94,0xf5,0x00,0x00,0x00,0x10]
               vcvtneebf162ps  268435456(%rbp,%r14,8), %xmm2

// CHECK:      vcvtneebf162ps  291(%r8,%rax,4), %xmm2
// CHECK: encoding: [0xc4,0xc2,0x7a,0xb0,0x94,0x80,0x23,0x01,0x00,0x00]
               vcvtneebf162ps  291(%r8,%rax,4), %xmm2

// CHECK:      vcvtneebf162ps  (%rip), %xmm2
// CHECK: encoding: [0xc4,0xe2,0x7a,0xb0,0x15,0x00,0x00,0x00,0x00]
               vcvtneebf162ps  (%rip), %xmm2

// CHECK:      vcvtneebf162ps  -512(,%rbp,2), %xmm2
// CHECK: encoding: [0xc4,0xe2,0x7a,0xb0,0x14,0x6d,0x00,0xfe,0xff,0xff]
               vcvtneebf162ps  -512(,%rbp,2), %xmm2

// CHECK:      vcvtneebf162ps  2032(%rcx), %xmm2
// CHECK: encoding: [0xc4,0xe2,0x7a,0xb0,0x91,0xf0,0x07,0x00,0x00]
               vcvtneebf162ps  2032(%rcx), %xmm2

// CHECK:      vcvtneebf162ps  -2048(%rdx), %xmm2
// CHECK: encoding: [0xc4,0xe2,0x7a,0xb0,0x92,0x00,0xf8,0xff,0xff]
               vcvtneebf162ps  -2048(%rdx), %xmm2

// CHECK:      vcvtneebf162ps  268435456(%rbp,%r14,8), %ymm2
// CHECK: encoding: [0xc4,0xa2,0x7e,0xb0,0x94,0xf5,0x00,0x00,0x00,0x10]
               vcvtneebf162ps  268435456(%rbp,%r14,8), %ymm2

// CHECK:      vcvtneebf162ps  291(%r8,%rax,4), %ymm2
// CHECK: encoding: [0xc4,0xc2,0x7e,0xb0,0x94,0x80,0x23,0x01,0x00,0x00]
               vcvtneebf162ps  291(%r8,%rax,4), %ymm2

// CHECK:      vcvtneebf162ps  (%rip), %ymm2
// CHECK: encoding: [0xc4,0xe2,0x7e,0xb0,0x15,0x00,0x00,0x00,0x00]
               vcvtneebf162ps  (%rip), %ymm2

// CHECK:      vcvtneebf162ps  -1024(,%rbp,2), %ymm2
// CHECK: encoding: [0xc4,0xe2,0x7e,0xb0,0x14,0x6d,0x00,0xfc,0xff,0xff]
               vcvtneebf162ps  -1024(,%rbp,2), %ymm2

// CHECK:      vcvtneebf162ps  4064(%rcx), %ymm2
// CHECK: encoding: [0xc4,0xe2,0x7e,0xb0,0x91,0xe0,0x0f,0x00,0x00]
               vcvtneebf162ps  4064(%rcx), %ymm2

// CHECK:      vcvtneebf162ps  -4096(%rdx), %ymm2
// CHECK: encoding: [0xc4,0xe2,0x7e,0xb0,0x92,0x00,0xf0,0xff,0xff]
               vcvtneebf162ps  -4096(%rdx), %ymm2

// CHECK:      vcvtneeph2ps  268435456(%rbp,%r14,8), %xmm2
// CHECK: encoding: [0xc4,0xa2,0x79,0xb0,0x94,0xf5,0x00,0x00,0x00,0x10]
               vcvtneeph2ps  268435456(%rbp,%r14,8), %xmm2

// CHECK:      vcvtneeph2ps  291(%r8,%rax,4), %xmm2
// CHECK: encoding: [0xc4,0xc2,0x79,0xb0,0x94,0x80,0x23,0x01,0x00,0x00]
               vcvtneeph2ps  291(%r8,%rax,4), %xmm2

// CHECK:      vcvtneeph2ps  (%rip), %xmm2
// CHECK: encoding: [0xc4,0xe2,0x79,0xb0,0x15,0x00,0x00,0x00,0x00]
               vcvtneeph2ps  (%rip), %xmm2

// CHECK:      vcvtneeph2ps  -512(,%rbp,2), %xmm2
// CHECK: encoding: [0xc4,0xe2,0x79,0xb0,0x14,0x6d,0x00,0xfe,0xff,0xff]
               vcvtneeph2ps  -512(,%rbp,2), %xmm2

// CHECK:      vcvtneeph2ps  2032(%rcx), %xmm2
// CHECK: encoding: [0xc4,0xe2,0x79,0xb0,0x91,0xf0,0x07,0x00,0x00]
               vcvtneeph2ps  2032(%rcx), %xmm2

// CHECK:      vcvtneeph2ps  -2048(%rdx), %xmm2
// CHECK: encoding: [0xc4,0xe2,0x79,0xb0,0x92,0x00,0xf8,0xff,0xff]
               vcvtneeph2ps  -2048(%rdx), %xmm2

// CHECK:      vcvtneeph2ps  268435456(%rbp,%r14,8), %ymm2
// CHECK: encoding: [0xc4,0xa2,0x7d,0xb0,0x94,0xf5,0x00,0x00,0x00,0x10]
               vcvtneeph2ps  268435456(%rbp,%r14,8), %ymm2

// CHECK:      vcvtneeph2ps  291(%r8,%rax,4), %ymm2
// CHECK: encoding: [0xc4,0xc2,0x7d,0xb0,0x94,0x80,0x23,0x01,0x00,0x00]
               vcvtneeph2ps  291(%r8,%rax,4), %ymm2

// CHECK:      vcvtneeph2ps  (%rip), %ymm2
// CHECK: encoding: [0xc4,0xe2,0x7d,0xb0,0x15,0x00,0x00,0x00,0x00]
               vcvtneeph2ps  (%rip), %ymm2

// CHECK:      vcvtneeph2ps  -1024(,%rbp,2), %ymm2
// CHECK: encoding: [0xc4,0xe2,0x7d,0xb0,0x14,0x6d,0x00,0xfc,0xff,0xff]
               vcvtneeph2ps  -1024(,%rbp,2), %ymm2

// CHECK:      vcvtneeph2ps  4064(%rcx), %ymm2
// CHECK: encoding: [0xc4,0xe2,0x7d,0xb0,0x91,0xe0,0x0f,0x00,0x00]
               vcvtneeph2ps  4064(%rcx), %ymm2

// CHECK:      vcvtneeph2ps  -4096(%rdx), %ymm2
// CHECK: encoding: [0xc4,0xe2,0x7d,0xb0,0x92,0x00,0xf0,0xff,0xff]
               vcvtneeph2ps  -4096(%rdx), %ymm2

// CHECK:      vcvtneobf162ps  268435456(%rbp,%r14,8), %xmm2
// CHECK: encoding: [0xc4,0xa2,0x7b,0xb0,0x94,0xf5,0x00,0x00,0x00,0x10]
               vcvtneobf162ps  268435456(%rbp,%r14,8), %xmm2

// CHECK:      vcvtneobf162ps  291(%r8,%rax,4), %xmm2
// CHECK: encoding: [0xc4,0xc2,0x7b,0xb0,0x94,0x80,0x23,0x01,0x00,0x00]
               vcvtneobf162ps  291(%r8,%rax,4), %xmm2

// CHECK:      vcvtneobf162ps  (%rip), %xmm2
// CHECK: encoding: [0xc4,0xe2,0x7b,0xb0,0x15,0x00,0x00,0x00,0x00]
               vcvtneobf162ps  (%rip), %xmm2

// CHECK:      vcvtneobf162ps  -512(,%rbp,2), %xmm2
// CHECK: encoding: [0xc4,0xe2,0x7b,0xb0,0x14,0x6d,0x00,0xfe,0xff,0xff]
               vcvtneobf162ps  -512(,%rbp,2), %xmm2

// CHECK:      vcvtneobf162ps  2032(%rcx), %xmm2
// CHECK: encoding: [0xc4,0xe2,0x7b,0xb0,0x91,0xf0,0x07,0x00,0x00]
               vcvtneobf162ps  2032(%rcx), %xmm2

// CHECK:      vcvtneobf162ps  -2048(%rdx), %xmm2
// CHECK: encoding: [0xc4,0xe2,0x7b,0xb0,0x92,0x00,0xf8,0xff,0xff]
               vcvtneobf162ps  -2048(%rdx), %xmm2

// CHECK:      vcvtneobf162ps  268435456(%rbp,%r14,8), %ymm2
// CHECK: encoding: [0xc4,0xa2,0x7f,0xb0,0x94,0xf5,0x00,0x00,0x00,0x10]
               vcvtneobf162ps  268435456(%rbp,%r14,8), %ymm2

// CHECK:      vcvtneobf162ps  291(%r8,%rax,4), %ymm2
// CHECK: encoding: [0xc4,0xc2,0x7f,0xb0,0x94,0x80,0x23,0x01,0x00,0x00]
               vcvtneobf162ps  291(%r8,%rax,4), %ymm2

// CHECK:      vcvtneobf162ps  (%rip), %ymm2
// CHECK: encoding: [0xc4,0xe2,0x7f,0xb0,0x15,0x00,0x00,0x00,0x00]
               vcvtneobf162ps  (%rip), %ymm2

// CHECK:      vcvtneobf162ps  -1024(,%rbp,2), %ymm2
// CHECK: encoding: [0xc4,0xe2,0x7f,0xb0,0x14,0x6d,0x00,0xfc,0xff,0xff]
               vcvtneobf162ps  -1024(,%rbp,2), %ymm2

// CHECK:      vcvtneobf162ps  4064(%rcx), %ymm2
// CHECK: encoding: [0xc4,0xe2,0x7f,0xb0,0x91,0xe0,0x0f,0x00,0x00]
               vcvtneobf162ps  4064(%rcx), %ymm2

// CHECK:      vcvtneobf162ps  -4096(%rdx), %ymm2
// CHECK: encoding: [0xc4,0xe2,0x7f,0xb0,0x92,0x00,0xf0,0xff,0xff]
               vcvtneobf162ps  -4096(%rdx), %ymm2

// CHECK:      vcvtneoph2ps  268435456(%rbp,%r14,8), %xmm2
// CHECK: encoding: [0xc4,0xa2,0x78,0xb0,0x94,0xf5,0x00,0x00,0x00,0x10]
               vcvtneoph2ps  268435456(%rbp,%r14,8), %xmm2

// CHECK:      vcvtneoph2ps  291(%r8,%rax,4), %xmm2
// CHECK: encoding: [0xc4,0xc2,0x78,0xb0,0x94,0x80,0x23,0x01,0x00,0x00]
               vcvtneoph2ps  291(%r8,%rax,4), %xmm2

// CHECK:      vcvtneoph2ps  (%rip), %xmm2
// CHECK: encoding: [0xc4,0xe2,0x78,0xb0,0x15,0x00,0x00,0x00,0x00]
               vcvtneoph2ps  (%rip), %xmm2

// CHECK:      vcvtneoph2ps  -512(,%rbp,2), %xmm2
// CHECK: encoding: [0xc4,0xe2,0x78,0xb0,0x14,0x6d,0x00,0xfe,0xff,0xff]
               vcvtneoph2ps  -512(,%rbp,2), %xmm2

// CHECK:      vcvtneoph2ps  2032(%rcx), %xmm2
// CHECK: encoding: [0xc4,0xe2,0x78,0xb0,0x91,0xf0,0x07,0x00,0x00]
               vcvtneoph2ps  2032(%rcx), %xmm2

// CHECK:      vcvtneoph2ps  -2048(%rdx), %xmm2
// CHECK: encoding: [0xc4,0xe2,0x78,0xb0,0x92,0x00,0xf8,0xff,0xff]
               vcvtneoph2ps  -2048(%rdx), %xmm2

// CHECK:      vcvtneoph2ps  268435456(%rbp,%r14,8), %ymm2
// CHECK: encoding: [0xc4,0xa2,0x7c,0xb0,0x94,0xf5,0x00,0x00,0x00,0x10]
               vcvtneoph2ps  268435456(%rbp,%r14,8), %ymm2

// CHECK:      vcvtneoph2ps  291(%r8,%rax,4), %ymm2
// CHECK: encoding: [0xc4,0xc2,0x7c,0xb0,0x94,0x80,0x23,0x01,0x00,0x00]
               vcvtneoph2ps  291(%r8,%rax,4), %ymm2

// CHECK:      vcvtneoph2ps  (%rip), %ymm2
// CHECK: encoding: [0xc4,0xe2,0x7c,0xb0,0x15,0x00,0x00,0x00,0x00]
               vcvtneoph2ps  (%rip), %ymm2

// CHECK:      vcvtneoph2ps  -1024(,%rbp,2), %ymm2
// CHECK: encoding: [0xc4,0xe2,0x7c,0xb0,0x14,0x6d,0x00,0xfc,0xff,0xff]
               vcvtneoph2ps  -1024(,%rbp,2), %ymm2

// CHECK:      vcvtneoph2ps  4064(%rcx), %ymm2
// CHECK: encoding: [0xc4,0xe2,0x7c,0xb0,0x91,0xe0,0x0f,0x00,0x00]
               vcvtneoph2ps  4064(%rcx), %ymm2

// CHECK:      vcvtneoph2ps  -4096(%rdx), %ymm2
// CHECK: encoding: [0xc4,0xe2,0x7c,0xb0,0x92,0x00,0xf0,0xff,0xff]
               vcvtneoph2ps  -4096(%rdx), %ymm2

// CHECK:      {vex} vcvtneps2bf16 %xmm3, %xmm2
// CHECK: encoding: [0xc4,0xe2,0x7a,0x72,0xd3]
               {vex} vcvtneps2bf16 %xmm3, %xmm2

// CHECK:      {vex} vcvtneps2bf16 %ymm3, %xmm2
// CHECK: encoding: [0xc4,0xe2,0x7e,0x72,0xd3]
               {vex} vcvtneps2bf16 %ymm3, %xmm2

// CHECK:      {vex} vcvtneps2bf16x  268435456(%rbp,%r14,8), %xmm2
// CHECK: encoding: [0xc4,0xa2,0x7a,0x72,0x94,0xf5,0x00,0x00,0x00,0x10]
               {vex} vcvtneps2bf16x  268435456(%rbp,%r14,8), %xmm2

// CHECK:      {vex} vcvtneps2bf16x  291(%r8,%rax,4), %xmm2
// CHECK: encoding: [0xc4,0xc2,0x7a,0x72,0x94,0x80,0x23,0x01,0x00,0x00]
               {vex} vcvtneps2bf16x  291(%r8,%rax,4), %xmm2

// CHECK:      {vex} vcvtneps2bf16x  (%rip), %xmm2
// CHECK: encoding: [0xc4,0xe2,0x7a,0x72,0x15,0x00,0x00,0x00,0x00]
               {vex} vcvtneps2bf16x  (%rip), %xmm2

// CHECK:      {vex} vcvtneps2bf16x  -512(,%rbp,2), %xmm2
// CHECK: encoding: [0xc4,0xe2,0x7a,0x72,0x14,0x6d,0x00,0xfe,0xff,0xff]
               {vex} vcvtneps2bf16x  -512(,%rbp,2), %xmm2

// CHECK:      {vex} vcvtneps2bf16x  2032(%rcx), %xmm2
// CHECK: encoding: [0xc4,0xe2,0x7a,0x72,0x91,0xf0,0x07,0x00,0x00]
               {vex} vcvtneps2bf16x  2032(%rcx), %xmm2

// CHECK:      {vex} vcvtneps2bf16x  -2048(%rdx), %xmm2
// CHECK: encoding: [0xc4,0xe2,0x7a,0x72,0x92,0x00,0xf8,0xff,0xff]
               {vex} vcvtneps2bf16x  -2048(%rdx), %xmm2

// CHECK:      {vex} vcvtneps2bf16y  -1024(,%rbp,2), %xmm2
// CHECK: encoding: [0xc4,0xe2,0x7e,0x72,0x14,0x6d,0x00,0xfc,0xff,0xff]
               {vex} vcvtneps2bf16y  -1024(,%rbp,2), %xmm2

// CHECK:      {vex} vcvtneps2bf16y  4064(%rcx), %xmm2
// CHECK: encoding: [0xc4,0xe2,0x7e,0x72,0x91,0xe0,0x0f,0x00,0x00]
               {vex} vcvtneps2bf16y  4064(%rcx), %xmm2

// CHECK:      {vex} vcvtneps2bf16y  -4096(%rdx), %xmm2
// CHECK: encoding: [0xc4,0xe2,0x7e,0x72,0x92,0x00,0xf0,0xff,0xff]
               {vex} vcvtneps2bf16y  -4096(%rdx), %xmm2
