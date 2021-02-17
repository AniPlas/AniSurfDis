/*
 * reshapeSizeChecks.c
 *
 * Code generation for function 'reshapeSizeChecks'
 *
 */

/* Include files */
#include "reshapeSizeChecks.h"
#include "rt_nonfinite.h"
#include "stress.h"

/* Function Definitions */
int32_T b_maxsize(const int32_T x_size[2])
{
  int32_T n;
  n = 1;
  if (x_size[1] > 1) {
    n = x_size[1];
  }

  return n;
}

int32_T maxsize(const emxArray_real_T *x)
{
  int32_T n;
  n = 15;
  if (x->size[1] > 15) {
    n = x->size[1];
  }

  return n;
}

/* End of code generation (reshapeSizeChecks.c) */
