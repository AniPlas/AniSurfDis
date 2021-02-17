/*
 * isfinite.c
 *
 * Code generation for function 'isfinite'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "stress.h"
#include "isfinite.h"

/* Function Definitions */
boolean_T b_isfinite(real_T x)
{
  return (!muDoubleScalarIsInf(x)) && (!muDoubleScalarIsNaN(x));
}

/* End of code generation (isfinite.c) */
