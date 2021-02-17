/*
 * Im_Zeta_S.c
 *
 * Code generation for function 'Im_Zeta_S'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "stress.h"
#include "Im_Zeta_S.h"

/* Function Definitions */
real_T Im_Zeta_S(real_T t, real_T alpha, real_T i, real_T j, const creal_T P[3],
                 const creal_T A[9], const creal_T B[9])
{
  real_T zeta;
  int32_T P_re_tmp;
  real_T P_re;
  int32_T b_P_re_tmp;
  real_T P_im;
  real_T b_P_re;

  /*  Eq. 3 in Ref.[2] */
  if (j == 1.0) {
    P_re = A[((int32_T)i + 3 * ((int32_T)alpha - 1)) - 1].re * B[((int32_T)t + 3
      * ((int32_T)alpha - 1)) - 1].re - A[((int32_T)i + 3 * ((int32_T)alpha - 1))
      - 1].im * B[((int32_T)t + 3 * ((int32_T)alpha - 1)) - 1].im;
    P_im = A[((int32_T)i + 3 * ((int32_T)alpha - 1)) - 1].re * B[((int32_T)t + 3
      * ((int32_T)alpha - 1)) - 1].im + A[((int32_T)i + 3 * ((int32_T)alpha - 1))
      - 1].im * B[((int32_T)t + 3 * ((int32_T)alpha - 1)) - 1].re;
    if (P_im == 0.0) {
      P_re /= 2.0;
      P_im = 0.0;
    } else if (P_re == 0.0) {
      P_re = 0.0;
      P_im /= 2.0;
    } else {
      P_re /= 2.0;
      P_im /= 2.0;
    }

    if (P_im == 0.0) {
      P_re /= 3.1415926535897931;
    } else if (P_re == 0.0) {
      P_re = 0.0;
    } else {
      P_re /= 3.1415926535897931;
    }

    zeta = -P_re;
  } else {
    P_re_tmp = (int32_T)alpha - 1;
    b_P_re_tmp = 3 * P_re_tmp;
    P_re = P[P_re_tmp].re * A[((int32_T)i + b_P_re_tmp) - 1].re - P[(int32_T)
      alpha - 1].im * A[((int32_T)i + 3 * ((int32_T)alpha - 1)) - 1].im;
    P_im = P[(int32_T)alpha - 1].re * A[((int32_T)i + 3 * ((int32_T)alpha - 1))
      - 1].im + P[(int32_T)alpha - 1].im * A[((int32_T)i + 3 * ((int32_T)alpha -
      1)) - 1].re;
    b_P_re = P_re * B[((int32_T)t + b_P_re_tmp) - 1].re - P_im * B[((int32_T)t +
      3 * ((int32_T)alpha - 1)) - 1].im;
    P_im = P_re * B[((int32_T)t + 3 * ((int32_T)alpha - 1)) - 1].im + P_im * B
      [((int32_T)t + 3 * ((int32_T)alpha - 1)) - 1].re;
    if (P_im == 0.0) {
      P_re = b_P_re / 2.0;
      P_im = 0.0;
    } else if (b_P_re == 0.0) {
      P_re = 0.0;
      P_im /= 2.0;
    } else {
      P_re = b_P_re / 2.0;
      P_im /= 2.0;
    }

    if (P_im == 0.0) {
      P_re /= 3.1415926535897931;
    } else if (P_re == 0.0) {
      P_re = 0.0;
    } else {
      P_re /= 3.1415926535897931;
    }

    zeta = -P_re;
  }

  return zeta;
}

/* End of code generation (Im_Zeta_S.c) */
