/*
 * qrsolve.c
 *
 * Code generation for function 'qrsolve'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "rho_distri.h"
#include "qrsolve.h"
#include "rho_distri_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "error.h"
#include "warning.h"
#include "xgeqp3.h"
#include "rho_distri_data.h"
#include "lapacke.h"

/* Variable Definitions */
static emlrtRSInfo jc_emlrtRSI = { 29, /* lineNo */
  "qrsolve",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pathName */
};

static emlrtRSInfo kc_emlrtRSI = { 33, /* lineNo */
  "qrsolve",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pathName */
};

static emlrtRSInfo lc_emlrtRSI = { 40, /* lineNo */
  "qrsolve",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pathName */
};

static emlrtRSInfo vc_emlrtRSI = { 124,/* lineNo */
  "qrsolve",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pathName */
};

static emlrtRSInfo wc_emlrtRSI = { 123,/* lineNo */
  "qrsolve",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pathName */
};

static emlrtRSInfo xc_emlrtRSI = { 73, /* lineNo */
  "qrsolve",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pathName */
};

static emlrtRSInfo yc_emlrtRSI = { 80, /* lineNo */
  "qrsolve",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pathName */
};

static emlrtRSInfo ad_emlrtRSI = { 90, /* lineNo */
  "qrsolve",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pathName */
};

static emlrtRSInfo bd_emlrtRSI = { 31, /* lineNo */
  "xunormqr",                          /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xunormqr.m"/* pathName */
};

static emlrtRSInfo cd_emlrtRSI = { 59, /* lineNo */
  "xunormqr",                          /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xunormqr.m"/* pathName */
};

static emlrtRSInfo dd_emlrtRSI = { 79, /* lineNo */
  "xunormqr",                          /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xunormqr.m"/* pathName */
};

static emlrtRSInfo ed_emlrtRSI = { 80, /* lineNo */
  "xunormqr",                          /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xunormqr.m"/* pathName */
};

static emlrtRSInfo fd_emlrtRSI = { 93, /* lineNo */
  "xunormqr",                          /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xunormqr.m"/* pathName */
};

static emlrtRSInfo gd_emlrtRSI = { 102,/* lineNo */
  "xunormqr",                          /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xunormqr.m"/* pathName */
};

static emlrtMCInfo c_emlrtMCI = { 53,  /* lineNo */
  19,                                  /* colNo */
  "flt2str",                           /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/flt2str.m"/* pName */
};

static emlrtRTEInfo u_emlrtRTEI = { 29,/* lineNo */
  2,                                   /* colNo */
  "qrsolve",                           /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pName */
};

static emlrtRTEInfo v_emlrtRTEI = { 40,/* lineNo */
  26,                                  /* colNo */
  "qrsolve",                           /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pName */
};

static emlrtRTEInfo w_emlrtRTEI = { 40,/* lineNo */
  1,                                   /* colNo */
  "qrsolve",                           /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pName */
};

static emlrtRTEInfo x_emlrtRTEI = { 73,/* lineNo */
  5,                                   /* colNo */
  "qrsolve",                           /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pName */
};

static emlrtRTEInfo y_emlrtRTEI = { 29,/* lineNo */
  4,                                   /* colNo */
  "qrsolve",                           /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pName */
};

static emlrtRTEInfo ab_emlrtRTEI = { 29,/* lineNo */
  8,                                   /* colNo */
  "qrsolve",                           /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pName */
};

static emlrtRSInfo fm_emlrtRSI = { 53, /* lineNo */
  "flt2str",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/flt2str.m"/* pathName */
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[14]);
static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *c_sprintf,
  const char_T *identifier, char_T y[14]);
static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14]);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[14])
{
  w_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m12;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m12, 2, pArrays, "sprintf", true,
    location);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *c_sprintf,
  const char_T *identifier, char_T y[14])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(c_sprintf), &thisId, y);
  emlrtDestroyArray(&c_sprintf);
}

static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14])
{
  static const int32_T dims[2] = { 1, 14 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 2U, dims);
  emlrtImportCharArrayR2015b(sp, src, &ret[0], 14);
  emlrtDestroyArray(&src);
}

