/*
 * _coder_coef_rho_mex.c
 *
 * Code generation for function '_coder_coef_rho_mex'
 *
 */

/* Include files */
#include "coef_rho.h"
#include "_coder_coef_rho_mex.h"
#include "coef_rho_terminate.h"
#include "_coder_coef_rho_api.h"
#include "coef_rho_initialize.h"
#include "coef_rho_data.h"

/* Function Declarations */
static void coef_rho_mexFunction(int32_T nlhs, mxArray *plhs[11], int32_T nrhs,
  const mxArray *prhs[34]);

/* Function Definitions */
static void coef_rho_mexFunction(int32_T nlhs, mxArray *plhs[11], int32_T nrhs,
  const mxArray *prhs[34])
{
  const mxArray *outputs[11];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 34) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 34, 4,
                        8, "coef_rho");
  }

  if (nlhs > 11) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 8,
                        "coef_rho");
  }

  /* Call the function. */
  coef_rho_api(prhs, nlhs, outputs);

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
  mexAtExit(coef_rho_atexit);

  /* Module initialization. */
  coef_rho_initialize();

  /* Dispatch the entry-point. */
  coef_rho_mexFunction(nlhs, plhs, nrhs, prhs);

  /* Module termination. */
  coef_rho_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_coef_rho_mex.c) */
