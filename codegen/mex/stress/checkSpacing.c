/*
 * checkSpacing.c
 *
 * Code generation for function 'checkSpacing'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "stress.h"
#include "checkSpacing.h"
#include "stress_emxutil.h"
#include "scalexpAlloc.h"
#include "abs.h"
#include "diff.h"
#include "stress_data.h"

/* Variable Definitions */
static emlrtRSInfo pc_emlrtRSI = { 65, /* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo bn_emlrtRSI = { 2,  /* lineNo */
  "checkSpacing",                      /* fcnName */
  "/home/xiaolei/Documents/ImageStress/checkSpacing.m"/* pathName */
};

static emlrtRSInfo cn_emlrtRSI = { 3,  /* lineNo */
  "checkSpacing",                      /* fcnName */
  "/home/xiaolei/Documents/ImageStress/checkSpacing.m"/* pathName */
};

static emlrtRSInfo fn_emlrtRSI = { 37, /* lineNo */
  "minOrMax",                          /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/minOrMax.m"/* pathName */
};

static emlrtRSInfo gn_emlrtRSI = { 60, /* lineNo */
  "binaryMinOrMax",                    /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/binaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo hn_emlrtRSI = { 45, /* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRTEInfo ed_emlrtRTEI = { 2,/* lineNo */
  9,                                   /* colNo */
  "checkSpacing",                      /* fName */
  "/home/xiaolei/Documents/ImageStress/checkSpacing.m"/* pName */
};

static emlrtRTEInfo fd_emlrtRTEI = { 3,/* lineNo */
  22,                                  /* colNo */
  "checkSpacing",                      /* fName */
  "/home/xiaolei/Documents/ImageStress/checkSpacing.m"/* pName */
};

static emlrtRTEInfo gd_emlrtRTEI = { 45,/* lineNo */
  6,                                   /* colNo */
  "applyBinaryScalarFunction",         /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/applyBinaryScalarFunction.m"/* pName */
};

static emlrtRTEInfo hd_emlrtRTEI = { 3,/* lineNo */
  60,                                  /* colNo */
  "checkSpacing",                      /* fName */
  "/home/xiaolei/Documents/ImageStress/checkSpacing.m"/* pName */
};

static emlrtRTEInfo id_emlrtRTEI = { 3,/* lineNo */
  72,                                  /* colNo */
  "checkSpacing",                      /* fName */
  "/home/xiaolei/Documents/ImageStress/checkSpacing.m"/* pName */
};

static emlrtRTEInfo jd_emlrtRTEI = { 13,/* lineNo */
  5,                                   /* colNo */
  "max",                               /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/datafun/max.m"/* pName */
};

static emlrtRTEInfo kd_emlrtRTEI = { 397,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

static emlrtRTEInfo ld_emlrtRTEI = { 1,/* lineNo */
  26,                                  /* colNo */
  "checkSpacing",                      /* fName */
  "/home/xiaolei/Documents/ImageStress/checkSpacing.m"/* pName */
};

static emlrtRTEInfo md_emlrtRTEI = { 3,/* lineNo */
  56,                                  /* colNo */
  "checkSpacing",                      /* fName */
  "/home/xiaolei/Documents/ImageStress/checkSpacing.m"/* pName */
};

static emlrtRTEInfo nd_emlrtRTEI = { 3,/* lineNo */
  38,                                  /* colNo */
  "checkSpacing",                      /* fName */
  "/home/xiaolei/Documents/ImageStress/checkSpacing.m"/* pName */
};

static emlrtRTEInfo gg_emlrtRTEI = { 83,/* lineNo */
  1,                                   /* colNo */
  "find",                              /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

static emlrtRTEInfo hg_emlrtRTEI = { 18,/* lineNo */
  23,                                  /* colNo */
  "scalexpAlloc",                      /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/scalexpAlloc.m"/* pName */
};

static emlrtECInfo n_emlrtECI = { 2,   /* nDims */
  3,                                   /* lineNo */
  22,                                  /* colNo */
  "checkSpacing",                      /* fName */
  "/home/xiaolei/Documents/ImageStress/checkSpacing.m"/* pName */
};

static emlrtBCInfo kic_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  3,                                   /* lineNo */
  77,                                  /* colNo */
  "ax",                                /* aName */
  "checkSpacing",                      /* fName */
  "/home/xiaolei/Documents/ImageStress/checkSpacing.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lic_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  3,                                   /* lineNo */
  65,                                  /* colNo */
  "ax",                                /* aName */
  "checkSpacing",                      /* fName */
  "/home/xiaolei/Documents/ImageStress/checkSpacing.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mic_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  3,                                   /* lineNo */
  63,                                  /* colNo */
  "ax",                                /* aName */
  "checkSpacing",                      /* fName */
  "/home/xiaolei/Documents/ImageStress/checkSpacing.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
boolean_T checkSpacing(const emlrtStack *sp, const emxArray_real_T *x)
{
  boolean_T too_close;
  emxArray_real_T *ax;
  emxArray_real_T *y;
  int32_T i22;
  int32_T idx;
  int32_T k;
  int32_T i23;
  emxArray_real_T *r6;
  emxArray_real_T *r7;
  int32_T csz_idx_1;
  emxArray_real_T *maxval;
  emxArray_real_T *z;
  emxArray_real_T *b_ax;
  int32_T iv6[2];
  int32_T b_y[2];
  emxArray_boolean_T *b_x;
  emxArray_int32_T *i;
  boolean_T exitg1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &ax, 2, &ed_emlrtRTEI, true);
  emxInit_real_T(sp, &y, 2, &nd_emlrtRTEI, true);
  st.site = &bn_emlrtRSI;
  b_abs(&st, x, y);
  i22 = ax->size[0] * ax->size[1];
  ax->size[0] = 1;
  ax->size[1] = y->size[1];
  emxEnsureCapacity_real_T(sp, ax, i22, &ed_emlrtRTEI);
  idx = y->size[0] * y->size[1];
  for (i22 = 0; i22 < idx; i22++) {
    ax->data[i22] = y->data[i22];
  }

  if (1 > ax->size[1] - 1) {
    idx = 0;
  } else {
    i22 = ax->size[1];
    if (1 > i22) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i22, &mic_emlrtBCI, sp);
    }

    i22 = ax->size[1];
    idx = ax->size[1] - 1;
    if ((idx < 1) || (idx > i22)) {
      emlrtDynamicBoundsCheckR2012b(idx, 1, i22, &lic_emlrtBCI, sp);
    }
  }

  if (2 > ax->size[1]) {
    i22 = 0;
    i23 = 0;
  } else {
    i22 = 1;
    k = ax->size[1];
    i23 = ax->size[1];
    if ((i23 < 1) || (i23 > k)) {
      emlrtDynamicBoundsCheckR2012b(i23, 1, k, &kic_emlrtBCI, sp);
    }
  }

  emxInit_real_T(sp, &r6, 2, &ld_emlrtRTEI, true);
  emxInit_real_T(sp, &r7, 2, &fd_emlrtRTEI, true);
  st.site = &cn_emlrtRSI;
  diff(&st, x, y);
  st.site = &cn_emlrtRSI;
  b_abs(&st, y, r7);
  k = r6->size[0] * r6->size[1];
  r6->size[0] = 1;
  r6->size[1] = r7->size[1];
  emxEnsureCapacity_real_T(sp, r6, k, &fd_emlrtRTEI);
  csz_idx_1 = r7->size[0] * r7->size[1];
  for (k = 0; k < csz_idx_1; k++) {
    r6->data[k] = r7->data[k];
  }

  emxFree_real_T(&r7);
  emxInit_real_T(sp, &maxval, 2, &md_emlrtRTEI, true);
  emxInit_real_T(sp, &z, 2, &gd_emlrtRTEI, true);
  st.site = &cn_emlrtRSI;
  b_st.site = &dn_emlrtRSI;
  c_st.site = &en_emlrtRSI;
  d_st.site = &fn_emlrtRSI;
  e_st.site = &gn_emlrtRSI;
  f_st.site = &hn_emlrtRSI;
  if (idx <= i23 - i22) {
    csz_idx_1 = idx;
  } else {
    csz_idx_1 = i23 - i22;
  }

  k = z->size[0] * z->size[1];
  z->size[0] = 1;
  z->size[1] = csz_idx_1;
  emxEnsureCapacity_real_T(&f_st, z, k, &gd_emlrtRTEI);
  k = maxval->size[0] * maxval->size[1];
  maxval->size[0] = 1;
  maxval->size[1] = idx;
  emxEnsureCapacity_real_T(&f_st, maxval, k, &hd_emlrtRTEI);
  for (k = 0; k < idx; k++) {
    maxval->data[k] = ax->data[k];
  }

  emxInit_real_T(&f_st, &b_ax, 2, &id_emlrtRTEI, true);
  k = b_ax->size[0] * b_ax->size[1];
  b_ax->size[0] = 1;
  idx = i23 - i22;
  b_ax->size[1] = idx;
  emxEnsureCapacity_real_T(&f_st, b_ax, k, &id_emlrtRTEI);
  for (k = 0; k < idx; k++) {
    b_ax->data[k] = ax->data[i22 + k];
  }

  if (!dimagree(z, maxval, b_ax)) {
    emlrtErrorWithMessageIdR2018a(&f_st, &hg_emlrtRTEI, "MATLAB:dimagree",
      "MATLAB:dimagree", 0);
  }

  emxFree_real_T(&b_ax);
  k = maxval->size[0] * maxval->size[1];
  maxval->size[0] = z->size[0];
  maxval->size[1] = z->size[1];
  emxEnsureCapacity_real_T(&e_st, maxval, k, &jd_emlrtRTEI);
  f_st.site = &pc_emlrtRSI;
  emxFree_real_T(&z);
  for (k = 0; k < csz_idx_1; k++) {
    maxval->data[k] = muDoubleScalarMax(ax->data[k], ax->data[i22 + k]);
  }

  emxFree_real_T(&ax);
  i22 = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = maxval->size[1];
  emxEnsureCapacity_real_T(sp, y, i22, &tb_emlrtRTEI);
  idx = maxval->size[0] * maxval->size[1];
  for (i22 = 0; i22 < idx; i22++) {
    y->data[i22] = 2.2204460492503131E-14 * maxval->data[i22];
  }

  emxFree_real_T(&maxval);
  iv6[0] = r6->size[0];
  iv6[1] = r6->size[1];
  b_y[0] = y->size[0];
  b_y[1] = y->size[1];
  emxInit_boolean_T(sp, &b_x, 2, &fd_emlrtRTEI, true);
  if ((iv6[0] != b_y[0]) || (iv6[1] != b_y[1])) {
    emlrtSizeEqCheckNDR2012b(&iv6[0], &b_y[0], &n_emlrtECI, sp);
  }

  st.site = &cn_emlrtRSI;
  i22 = b_x->size[0] * b_x->size[1];
  b_x->size[0] = 1;
  b_x->size[1] = r6->size[1];
  emxEnsureCapacity_boolean_T(&st, b_x, i22, &fd_emlrtRTEI);
  idx = r6->size[0] * r6->size[1];
  for (i22 = 0; i22 < idx; i22++) {
    b_x->data[i22] = (r6->data[i22] <= y->data[i22]);
  }

  emxFree_real_T(&y);
  emxFree_real_T(&r6);
  b_st.site = &qb_emlrtRSI;
  k = (1 <= b_x->size[1]);
  if (k > b_x->size[1]) {
    emlrtErrorWithMessageIdR2018a(&b_st, &gg_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  emxInit_int32_T(&b_st, &i, 2, &y_emlrtRTEI, true);
  c_st.site = &rb_emlrtRSI;
  idx = 0;
  i22 = i->size[0] * i->size[1];
  i->size[0] = 1;
  i->size[1] = k;
  emxEnsureCapacity_int32_T(&c_st, i, i22, &y_emlrtRTEI);
  d_st.site = &sb_emlrtRSI;
  csz_idx_1 = 0;
  exitg1 = false;
  while ((!exitg1) && (csz_idx_1 <= b_x->size[1] - 1)) {
    if (b_x->data[csz_idx_1]) {
      idx++;
      i->data[idx - 1] = csz_idx_1 + 1;
      if (idx >= k) {
        exitg1 = true;
      } else {
        csz_idx_1++;
      }
    } else {
      csz_idx_1++;
    }
  }

  emxFree_boolean_T(&b_x);
  if (idx > k) {
    emlrtErrorWithMessageIdR2018a(&c_st, &tf_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  if (k == 1) {
    if (idx == 0) {
      i->size[1] = 0;
    }
  } else if (1 > idx) {
    i->size[1] = 0;
  } else {
    i22 = i->size[0] * i->size[1];
    i->size[1] = 1;
    emxEnsureCapacity_int32_T(&c_st, i, i22, &kd_emlrtRTEI);
  }

  too_close = (i->size[1] != 0);

  /*  checkSpacing */
  emxFree_int32_T(&i);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return too_close;
}

/* End of code generation (checkSpacing.c) */
