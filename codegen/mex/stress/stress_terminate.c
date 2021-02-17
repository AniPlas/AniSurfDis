/*
 * stress_terminate.c
 *
 * Code generation for function 'stress_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "stress.h"
#include "stress_terminate.h"
#include "_coder_stress_mex.h"
#include "stress_data.h"

/* Function Definitions */
void stress_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void stress_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (stress_terminate.c) */
