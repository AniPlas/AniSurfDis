/*
 * error.c
 *
 * Code generation for function 'error'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Rho_density.h"
#include "error.h"

/* Variable Definitions */
static emlrtRTEInfo pb_emlrtRTEI = { 19,/* lineNo */
  5,                                   /* colNo */
  "error",                             /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/shared/coder/coder/+coder/+internal/error.m"/* pName */
};

/* Function Definitions */
void b_error(const emlrtStack *sp, int32_T varargin_2)
{
  static const char_T varargin_1[19] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_',
    'd', 'g', 'e', 't', 'r', 'f', '_', 'w', 'o', 'r', 'k' };

  emlrtErrorWithMessageIdR2018a(sp, &pb_emlrtRTEI,
    "Coder:toolbox:LAPACKCallErrorInfo", "Coder:toolbox:LAPACKCallErrorInfo", 5,
    4, 19, varargin_1, 12, varargin_2);
}

void c_error(const emlrtStack *sp, int32_T varargin_2)
{
  static const char_T varargin_1[14] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_',
    'd', 'g', 'e', 'q', 'p', '3' };

  emlrtErrorWithMessageIdR2018a(sp, &pb_emlrtRTEI,
    "Coder:toolbox:LAPACKCallErrorInfo", "Coder:toolbox:LAPACKCallErrorInfo", 5,
    4, 14, varargin_1, 12, varargin_2);
}

void d_error(const emlrtStack *sp, int32_T varargin_2)
{
  static const char_T varargin_1[14] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_',
    'd', 'o', 'r', 'm', 'q', 'r' };

  emlrtErrorWithMessageIdR2018a(sp, &pb_emlrtRTEI,
    "Coder:toolbox:LAPACKCallErrorInfo", "Coder:toolbox:LAPACKCallErrorInfo", 5,
    4, 14, varargin_1, 12, varargin_2);
}

void error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2018a(sp, &pb_emlrtRTEI, "MATLAB:nomem",
    "MATLAB:nomem", 0);
}

/* End of code generation (error.c) */
