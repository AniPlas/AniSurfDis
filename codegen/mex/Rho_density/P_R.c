/*
 * P_R.c
 *
 * Code generation for function 'P_R'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Rho_density.h"
#include "P_R.h"

/* Function Definitions */
real_T P_R(real_T x_1, real_T x_1_r, real_T a, real_T b)
{
  real_T a_tmp;

  /*  Eq. 4 in Ref.[2] */
  a_tmp = (x_1 - x_1_r) + a;
  return a_tmp / (a_tmp * a_tmp + b * b);
}

/* End of code generation (P_R.c) */