void qrsolve(const emlrtStack *sp, const emxArray_real_T *A, const
             emxArray_real_T *B, emxArray_real_T *Y)
{
  emxArray_real_T *b_A;
  int32_T j;
  int32_T minmn;
  emxArray_real_T *tau;
  emxArray_int32_T *jpvt;
  int32_T rankR;
  real_T tol;
  int32_T maxmn;
  emxArray_real_T *b_B;
  const mxArray *y;
  const mxArray *m3;
  static const int32_T iv5[2] = { 1, 6 };

  static const char_T rfmt[6] = { '%', '1', '4', '.', '6', 'e' };

  const mxArray *b_y;
  const mxArray *m4;
  char_T cv0[14];
  boolean_T overflow;
  ptrdiff_t nrc_t;
  ptrdiff_t info_t;
  boolean_T p;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &b_A, 2, &u_emlrtRTEI, true);
  j = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity_real_T(sp, b_A, j, &u_emlrtRTEI);
  minmn = A->size[0] * A->size[1];
  for (j = 0; j < minmn; j++) {
    b_A->data[j] = A->data[j];
  }

  emxInit_real_T(sp, &tau, 1, &y_emlrtRTEI, true);
  emxInit_int32_T(sp, &jpvt, 2, &ab_emlrtRTEI, true);
  st.site = &jc_emlrtRSI;
  xgeqp3(&st, b_A, tau, jpvt);
  st.site = &kc_emlrtRSI;
  rankR = 0;
  tol = 0.0;
  if (b_A->size[0] < b_A->size[1]) {
    minmn = b_A->size[0];
    maxmn = b_A->size[1];
  } else {
    minmn = b_A->size[1];
    maxmn = b_A->size[0];
  }

  if (minmn > 0) {
    tol = muDoubleScalarMin(1.4901161193847656E-8, 2.2204460492503131E-15 *
      (real_T)maxmn) * muDoubleScalarAbs(b_A->data[0]);
    while ((rankR < minmn) && (!(muDoubleScalarAbs(b_A->data[rankR + b_A->size[0]
              * rankR]) <= tol))) {
      rankR++;
    }
  }

  if (rankR < minmn) {
    b_st.site = &vc_emlrtRSI;
    y = NULL;
    m3 = emlrtCreateCharArray(2, iv5);
    emlrtInitCharArrayR2013a(&b_st, 6, m3, &rfmt[0]);
    emlrtAssign(&y, m3);
    b_y = NULL;
    m4 = emlrtCreateDoubleScalar(tol);
    emlrtAssign(&b_y, m4);
    c_st.site = &fm_emlrtRSI;
    emlrt_marshallIn(&c_st, b_sprintf(&c_st, y, b_y, &c_emlrtMCI), "sprintf",
                     cv0);
    b_st.site = &wc_emlrtRSI;
    b_warning(&b_st, rankR, cv0);
  }

  emxInit_real_T(&st, &b_B, 2, &v_emlrtRTEI, true);
  st.site = &lc_emlrtRSI;
  j = b_B->size[0] * b_B->size[1];
  b_B->size[0] = B->size[0];
  b_B->size[1] = 3;
  emxEnsureCapacity_real_T(&st, b_B, j, &v_emlrtRTEI);
  minmn = B->size[0] * B->size[1];
  for (j = 0; j < minmn; j++) {
    b_B->data[j] = B->data[j];
  }

  minmn = b_A->size[1];
  j = Y->size[0] * Y->size[1];
  Y->size[0] = minmn;
  Y->size[1] = 3;
  emxEnsureCapacity_real_T(&st, Y, j, &w_emlrtRTEI);
  minmn *= 3;
  for (j = 0; j < minmn; j++) {
    Y->data[j] = 0.0;
  }

  b_st.site = &xc_emlrtRSI;
  c_st.site = &bd_emlrtRSI;
  minmn = muIntScalarMin_sint32(b_A->size[0], b_A->size[1]);
  d_st.site = &cd_emlrtRSI;
  if ((b_A->size[0] != 0) && (b_A->size[1] != 0) && (b_B->size[0] != 0)) {
    d_st.site = &dd_emlrtRSI;
    d_st.site = &ed_emlrtRSI;
    nrc_t = (ptrdiff_t)b_B->size[0];
    d_st.site = &fd_emlrtRSI;
    info_t = LAPACKE_dormqr(102, 'L', 'T', nrc_t, (ptrdiff_t)3, (ptrdiff_t)minmn,
      &b_A->data[0], (ptrdiff_t)b_A->size[0], &tau->data[0], &b_B->data[0],
      nrc_t);
    minmn = (int32_T)info_t;
    d_st.site = &gd_emlrtRSI;
    if (minmn != 0) {
      overflow = true;
      p = false;
      if (minmn == -7) {
        p = true;
      } else if (minmn == -9) {
        p = true;
      } else {
        if (minmn == -10) {
          p = true;
        }
      }

      if (!p) {
        if (minmn == -1010) {
          e_st.site = &ac_emlrtRSI;
          error(&e_st);
        } else {
          e_st.site = &bc_emlrtRSI;
          d_error(&e_st, minmn);
        }
      }
    } else {
      overflow = false;
    }

    if (overflow) {
      j = b_B->size[0] * b_B->size[1];
      b_B->size[1] = 3;
      emxEnsureCapacity_real_T(&c_st, b_B, j, &x_emlrtRTEI);
      for (j = 0; j < 3; j++) {
        minmn = b_B->size[0];
        for (maxmn = 0; maxmn < minmn; maxmn++) {
          b_B->data[maxmn + b_B->size[0] * j] = rtNaN;
        }
      }
    }
  }

  emxFree_real_T(&tau);
  overflow = ((1 <= rankR) && (rankR > 2147483646));
  for (minmn = 0; minmn < 3; minmn++) {
    b_st.site = &yc_emlrtRSI;
    if (overflow) {
      c_st.site = &fb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (maxmn = 0; maxmn < rankR; maxmn++) {
      Y->data[(jpvt->data[maxmn] + Y->size[0] * minmn) - 1] = b_B->data[maxmn +
        b_B->size[0] * minmn];
    }

    for (j = rankR; j >= 1; j--) {
      Y->data[(jpvt->data[j - 1] + Y->size[0] * minmn) - 1] /= b_A->data[(j +
        b_A->size[0] * (j - 1)) - 1];
      b_st.site = &ad_emlrtRSI;
      for (maxmn = 0; maxmn <= j - 2; maxmn++) {
        Y->data[(jpvt->data[maxmn] + Y->size[0] * minmn) - 1] -= Y->data
          [(jpvt->data[j - 1] + Y->size[0] * minmn) - 1] * b_A->data[maxmn +
          b_A->size[0] * (j - 1)];
      }
    }
  }

  emxFree_real_T(&b_B);
  emxFree_int32_T(&jpvt);
  emxFree_real_T(&b_A);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (qrsolve.c) */
