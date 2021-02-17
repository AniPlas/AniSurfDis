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
static emlrtRSInfo qc_emlrtRSI = { 65, /* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/eml/eml/+coder/+internal/applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo cn_emlrtRSI = { 2,  /* lineNo */
  "checkSpacing",                      /* fcnName */
  "/Users/macbook/SynologyDrive/CHEN_Xiaolei/thesis/Paper/IJP_Template/MatlabCode/ImageStress/checkSpacing.m"/* pathName */
};

static emlrtRSInfo dn_emlrtRSI = { 3,  /* lineNo */
  "checkSpacing",                      /* fcnName */
  "/Users/macbook/SynologyDrive/CHEN_Xiaolei/thesis/Paper/IJP_Template/MatlabCode/ImageStress/checkSpacing.m"/* pathName */
};

static emlrtRSInfo gn_emlrtRSI = { 35, /* lineNo */
  "minOrMax",                          /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/eml/eml/+coder/+internal/minOrMax.m"/* pathName */
};

static emlrtRSInfo hn_emlrtRSI = { 60, /* lineNo */
  "binaryMinOrMax",                    /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/eml/eml/+coder/+internal/binaryMinOrMax.m"/* pathName */
};

static emlrtRTEInfo yd_emlrtRTEI = { 2,/* lineNo */
  9,                                   /* colNo */
  "checkSpacing",                      /* fName */
  "/Users/macbook/SynologyDrive/CHEN_Xiaolei/thesis/Paper/IJP_Template/MatlabCode/ImageStress/checkSpacing.m"/* pName */
};

static emlrtRTEInfo ae_emlrtRTEI = { 3,/* lineNo */
  22,                                  /* colNo */
  "checkSpacing",                      /* fName */
  "/Users/macbook/SynologyDrive/CHEN_Xiaolei/thesis/Paper/IJP_Template/MatlabCode/ImageStress/checkSpacing.m"/* pName */
};

static emlrtRTEInfo be_emlrtRTEI = { 3,/* lineNo */
  60,                                  /* colNo */
  "checkSpacing",                      /* fName */
  "/Users/macbook/SynologyDrive/CHEN_Xiaolei/thesis/Paper/IJP_Template/MatlabCode/ImageStress/checkSpacing.m"/* pName */
};

static emlrtRTEInfo ce_emlrtRTEI = { 3,/* lineNo */
  72,                                  /* colNo */
  "checkSpacing",                      /* fName */
  "/Users/macbook/SynologyDrive/CHEN_Xiaolei/thesis/Paper/IJP_Template/MatlabCode/ImageStress/checkSpacing.m"/* pName */
};

static emlrtRTEInfo de_emlrtRTEI = { 60,/* lineNo */
  10,                                  /* colNo */
  "binaryMinOrMax",                    /* fName */
  "/Applications/MATLAB_R2018a.app/toolbox/eml/eml/+coder/+internal/binaryMinOrMax.m"/* pName */
};

