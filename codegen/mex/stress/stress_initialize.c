/*
 * stress_initialize.c
 *
 * Code generation for function 'stress_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "stress.h"
#include "stress_initialize.h"
#include "_coder_stress_mex.h"
#include "stress_data.h"

/* Function Definitions */
void stress_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (stress_initialize.c) */
