/*
 * ifWhileCond.c
 *
 * Code generation for function 'ifWhileCond'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "stress.h"
#include "ifWhileCond.h"

/* Function Definitions */
boolean_T ifWhileCond(const boolean_T x[6])
{
  boolean_T y;
  int32_T k;
  boolean_T exitg1;
  y = true;
  k = 1;
  exitg1 = false;
  while ((!exitg1) && (k < 7)) {
    if (!x[k - 1]) {
      y = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  return y;
}

/* End of code generation (ifWhileCond.c) */
