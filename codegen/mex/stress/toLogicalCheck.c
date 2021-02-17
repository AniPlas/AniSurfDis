/*
 * toLogicalCheck.c
 *
 * Code generation for function 'toLogicalCheck'
 *
 */

/* Include files */
#include "toLogicalCheck.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "stress.h"

/* Variable Definitions */
static emlrtRTEInfo r_emlrtRTEI = { 13,/* lineNo */
  13,                                  /* colNo */
  "toLogicalCheck",                    /* fName */
  "C:\\Polyspace\\R2020a\\toolbox\\eml\\eml\\+coder\\+internal\\toLogicalCheck.m"/* pName */
};

/* Function Definitions */
void toLogicalCheck(const emlrtStack *sp, const real_T x[6])
{
  int32_T k;
  for (k = 0; k < 6; k++) {
    if (muDoubleScalarIsNaN(x[k])) {
      emlrtErrorWithMessageIdR2018a(sp, &r_emlrtRTEI, "MATLAB:nologicalnan",
        "MATLAB:nologicalnan", 0);
    }
  }
}

/* End of code generation (toLogicalCheck.c) */
