/*
 * Im_Xi.c
 *
 * Code generation for function 'Im_Xi'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "stress.h"
#include "Im_Xi.h"
#include "stress_data.h"

/* Function Definitions */
real_T Im_Xi(const emlrtStack *sp, real_T t, real_T alpha, real_T i, const
             real_T C[81], const creal_T P[3], const creal_T A[9], const creal_T
             B[9])
{
  real_T xi_re;
  real_T xi_im;
  int32_T k;
  int8_T delta[6];
  int32_T l;
  real_T C_re;
  real_T C_im;
  real_T b_C_re;

  /*  Eq. 3 in Ref.[2] */
  xi_re = 0.0;
  xi_im = 0.0;
  for (k = 0; k < 6; k++) {
    delta[k] = 0;
  }

  delta[0] = 1;
  delta[4] = 1;
  k = 0;
  while (k < 3) {
    l = 0;
    while (l < 3) {
      C_re = C[(((int32_T)i + 9 * k) + 27 * l) + 2] * ((real_T)delta[l] + P
        [(int32_T)alpha - 1].re * (real_T)delta[3 + l]);
      C_im = C[(((int32_T)i + 9 * k) + 27 * l) + 2] * (P[(int32_T)alpha - 1].im *
        (real_T)delta[3 + l]);
      b_C_re = C_re * A[k + 3 * ((int32_T)alpha - 1)].re - C_im * A[k + 3 *
        ((int32_T)alpha - 1)].im;
      C_im = C_re * A[k + 3 * ((int32_T)alpha - 1)].im + C_im * A[k + 3 *
        ((int32_T)alpha - 1)].re;
      xi_re += b_C_re * B[((int32_T)t + 3 * ((int32_T)alpha - 1)) - 1].re - C_im
        * B[((int32_T)t + 3 * ((int32_T)alpha - 1)) - 1].im;
      xi_im += b_C_re * B[((int32_T)t + 3 * ((int32_T)alpha - 1)) - 1].im + C_im
        * B[((int32_T)t + 3 * ((int32_T)alpha - 1)) - 1].re;
      l++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    k++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  if (xi_im == 0.0) {
    xi_re /= 2.0;
    xi_im = 0.0;
  } else if (xi_re == 0.0) {
    xi_re = 0.0;
    xi_im /= 2.0;
  } else {
    xi_re /= 2.0;
    xi_im /= 2.0;
  }

  if (xi_im == 0.0) {
    xi_re /= 3.1415926535897931;
  } else if (xi_re == 0.0) {
    xi_re = 0.0;
  } else {
    xi_re /= 3.1415926535897931;
  }

  return -xi_re;
}

/* End of code generation (Im_Xi.c) */