static emlrtRTEInfo ee_emlrtRTEI = { 391,/* lineNo */
  13,                                  /* colNo */
  "find",                              /* fName */
  "/Applications/MATLAB_R2018a.app/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

static emlrtRTEInfo fe_emlrtRTEI = { 397,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "/Applications/MATLAB_R2018a.app/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

static emlrtRTEInfo ge_emlrtRTEI = { 1,/* lineNo */
  26,                                  /* colNo */
  "checkSpacing",                      /* fName */
  "/Users/macbook/SynologyDrive/CHEN_Xiaolei/thesis/Paper/IJP_Template/MatlabCode/ImageStress/checkSpacing.m"/* pName */
};

static emlrtRTEInfo he_emlrtRTEI = { 3,/* lineNo */
  56,                                  /* colNo */
  "checkSpacing",                      /* fName */
  "/Users/macbook/SynologyDrive/CHEN_Xiaolei/thesis/Paper/IJP_Template/MatlabCode/ImageStress/checkSpacing.m"/* pName */
};

static emlrtRTEInfo ie_emlrtRTEI = { 3,/* lineNo */
  38,                                  /* colNo */
  "checkSpacing",                      /* fName */
  "/Users/macbook/SynologyDrive/CHEN_Xiaolei/thesis/Paper/IJP_Template/MatlabCode/ImageStress/checkSpacing.m"/* pName */
};

static emlrtRTEInfo jh_emlrtRTEI = { 83,/* lineNo */
  1,                                   /* colNo */
  "find",                              /* fName */
  "/Applications/MATLAB_R2018a.app/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

static emlrtECInfo o_emlrtECI = { 2,   /* nDims */
  3,                                   /* lineNo */
  22,                                  /* colNo */
  "checkSpacing",                      /* fName */
  "/Users/macbook/SynologyDrive/CHEN_Xiaolei/thesis/Paper/IJP_Template/MatlabCode/ImageStress/checkSpacing.m"/* pName */
};

static emlrtBCInfo nic_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  3,                                   /* lineNo */
  77,                                  /* colNo */
  "ax",                                /* aName */
  "checkSpacing",                      /* fName */
  "/Users/macbook/SynologyDrive/CHEN_Xiaolei/thesis/Paper/IJP_Template/MatlabCode/ImageStress/checkSpacing.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oic_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  3,                                   /* lineNo */
  65,                                  /* colNo */
  "ax",                                /* aName */
  "checkSpacing",                      /* fName */
  "/Users/macbook/SynologyDrive/CHEN_Xiaolei/thesis/Paper/IJP_Template/MatlabCode/ImageStress/checkSpacing.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pic_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  3,                                   /* lineNo */
  63,                                  /* colNo */
  "ax",                                /* aName */
  "checkSpacing",                      /* fName */
  "/Users/macbook/SynologyDrive/CHEN_Xiaolei/thesis/Paper/IJP_Template/MatlabCode/ImageStress/checkSpacing.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
boolean_T checkSpacing(const emlrtStack *sp, const emxArray_real_T *x)
{
  boolean_T too_close;
  emxArray_real_T *ax;
  emxArray_real_T *y;
  int32_T i11;
  int32_T loop_ub;
  int32_T i12;
  int32_T i13;
  emxArray_real_T *r7;
  emxArray_real_T *r8;
  int32_T csz_idx_1;
  emxArray_real_T *maxval;
  int32_T idx;
  emxArray_real_T *b_ax;
  emxArray_real_T *c_ax;
  int32_T iv4[2];
  emxArray_boolean_T *b_x;
  int32_T b_y[2];
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
  emxInit_real_T(sp, &ax, 2, &yd_emlrtRTEI, true);
  emxInit_real_T(sp, &y, 2, &ie_emlrtRTEI, true);
  st.site = &cn_emlrtRSI;
  b_abs(&st, x, y);
  i11 = ax->size[0] * ax->size[1];
  ax->size[0] = 1;
  ax->size[1] = y->size[1];
  emxEnsureCapacity_real_T(sp, ax, i11, &yd_emlrtRTEI);
  loop_ub = y->size[0] * y->size[1];
  for (i11 = 0; i11 < loop_ub; i11++) {
    ax->data[i11] = y->data[i11];
  }

  if (1 > ax->size[1] - 1) {
    loop_ub = 0;
  } else {
    i11 = ax->size[1];
    if (!(1 <= i11)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i11, &pic_emlrtBCI, sp);
    }

    i11 = ax->size[1];
    loop_ub = ax->size[1] - 1;
    if (!((loop_ub >= 1) && (loop_ub <= i11))) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i11, &oic_emlrtBCI, sp);
    }
  }

  if (2 > ax->size[1]) {
    i11 = 0;
    i13 = 0;
  } else {
    i11 = 1;
    i12 = ax->size[1];
    i13 = ax->size[1];
    if (!((i13 >= 1) && (i13 <= i12))) {
      emlrtDynamicBoundsCheckR2012b(i13, 1, i12, &nic_emlrtBCI, sp);
    }
  }

  emxInit_real_T(sp, &r7, 2, &ge_emlrtRTEI, true);
  emxInit_real_T(sp, &r8, 2, &ae_emlrtRTEI, true);
  st.site = &dn_emlrtRSI;
  diff(&st, x, y);
  st.site = &dn_emlrtRSI;
  b_abs(&st, y, r8);
  i12 = r7->size[0] * r7->size[1];
  r7->size[0] = 1;
  r7->size[1] = r8->size[1];
  emxEnsureCapacity_real_T(sp, r7, i12, &ae_emlrtRTEI);
  csz_idx_1 = r8->size[0] * r8->size[1];
  for (i12 = 0; i12 < csz_idx_1; i12++) {
    r7->data[i12] = r8->data[i12];
  }

  emxFree_real_T(sp, &r8);
  emxInit_real_T(sp, &maxval, 2, &he_emlrtRTEI, true);
  st.site = &dn_emlrtRSI;
  b_st.site = &en_emlrtRSI;
  c_st.site = &fn_emlrtRSI;
  d_st.site = &gn_emlrtRSI;
  e_st.site = &hn_emlrtRSI;
  f_st.site = &pc_emlrtRSI;
  if (loop_ub <= i13 - i11) {
    idx = loop_ub;
  } else {
    idx = i13 - i11;
  }

  emxInit_real_T(&f_st, &b_ax, 2, &be_emlrtRTEI, true);
  if (loop_ub <= i13 - i11) {
    csz_idx_1 = loop_ub;
  } else {
    csz_idx_1 = i13 - i11;
  }

  i12 = maxval->size[0] * maxval->size[1];
  maxval->size[0] = 1;
  maxval->size[1] = idx;
  emxEnsureCapacity_real_T(&f_st, maxval, i12, &dd_emlrtRTEI);
  i12 = b_ax->size[0] * b_ax->size[1];
  b_ax->size[0] = 1;
  b_ax->size[1] = loop_ub;
  emxEnsureCapacity_real_T(&f_st, b_ax, i12, &be_emlrtRTEI);
  for (i12 = 0; i12 < loop_ub; i12++) {
    b_ax->data[b_ax->size[0] * i12] = ax->data[i12];
  }

  emxInit_real_T(&f_st, &c_ax, 2, &ce_emlrtRTEI, true);
  i12 = c_ax->size[0] * c_ax->size[1];
  c_ax->size[0] = 1;
  c_ax->size[1] = i13 - i11;
  emxEnsureCapacity_real_T(&f_st, c_ax, i12, &ce_emlrtRTEI);
  loop_ub = i13 - i11;
  for (i12 = 0; i12 < loop_ub; i12++) {
    c_ax->data[c_ax->size[0] * i12] = ax->data[i11 + i12];
  }

  if (!b_dimagree(maxval, b_ax, c_ax)) {
    emlrtErrorWithMessageIdR2018a(&f_st, &dh_emlrtRTEI, "MATLAB:dimagree",
      "MATLAB:dimagree", 0);
  }

  emxFree_real_T(&f_st, &c_ax);
  emxFree_real_T(&f_st, &b_ax);
  i12 = maxval->size[0] * maxval->size[1];
  maxval->size[0] = 1;
  maxval->size[1] = idx;
  emxEnsureCapacity_real_T(&e_st, maxval, i12, &de_emlrtRTEI);
  f_st.site = &qc_emlrtRSI;
  for (loop_ub = 1; loop_ub <= csz_idx_1; loop_ub++) {
    maxval->data[loop_ub - 1] = muDoubleScalarMax(ax->data[loop_ub - 1],
      ax->data[(i11 + loop_ub) - 1]);
  }

  emxFree_real_T(&f_st, &ax);
  i11 = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = maxval->size[1];
  emxEnsureCapacity_real_T(sp, y, i11, &gc_emlrtRTEI);
  loop_ub = maxval->size[0] * maxval->size[1];
  for (i11 = 0; i11 < loop_ub; i11++) {
    y->data[i11] = 2.2204460492503131E-14 * maxval->data[i11];
  }

  emxFree_real_T(sp, &maxval);
  for (i11 = 0; i11 < 2; i11++) {
    iv4[i11] = r7->size[i11];
  }

  for (i11 = 0; i11 < 2; i11++) {
    b_y[i11] = y->size[i11];
  }

  emxInit_boolean_T(sp, &b_x, 2, &ae_emlrtRTEI, true);
  if ((iv4[0] != b_y[0]) || (iv4[1] != b_y[1])) {
    emlrtSizeEqCheckNDR2012b(&iv4[0], &b_y[0], &o_emlrtECI, sp);
  }

  st.site = &dn_emlrtRSI;
  i11 = b_x->size[0] * b_x->size[1];
  b_x->size[0] = 1;
  b_x->size[1] = r7->size[1];
  emxEnsureCapacity_boolean_T(&st, b_x, i11, &ae_emlrtRTEI);
  loop_ub = r7->size[0] * r7->size[1];
  for (i11 = 0; i11 < loop_ub; i11++) {
    b_x->data[i11] = (r7->data[i11] <= y->data[i11]);
  }

  emxFree_real_T(&st, &y);
  emxFree_real_T(&st, &r7);
  b_st.site = &qb_emlrtRSI;
  loop_ub = (1 <= b_x->size[1]);
  if (!(loop_ub <= b_x->size[1])) {
    emlrtErrorWithMessageIdR2018a(&b_st, &jh_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  emxInit_int32_T1(&b_st, &i, 2, &kb_emlrtRTEI, true);
  c_st.site = &rb_emlrtRSI;
  idx = 0;
  i11 = i->size[0] * i->size[1];
  i->size[0] = 1;
  i->size[1] = loop_ub;
  emxEnsureCapacity_int32_T1(&c_st, i, i11, &kb_emlrtRTEI);
  d_st.site = &sb_emlrtRSI;
  csz_idx_1 = 1;
  exitg1 = false;
  while ((!exitg1) && (csz_idx_1 <= b_x->size[1])) {
    if (b_x->data[csz_idx_1 - 1]) {
      idx++;
      i->data[idx - 1] = csz_idx_1;
      if (idx >= loop_ub) {
        exitg1 = true;
      } else {
        csz_idx_1++;
      }
    } else {
      csz_idx_1++;
    }
  }

  emxFree_boolean_T(&c_st, &b_x);
  if (!(idx <= loop_ub)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &vg_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  if (loop_ub == 1) {
    if (idx == 0) {
      i11 = i->size[0] * i->size[1];
      i->size[1] = 0;
      emxEnsureCapacity_int32_T1(&c_st, i, i11, &ee_emlrtRTEI);
    }
  } else {
    i11 = i->size[0] * i->size[1];
    i->size[1] = !(1 > idx);
    emxEnsureCapacity_int32_T1(&c_st, i, i11, &fe_emlrtRTEI);
  }

  too_close = !(i->size[1] == 0);

  /*  checkSpacing */
  emxFree_int32_T(sp, &i);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return too_close;
}

/* End of code generation (checkSpacing.c) */
