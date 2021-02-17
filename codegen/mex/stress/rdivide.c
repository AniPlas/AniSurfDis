/*
 * rdivide.c
 *
 * Code generation for function 'rdivide'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "stress.h"
#include "rdivide.h"
#include "stress_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo wc_emlrtRTEI = { 28,/* lineNo */
  1,                                   /* colNo */
  "rdivide",                           /* fName */
  "/Applications/MATLAB_R2018a.app/toolbox/eml/lib/matlab/ops/rdivide.m"/* pName */
};

static emlrtRTEInfo eh_emlrtRTEI = { 13,/* lineNo */
  15,                                  /* colNo */
  "rdivide",                           /* fName */
  "/Applications/MATLAB_R2018a.app/toolbox/eml/lib/matlab/ops/rdivide.m"/* pName */
};

/* Function Definitions */
void b_rdivide(const emlrtStack *sp, const emxArray_real_T *x, const
               emxArray_real_T *y, emxArray_real_T *z)
{
  int32_T k;
  boolean_T p;
  int32_T varargin_1[2];
  boolean_T b_p;
  int32_T varargin_2[2];
  boolean_T exitg1;
  int32_T loop_ub;
  for (k = 0; k < 2; k++) {
    varargin_1[k] = x->size[k];
    varargin_2[k] = y->size[k];
  }

  p = false;
  b_p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (!(varargin_1[k] == varargin_2[k])) {
      b_p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  if (b_p) {
    p = true;
  }

  if (!p) {
    emlrtErrorWithMessageIdR2018a(sp, &eh_emlrtRTEI, "MATLAB:dimagree",
      "MATLAB:dimagree", 0);
  }

  k = z->size[0] * z->size[1];
  z->size[0] = 1;
  z->size[1] = x->size[1];
  emxEnsureCapacity_real_T(sp, z, k, &wc_emlrtRTEI);
  loop_ub = x->size[0] * x->size[1];
  for (k = 0; k < loop_ub; k++) {
    z->data[k] = x->data[k] / y->data[k];
  }
}

void rdivide(const emlrtStack *sp, const emxArray_real_T *x, real_T y,
             emxArray_real_T *z)
{
  int32_T i5;
  int32_T loop_ub;
  i5 = z->size[0] * z->size[1];
  z->size[0] = 1;
  z->size[1] = x->size[1];
  emxEnsureCapacity_real_T(sp, z, i5, &wc_emlrtRTEI);
  loop_ub = x->size[0] * x->size[1];
  for (i5 = 0; i5 < loop_ub; i5++) {
    z->data[i5] = x->data[i5] / y;
  }
}

/* End of code generation (rdivide.c) */
