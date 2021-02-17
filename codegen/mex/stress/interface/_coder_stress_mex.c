/*
 * _coder_stress_mex.c
 *
 * Code generation for function '_coder_stress_mex'
 *
 */

/* Include files */
#include "stress.h"
#include "_coder_stress_mex.h"
#include "stress_terminate.h"
#include "_coder_stress_api.h"
#include "stress_initialize.h"
#include "stress_data.h"

/* Function Declarations */
static void stress_mexFunction(stressStackData *SD, int32_T nlhs, mxArray *plhs
  [5], int32_T nrhs, const mxArray *prhs[61]);

/* Function Definitions */
static void stress_mexFunction(stressStackData *SD, int32_T nlhs, mxArray *plhs
  [5], int32_T nrhs, const mxArray *prhs[61])
{
  const mxArray *outputs[5];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 61) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 61, 4,
                        6, "stress");
  }

  if (nlhs > 5) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 6,
                        "stress");
  }

  /* Call the function. */
  stress_api(SD, prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  stressStackData *stressStackDataGlobal = NULL;
  stressStackDataGlobal = (stressStackData *)emlrtMxCalloc(1, 1U * sizeof
    (stressStackData));
  mexAtExit(stress_atexit);

  /* Module initialization. */
  stress_initialize();

  /* Dispatch the entry-point. */
  stress_mexFunction(stressStackDataGlobal, nlhs, plhs, nrhs, prhs);

  /* Module termination. */
  stress_terminate();
  emlrtMxFree(stressStackDataGlobal);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_stress_mex.c) */
