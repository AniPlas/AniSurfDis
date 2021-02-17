/*
 * Re_Xi.c
 *
 * Code generation for function 'Re_Xi'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "stress.h"
#include "Re_Xi.h"
#include "stress_data.h"

/* Function Definitions */
real_T Re_Xi(const emlrtStack *sp, real_T t, real_T alpha, real_T i, const
             real_T C[81], const creal_T P[3], const creal_T A[9], const creal_T
             B[9])
{
  real_T xi;
  real_T xi_re;
  real_T xi_im;
  int32_T k;
  int32_T delta_re_tmp;
  real_T b_delta_re_tmp;
  real_T delta_im_tmp;
  int32_T C_re_tmp_tmp;
  real_T C_im;
  real_T C_re;
  real_T b_C_re;

  /*  Eq. 3 in Ref.[2] */
  xi_re = 0.0;
  xi_im = 0.0;
  for (k = 0; k < 3; k++) {
    delta_re_tmp = (int32_T)alpha - 1;
    b_delta_re_tmp = P[delta_re_tmp].re * 0.0;
    delta_im_tmp = P[(int32_T)alpha - 1].im * 0.0;
    C_re_tmp_tmp = (int32_T)i + 9 * k;
    C_im = C[C_re_tmp_tmp + 2];
    C_re = C_im * (1.0 + b_delta_re_tmp);
    C_im *= delta_im_tmp;
    delta_re_tmp *= 3;
    b_C_re = C_re * A[k + delta_re_tmp].re - C_im * A[k + 3 * ((int32_T)alpha -
      1)].im;
    C_im = C_re * A[k + 3 * ((int32_T)alpha - 1)].im + C_im * A[k + 3 *
      ((int32_T)alpha - 1)].re;
    xi_re += b_C_re * B[((int32_T)t + delta_re_tmp) - 1].re - C_im * B[((int32_T)
      t + 3 * ((int32_T)alpha - 1)) - 1].im;
    xi_im += b_C_re * B[((int32_T)t + 3 * ((int32_T)alpha - 1)) - 1].im + C_im *
      B[((int32_T)t + 3 * ((int32_T)alpha - 1)) - 1].re;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }

    C_im = C[C_re_tmp_tmp + 29];
    C_re = C_im * P[(int32_T)alpha - 1].re;
    C_im *= P[(int32_T)alpha - 1].im;
    b_C_re = C_re * A[k + 3 * ((int32_T)alpha - 1)].re - C_im * A[k + 3 *
      ((int32_T)alpha - 1)].im;
    C_im = C_re * A[k + 3 * ((int32_T)alpha - 1)].im + C_im * A[k + 3 *
      ((int32_T)alpha - 1)].re;
    xi_re += b_C_re * B[((int32_T)t + 3 * ((int32_T)alpha - 1)) - 1].re - C_im *
      B[((int32_T)t + 3 * ((int32_T)alpha - 1)) - 1].im;
    xi_im += b_C_re * B[((int32_T)t + 3 * ((int32_T)alpha - 1)) - 1].im + C_im *
      B[((int32_T)t + 3 * ((int32_T)alpha - 1)) - 1].re;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }

    C_im = C[C_re_tmp_tmp + 56];
    C_re = C_im * b_delta_re_tmp;
    C_im *= delta_im_tmp;
    b_C_re = C_re * A[k + 3 * ((int32_T)alpha - 1)].re - C_im * A[k + 3 *
      ((int32_T)alpha - 1)].im;
    C_im = C_re * A[k + 3 * ((int32_T)alpha - 1)].im + C_im * A[k + 3 *
      ((int32_T)alpha - 1)].re;
    xi_re += b_C_re * B[((int32_T)t + 3 * ((int32_T)alpha - 1)) - 1].re - C_im *
      B[((int32_T)t + 3 * ((int32_T)alpha - 1)) - 1].im;
    xi_im += b_C_re * B[((int32_T)t + 3 * ((int32_T)alpha - 1)) - 1].im + C_im *
      B[((int32_T)t + 3 * ((int32_T)alpha - 1)) - 1].re;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  if (xi_im == 0.0) {
    xi_im = 0.0;
  } else if (xi_re == 0.0) {
    xi_im /= 2.0;
  } else {
    xi_im /= 2.0;
  }

  if (xi_im == 0.0) {
    xi = 0.0;
  } else {
    xi = xi_im / 3.1415926535897931;
  }

  return xi;
}

/* End of code generation (Re_Xi.c) */
