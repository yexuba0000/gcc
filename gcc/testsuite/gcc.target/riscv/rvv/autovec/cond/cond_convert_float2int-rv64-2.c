/* { dg-do compile } */
/* { dg-additional-options "-march=rv64gcv_zvfh -mabi=lp64d --param riscv-autovec-preference=scalable -fno-vect-cost-model -ffast-math" } */

#include "cond_convert_float2int-2.h"

/* { dg-final { scan-assembler-times {\tvfcvt\.rtz\.xu\.f\.v\tv[0-9]+,v[0-9]+,v0\.t} 3 } } */
/* { dg-final { scan-assembler-times {\tvfcvt\.rtz\.x\.f\.v\tv[0-9]+,v[0-9]+,v0\.t} 3 } } */

/* { dg-final { scan-assembler-times {\tvfwcvt\.rtz\.xu\.f\.v\tv[0-9]+,v[0-9]+,v0\.t} 2 } } */
/* { dg-final { scan-assembler-times {\tvfwcvt\.rtz\.x\.f\.v\tv[0-9]+,v[0-9]+,v0\.t} 2 } } */
/* { dg-final { scan-assembler-times {\tvfwcvt\.rtz\.x\.f\.v\tv[0-9]+,v[0-9]+\n} 2 } } */

/* { dg-final { scan-assembler-times {\tvfncvt\.rtz\.xu\.f\.w\tv[0-9]+,v[0-9]+,v0\.t} 3 } } */
/* { dg-final { scan-assembler-times {\tvfncvt\.rtz\.x\.f\.w\tv[0-9]+,v[0-9]+,v0\.t} 3 } } */
/* { dg-final { scan-assembler-times {\tvfncvt\.rtz\.x\.f\.w\tv[0-9]+,v[0-9]+\n} 6 } } */

/* { dg-final { scan-assembler {\tvsetvli\t[a-z0-9]+,[a-z0-9]+,e[0-9]+,m[f0-9]+,t[au],mu} } } */
/* { dg-final { scan-assembler-not {\tvf?merge\.v[vxi]m\t} } } */
