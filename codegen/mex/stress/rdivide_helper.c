/*
 * rdivide_helper.c
 *
 * Code generation for function 'rdivide_helper'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "stress.h"
#include "rdivide_helper.h"
#include "stress_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo mc_emlrtRTEI = { 28,/* lineNo */
  1,                                   /* colNo */
  "rdivide_helper",                    /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/rdivide_helper.m"/* pName */
};

static emlrtRTEInfo bg_emlrtRTEI = { 13,/* lineNo */
  15,                                  /* colNo */
  "rdivide_helper",                    /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/rdivide_helper.m"/* pName */
};

/* Function Definitions */
void rdivide_helper(const emlrtStack *sp, const emxArray_real_T *x, const
                    emxArray_real_T *y, emxArray_real_T *z)
{
  int32_T varargin_1[2];
  int32_T varargin_2[2];
  boolean_T p;
  boolean_T b_p;
  int32_T k;
  boolean_T exitg1;
  int32_T loop_ub;
  varargin_1[0] = x->size[0];
  varargin_2[0] = y->size[0];
  varargin_1[1] = x->size[1];
  varargin_2[1] = y->size[1];
  p = false;
  b_p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (varargin_1[k] != varargin_2[k]) {
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
    emlrtErrorWithMessageIdR2018a(sp, &bg_emlrtRTEI, "MATLAB:dimagree",
      "MATLAB:dimagree", 0);
  }

  k = z->size[0] * z->size[1];
  z->size[0] = 1;
  z->size[1] = x->size[1];
  emxEnsureCapacity_real_T(sp, z, k, &mc_emlrtRTEI);
  loop_ub = x->size[0] * x->size[1];
  for (k = 0; k < loop_ub; k++) {
    z->data[k] = x->data[k] / y->data[k];
  }
}

/* End of code generation (rdivide_helper.c) */
