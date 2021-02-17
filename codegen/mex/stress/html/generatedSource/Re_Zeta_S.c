/*
 * Re_Zeta_S.c
 *
 * Code generation for function 'Re_Zeta_S'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "stress.h"
#include "Re_Zeta_S.h"

/* Function Definitions */
real_T Re_Zeta_S(real_T t, real_T alpha, real_T i, real_T j, const creal_T P[3],
                 const creal_T A[9], const creal_T B[9])
{
  real_T zeta;
  real_T P_re;
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
      P_im = 0.0;
    } else if (P_re == 0.0) {
      P_im /= 2.0;
    } else {
      P_im /= 2.0;
    }

    if (P_im == 0.0) {
      zeta = 0.0;
    } else {
      zeta = P_im / 3.1415926535897931;
    }
  } else {
    P_re = P[(int32_T)alpha - 1].re * A[((int32_T)i + 3 * ((int32_T)alpha - 1))
      - 1].re - P[(int32_T)alpha - 1].im * A[((int32_T)i + 3 * ((int32_T)alpha -
      1)) - 1].im;
    P_im = P[(int32_T)alpha - 1].re * A[((int32_T)i + 3 * ((int32_T)alpha - 1))
      - 1].im + P[(int32_T)alpha - 1].im * A[((int32_T)i + 3 * ((int32_T)alpha -
      1)) - 1].re;
    b_P_re = P_re * B[((int32_T)t + 3 * ((int32_T)alpha - 1)) - 1].re - P_im *
      B[((int32_T)t + 3 * ((int32_T)alpha - 1)) - 1].im;
    P_im = P_re * B[((int32_T)t + 3 * ((int32_T)alpha - 1)) - 1].im + P_im * B
      [((int32_T)t + 3 * ((int32_T)alpha - 1)) - 1].re;
    if (P_im == 0.0) {
      P_im = 0.0;
    } else if (b_P_re == 0.0) {
      P_im /= 2.0;
    } else {
      P_im /= 2.0;
    }

    if (P_im == 0.0) {
      zeta = 0.0;
    } else {
      zeta = P_im / 3.1415926535897931;
    }
  }

  return zeta;
}

/* End of code generation (Re_Zeta_S.c) */
