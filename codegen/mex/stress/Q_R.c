/*
 * Q_R.c
 *
 * Code generation for function 'Q_R'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "stress.h"
#include "Q_R.h"

/* Function Definitions */
real_T Q_R(real_T x_1, real_T x_1_r, real_T a, real_T b)
{
  real_T b_a;

  /*  Eq. 4 in Ref.[2] */
  b_a = (x_1 - x_1_r) + a;
  return b / (b_a * b_a + b * b);
}

/* End of code generation (Q_R.c) */
