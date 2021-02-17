/*
 * vadapt.c
 *
 * Code generation for function 'vadapt'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "stress.h"
#include "vadapt.h"
#include "stress_emxutil.h"
#include "integrale_num_inf.h"
#include "error.h"
#include "nullAssignment.h"
#include "sum.h"
#include "ifWhileCond.h"
#include "isfinite.h"
#include "abs.h"
#include "eml_int_forloop_overflow_check.h"
#include "diff.h"
#include "split.h"
#include "stress_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo o_emlrtRSI = { 10,  /* lineNo */
  "vadapt",                            /* fcnName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 12,  /* lineNo */
  "vadapt",                            /* fcnName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 21,  /* lineNo */
  "vadapt",                            /* fcnName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 22,  /* lineNo */
  "vadapt",                            /* fcnName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 25,  /* lineNo */
  "vadapt",                            /* fcnName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 26,  /* lineNo */
  "vadapt",                            /* fcnName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 34,  /* lineNo */
  "vadapt",                            /* fcnName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 36,  /* lineNo */
  "vadapt",                            /* fcnName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 37,  /* lineNo */
  "vadapt",                            /* fcnName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 45,  /* lineNo */
  "vadapt",                            /* fcnName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 49,  /* lineNo */
  "vadapt",                            /* fcnName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 50, /* lineNo */
  "vadapt",                            /* fcnName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 56, /* lineNo */
  "vadapt",                            /* fcnName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 64, /* lineNo */
  "vadapt",                            /* fcnName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 76, /* lineNo */
  "vadapt",                            /* fcnName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 77, /* lineNo */
  "vadapt",                            /* fcnName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 20, /* lineNo */
  "cat",                               /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 100,/* lineNo */
  "cat",                               /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

static emlrtRSInfo gc_emlrtRSI = { 48, /* lineNo */
  "reshapeSizeChecks",                 /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/reshapeSizeChecks.m"/* pathName */
};

static emlrtRSInfo hc_emlrtRSI = { 27, /* lineNo */
  "reshapeSizeChecks",                 /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/reshapeSizeChecks.m"/* pathName */
};

static emlrtRSInfo xm_emlrtRSI = { 114,/* lineNo */
  "mtimes",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+blas/mtimes.m"/* pathName */
};

static emlrtRSInfo jn_emlrtRSI = { 44, /* lineNo */
  "minOrMax",                          /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/minOrMax.m"/* pathName */
};

static emlrtRSInfo kn_emlrtRSI = { 128,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo ln_emlrtRSI = { 259,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo mn_emlrtRSI = { 325,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo nn_emlrtRSI = { 402,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRTEInfo m_emlrtRTEI = { 12,/* lineNo */
  9,                                   /* colNo */
  "vadapt",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pName */
};

static emlrtRTEInfo n_emlrtRTEI = { 21,/* lineNo */
  13,                                  /* colNo */
  "vadapt",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pName */
};

static emlrtRTEInfo o_emlrtRTEI = { 22,/* lineNo */
  13,                                  /* colNo */
  "vadapt",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pName */
};

static emlrtRTEInfo p_emlrtRTEI = { 24,/* lineNo */
  24,                                  /* colNo */
  "vadapt",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pName */
};

static emlrtRTEInfo q_emlrtRTEI = { 24,/* lineNo */
  38,                                  /* colNo */
  "vadapt",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pName */
};

static emlrtRTEInfo r_emlrtRTEI = { 24,/* lineNo */
  13,                                  /* colNo */
  "vadapt",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pName */
};

static emlrtRTEInfo s_emlrtRTEI = { 31,/* lineNo */
  16,                                  /* colNo */
  "vadapt",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pName */
};

static emlrtRTEInfo t_emlrtRTEI = { 325,/* lineNo */
  14,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pName */
};

static emlrtRTEInfo u_emlrtRTEI = { 45,/* lineNo */
  45,                                  /* colNo */
  "vadapt",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pName */
};

static emlrtRTEInfo v_emlrtRTEI = { 45,/* lineNo */
  24,                                  /* colNo */
  "vadapt",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pName */
};

static emlrtRTEInfo w_emlrtRTEI = { 36,/* lineNo */
  22,                                  /* colNo */
  "vadapt",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pName */
};

static emlrtRTEInfo bb_emlrtRTEI = { 45,/* lineNo */
  13,                                  /* colNo */
  "vadapt",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = { 37,/* lineNo */
  22,                                  /* colNo */
  "vadapt",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pName */
};

static emlrtRTEInfo db_emlrtRTEI = { 46,/* lineNo */
  40,                                  /* colNo */
  "vadapt",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pName */
};

static emlrtRTEInfo eb_emlrtRTEI = { 46,/* lineNo */
  35,                                  /* colNo */
  "vadapt",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = { 49,/* lineNo */
  18,                                  /* colNo */
  "vadapt",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = { 64,/* lineNo */
  20,                                  /* colNo */
  "vadapt",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pName */
};

static emlrtRTEInfo hb_emlrtRTEI = { 69,/* lineNo */
  31,                                  /* colNo */
  "vadapt",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pName */
};

static emlrtRTEInfo ib_emlrtRTEI = { 76,/* lineNo */
  19,                                  /* colNo */
  "vadapt",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = { 77,/* lineNo */
  28,                                  /* colNo */
  "vadapt",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = { 77,/* lineNo */
  13,                                  /* colNo */
  "vadapt",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = { 6,/* lineNo */
  9,                                   /* colNo */
  "vadapt",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = { 31,/* lineNo */
  13,                                  /* colNo */
  "vadapt",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = { 32,/* lineNo */
  13,                                  /* colNo */
  "vadapt",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pName */
};

static emlrtRTEInfo ob_emlrtRTEI = { 1,/* lineNo */
  23,                                  /* colNo */
  "vadapt",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = { 45,/* lineNo */
  28,                                  /* colNo */
  "vadapt",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = { 45,/* lineNo */
  61,                                  /* colNo */
  "vadapt",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pName */
};

static emlrtRTEInfo qf_emlrtRTEI = { 112,/* lineNo */
  9,                                   /* colNo */
  "reshapeSizeChecks",                 /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/reshapeSizeChecks.m"/* pName */
};

static emlrtRTEInfo rf_emlrtRTEI = { 55,/* lineNo */
  23,                                  /* colNo */
  "reshapeSizeChecks",                 /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/reshapeSizeChecks.m"/* pName */
};

static emlrtRTEInfo sf_emlrtRTEI = { 281,/* lineNo */
  27,                                  /* colNo */
  "cat",                               /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/cat.m"/* pName */
};

static emlrtECInfo emlrtECI = { 2,     /* nDims */
  45,                                  /* lineNo */
  24,                                  /* colNo */
  "vadapt",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pName */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  37,                                  /* lineNo */
  17,                                  /* colNo */
  "vadapt",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pName */
};

static emlrtECInfo c_emlrtECI = { -1,  /* nDims */
  36,                                  /* lineNo */
  17,                                  /* colNo */
  "vadapt",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pName */
};

static emlrtECInfo d_emlrtECI = { 2,   /* nDims */
  37,                                  /* lineNo */
  27,                                  /* colNo */
  "vadapt",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pName */
};

static emlrtECInfo e_emlrtECI = { 2,   /* nDims */
  36,                                  /* lineNo */
  27,                                  /* colNo */
  "vadapt",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pName */
};

static emlrtECInfo f_emlrtECI = { 2,   /* nDims */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "vadapt",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pName */
};

static emlrtECInfo g_emlrtECI = { 2,   /* nDims */
  24,                                  /* lineNo */
  24,                                  /* colNo */
  "vadapt",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  12,                                  /* lineNo */
  48,                                  /* colNo */
  "tinterval",                         /* aName */
  "vadapt",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  12,                                  /* lineNo */
  29,                                  /* colNo */
  "tinterval",                         /* aName */
  "vadapt",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  12,                                  /* lineNo */
  27,                                  /* colNo */
  "tinterval",                         /* aName */
  "vadapt",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  40,                                  /* colNo */
  "Q2",                                /* aName */
  "vadapt",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  69,                                  /* lineNo */
  36,                                  /* colNo */
  "Q1",                                /* aName */
  "vadapt",                            /* fName */
  "/home/xiaolei/Documents/ImageStress/vadapt.m",/* pName */
  0                                    /* checkKind */
};

static const real_T dv0[15] = { -0.99145537112081261, -0.94910791234275849,
  -0.8648644233597691, -0.74153118559939435, -0.58608723546769115,
  -0.40584515137739718, -0.20778495500789851, 0.0, 0.20778495500789851,
  0.40584515137739718, 0.58608723546769115, 0.74153118559939435,
  0.8648644233597691, 0.94910791234275849, 0.99145537112081261 };

static const real_T dv1[15] = { 0.022935322010529221, 0.063092092629978544,
  0.1047900103222502, 0.14065325971552589, 0.16900472663926791,
  0.19035057806478539, 0.20443294007529891, 0.20948214108472779,
  0.20443294007529891, 0.19035057806478539, 0.16900472663926791,
  0.14065325971552589, 0.1047900103222502, 0.063092092629978544,
  0.022935322010529221 };

static const real_T dv2[15] = { 0.022935322010529221, -0.066392873538891159,
  0.1047900103222502, -0.13905213177375081, 0.16900472663926791,
  -0.19147947244033353, 0.20443294007529891, -0.20847704258874161,
  0.20443294007529891, -0.19147947244033353, 0.16900472663926791,
  -0.13905213177375081, 0.1047900103222502, -0.066392873538891159,
  0.022935322010529221 };

/* Function Definitions */
void b_vadapt(stressStackData *SD, const emlrtStack *sp, coder_internal_ref_1
              *f_tunableEnvironment_f1, const coder_internal_ref
              *f_tunableEnvironment_f2, real_T q[6], real_T errbnd[6])
{
  int32_T i;
  emxArray_real_T *halfh;
  real_T pathlen;
  int32_T i24;
  int32_T loop_ub;
  int32_T i25;
  int32_T nx;
  boolean_T overflow;
  emxArray_real_T *subs;
  real_T q_ok[6];
  emxArray_real_T *x_matrix;
  real_T err_ok[6];
  emxArray_real_T *midpt;
  emxArray_real_T *Q1;
  emxArray_real_T *Q2;
  emxArray_real_T *r8;
  emxArray_real_T *r9;
  emxArray_int32_T *r10;
  emxArray_real_T *r11;
  emxArray_real_T *varargout_1;
  emxArray_real_T *varargin_1;
  emxArray_real_T *b;
  emxArray_boolean_T *x;
  emxArray_int32_T *ii;
  emxArray_real_T *b_x;
  emxArray_uint32_T *err_ok_tmp;
  int32_T exitg1;
  int32_T iv7[2];
  int32_T b_halfh[2];
  int32_T n;
  emxArray_real_T b_x_matrix;
  int32_T iv8[2];
  real_T finite_test[6];
  int32_T calclen;
  boolean_T exitg2;
  real_T alpha1;
  real_T beta1;
  uint32_T unnamed_idx_1;
  int32_T tmp_size[2];
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  real_T b_b;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  char_T TRANSA;
  char_T TRANSB;
  real_T tmp_data[334];
  boolean_T b_finite_test[6];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
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
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  for (i = 0; i < 6; i++) {
    q[i] = 0.0;
    errbnd[i] = 0.0;
  }

  emxInit_real_T(sp, &halfh, 2, &o_emlrtRTEI, true);

  /*  Iterative routine to perform the integration. */
  /*  Compute the path length and split tinterval if needed. */
  st.site = &o_emlrtRSI;
  split(&st, halfh, &pathlen);

  /*  Initialize array of subintervals of [a,b]. */
  if (1 > halfh->size[1] - 1) {
    loop_ub = 0;
  } else {
    i24 = halfh->size[1];
    if (1 > i24) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i24, &c_emlrtBCI, sp);
    }

    i24 = halfh->size[1];
    loop_ub = halfh->size[1] - 1;
    if ((loop_ub < 1) || (loop_ub > i24)) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i24, &b_emlrtBCI, sp);
    }
  }

  if (2 > halfh->size[1]) {
    i24 = 0;
    nx = 0;
  } else {
    i24 = 1;
    i25 = halfh->size[1];
    nx = halfh->size[1];
    if ((nx < 1) || (nx > i25)) {
      emlrtDynamicBoundsCheckR2012b(nx, 1, i25, &emlrtBCI, sp);
    }
  }

  st.site = &p_emlrtRSI;
  b_st.site = &yb_emlrtRSI;
  c_st.site = &ac_emlrtRSI;
  overflow = true;
  i = nx - i24;
  if (i != loop_ub) {
    overflow = false;
  }

  if (!overflow) {
    emlrtErrorWithMessageIdR2018a(&c_st, &sf_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  emxInit_real_T(&c_st, &subs, 2, &m_emlrtRTEI, true);
  i25 = subs->size[0] * subs->size[1];
  subs->size[0] = 2;
  subs->size[1] = loop_ub;
  emxEnsureCapacity_real_T(&b_st, subs, i25, &m_emlrtRTEI);
  for (i25 = 0; i25 < loop_ub; i25++) {
    subs->data[i25 << 1] = halfh->data[i25];
  }

  for (i25 = 0; i25 < i; i25++) {
    subs->data[1 + (i25 << 1)] = halfh->data[i24 + i25];
  }

  /*  Initialize partial sums. */
  for (i = 0; i < 6; i++) {
    q_ok[i] = 0.0;
    err_ok[i] = 0.0;
  }

  /*  Initialize main loop */
  emxInit_real_T(sp, &x_matrix, 2, &lb_emlrtRTEI, true);
  emxInit_real_T(sp, &midpt, 2, &n_emlrtRTEI, true);
  emxInit_real_T(sp, &Q1, 2, &mb_emlrtRTEI, true);
  emxInit_real_T(sp, &Q2, 2, &nb_emlrtRTEI, true);
  emxInit_real_T(sp, &r8, 2, &ob_emlrtRTEI, true);
  emxInit_real_T(sp, &r9, 2, &ob_emlrtRTEI, true);
  emxInit_int32_T(sp, &r10, 1, &ob_emlrtRTEI, true);
  emxInit_real_T(sp, &r11, 2, &ob_emlrtRTEI, true);
  emxInit_real_T(sp, &varargout_1, 2, &ob_emlrtRTEI, true);
  emxInit_real_T(sp, &varargin_1, 2, &pb_emlrtRTEI, true);
  emxInit_real_T(sp, &b, 2, &qb_emlrtRTEI, true);
  emxInit_boolean_T(sp, &x, 2, &v_emlrtRTEI, true);
  emxInit_int32_T(sp, &ii, 2, &rb_emlrtRTEI, true);
  emxInit_real_T(sp, &b_x, 2, &jb_emlrtRTEI, true);
  emxInit_uint32_T(sp, &err_ok_tmp, 1, &db_emlrtRTEI, true);
  do {
    exitg1 = 0;

    /*  SUBS contains subintervals of [a,b] where the integral is not */
    /*  sufficiently accurate. The first row of SUBS holds the left end */
    /*  points and the second row, the corresponding right endpoints. */
    st.site = &q_emlrtRSI;
    sum(&st, subs, midpt);
    i24 = midpt->size[0] * midpt->size[1];
    i25 = midpt->size[0] * midpt->size[1];
    midpt->size[0] = 1;
    emxEnsureCapacity_real_T(sp, midpt, i25, &n_emlrtRTEI);
    loop_ub = i24 - 1;
    for (i24 = 0; i24 <= loop_ub; i24++) {
      midpt->data[i24] /= 2.0;
    }

    /*  midpoints of the subintervals */
    st.site = &r_emlrtRSI;
    b_diff(&st, subs, halfh);
    i24 = halfh->size[0] * halfh->size[1];
    i25 = halfh->size[0] * halfh->size[1];
    halfh->size[0] = 1;
    emxEnsureCapacity_real_T(sp, halfh, i25, &o_emlrtRTEI);
    loop_ub = i24 - 1;
    for (i24 = 0; i24 <= loop_ub; i24++) {
      halfh->data[i24] /= 2.0;
    }

    /*  half the lengths of the subintervals */
    i24 = r8->size[0] * r8->size[1];
    r8->size[0] = 15;
    r8->size[1] = halfh->size[1];
    emxEnsureCapacity_real_T(sp, r8, i24, &p_emlrtRTEI);
    for (i24 = 0; i24 < 15; i24++) {
      loop_ub = halfh->size[1];
      for (i25 = 0; i25 < loop_ub; i25++) {
        r8->data[i24 + 15 * i25] = dv0[i24] * halfh->data[i25];
      }
    }

    i24 = r9->size[0] * r9->size[1];
    r9->size[0] = 15;
    r9->size[1] = midpt->size[1];
    emxEnsureCapacity_real_T(sp, r9, i24, &q_emlrtRTEI);
    for (i24 = 0; i24 < 15; i24++) {
      loop_ub = midpt->size[1];
      for (i25 = 0; i25 < loop_ub; i25++) {
        r9->data[i24 + 15 * i25] = midpt->data[i25];
      }
    }

    iv7[0] = r8->size[0];
    iv7[1] = r8->size[1];
    b_halfh[0] = r9->size[0];
    b_halfh[1] = r9->size[1];
    if ((iv7[0] != b_halfh[0]) || (iv7[1] != b_halfh[1])) {
      emlrtSizeEqCheckNDR2012b(&iv7[0], &b_halfh[0], &g_emlrtECI, sp);
    }

    i24 = r8->size[1];
    if (5000 < i24) {
      emlrtDimSizeGeqCheckR2012b(5000, i24, &f_emlrtECI, sp);
    }

    i24 = x_matrix->size[0] * x_matrix->size[1];
    x_matrix->size[0] = 15;
    x_matrix->size[1] = r8->size[1];
    emxEnsureCapacity_real_T(sp, x_matrix, i24, &r_emlrtRTEI);
    loop_ub = r8->size[0] * r8->size[1];
    for (i24 = 0; i24 < loop_ub; i24++) {
      x_matrix->data[i24] = r8->data[i24] + r9->data[i24];
    }

    st.site = &s_emlrtRSI;
    nx = 15 * x_matrix->size[1];
    b_st.site = &hc_emlrtRSI;
    n = 15;
    if (x_matrix->size[1] > 15) {
      n = x_matrix->size[1];
    }

    if (nx > muIntScalarMax_sint32(nx, n)) {
      b_st.site = &gc_emlrtRSI;
      error(&b_st);
    }

    /*  function f expects a row vector */
    st.site = &t_emlrtRSI;
    b_st.site = &ic_emlrtRSI;
    b_x_matrix = *x_matrix;
    iv8[0] = 1;
    iv8[1] = nx;
    b_x_matrix.size = &iv8[0];
    b_x_matrix.numDimensions = 1;
    c_st.site = &l_emlrtRSI;
    b_f4(SD, &c_st, f_tunableEnvironment_f1, f_tunableEnvironment_f2,
         &b_x_matrix, varargout_1, &overflow);

    /*  Quit if mesh points are too close. */
    if (overflow) {
      exitg1 = 1;
    } else {
      i24 = Q1->size[0] * Q1->size[1];
      Q1->size[0] = 6;
      Q1->size[1] = midpt->size[1];
      emxEnsureCapacity_real_T(sp, Q1, i24, &s_emlrtRTEI);
      i24 = Q2->size[0] * Q2->size[1];
      Q2->size[0] = 6;
      Q2->size[1] = midpt->size[1];
      emxEnsureCapacity_real_T(sp, Q2, i24, &s_emlrtRTEI);
      for (n = 0; n < 6; n++) {
        st.site = &u_emlrtRSI;
        i24 = varargout_1->size[1];
        b_st.site = &hc_emlrtRSI;
        i25 = varargout_1->size[1];
        calclen = i25 / 15;
        i25 = varargout_1->size[1];
        if (calclen > i25) {
          emlrtErrorWithMessageIdR2018a(&b_st, &qf_emlrtRTEI,
            "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed",
            0);
        }

        i = 1;
        i25 = varargout_1->size[1];
        if (i25 > 1) {
          i = varargout_1->size[1];
        }

        i = muIntScalarMax_sint32(i24, i);
        if (15 > i) {
          b_st.site = &gc_emlrtRSI;
          error(&b_st);
        }

        if (calclen > i) {
          b_st.site = &gc_emlrtRSI;
          error(&b_st);
        }

        i24 = varargout_1->size[1];
        if (15 * calclen != i24) {
          emlrtErrorWithMessageIdR2018a(&st, &rf_emlrtRTEI,
            "Coder:MATLAB:getReshapeDims_notSameNumel",
            "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
        }

        loop_ub = varargout_1->size[1];
        for (i24 = 0; i24 < loop_ub; i24++) {
          SD->u2.f6.varargout_1_data[i24] = varargout_1->data[n +
            varargout_1->size[0] * i24];
        }

        loop_ub = 15 * calclen;
        if (0 <= loop_ub - 1) {
          memcpy(&SD->u2.f6.F_data[0], &SD->u2.f6.varargout_1_data[0], (uint32_T)
                 (loop_ub * (int32_T)sizeof(real_T)));
        }

        /*  Quantities for subintervals. */
        st.site = &v_emlrtRSI;
        b_st.site = &wm_emlrtRSI;
        if (calclen == 0) {
          tmp_size[1] = 0;
        } else {
          c_st.site = &xm_emlrtRSI;
          c_st.site = &ym_emlrtRSI;
          alpha1 = 1.0;
          beta1 = 0.0;
          m_t = (ptrdiff_t)1;
          n_t = (ptrdiff_t)calclen;
          k_t = (ptrdiff_t)15;
          lda_t = (ptrdiff_t)1;
          ldb_t = (ptrdiff_t)15;
          ldc_t = (ptrdiff_t)1;
          tmp_size[1] = calclen;
          TRANSA = 'N';
          TRANSB = 'N';
          dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &dv1[0], &lda_t,
                &SD->u2.f6.F_data[0], &ldb_t, &beta1, &tmp_data[0], &ldc_t);
        }

        iv7[0] = 1;
        iv7[1] = tmp_size[1];
        b_halfh[0] = halfh->size[0];
        b_halfh[1] = halfh->size[1];
        if ((1 != b_halfh[0]) || (tmp_size[1] != b_halfh[1])) {
          emlrtSizeEqCheckNDR2012b(&iv7[0], &b_halfh[0], &e_emlrtECI, sp);
        }

        loop_ub = Q1->size[1];
        i24 = r10->size[0];
        r10->size[0] = loop_ub;
        emxEnsureCapacity_int32_T(sp, r10, i24, &w_emlrtRTEI);
        for (i24 = 0; i24 < loop_ub; i24++) {
          r10->data[i24] = i24;
        }

        tmp_size[0] = 1;
        loop_ub = tmp_size[1] - 1;
        for (i24 = 0; i24 <= loop_ub; i24++) {
          alpha1 = tmp_data[i24] * halfh->data[i24];
          tmp_data[i24] = alpha1;
        }

        iv7[0] = 1;
        iv7[1] = r10->size[0];
        emlrtSubAssignSizeCheckR2012b(&iv7[0], 2, &tmp_size[0], 2, &c_emlrtECI,
          sp);
        loop_ub = tmp_size[1];
        for (i24 = 0; i24 < loop_ub; i24++) {
          Q1->data[n + 6 * r10->data[i24]] = tmp_data[i24];
        }

        st.site = &w_emlrtRSI;
        b_st.site = &wm_emlrtRSI;
        if (calclen == 0) {
          tmp_size[1] = 0;
        } else {
          c_st.site = &xm_emlrtRSI;
          c_st.site = &ym_emlrtRSI;
          alpha1 = 1.0;
          beta1 = 0.0;
          m_t = (ptrdiff_t)1;
          n_t = (ptrdiff_t)calclen;
          k_t = (ptrdiff_t)15;
          lda_t = (ptrdiff_t)1;
          ldb_t = (ptrdiff_t)15;
          ldc_t = (ptrdiff_t)1;
          tmp_size[1] = calclen;
          TRANSA = 'N';
          TRANSB = 'N';
          dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &dv2[0], &lda_t,
                &SD->u2.f6.F_data[0], &ldb_t, &beta1, &tmp_data[0], &ldc_t);
        }

        iv7[0] = 1;
        iv7[1] = tmp_size[1];
        b_halfh[0] = halfh->size[0];
        b_halfh[1] = halfh->size[1];
        if ((1 != b_halfh[0]) || (tmp_size[1] != b_halfh[1])) {
          emlrtSizeEqCheckNDR2012b(&iv7[0], &b_halfh[0], &d_emlrtECI, sp);
        }

        loop_ub = Q2->size[1];
        i24 = r10->size[0];
        r10->size[0] = loop_ub;
        emxEnsureCapacity_int32_T(sp, r10, i24, &cb_emlrtRTEI);
        for (i24 = 0; i24 < loop_ub; i24++) {
          r10->data[i24] = i24;
        }

        tmp_size[0] = 1;
        loop_ub = tmp_size[1] - 1;
        for (i24 = 0; i24 <= loop_ub; i24++) {
          alpha1 = tmp_data[i24] * halfh->data[i24];
          tmp_data[i24] = alpha1;
        }

        iv7[0] = 1;
        iv7[1] = r10->size[0];
        emlrtSubAssignSizeCheckR2012b(&iv7[0], 2, &tmp_size[0], 2, &b_emlrtECI,
          sp);
        loop_ub = tmp_size[1];
        for (i24 = 0; i24 < loop_ub; i24++) {
          Q2->data[n + 6 * r10->data[i24]] = tmp_data[i24];
        }

        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      /*  Calculate current values of q and tol. */
      b_sum(Q1, q);
      for (i24 = 0; i24 < 6; i24++) {
        q[i24] += q_ok[i24];
      }

      c_abs(q, finite_test);
      if (!muDoubleScalarIsNaN(finite_test[0])) {
        calclen = 1;
      } else {
        calclen = 0;
        i = 2;
        exitg2 = false;
        while ((!exitg2) && (i < 7)) {
          if (!muDoubleScalarIsNaN(finite_test[i - 1])) {
            calclen = i;
            exitg2 = true;
          } else {
            i++;
          }
        }
      }

      if (calclen == 0) {
        alpha1 = finite_test[0];
      } else {
        alpha1 = finite_test[calclen - 1];
        i24 = calclen + 1;
        for (i = i24; i < 7; i++) {
          beta1 = finite_test[i - 1];
          if (alpha1 < beta1) {
            alpha1 = beta1;
          }
        }
      }

      alpha1 = muDoubleScalarMax(1.0E-10, 1.0E-6 * alpha1);

      /*  Locate subintervals where the approximate integrals are */
      /*  sufficiently accurate and use them to update the partial */
      /*  error sum. */
      st.site = &x_emlrtRSI;
      d_abs(&st, Q2, varargin_1);
      st.site = &x_emlrtRSI;
      b_st.site = &dn_emlrtRSI;
      c_st.site = &en_emlrtRSI;
      d_st.site = &jn_emlrtRSI;
      e_st.site = &kn_emlrtRSI;
      f_st.site = &ln_emlrtRSI;
      g_st.site = &mn_emlrtRSI;
      n = varargin_1->size[1];
      unnamed_idx_1 = (uint32_T)varargin_1->size[1];
      i24 = r11->size[0] * r11->size[1];
      r11->size[0] = 1;
      r11->size[1] = (int32_T)unnamed_idx_1;
      emxEnsureCapacity_real_T(&g_st, r11, i24, &t_emlrtRTEI);
      if (varargin_1->size[1] >= 1) {
        h_st.site = &nn_emlrtRSI;
        overflow = (varargin_1->size[1] > 2147483646);
        if (overflow) {
          i_st.site = &lb_emlrtRSI;
          check_forloop_overflow_error(&i_st);
        }

        for (calclen = 0; calclen < n; calclen++) {
          r11->data[calclen] = varargin_1->data[6 * calclen];
          for (i = 0; i < 5; i++) {
            beta1 = r11->data[calclen];
            nx = (i + 6 * calclen) + 1;
            b_b = varargin_1->data[nx];
            if ((!muDoubleScalarIsNaN(b_b)) && (muDoubleScalarIsNaN(beta1) ||
                 (beta1 < b_b))) {
              r11->data[calclen] = varargin_1->data[nx];
            }
          }
        }
      }

      beta1 = 2.0 * alpha1 / pathlen;
      st.site = &x_emlrtRSI;
      b_abs(&st, halfh, b);
      i24 = b->size[0] * b->size[1];
      i25 = b->size[0] * b->size[1];
      b->size[0] = 1;
      emxEnsureCapacity_real_T(sp, b, i25, &u_emlrtRTEI);
      loop_ub = i24 - 1;
      for (i24 = 0; i24 <= loop_ub; i24++) {
        b->data[i24] *= beta1;
      }

      iv7[0] = r11->size[0];
      iv7[1] = r11->size[1];
      b_halfh[0] = b->size[0];
      b_halfh[1] = b->size[1];
      if ((iv7[0] != b_halfh[0]) || (iv7[1] != b_halfh[1])) {
        emlrtSizeEqCheckNDR2012b(&iv7[0], &b_halfh[0], &emlrtECI, sp);
      }

      st.site = &x_emlrtRSI;
      i24 = x->size[0] * x->size[1];
      x->size[0] = 1;
      x->size[1] = r11->size[1];
      emxEnsureCapacity_boolean_T(&st, x, i24, &v_emlrtRTEI);
      loop_ub = r11->size[0] * r11->size[1];
      for (i24 = 0; i24 < loop_ub; i24++) {
        x->data[i24] = (r11->data[i24] <= b->data[i24]);
      }

      b_st.site = &qb_emlrtRSI;
      nx = x->size[1];
      c_st.site = &rb_emlrtRSI;
      calclen = 0;
      i24 = ii->size[0] * ii->size[1];
      ii->size[0] = 1;
      ii->size[1] = x->size[1];
      emxEnsureCapacity_int32_T(&c_st, ii, i24, &y_emlrtRTEI);
      d_st.site = &sb_emlrtRSI;
      overflow = ((1 <= x->size[1]) && (x->size[1] > 2147483646));
      if (overflow) {
        e_st.site = &lb_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }

      i = 0;
      exitg2 = false;
      while ((!exitg2) && (i <= nx - 1)) {
        if (x->data[i]) {
          calclen++;
          ii->data[calclen - 1] = i + 1;
          if (calclen >= nx) {
            exitg2 = true;
          } else {
            i++;
          }
        } else {
          i++;
        }
      }

      if (calclen > x->size[1]) {
        emlrtErrorWithMessageIdR2018a(&c_st, &tf_emlrtRTEI,
          "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
      }

      if (x->size[1] == 1) {
        if (calclen == 0) {
          ii->size[0] = 1;
          ii->size[1] = 0;
        }
      } else if (1 > calclen) {
        ii->size[1] = 0;
      } else {
        i24 = ii->size[0] * ii->size[1];
        ii->size[1] = calclen;
        emxEnsureCapacity_int32_T(&c_st, ii, i24, &ab_emlrtRTEI);
      }

      i24 = halfh->size[0] * halfh->size[1];
      halfh->size[0] = 1;
      halfh->size[1] = ii->size[1];
      emxEnsureCapacity_real_T(&st, halfh, i24, &bb_emlrtRTEI);
      loop_ub = ii->size[0] * ii->size[1];
      for (i24 = 0; i24 < loop_ub; i24++) {
        halfh->data[i24] = ii->data[i24];
      }

      i24 = err_ok_tmp->size[0];
      err_ok_tmp->size[0] = halfh->size[1];
      emxEnsureCapacity_uint32_T(sp, err_ok_tmp, i24, &db_emlrtRTEI);
      loop_ub = halfh->size[1];
      for (i24 = 0; i24 < loop_ub; i24++) {
        err_ok_tmp->data[i24] = (uint32_T)halfh->data[i24];
      }

      i = Q2->size[1];
      i24 = varargin_1->size[0] * varargin_1->size[1];
      varargin_1->size[0] = 6;
      varargin_1->size[1] = err_ok_tmp->size[0];
      emxEnsureCapacity_real_T(sp, varargin_1, i24, &eb_emlrtRTEI);
      loop_ub = err_ok_tmp->size[0];
      for (i24 = 0; i24 < loop_ub; i24++) {
        for (i25 = 0; i25 < 6; i25++) {
          nx = (int32_T)err_ok_tmp->data[i24];
          if ((nx < 1) || (nx > i)) {
            emlrtDynamicBoundsCheckR2012b(nx, 1, i, &d_emlrtBCI, sp);
          }

          varargin_1->data[i25 + 6 * i24] = Q2->data[i25 + 6 * (nx - 1)];
        }
      }

      b_sum(varargin_1, finite_test);
      for (i24 = 0; i24 < 6; i24++) {
        err_ok[i24] += finite_test[i24];
      }

      /*  Remove errsubs entries for subintervals with accurate */
      /*  approximations. */
      i24 = ii->size[0] * ii->size[1];
      ii->size[0] = 1;
      ii->size[1] = halfh->size[1];
      emxEnsureCapacity_int32_T(sp, ii, i24, &fb_emlrtRTEI);
      loop_ub = halfh->size[0] * halfh->size[1];
      for (i24 = 0; i24 < loop_ub; i24++) {
        ii->data[i24] = (int32_T)halfh->data[i24];
      }

      st.site = &y_emlrtRSI;
      nullAssignment(&st, Q2, ii);
      c_abs(err_ok, errbnd);
      st.site = &ab_emlrtRSI;
      d_abs(&st, Q2, varargin_1);
      b_sum(varargin_1, finite_test);
      for (i24 = 0; i24 < 6; i24++) {
        errbnd[i24] += finite_test[i24];
      }

      /*  Check for nonfinites. */
      for (calclen = 0; calclen < 6; calclen++) {
        if (b_isfinite(q[calclen]) && b_isfinite(errbnd[calclen])) {
          overflow = true;
        } else {
          overflow = false;
        }

        finite_test[calclen] = overflow;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      st.site = &bb_emlrtRSI;
      for (i = 0; i < 6; i++) {
        b_finite_test[i] = !(finite_test[i] != 0.0);
      }

      if (ifWhileCond(b_finite_test)) {
        exitg1 = 1;
      } else {
        /*  Test for convergence. */
        for (i = 0; i < 6; i++) {
          b_finite_test[i] = (errbnd[i] <= alpha1);
        }

        if (ifWhileCond(b_finite_test)) {
          exitg1 = 1;
        } else {
          /*  Remove subintervals with accurate approximations. */
          i24 = ii->size[0] * ii->size[1];
          ii->size[0] = 1;
          ii->size[1] = halfh->size[1];
          emxEnsureCapacity_int32_T(sp, ii, i24, &gb_emlrtRTEI);
          loop_ub = halfh->size[0] * halfh->size[1];
          for (i24 = 0; i24 < loop_ub; i24++) {
            ii->data[i24] = (int32_T)halfh->data[i24];
          }

          st.site = &cb_emlrtRSI;
          b_nullAssignment(&st, subs, ii);
          if (subs->size[1] == 0) {
            exitg1 = 1;
          } else {
            /*  Update the partial sum for the integral. */
            i = Q1->size[1];
            i24 = varargin_1->size[0] * varargin_1->size[1];
            varargin_1->size[0] = 6;
            varargin_1->size[1] = err_ok_tmp->size[0];
            emxEnsureCapacity_real_T(sp, varargin_1, i24, &hb_emlrtRTEI);
            loop_ub = err_ok_tmp->size[0];
            for (i24 = 0; i24 < loop_ub; i24++) {
              for (i25 = 0; i25 < 6; i25++) {
                nx = (int32_T)err_ok_tmp->data[i24];
                if ((nx < 1) || (nx > i)) {
                  emlrtDynamicBoundsCheckR2012b(nx, 1, i, &e_emlrtBCI, sp);
                }

                varargin_1->data[i25 + 6 * i24] = Q1->data[i25 + 6 * (nx - 1)];
              }
            }

            b_sum(varargin_1, finite_test);
            for (i24 = 0; i24 < 6; i24++) {
              q_ok[i24] += finite_test[i24];
            }

            /*  Split the remaining subintervals in half. Quit if splitting */
            /*  results in too many subintervals. */
            if (((uint32_T)subs->size[1] << 1) > 5000U) {
              exitg1 = 1;
            } else {
              i24 = ii->size[0] * ii->size[1];
              ii->size[0] = 1;
              ii->size[1] = halfh->size[1];
              emxEnsureCapacity_int32_T(sp, ii, i24, &ib_emlrtRTEI);
              loop_ub = halfh->size[0] * halfh->size[1];
              for (i24 = 0; i24 < loop_ub; i24++) {
                ii->data[i24] = (int32_T)halfh->data[i24];
              }

              st.site = &db_emlrtRSI;
              c_nullAssignment(&st, midpt, ii);

              /*  Remove unneeded midpoints. */
              st.site = &eb_emlrtRSI;
              b_st.site = &yb_emlrtRSI;
              c_st.site = &ac_emlrtRSI;
              overflow = true;
              i24 = subs->size[1];
              if (midpt->size[1] != i24) {
                overflow = false;
              }

              if (!overflow) {
                emlrtErrorWithMessageIdR2018a(&c_st, &sf_emlrtRTEI,
                  "MATLAB:catenate:matrixDimensionMismatch",
                  "MATLAB:catenate:matrixDimensionMismatch", 0);
              }

              i24 = subs->size[1];
              if (midpt->size[1] != i24) {
                overflow = false;
              }

              if (!overflow) {
                emlrtErrorWithMessageIdR2018a(&c_st, &sf_emlrtRTEI,
                  "MATLAB:catenate:matrixDimensionMismatch",
                  "MATLAB:catenate:matrixDimensionMismatch", 0);
              }

              loop_ub = subs->size[1];
              i = subs->size[1] - 1;
              i24 = b_x->size[0] * b_x->size[1];
              b_x->size[0] = 4;
              b_x->size[1] = loop_ub;
              emxEnsureCapacity_real_T(&b_st, b_x, i24, &jb_emlrtRTEI);
              for (i24 = 0; i24 < loop_ub; i24++) {
                b_x->data[i24 << 2] = subs->data[i24 << 1];
              }

              loop_ub = midpt->size[1];
              for (i24 = 0; i24 < loop_ub; i24++) {
                b_x->data[1 + (i24 << 2)] = midpt->data[i24];
              }

              loop_ub = midpt->size[1];
              for (i24 = 0; i24 < loop_ub; i24++) {
                b_x->data[2 + (i24 << 2)] = midpt->data[i24];
              }

              for (i24 = 0; i24 <= i; i24++) {
                b_x->data[3 + (i24 << 2)] = subs->data[1 + (i24 << 1)];
              }

              st.site = &eb_emlrtRSI;
              nx = b_x->size[1] << 2;
              b_st.site = &hc_emlrtRSI;
              calclen = nx / 2;
              if (calclen > nx) {
                emlrtErrorWithMessageIdR2018a(&b_st, &qf_emlrtRTEI,
                  "Coder:builtins:AssertionFailed",
                  "Coder:builtins:AssertionFailed", 0);
              }

              n = 4;
              if (b_x->size[1] > 4) {
                n = b_x->size[1];
              }

              if (calclen > muIntScalarMax_sint32(nx, n)) {
                b_st.site = &gc_emlrtRSI;
                error(&b_st);
              }

              loop_ub = calclen << 1;
              if (loop_ub != nx) {
                emlrtErrorWithMessageIdR2018a(&st, &rf_emlrtRTEI,
                  "Coder:MATLAB:getReshapeDims_notSameNumel",
                  "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
              }

              i24 = subs->size[0] * subs->size[1];
              subs->size[0] = 2;
              subs->size[1] = calclen;
              emxEnsureCapacity_real_T(sp, subs, i24, &kb_emlrtRTEI);
              for (i24 = 0; i24 < loop_ub; i24++) {
                subs->data[i24] = b_x->data[i24];
              }

              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b(sp);
              }
            }
          }
        }
      }
    }
  } while (exitg1 == 0);

  emxFree_uint32_T(&err_ok_tmp);
  emxFree_real_T(&b_x);
  emxFree_int32_T(&ii);
  emxFree_boolean_T(&x);
  emxFree_real_T(&b);
  emxFree_real_T(&varargin_1);
  emxFree_real_T(&varargout_1);
  emxFree_real_T(&r11);
  emxFree_int32_T(&r10);
  emxFree_real_T(&r9);
  emxFree_real_T(&r8);
  emxFree_real_T(&Q2);
  emxFree_real_T(&Q1);
  emxFree_real_T(&halfh);
  emxFree_real_T(&midpt);
  emxFree_real_T(&subs);
  emxFree_real_T(&x_matrix);

  /*  vadapt */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void c_vadapt(stressStackData *SD, const emlrtStack *sp, coder_internal_ref_1
              *f_tunableEnvironment_f1, const coder_internal_ref
              *f_tunableEnvironment_f2, real_T q[6], real_T errbnd[6])
{
  int32_T i;
  emxArray_real_T *halfh;
  real_T pathlen;
  int32_T i42;
  int32_T loop_ub;
  int32_T i43;
  int32_T nx;
  boolean_T overflow;
  emxArray_real_T *subs;
  real_T q_ok[6];
  emxArray_real_T *x_matrix;
  real_T err_ok[6];
  emxArray_real_T *midpt;
  emxArray_real_T *Q1;
  emxArray_real_T *Q2;
  emxArray_real_T *r14;
  emxArray_real_T *r15;
  emxArray_int32_T *r16;
  emxArray_real_T *r17;
  emxArray_real_T *varargout_1;
  emxArray_real_T *varargin_1;
  emxArray_real_T *b;
  emxArray_boolean_T *x;
  emxArray_int32_T *ii;
  emxArray_real_T *b_x;
  emxArray_uint32_T *err_ok_tmp;
  int32_T exitg1;
  int32_T iv9[2];
  int32_T b_halfh[2];
  int32_T n;
  emxArray_real_T b_x_matrix;
  int32_T iv10[2];
  real_T finite_test[6];
  int32_T calclen;
  boolean_T exitg2;
  real_T alpha1;
  real_T beta1;
  uint32_T unnamed_idx_1;
  int32_T tmp_size[2];
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  real_T b_b;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  char_T TRANSA;
  char_T TRANSB;
  real_T tmp_data[334];
  boolean_T b_finite_test[6];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
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
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  for (i = 0; i < 6; i++) {
    q[i] = 0.0;
    errbnd[i] = 0.0;
  }

  emxInit_real_T(sp, &halfh, 2, &o_emlrtRTEI, true);

  /*  Iterative routine to perform the integration. */
  /*  Compute the path length and split tinterval if needed. */
  st.site = &o_emlrtRSI;
  split(&st, halfh, &pathlen);

  /*  Initialize array of subintervals of [a,b]. */
  if (1 > halfh->size[1] - 1) {
    loop_ub = 0;
  } else {
    i42 = halfh->size[1];
    if (1 > i42) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i42, &c_emlrtBCI, sp);
    }

    i42 = halfh->size[1];
    loop_ub = halfh->size[1] - 1;
    if ((loop_ub < 1) || (loop_ub > i42)) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i42, &b_emlrtBCI, sp);
    }
  }

  if (2 > halfh->size[1]) {
    i42 = 0;
    nx = 0;
  } else {
    i42 = 1;
    i43 = halfh->size[1];
    nx = halfh->size[1];
    if ((nx < 1) || (nx > i43)) {
      emlrtDynamicBoundsCheckR2012b(nx, 1, i43, &emlrtBCI, sp);
    }
  }

  st.site = &p_emlrtRSI;
  b_st.site = &yb_emlrtRSI;
  c_st.site = &ac_emlrtRSI;
  overflow = true;
  i = nx - i42;
  if (i != loop_ub) {
    overflow = false;
  }

  if (!overflow) {
    emlrtErrorWithMessageIdR2018a(&c_st, &sf_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  emxInit_real_T(&c_st, &subs, 2, &m_emlrtRTEI, true);
  i43 = subs->size[0] * subs->size[1];
  subs->size[0] = 2;
  subs->size[1] = loop_ub;
  emxEnsureCapacity_real_T(&b_st, subs, i43, &m_emlrtRTEI);
  for (i43 = 0; i43 < loop_ub; i43++) {
    subs->data[i43 << 1] = halfh->data[i43];
  }

  for (i43 = 0; i43 < i; i43++) {
    subs->data[1 + (i43 << 1)] = halfh->data[i42 + i43];
  }

  /*  Initialize partial sums. */
  for (i = 0; i < 6; i++) {
    q_ok[i] = 0.0;
    err_ok[i] = 0.0;
  }

  /*  Initialize main loop */
  emxInit_real_T(sp, &x_matrix, 2, &lb_emlrtRTEI, true);
  emxInit_real_T(sp, &midpt, 2, &n_emlrtRTEI, true);
  emxInit_real_T(sp, &Q1, 2, &mb_emlrtRTEI, true);
  emxInit_real_T(sp, &Q2, 2, &nb_emlrtRTEI, true);
  emxInit_real_T(sp, &r14, 2, &ob_emlrtRTEI, true);
  emxInit_real_T(sp, &r15, 2, &ob_emlrtRTEI, true);
  emxInit_int32_T(sp, &r16, 1, &ob_emlrtRTEI, true);
  emxInit_real_T(sp, &r17, 2, &ob_emlrtRTEI, true);
  emxInit_real_T(sp, &varargout_1, 2, &ob_emlrtRTEI, true);
  emxInit_real_T(sp, &varargin_1, 2, &pb_emlrtRTEI, true);
  emxInit_real_T(sp, &b, 2, &qb_emlrtRTEI, true);
  emxInit_boolean_T(sp, &x, 2, &v_emlrtRTEI, true);
  emxInit_int32_T(sp, &ii, 2, &rb_emlrtRTEI, true);
  emxInit_real_T(sp, &b_x, 2, &jb_emlrtRTEI, true);
  emxInit_uint32_T(sp, &err_ok_tmp, 1, &db_emlrtRTEI, true);
  do {
    exitg1 = 0;

    /*  SUBS contains subintervals of [a,b] where the integral is not */
    /*  sufficiently accurate. The first row of SUBS holds the left end */
    /*  points and the second row, the corresponding right endpoints. */
    st.site = &q_emlrtRSI;
    sum(&st, subs, midpt);
    i42 = midpt->size[0] * midpt->size[1];
    i43 = midpt->size[0] * midpt->size[1];
    midpt->size[0] = 1;
    emxEnsureCapacity_real_T(sp, midpt, i43, &n_emlrtRTEI);
    loop_ub = i42 - 1;
    for (i42 = 0; i42 <= loop_ub; i42++) {
      midpt->data[i42] /= 2.0;
    }

    /*  midpoints of the subintervals */
    st.site = &r_emlrtRSI;
    b_diff(&st, subs, halfh);
    i42 = halfh->size[0] * halfh->size[1];
    i43 = halfh->size[0] * halfh->size[1];
    halfh->size[0] = 1;
    emxEnsureCapacity_real_T(sp, halfh, i43, &o_emlrtRTEI);
    loop_ub = i42 - 1;
    for (i42 = 0; i42 <= loop_ub; i42++) {
      halfh->data[i42] /= 2.0;
    }

    /*  half the lengths of the subintervals */
    i42 = r14->size[0] * r14->size[1];
    r14->size[0] = 15;
    r14->size[1] = halfh->size[1];
    emxEnsureCapacity_real_T(sp, r14, i42, &p_emlrtRTEI);
    for (i42 = 0; i42 < 15; i42++) {
      loop_ub = halfh->size[1];
      for (i43 = 0; i43 < loop_ub; i43++) {
        r14->data[i42 + 15 * i43] = dv0[i42] * halfh->data[i43];
      }
    }

    i42 = r15->size[0] * r15->size[1];
    r15->size[0] = 15;
    r15->size[1] = midpt->size[1];
    emxEnsureCapacity_real_T(sp, r15, i42, &q_emlrtRTEI);
    for (i42 = 0; i42 < 15; i42++) {
      loop_ub = midpt->size[1];
      for (i43 = 0; i43 < loop_ub; i43++) {
        r15->data[i42 + 15 * i43] = midpt->data[i43];
      }
    }

    iv9[0] = r14->size[0];
    iv9[1] = r14->size[1];
    b_halfh[0] = r15->size[0];
    b_halfh[1] = r15->size[1];
    if ((iv9[0] != b_halfh[0]) || (iv9[1] != b_halfh[1])) {
      emlrtSizeEqCheckNDR2012b(&iv9[0], &b_halfh[0], &g_emlrtECI, sp);
    }

    i42 = r14->size[1];
    if (5000 < i42) {
      emlrtDimSizeGeqCheckR2012b(5000, i42, &f_emlrtECI, sp);
    }

    i42 = x_matrix->size[0] * x_matrix->size[1];
    x_matrix->size[0] = 15;
    x_matrix->size[1] = r14->size[1];
    emxEnsureCapacity_real_T(sp, x_matrix, i42, &r_emlrtRTEI);
    loop_ub = r14->size[0] * r14->size[1];
    for (i42 = 0; i42 < loop_ub; i42++) {
      x_matrix->data[i42] = r14->data[i42] + r15->data[i42];
    }

    st.site = &s_emlrtRSI;
    nx = 15 * x_matrix->size[1];
    b_st.site = &hc_emlrtRSI;
    n = 15;
    if (x_matrix->size[1] > 15) {
      n = x_matrix->size[1];
    }

    if (nx > muIntScalarMax_sint32(nx, n)) {
      b_st.site = &gc_emlrtRSI;
      error(&b_st);
    }

    /*  function f expects a row vector */
    st.site = &t_emlrtRSI;
    b_st.site = &ic_emlrtRSI;
    b_x_matrix = *x_matrix;
    iv10[0] = 1;
    iv10[1] = nx;
    b_x_matrix.size = &iv10[0];
    b_x_matrix.numDimensions = 1;
    c_st.site = &l_emlrtRSI;
    c_f4(SD, &c_st, f_tunableEnvironment_f1, f_tunableEnvironment_f2,
         &b_x_matrix, varargout_1, &overflow);

    /*  Quit if mesh points are too close. */
    if (overflow) {
      exitg1 = 1;
    } else {
      i42 = Q1->size[0] * Q1->size[1];
      Q1->size[0] = 6;
      Q1->size[1] = midpt->size[1];
      emxEnsureCapacity_real_T(sp, Q1, i42, &s_emlrtRTEI);
      i42 = Q2->size[0] * Q2->size[1];
      Q2->size[0] = 6;
      Q2->size[1] = midpt->size[1];
      emxEnsureCapacity_real_T(sp, Q2, i42, &s_emlrtRTEI);
      for (n = 0; n < 6; n++) {
        st.site = &u_emlrtRSI;
        i42 = varargout_1->size[1];
        b_st.site = &hc_emlrtRSI;
        i43 = varargout_1->size[1];
        calclen = i43 / 15;
        i43 = varargout_1->size[1];
        if (calclen > i43) {
          emlrtErrorWithMessageIdR2018a(&b_st, &qf_emlrtRTEI,
            "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed",
            0);
        }

        i = 1;
        i43 = varargout_1->size[1];
        if (i43 > 1) {
          i = varargout_1->size[1];
        }

        i = muIntScalarMax_sint32(i42, i);
        if (15 > i) {
          b_st.site = &gc_emlrtRSI;
          error(&b_st);
        }

        if (calclen > i) {
          b_st.site = &gc_emlrtRSI;
          error(&b_st);
        }

        i42 = varargout_1->size[1];
        if (15 * calclen != i42) {
          emlrtErrorWithMessageIdR2018a(&st, &rf_emlrtRTEI,
            "Coder:MATLAB:getReshapeDims_notSameNumel",
            "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
        }

        loop_ub = varargout_1->size[1];
        for (i42 = 0; i42 < loop_ub; i42++) {
          SD->u2.f7.varargout_1_data[i42] = varargout_1->data[n +
            varargout_1->size[0] * i42];
        }

        loop_ub = 15 * calclen;
        if (0 <= loop_ub - 1) {
          memcpy(&SD->u2.f7.F_data[0], &SD->u2.f7.varargout_1_data[0], (uint32_T)
                 (loop_ub * (int32_T)sizeof(real_T)));
        }

        /*  Quantities for subintervals. */
        st.site = &v_emlrtRSI;
        b_st.site = &wm_emlrtRSI;
        if (calclen == 0) {
          tmp_size[1] = 0;
        } else {
          c_st.site = &xm_emlrtRSI;
          c_st.site = &ym_emlrtRSI;
          alpha1 = 1.0;
          beta1 = 0.0;
          m_t = (ptrdiff_t)1;
          n_t = (ptrdiff_t)calclen;
          k_t = (ptrdiff_t)15;
          lda_t = (ptrdiff_t)1;
          ldb_t = (ptrdiff_t)15;
          ldc_t = (ptrdiff_t)1;
          tmp_size[1] = calclen;
          TRANSA = 'N';
          TRANSB = 'N';
          dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &dv1[0], &lda_t,
                &SD->u2.f7.F_data[0], &ldb_t, &beta1, &tmp_data[0], &ldc_t);
        }

        iv9[0] = 1;
        iv9[1] = tmp_size[1];
        b_halfh[0] = halfh->size[0];
        b_halfh[1] = halfh->size[1];
        if ((1 != b_halfh[0]) || (tmp_size[1] != b_halfh[1])) {
          emlrtSizeEqCheckNDR2012b(&iv9[0], &b_halfh[0], &e_emlrtECI, sp);
        }

        loop_ub = Q1->size[1];
        i42 = r16->size[0];
        r16->size[0] = loop_ub;
        emxEnsureCapacity_int32_T(sp, r16, i42, &w_emlrtRTEI);
        for (i42 = 0; i42 < loop_ub; i42++) {
          r16->data[i42] = i42;
        }

        tmp_size[0] = 1;
        loop_ub = tmp_size[1] - 1;
        for (i42 = 0; i42 <= loop_ub; i42++) {
          alpha1 = tmp_data[i42] * halfh->data[i42];
          tmp_data[i42] = alpha1;
        }

        iv9[0] = 1;
        iv9[1] = r16->size[0];
        emlrtSubAssignSizeCheckR2012b(&iv9[0], 2, &tmp_size[0], 2, &c_emlrtECI,
          sp);
        loop_ub = tmp_size[1];
        for (i42 = 0; i42 < loop_ub; i42++) {
          Q1->data[n + 6 * r16->data[i42]] = tmp_data[i42];
        }

        st.site = &w_emlrtRSI;
        b_st.site = &wm_emlrtRSI;
        if (calclen == 0) {
          tmp_size[1] = 0;
        } else {
          c_st.site = &xm_emlrtRSI;
          c_st.site = &ym_emlrtRSI;
          alpha1 = 1.0;
          beta1 = 0.0;
          m_t = (ptrdiff_t)1;
          n_t = (ptrdiff_t)calclen;
          k_t = (ptrdiff_t)15;
          lda_t = (ptrdiff_t)1;
          ldb_t = (ptrdiff_t)15;
          ldc_t = (ptrdiff_t)1;
          tmp_size[1] = calclen;
          TRANSA = 'N';
          TRANSB = 'N';
          dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &dv2[0], &lda_t,
                &SD->u2.f7.F_data[0], &ldb_t, &beta1, &tmp_data[0], &ldc_t);
        }

        iv9[0] = 1;
        iv9[1] = tmp_size[1];
        b_halfh[0] = halfh->size[0];
        b_halfh[1] = halfh->size[1];
        if ((1 != b_halfh[0]) || (tmp_size[1] != b_halfh[1])) {
          emlrtSizeEqCheckNDR2012b(&iv9[0], &b_halfh[0], &d_emlrtECI, sp);
        }

        loop_ub = Q2->size[1];
        i42 = r16->size[0];
        r16->size[0] = loop_ub;
        emxEnsureCapacity_int32_T(sp, r16, i42, &cb_emlrtRTEI);
        for (i42 = 0; i42 < loop_ub; i42++) {
          r16->data[i42] = i42;
        }

        tmp_size[0] = 1;
        loop_ub = tmp_size[1] - 1;
        for (i42 = 0; i42 <= loop_ub; i42++) {
          alpha1 = tmp_data[i42] * halfh->data[i42];
          tmp_data[i42] = alpha1;
        }

        iv9[0] = 1;
        iv9[1] = r16->size[0];
        emlrtSubAssignSizeCheckR2012b(&iv9[0], 2, &tmp_size[0], 2, &b_emlrtECI,
          sp);
        loop_ub = tmp_size[1];
        for (i42 = 0; i42 < loop_ub; i42++) {
          Q2->data[n + 6 * r16->data[i42]] = tmp_data[i42];
        }

        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      /*  Calculate current values of q and tol. */
      b_sum(Q1, q);
      for (i42 = 0; i42 < 6; i42++) {
        q[i42] += q_ok[i42];
      }

      c_abs(q, finite_test);
      if (!muDoubleScalarIsNaN(finite_test[0])) {
        calclen = 1;
      } else {
        calclen = 0;
        i = 2;
        exitg2 = false;
        while ((!exitg2) && (i < 7)) {
          if (!muDoubleScalarIsNaN(finite_test[i - 1])) {
            calclen = i;
            exitg2 = true;
          } else {
            i++;
          }
        }
      }

      if (calclen == 0) {
        alpha1 = finite_test[0];
      } else {
        alpha1 = finite_test[calclen - 1];
        i42 = calclen + 1;
        for (i = i42; i < 7; i++) {
          beta1 = finite_test[i - 1];
          if (alpha1 < beta1) {
            alpha1 = beta1;
          }
        }
      }

      alpha1 = muDoubleScalarMax(1.0E-10, 1.0E-6 * alpha1);

      /*  Locate subintervals where the approximate integrals are */
      /*  sufficiently accurate and use them to update the partial */
      /*  error sum. */
      st.site = &x_emlrtRSI;
      d_abs(&st, Q2, varargin_1);
      st.site = &x_emlrtRSI;
      b_st.site = &dn_emlrtRSI;
      c_st.site = &en_emlrtRSI;
      d_st.site = &jn_emlrtRSI;
      e_st.site = &kn_emlrtRSI;
      f_st.site = &ln_emlrtRSI;
      g_st.site = &mn_emlrtRSI;
      n = varargin_1->size[1];
      unnamed_idx_1 = (uint32_T)varargin_1->size[1];
      i42 = r17->size[0] * r17->size[1];
      r17->size[0] = 1;
      r17->size[1] = (int32_T)unnamed_idx_1;
      emxEnsureCapacity_real_T(&g_st, r17, i42, &t_emlrtRTEI);
      if (varargin_1->size[1] >= 1) {
        h_st.site = &nn_emlrtRSI;
        overflow = (varargin_1->size[1] > 2147483646);
        if (overflow) {
          i_st.site = &lb_emlrtRSI;
          check_forloop_overflow_error(&i_st);
        }

        for (calclen = 0; calclen < n; calclen++) {
          r17->data[calclen] = varargin_1->data[6 * calclen];
          for (i = 0; i < 5; i++) {
            beta1 = r17->data[calclen];
            nx = (i + 6 * calclen) + 1;
            b_b = varargin_1->data[nx];
            if ((!muDoubleScalarIsNaN(b_b)) && (muDoubleScalarIsNaN(beta1) ||
                 (beta1 < b_b))) {
              r17->data[calclen] = varargin_1->data[nx];
            }
          }
        }
      }

      beta1 = 2.0 * alpha1 / pathlen;
      st.site = &x_emlrtRSI;
      b_abs(&st, halfh, b);
      i42 = b->size[0] * b->size[1];
      i43 = b->size[0] * b->size[1];
      b->size[0] = 1;
      emxEnsureCapacity_real_T(sp, b, i43, &u_emlrtRTEI);
      loop_ub = i42 - 1;
      for (i42 = 0; i42 <= loop_ub; i42++) {
        b->data[i42] *= beta1;
      }

      iv9[0] = r17->size[0];
      iv9[1] = r17->size[1];
      b_halfh[0] = b->size[0];
      b_halfh[1] = b->size[1];
      if ((iv9[0] != b_halfh[0]) || (iv9[1] != b_halfh[1])) {
        emlrtSizeEqCheckNDR2012b(&iv9[0], &b_halfh[0], &emlrtECI, sp);
      }

      st.site = &x_emlrtRSI;
      i42 = x->size[0] * x->size[1];
      x->size[0] = 1;
      x->size[1] = r17->size[1];
      emxEnsureCapacity_boolean_T(&st, x, i42, &v_emlrtRTEI);
      loop_ub = r17->size[0] * r17->size[1];
      for (i42 = 0; i42 < loop_ub; i42++) {
        x->data[i42] = (r17->data[i42] <= b->data[i42]);
      }

      b_st.site = &qb_emlrtRSI;
      nx = x->size[1];
      c_st.site = &rb_emlrtRSI;
      calclen = 0;
      i42 = ii->size[0] * ii->size[1];
      ii->size[0] = 1;
      ii->size[1] = x->size[1];
      emxEnsureCapacity_int32_T(&c_st, ii, i42, &y_emlrtRTEI);
      d_st.site = &sb_emlrtRSI;
      overflow = ((1 <= x->size[1]) && (x->size[1] > 2147483646));
      if (overflow) {
        e_st.site = &lb_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }

      i = 0;
      exitg2 = false;
      while ((!exitg2) && (i <= nx - 1)) {
        if (x->data[i]) {
          calclen++;
          ii->data[calclen - 1] = i + 1;
          if (calclen >= nx) {
            exitg2 = true;
          } else {
            i++;
          }
        } else {
          i++;
        }
      }

      if (calclen > x->size[1]) {
        emlrtErrorWithMessageIdR2018a(&c_st, &tf_emlrtRTEI,
          "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
      }

      if (x->size[1] == 1) {
        if (calclen == 0) {
          ii->size[0] = 1;
          ii->size[1] = 0;
        }
      } else if (1 > calclen) {
        ii->size[1] = 0;
      } else {
        i42 = ii->size[0] * ii->size[1];
        ii->size[1] = calclen;
        emxEnsureCapacity_int32_T(&c_st, ii, i42, &ab_emlrtRTEI);
      }

      i42 = halfh->size[0] * halfh->size[1];
      halfh->size[0] = 1;
      halfh->size[1] = ii->size[1];
      emxEnsureCapacity_real_T(&st, halfh, i42, &bb_emlrtRTEI);
      loop_ub = ii->size[0] * ii->size[1];
      for (i42 = 0; i42 < loop_ub; i42++) {
        halfh->data[i42] = ii->data[i42];
      }

      i42 = err_ok_tmp->size[0];
      err_ok_tmp->size[0] = halfh->size[1];
      emxEnsureCapacity_uint32_T(sp, err_ok_tmp, i42, &db_emlrtRTEI);
      loop_ub = halfh->size[1];
      for (i42 = 0; i42 < loop_ub; i42++) {
        err_ok_tmp->data[i42] = (uint32_T)halfh->data[i42];
      }

      i = Q2->size[1];
      i42 = varargin_1->size[0] * varargin_1->size[1];
      varargin_1->size[0] = 6;
      varargin_1->size[1] = err_ok_tmp->size[0];
      emxEnsureCapacity_real_T(sp, varargin_1, i42, &eb_emlrtRTEI);
      loop_ub = err_ok_tmp->size[0];
      for (i42 = 0; i42 < loop_ub; i42++) {
        for (i43 = 0; i43 < 6; i43++) {
          nx = (int32_T)err_ok_tmp->data[i42];
          if ((nx < 1) || (nx > i)) {
            emlrtDynamicBoundsCheckR2012b(nx, 1, i, &d_emlrtBCI, sp);
          }

          varargin_1->data[i43 + 6 * i42] = Q2->data[i43 + 6 * (nx - 1)];
        }
      }

      b_sum(varargin_1, finite_test);
      for (i42 = 0; i42 < 6; i42++) {
        err_ok[i42] += finite_test[i42];
      }

      /*  Remove errsubs entries for subintervals with accurate */
      /*  approximations. */
      i42 = ii->size[0] * ii->size[1];
      ii->size[0] = 1;
      ii->size[1] = halfh->size[1];
      emxEnsureCapacity_int32_T(sp, ii, i42, &fb_emlrtRTEI);
      loop_ub = halfh->size[0] * halfh->size[1];
      for (i42 = 0; i42 < loop_ub; i42++) {
        ii->data[i42] = (int32_T)halfh->data[i42];
      }

      st.site = &y_emlrtRSI;
      nullAssignment(&st, Q2, ii);
      c_abs(err_ok, errbnd);
      st.site = &ab_emlrtRSI;
      d_abs(&st, Q2, varargin_1);
      b_sum(varargin_1, finite_test);
      for (i42 = 0; i42 < 6; i42++) {
        errbnd[i42] += finite_test[i42];
      }

      /*  Check for nonfinites. */
      for (calclen = 0; calclen < 6; calclen++) {
        if (b_isfinite(q[calclen]) && b_isfinite(errbnd[calclen])) {
          overflow = true;
        } else {
          overflow = false;
        }

        finite_test[calclen] = overflow;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      st.site = &bb_emlrtRSI;
      for (i = 0; i < 6; i++) {
        b_finite_test[i] = !(finite_test[i] != 0.0);
      }

      if (ifWhileCond(b_finite_test)) {
        exitg1 = 1;
      } else {
        /*  Test for convergence. */
        for (i = 0; i < 6; i++) {
          b_finite_test[i] = (errbnd[i] <= alpha1);
        }

        if (ifWhileCond(b_finite_test)) {
          exitg1 = 1;
        } else {
          /*  Remove subintervals with accurate approximations. */
          i42 = ii->size[0] * ii->size[1];
          ii->size[0] = 1;
          ii->size[1] = halfh->size[1];
          emxEnsureCapacity_int32_T(sp, ii, i42, &gb_emlrtRTEI);
          loop_ub = halfh->size[0] * halfh->size[1];
          for (i42 = 0; i42 < loop_ub; i42++) {
            ii->data[i42] = (int32_T)halfh->data[i42];
          }

          st.site = &cb_emlrtRSI;
          b_nullAssignment(&st, subs, ii);
          if (subs->size[1] == 0) {
            exitg1 = 1;
          } else {
            /*  Update the partial sum for the integral. */
            i = Q1->size[1];
            i42 = varargin_1->size[0] * varargin_1->size[1];
            varargin_1->size[0] = 6;
            varargin_1->size[1] = err_ok_tmp->size[0];
            emxEnsureCapacity_real_T(sp, varargin_1, i42, &hb_emlrtRTEI);
            loop_ub = err_ok_tmp->size[0];
            for (i42 = 0; i42 < loop_ub; i42++) {
              for (i43 = 0; i43 < 6; i43++) {
                nx = (int32_T)err_ok_tmp->data[i42];
                if ((nx < 1) || (nx > i)) {
                  emlrtDynamicBoundsCheckR2012b(nx, 1, i, &e_emlrtBCI, sp);
                }

                varargin_1->data[i43 + 6 * i42] = Q1->data[i43 + 6 * (nx - 1)];
              }
            }

            b_sum(varargin_1, finite_test);
            for (i42 = 0; i42 < 6; i42++) {
              q_ok[i42] += finite_test[i42];
            }

            /*  Split the remaining subintervals in half. Quit if splitting */
            /*  results in too many subintervals. */
            if (((uint32_T)subs->size[1] << 1) > 5000U) {
              exitg1 = 1;
            } else {
              i42 = ii->size[0] * ii->size[1];
              ii->size[0] = 1;
              ii->size[1] = halfh->size[1];
              emxEnsureCapacity_int32_T(sp, ii, i42, &ib_emlrtRTEI);
              loop_ub = halfh->size[0] * halfh->size[1];
              for (i42 = 0; i42 < loop_ub; i42++) {
                ii->data[i42] = (int32_T)halfh->data[i42];
              }

              st.site = &db_emlrtRSI;
              c_nullAssignment(&st, midpt, ii);

              /*  Remove unneeded midpoints. */
              st.site = &eb_emlrtRSI;
              b_st.site = &yb_emlrtRSI;
              c_st.site = &ac_emlrtRSI;
              overflow = true;
              i42 = subs->size[1];
              if (midpt->size[1] != i42) {
                overflow = false;
              }

              if (!overflow) {
                emlrtErrorWithMessageIdR2018a(&c_st, &sf_emlrtRTEI,
                  "MATLAB:catenate:matrixDimensionMismatch",
                  "MATLAB:catenate:matrixDimensionMismatch", 0);
              }

              i42 = subs->size[1];
              if (midpt->size[1] != i42) {
                overflow = false;
              }

              if (!overflow) {
                emlrtErrorWithMessageIdR2018a(&c_st, &sf_emlrtRTEI,
                  "MATLAB:catenate:matrixDimensionMismatch",
                  "MATLAB:catenate:matrixDimensionMismatch", 0);
              }

              loop_ub = subs->size[1];
              i = subs->size[1] - 1;
              i42 = b_x->size[0] * b_x->size[1];
              b_x->size[0] = 4;
              b_x->size[1] = loop_ub;
              emxEnsureCapacity_real_T(&b_st, b_x, i42, &jb_emlrtRTEI);
              for (i42 = 0; i42 < loop_ub; i42++) {
                b_x->data[i42 << 2] = subs->data[i42 << 1];
              }

              loop_ub = midpt->size[1];
              for (i42 = 0; i42 < loop_ub; i42++) {
                b_x->data[1 + (i42 << 2)] = midpt->data[i42];
              }

              loop_ub = midpt->size[1];
              for (i42 = 0; i42 < loop_ub; i42++) {
                b_x->data[2 + (i42 << 2)] = midpt->data[i42];
              }

              for (i42 = 0; i42 <= i; i42++) {
                b_x->data[3 + (i42 << 2)] = subs->data[1 + (i42 << 1)];
              }

              st.site = &eb_emlrtRSI;
              nx = b_x->size[1] << 2;
              b_st.site = &hc_emlrtRSI;
              calclen = nx / 2;
              if (calclen > nx) {
                emlrtErrorWithMessageIdR2018a(&b_st, &qf_emlrtRTEI,
                  "Coder:builtins:AssertionFailed",
                  "Coder:builtins:AssertionFailed", 0);
              }

              n = 4;
              if (b_x->size[1] > 4) {
                n = b_x->size[1];
              }

              if (calclen > muIntScalarMax_sint32(nx, n)) {
                b_st.site = &gc_emlrtRSI;
                error(&b_st);
              }

              loop_ub = calclen << 1;
              if (loop_ub != nx) {
                emlrtErrorWithMessageIdR2018a(&st, &rf_emlrtRTEI,
                  "Coder:MATLAB:getReshapeDims_notSameNumel",
                  "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
              }

              i42 = subs->size[0] * subs->size[1];
              subs->size[0] = 2;
              subs->size[1] = calclen;
              emxEnsureCapacity_real_T(sp, subs, i42, &kb_emlrtRTEI);
              for (i42 = 0; i42 < loop_ub; i42++) {
                subs->data[i42] = b_x->data[i42];
              }

              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b(sp);
              }
            }
          }
        }
      }
    }
  } while (exitg1 == 0);

  emxFree_uint32_T(&err_ok_tmp);
  emxFree_real_T(&b_x);
  emxFree_int32_T(&ii);
  emxFree_boolean_T(&x);
  emxFree_real_T(&b);
  emxFree_real_T(&varargin_1);
  emxFree_real_T(&varargout_1);
  emxFree_real_T(&r17);
  emxFree_int32_T(&r16);
  emxFree_real_T(&r15);
  emxFree_real_T(&r14);
  emxFree_real_T(&Q2);
  emxFree_real_T(&Q1);
  emxFree_real_T(&halfh);
  emxFree_real_T(&midpt);
  emxFree_real_T(&subs);
  emxFree_real_T(&x_matrix);

  /*  vadapt */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void d_vadapt(stressStackData *SD, const emlrtStack *sp, coder_internal_ref_1
              *f_tunableEnvironment_f1, const coder_internal_ref
              *f_tunableEnvironment_f2, real_T q[6], real_T errbnd[6])
{
  int32_T i;
  emxArray_real_T *halfh;
  real_T pathlen;
  int32_T i60;
  int32_T loop_ub;
  int32_T i61;
  int32_T nx;
  boolean_T overflow;
  emxArray_real_T *subs;
  real_T q_ok[6];
  emxArray_real_T *x_matrix;
  real_T err_ok[6];
  emxArray_real_T *midpt;
  emxArray_real_T *Q1;
  emxArray_real_T *Q2;
  emxArray_real_T *r20;
  emxArray_real_T *r21;
  emxArray_int32_T *r22;
  emxArray_real_T *r23;
  emxArray_real_T *varargout_1;
  emxArray_real_T *varargin_1;
  emxArray_real_T *b;
  emxArray_boolean_T *x;
  emxArray_int32_T *ii;
  emxArray_real_T *b_x;
  emxArray_uint32_T *err_ok_tmp;
  int32_T exitg1;
  int32_T iv11[2];
  int32_T b_halfh[2];
  int32_T n;
  emxArray_real_T b_x_matrix;
  int32_T iv12[2];
  real_T finite_test[6];
  int32_T calclen;
  boolean_T exitg2;
  real_T alpha1;
  real_T beta1;
  uint32_T unnamed_idx_1;
  int32_T tmp_size[2];
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  real_T b_b;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  char_T TRANSA;
  char_T TRANSB;
  real_T tmp_data[334];
  boolean_T b_finite_test[6];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
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
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  for (i = 0; i < 6; i++) {
    q[i] = 0.0;
    errbnd[i] = 0.0;
  }

  emxInit_real_T(sp, &halfh, 2, &o_emlrtRTEI, true);

  /*  Iterative routine to perform the integration. */
  /*  Compute the path length and split tinterval if needed. */
  st.site = &o_emlrtRSI;
  split(&st, halfh, &pathlen);

  /*  Initialize array of subintervals of [a,b]. */
  if (1 > halfh->size[1] - 1) {
    loop_ub = 0;
  } else {
    i60 = halfh->size[1];
    if (1 > i60) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i60, &c_emlrtBCI, sp);
    }

    i60 = halfh->size[1];
    loop_ub = halfh->size[1] - 1;
    if ((loop_ub < 1) || (loop_ub > i60)) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i60, &b_emlrtBCI, sp);
    }
  }

  if (2 > halfh->size[1]) {
    i60 = 0;
    nx = 0;
  } else {
    i60 = 1;
    i61 = halfh->size[1];
    nx = halfh->size[1];
    if ((nx < 1) || (nx > i61)) {
      emlrtDynamicBoundsCheckR2012b(nx, 1, i61, &emlrtBCI, sp);
    }
  }

  st.site = &p_emlrtRSI;
  b_st.site = &yb_emlrtRSI;
  c_st.site = &ac_emlrtRSI;
  overflow = true;
  i = nx - i60;
  if (i != loop_ub) {
    overflow = false;
  }

  if (!overflow) {
    emlrtErrorWithMessageIdR2018a(&c_st, &sf_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  emxInit_real_T(&c_st, &subs, 2, &m_emlrtRTEI, true);
  i61 = subs->size[0] * subs->size[1];
  subs->size[0] = 2;
  subs->size[1] = loop_ub;
  emxEnsureCapacity_real_T(&b_st, subs, i61, &m_emlrtRTEI);
  for (i61 = 0; i61 < loop_ub; i61++) {
    subs->data[i61 << 1] = halfh->data[i61];
  }

  for (i61 = 0; i61 < i; i61++) {
    subs->data[1 + (i61 << 1)] = halfh->data[i60 + i61];
  }

  /*  Initialize partial sums. */
  for (i = 0; i < 6; i++) {
    q_ok[i] = 0.0;
    err_ok[i] = 0.0;
  }

  /*  Initialize main loop */
  emxInit_real_T(sp, &x_matrix, 2, &lb_emlrtRTEI, true);
  emxInit_real_T(sp, &midpt, 2, &n_emlrtRTEI, true);
  emxInit_real_T(sp, &Q1, 2, &mb_emlrtRTEI, true);
  emxInit_real_T(sp, &Q2, 2, &nb_emlrtRTEI, true);
  emxInit_real_T(sp, &r20, 2, &ob_emlrtRTEI, true);
  emxInit_real_T(sp, &r21, 2, &ob_emlrtRTEI, true);
  emxInit_int32_T(sp, &r22, 1, &ob_emlrtRTEI, true);
  emxInit_real_T(sp, &r23, 2, &ob_emlrtRTEI, true);
  emxInit_real_T(sp, &varargout_1, 2, &ob_emlrtRTEI, true);
  emxInit_real_T(sp, &varargin_1, 2, &pb_emlrtRTEI, true);
  emxInit_real_T(sp, &b, 2, &qb_emlrtRTEI, true);
  emxInit_boolean_T(sp, &x, 2, &v_emlrtRTEI, true);
  emxInit_int32_T(sp, &ii, 2, &rb_emlrtRTEI, true);
  emxInit_real_T(sp, &b_x, 2, &jb_emlrtRTEI, true);
  emxInit_uint32_T(sp, &err_ok_tmp, 1, &db_emlrtRTEI, true);
  do {
    exitg1 = 0;

    /*  SUBS contains subintervals of [a,b] where the integral is not */
    /*  sufficiently accurate. The first row of SUBS holds the left end */
    /*  points and the second row, the corresponding right endpoints. */
    st.site = &q_emlrtRSI;
    sum(&st, subs, midpt);
    i60 = midpt->size[0] * midpt->size[1];
    i61 = midpt->size[0] * midpt->size[1];
    midpt->size[0] = 1;
    emxEnsureCapacity_real_T(sp, midpt, i61, &n_emlrtRTEI);
    loop_ub = i60 - 1;
    for (i60 = 0; i60 <= loop_ub; i60++) {
      midpt->data[i60] /= 2.0;
    }

    /*  midpoints of the subintervals */
    st.site = &r_emlrtRSI;
    b_diff(&st, subs, halfh);
    i60 = halfh->size[0] * halfh->size[1];
    i61 = halfh->size[0] * halfh->size[1];
    halfh->size[0] = 1;
    emxEnsureCapacity_real_T(sp, halfh, i61, &o_emlrtRTEI);
    loop_ub = i60 - 1;
    for (i60 = 0; i60 <= loop_ub; i60++) {
      halfh->data[i60] /= 2.0;
    }

    /*  half the lengths of the subintervals */
    i60 = r20->size[0] * r20->size[1];
    r20->size[0] = 15;
    r20->size[1] = halfh->size[1];
    emxEnsureCapacity_real_T(sp, r20, i60, &p_emlrtRTEI);
    for (i60 = 0; i60 < 15; i60++) {
      loop_ub = halfh->size[1];
      for (i61 = 0; i61 < loop_ub; i61++) {
        r20->data[i60 + 15 * i61] = dv0[i60] * halfh->data[i61];
      }
    }

    i60 = r21->size[0] * r21->size[1];
    r21->size[0] = 15;
    r21->size[1] = midpt->size[1];
    emxEnsureCapacity_real_T(sp, r21, i60, &q_emlrtRTEI);
    for (i60 = 0; i60 < 15; i60++) {
      loop_ub = midpt->size[1];
      for (i61 = 0; i61 < loop_ub; i61++) {
        r21->data[i60 + 15 * i61] = midpt->data[i61];
      }
    }

    iv11[0] = r20->size[0];
    iv11[1] = r20->size[1];
    b_halfh[0] = r21->size[0];
    b_halfh[1] = r21->size[1];
    if ((iv11[0] != b_halfh[0]) || (iv11[1] != b_halfh[1])) {
      emlrtSizeEqCheckNDR2012b(&iv11[0], &b_halfh[0], &g_emlrtECI, sp);
    }

    i60 = r20->size[1];
    if (5000 < i60) {
      emlrtDimSizeGeqCheckR2012b(5000, i60, &f_emlrtECI, sp);
    }

    i60 = x_matrix->size[0] * x_matrix->size[1];
    x_matrix->size[0] = 15;
    x_matrix->size[1] = r20->size[1];
    emxEnsureCapacity_real_T(sp, x_matrix, i60, &r_emlrtRTEI);
    loop_ub = r20->size[0] * r20->size[1];
    for (i60 = 0; i60 < loop_ub; i60++) {
      x_matrix->data[i60] = r20->data[i60] + r21->data[i60];
    }

    st.site = &s_emlrtRSI;
    nx = 15 * x_matrix->size[1];
    b_st.site = &hc_emlrtRSI;
    n = 15;
    if (x_matrix->size[1] > 15) {
      n = x_matrix->size[1];
    }

    if (nx > muIntScalarMax_sint32(nx, n)) {
      b_st.site = &gc_emlrtRSI;
      error(&b_st);
    }

    /*  function f expects a row vector */
    st.site = &t_emlrtRSI;
    b_st.site = &ic_emlrtRSI;
    b_x_matrix = *x_matrix;
    iv12[0] = 1;
    iv12[1] = nx;
    b_x_matrix.size = &iv12[0];
    b_x_matrix.numDimensions = 1;
    c_st.site = &l_emlrtRSI;
    d_f4(SD, &c_st, f_tunableEnvironment_f1, f_tunableEnvironment_f2,
         &b_x_matrix, varargout_1, &overflow);

    /*  Quit if mesh points are too close. */
    if (overflow) {
      exitg1 = 1;
    } else {
      i60 = Q1->size[0] * Q1->size[1];
      Q1->size[0] = 6;
      Q1->size[1] = midpt->size[1];
      emxEnsureCapacity_real_T(sp, Q1, i60, &s_emlrtRTEI);
      i60 = Q2->size[0] * Q2->size[1];
      Q2->size[0] = 6;
      Q2->size[1] = midpt->size[1];
      emxEnsureCapacity_real_T(sp, Q2, i60, &s_emlrtRTEI);
      for (n = 0; n < 6; n++) {
        st.site = &u_emlrtRSI;
        i60 = varargout_1->size[1];
        b_st.site = &hc_emlrtRSI;
        i61 = varargout_1->size[1];
        calclen = i61 / 15;
        i61 = varargout_1->size[1];
        if (calclen > i61) {
          emlrtErrorWithMessageIdR2018a(&b_st, &qf_emlrtRTEI,
            "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed",
            0);
        }

        i = 1;
        i61 = varargout_1->size[1];
        if (i61 > 1) {
          i = varargout_1->size[1];
        }

        i = muIntScalarMax_sint32(i60, i);
        if (15 > i) {
          b_st.site = &gc_emlrtRSI;
          error(&b_st);
        }

        if (calclen > i) {
          b_st.site = &gc_emlrtRSI;
          error(&b_st);
        }

        i60 = varargout_1->size[1];
        if (15 * calclen != i60) {
          emlrtErrorWithMessageIdR2018a(&st, &rf_emlrtRTEI,
            "Coder:MATLAB:getReshapeDims_notSameNumel",
            "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
        }

        loop_ub = varargout_1->size[1];
        for (i60 = 0; i60 < loop_ub; i60++) {
          SD->u2.f8.varargout_1_data[i60] = varargout_1->data[n +
            varargout_1->size[0] * i60];
        }

        loop_ub = 15 * calclen;
        if (0 <= loop_ub - 1) {
          memcpy(&SD->u2.f8.F_data[0], &SD->u2.f8.varargout_1_data[0], (uint32_T)
                 (loop_ub * (int32_T)sizeof(real_T)));
        }

        /*  Quantities for subintervals. */
        st.site = &v_emlrtRSI;
        b_st.site = &wm_emlrtRSI;
        if (calclen == 0) {
          tmp_size[1] = 0;
        } else {
          c_st.site = &xm_emlrtRSI;
          c_st.site = &ym_emlrtRSI;
          alpha1 = 1.0;
          beta1 = 0.0;
          m_t = (ptrdiff_t)1;
          n_t = (ptrdiff_t)calclen;
          k_t = (ptrdiff_t)15;
          lda_t = (ptrdiff_t)1;
          ldb_t = (ptrdiff_t)15;
          ldc_t = (ptrdiff_t)1;
          tmp_size[1] = calclen;
          TRANSA = 'N';
          TRANSB = 'N';
          dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &dv1[0], &lda_t,
                &SD->u2.f8.F_data[0], &ldb_t, &beta1, &tmp_data[0], &ldc_t);
        }

        iv11[0] = 1;
        iv11[1] = tmp_size[1];
        b_halfh[0] = halfh->size[0];
        b_halfh[1] = halfh->size[1];
        if ((1 != b_halfh[0]) || (tmp_size[1] != b_halfh[1])) {
          emlrtSizeEqCheckNDR2012b(&iv11[0], &b_halfh[0], &e_emlrtECI, sp);
        }

        loop_ub = Q1->size[1];
        i60 = r22->size[0];
        r22->size[0] = loop_ub;
        emxEnsureCapacity_int32_T(sp, r22, i60, &w_emlrtRTEI);
        for (i60 = 0; i60 < loop_ub; i60++) {
          r22->data[i60] = i60;
        }

        tmp_size[0] = 1;
        loop_ub = tmp_size[1] - 1;
        for (i60 = 0; i60 <= loop_ub; i60++) {
          alpha1 = tmp_data[i60] * halfh->data[i60];
          tmp_data[i60] = alpha1;
        }

        iv11[0] = 1;
        iv11[1] = r22->size[0];
        emlrtSubAssignSizeCheckR2012b(&iv11[0], 2, &tmp_size[0], 2, &c_emlrtECI,
          sp);
        loop_ub = tmp_size[1];
        for (i60 = 0; i60 < loop_ub; i60++) {
          Q1->data[n + 6 * r22->data[i60]] = tmp_data[i60];
        }

        st.site = &w_emlrtRSI;
        b_st.site = &wm_emlrtRSI;
        if (calclen == 0) {
          tmp_size[1] = 0;
        } else {
          c_st.site = &xm_emlrtRSI;
          c_st.site = &ym_emlrtRSI;
          alpha1 = 1.0;
          beta1 = 0.0;
          m_t = (ptrdiff_t)1;
          n_t = (ptrdiff_t)calclen;
          k_t = (ptrdiff_t)15;
          lda_t = (ptrdiff_t)1;
          ldb_t = (ptrdiff_t)15;
          ldc_t = (ptrdiff_t)1;
          tmp_size[1] = calclen;
          TRANSA = 'N';
          TRANSB = 'N';
          dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &dv2[0], &lda_t,
                &SD->u2.f8.F_data[0], &ldb_t, &beta1, &tmp_data[0], &ldc_t);
        }

        iv11[0] = 1;
        iv11[1] = tmp_size[1];
        b_halfh[0] = halfh->size[0];
        b_halfh[1] = halfh->size[1];
        if ((1 != b_halfh[0]) || (tmp_size[1] != b_halfh[1])) {
          emlrtSizeEqCheckNDR2012b(&iv11[0], &b_halfh[0], &d_emlrtECI, sp);
        }

        loop_ub = Q2->size[1];
        i60 = r22->size[0];
        r22->size[0] = loop_ub;
        emxEnsureCapacity_int32_T(sp, r22, i60, &cb_emlrtRTEI);
        for (i60 = 0; i60 < loop_ub; i60++) {
          r22->data[i60] = i60;
        }

        tmp_size[0] = 1;
        loop_ub = tmp_size[1] - 1;
        for (i60 = 0; i60 <= loop_ub; i60++) {
          alpha1 = tmp_data[i60] * halfh->data[i60];
          tmp_data[i60] = alpha1;
        }

        iv11[0] = 1;
        iv11[1] = r22->size[0];
        emlrtSubAssignSizeCheckR2012b(&iv11[0], 2, &tmp_size[0], 2, &b_emlrtECI,
          sp);
        loop_ub = tmp_size[1];
        for (i60 = 0; i60 < loop_ub; i60++) {
          Q2->data[n + 6 * r22->data[i60]] = tmp_data[i60];
        }

        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      /*  Calculate current values of q and tol. */
      b_sum(Q1, q);
      for (i60 = 0; i60 < 6; i60++) {
        q[i60] += q_ok[i60];
      }

      c_abs(q, finite_test);
      if (!muDoubleScalarIsNaN(finite_test[0])) {
        calclen = 1;
      } else {
        calclen = 0;
        i = 2;
        exitg2 = false;
        while ((!exitg2) && (i < 7)) {
          if (!muDoubleScalarIsNaN(finite_test[i - 1])) {
            calclen = i;
            exitg2 = true;
          } else {
            i++;
          }
        }
      }

      if (calclen == 0) {
        alpha1 = finite_test[0];
      } else {
        alpha1 = finite_test[calclen - 1];
        i60 = calclen + 1;
        for (i = i60; i < 7; i++) {
          beta1 = finite_test[i - 1];
          if (alpha1 < beta1) {
            alpha1 = beta1;
          }
        }
      }

      alpha1 = muDoubleScalarMax(1.0E-10, 1.0E-6 * alpha1);

      /*  Locate subintervals where the approximate integrals are */
      /*  sufficiently accurate and use them to update the partial */
      /*  error sum. */
      st.site = &x_emlrtRSI;
      d_abs(&st, Q2, varargin_1);
      st.site = &x_emlrtRSI;
      b_st.site = &dn_emlrtRSI;
      c_st.site = &en_emlrtRSI;
      d_st.site = &jn_emlrtRSI;
      e_st.site = &kn_emlrtRSI;
      f_st.site = &ln_emlrtRSI;
      g_st.site = &mn_emlrtRSI;
      n = varargin_1->size[1];
      unnamed_idx_1 = (uint32_T)varargin_1->size[1];
      i60 = r23->size[0] * r23->size[1];
      r23->size[0] = 1;
      r23->size[1] = (int32_T)unnamed_idx_1;
      emxEnsureCapacity_real_T(&g_st, r23, i60, &t_emlrtRTEI);
      if (varargin_1->size[1] >= 1) {
        h_st.site = &nn_emlrtRSI;
        overflow = (varargin_1->size[1] > 2147483646);
        if (overflow) {
          i_st.site = &lb_emlrtRSI;
          check_forloop_overflow_error(&i_st);
        }

        for (calclen = 0; calclen < n; calclen++) {
          r23->data[calclen] = varargin_1->data[6 * calclen];
          for (i = 0; i < 5; i++) {
            beta1 = r23->data[calclen];
            nx = (i + 6 * calclen) + 1;
            b_b = varargin_1->data[nx];
            if ((!muDoubleScalarIsNaN(b_b)) && (muDoubleScalarIsNaN(beta1) ||
                 (beta1 < b_b))) {
              r23->data[calclen] = varargin_1->data[nx];
            }
          }
        }
      }

      beta1 = 2.0 * alpha1 / pathlen;
      st.site = &x_emlrtRSI;
      b_abs(&st, halfh, b);
      i60 = b->size[0] * b->size[1];
      i61 = b->size[0] * b->size[1];
      b->size[0] = 1;
      emxEnsureCapacity_real_T(sp, b, i61, &u_emlrtRTEI);
      loop_ub = i60 - 1;
      for (i60 = 0; i60 <= loop_ub; i60++) {
        b->data[i60] *= beta1;
      }

      iv11[0] = r23->size[0];
      iv11[1] = r23->size[1];
      b_halfh[0] = b->size[0];
      b_halfh[1] = b->size[1];
      if ((iv11[0] != b_halfh[0]) || (iv11[1] != b_halfh[1])) {
        emlrtSizeEqCheckNDR2012b(&iv11[0], &b_halfh[0], &emlrtECI, sp);
      }

      st.site = &x_emlrtRSI;
      i60 = x->size[0] * x->size[1];
      x->size[0] = 1;
      x->size[1] = r23->size[1];
      emxEnsureCapacity_boolean_T(&st, x, i60, &v_emlrtRTEI);
      loop_ub = r23->size[0] * r23->size[1];
      for (i60 = 0; i60 < loop_ub; i60++) {
        x->data[i60] = (r23->data[i60] <= b->data[i60]);
      }

      b_st.site = &qb_emlrtRSI;
      nx = x->size[1];
      c_st.site = &rb_emlrtRSI;
      calclen = 0;
      i60 = ii->size[0] * ii->size[1];
      ii->size[0] = 1;
      ii->size[1] = x->size[1];
      emxEnsureCapacity_int32_T(&c_st, ii, i60, &y_emlrtRTEI);
      d_st.site = &sb_emlrtRSI;
      overflow = ((1 <= x->size[1]) && (x->size[1] > 2147483646));
      if (overflow) {
        e_st.site = &lb_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }

      i = 0;
      exitg2 = false;
      while ((!exitg2) && (i <= nx - 1)) {
        if (x->data[i]) {
          calclen++;
          ii->data[calclen - 1] = i + 1;
          if (calclen >= nx) {
            exitg2 = true;
          } else {
            i++;
          }
        } else {
          i++;
        }
      }

      if (calclen > x->size[1]) {
        emlrtErrorWithMessageIdR2018a(&c_st, &tf_emlrtRTEI,
          "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
      }

      if (x->size[1] == 1) {
        if (calclen == 0) {
          ii->size[0] = 1;
          ii->size[1] = 0;
        }
      } else if (1 > calclen) {
        ii->size[1] = 0;
      } else {
        i60 = ii->size[0] * ii->size[1];
        ii->size[1] = calclen;
        emxEnsureCapacity_int32_T(&c_st, ii, i60, &ab_emlrtRTEI);
      }

      i60 = halfh->size[0] * halfh->size[1];
      halfh->size[0] = 1;
      halfh->size[1] = ii->size[1];
      emxEnsureCapacity_real_T(&st, halfh, i60, &bb_emlrtRTEI);
      loop_ub = ii->size[0] * ii->size[1];
      for (i60 = 0; i60 < loop_ub; i60++) {
        halfh->data[i60] = ii->data[i60];
      }

      i60 = err_ok_tmp->size[0];
      err_ok_tmp->size[0] = halfh->size[1];
      emxEnsureCapacity_uint32_T(sp, err_ok_tmp, i60, &db_emlrtRTEI);
      loop_ub = halfh->size[1];
      for (i60 = 0; i60 < loop_ub; i60++) {
        err_ok_tmp->data[i60] = (uint32_T)halfh->data[i60];
      }

      i = Q2->size[1];
      i60 = varargin_1->size[0] * varargin_1->size[1];
      varargin_1->size[0] = 6;
      varargin_1->size[1] = err_ok_tmp->size[0];
      emxEnsureCapacity_real_T(sp, varargin_1, i60, &eb_emlrtRTEI);
      loop_ub = err_ok_tmp->size[0];
      for (i60 = 0; i60 < loop_ub; i60++) {
        for (i61 = 0; i61 < 6; i61++) {
          nx = (int32_T)err_ok_tmp->data[i60];
          if ((nx < 1) || (nx > i)) {
            emlrtDynamicBoundsCheckR2012b(nx, 1, i, &d_emlrtBCI, sp);
          }

          varargin_1->data[i61 + 6 * i60] = Q2->data[i61 + 6 * (nx - 1)];
        }
      }

      b_sum(varargin_1, finite_test);
      for (i60 = 0; i60 < 6; i60++) {
        err_ok[i60] += finite_test[i60];
      }

      /*  Remove errsubs entries for subintervals with accurate */
      /*  approximations. */
      i60 = ii->size[0] * ii->size[1];
      ii->size[0] = 1;
      ii->size[1] = halfh->size[1];
      emxEnsureCapacity_int32_T(sp, ii, i60, &fb_emlrtRTEI);
      loop_ub = halfh->size[0] * halfh->size[1];
      for (i60 = 0; i60 < loop_ub; i60++) {
        ii->data[i60] = (int32_T)halfh->data[i60];
      }

      st.site = &y_emlrtRSI;
      nullAssignment(&st, Q2, ii);
      c_abs(err_ok, errbnd);
      st.site = &ab_emlrtRSI;
      d_abs(&st, Q2, varargin_1);
      b_sum(varargin_1, finite_test);
      for (i60 = 0; i60 < 6; i60++) {
        errbnd[i60] += finite_test[i60];
      }

      /*  Check for nonfinites. */
      for (calclen = 0; calclen < 6; calclen++) {
        if (b_isfinite(q[calclen]) && b_isfinite(errbnd[calclen])) {
          overflow = true;
        } else {
          overflow = false;
        }

        finite_test[calclen] = overflow;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      st.site = &bb_emlrtRSI;
      for (i = 0; i < 6; i++) {
        b_finite_test[i] = !(finite_test[i] != 0.0);
      }

      if (ifWhileCond(b_finite_test)) {
        exitg1 = 1;
      } else {
        /*  Test for convergence. */
        for (i = 0; i < 6; i++) {
          b_finite_test[i] = (errbnd[i] <= alpha1);
        }

        if (ifWhileCond(b_finite_test)) {
          exitg1 = 1;
        } else {
          /*  Remove subintervals with accurate approximations. */
          i60 = ii->size[0] * ii->size[1];
          ii->size[0] = 1;
          ii->size[1] = halfh->size[1];
          emxEnsureCapacity_int32_T(sp, ii, i60, &gb_emlrtRTEI);
          loop_ub = halfh->size[0] * halfh->size[1];
          for (i60 = 0; i60 < loop_ub; i60++) {
            ii->data[i60] = (int32_T)halfh->data[i60];
          }

          st.site = &cb_emlrtRSI;
          b_nullAssignment(&st, subs, ii);
          if (subs->size[1] == 0) {
            exitg1 = 1;
          } else {
            /*  Update the partial sum for the integral. */
            i = Q1->size[1];
            i60 = varargin_1->size[0] * varargin_1->size[1];
            varargin_1->size[0] = 6;
            varargin_1->size[1] = err_ok_tmp->size[0];
            emxEnsureCapacity_real_T(sp, varargin_1, i60, &hb_emlrtRTEI);
            loop_ub = err_ok_tmp->size[0];
            for (i60 = 0; i60 < loop_ub; i60++) {
              for (i61 = 0; i61 < 6; i61++) {
                nx = (int32_T)err_ok_tmp->data[i60];
                if ((nx < 1) || (nx > i)) {
                  emlrtDynamicBoundsCheckR2012b(nx, 1, i, &e_emlrtBCI, sp);
                }

                varargin_1->data[i61 + 6 * i60] = Q1->data[i61 + 6 * (nx - 1)];
              }
            }

            b_sum(varargin_1, finite_test);
            for (i60 = 0; i60 < 6; i60++) {
              q_ok[i60] += finite_test[i60];
            }

            /*  Split the remaining subintervals in half. Quit if splitting */
            /*  results in too many subintervals. */
            if (((uint32_T)subs->size[1] << 1) > 5000U) {
              exitg1 = 1;
            } else {
              i60 = ii->size[0] * ii->size[1];
              ii->size[0] = 1;
              ii->size[1] = halfh->size[1];
              emxEnsureCapacity_int32_T(sp, ii, i60, &ib_emlrtRTEI);
              loop_ub = halfh->size[0] * halfh->size[1];
              for (i60 = 0; i60 < loop_ub; i60++) {
                ii->data[i60] = (int32_T)halfh->data[i60];
              }

              st.site = &db_emlrtRSI;
              c_nullAssignment(&st, midpt, ii);

              /*  Remove unneeded midpoints. */
              st.site = &eb_emlrtRSI;
              b_st.site = &yb_emlrtRSI;
              c_st.site = &ac_emlrtRSI;
              overflow = true;
              i60 = subs->size[1];
              if (midpt->size[1] != i60) {
                overflow = false;
              }

              if (!overflow) {
                emlrtErrorWithMessageIdR2018a(&c_st, &sf_emlrtRTEI,
                  "MATLAB:catenate:matrixDimensionMismatch",
                  "MATLAB:catenate:matrixDimensionMismatch", 0);
              }

              i60 = subs->size[1];
              if (midpt->size[1] != i60) {
                overflow = false;
              }

              if (!overflow) {
                emlrtErrorWithMessageIdR2018a(&c_st, &sf_emlrtRTEI,
                  "MATLAB:catenate:matrixDimensionMismatch",
                  "MATLAB:catenate:matrixDimensionMismatch", 0);
              }

              loop_ub = subs->size[1];
              i = subs->size[1] - 1;
              i60 = b_x->size[0] * b_x->size[1];
              b_x->size[0] = 4;
              b_x->size[1] = loop_ub;
              emxEnsureCapacity_real_T(&b_st, b_x, i60, &jb_emlrtRTEI);
              for (i60 = 0; i60 < loop_ub; i60++) {
                b_x->data[i60 << 2] = subs->data[i60 << 1];
              }

              loop_ub = midpt->size[1];
              for (i60 = 0; i60 < loop_ub; i60++) {
                b_x->data[1 + (i60 << 2)] = midpt->data[i60];
              }

              loop_ub = midpt->size[1];
              for (i60 = 0; i60 < loop_ub; i60++) {
                b_x->data[2 + (i60 << 2)] = midpt->data[i60];
              }

              for (i60 = 0; i60 <= i; i60++) {
                b_x->data[3 + (i60 << 2)] = subs->data[1 + (i60 << 1)];
              }

              st.site = &eb_emlrtRSI;
              nx = b_x->size[1] << 2;
              b_st.site = &hc_emlrtRSI;
              calclen = nx / 2;
              if (calclen > nx) {
                emlrtErrorWithMessageIdR2018a(&b_st, &qf_emlrtRTEI,
                  "Coder:builtins:AssertionFailed",
                  "Coder:builtins:AssertionFailed", 0);
              }

              n = 4;
              if (b_x->size[1] > 4) {
                n = b_x->size[1];
              }

              if (calclen > muIntScalarMax_sint32(nx, n)) {
                b_st.site = &gc_emlrtRSI;
                error(&b_st);
              }

              loop_ub = calclen << 1;
              if (loop_ub != nx) {
                emlrtErrorWithMessageIdR2018a(&st, &rf_emlrtRTEI,
                  "Coder:MATLAB:getReshapeDims_notSameNumel",
                  "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
              }

              i60 = subs->size[0] * subs->size[1];
              subs->size[0] = 2;
              subs->size[1] = calclen;
              emxEnsureCapacity_real_T(sp, subs, i60, &kb_emlrtRTEI);
              for (i60 = 0; i60 < loop_ub; i60++) {
                subs->data[i60] = b_x->data[i60];
              }

              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b(sp);
              }
            }
          }
        }
      }
    }
  } while (exitg1 == 0);

  emxFree_uint32_T(&err_ok_tmp);
  emxFree_real_T(&b_x);
  emxFree_int32_T(&ii);
  emxFree_boolean_T(&x);
  emxFree_real_T(&b);
  emxFree_real_T(&varargin_1);
  emxFree_real_T(&varargout_1);
  emxFree_real_T(&r23);
  emxFree_int32_T(&r22);
  emxFree_real_T(&r21);
  emxFree_real_T(&r20);
  emxFree_real_T(&Q2);
  emxFree_real_T(&Q1);
  emxFree_real_T(&halfh);
  emxFree_real_T(&midpt);
  emxFree_real_T(&subs);
  emxFree_real_T(&x_matrix);

  /*  vadapt */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void e_vadapt(stressStackData *SD, const emlrtStack *sp, coder_internal_ref_1
              *f_tunableEnvironment_f1, const coder_internal_ref
              *f_tunableEnvironment_f2, real_T q[6], real_T errbnd[6])
{
  int32_T i;
  emxArray_real_T *halfh;
  real_T pathlen;
  int32_T i78;
  int32_T loop_ub;
  int32_T i79;
  int32_T nx;
  boolean_T overflow;
  emxArray_real_T *subs;
  real_T q_ok[6];
  emxArray_real_T *x_matrix;
  real_T err_ok[6];
  emxArray_real_T *midpt;
  emxArray_real_T *Q1;
  emxArray_real_T *Q2;
  emxArray_real_T *r26;
  emxArray_real_T *r27;
  emxArray_int32_T *r28;
  emxArray_real_T *r29;
  emxArray_real_T *varargout_1;
  emxArray_real_T *varargin_1;
  emxArray_real_T *b;
  emxArray_boolean_T *x;
  emxArray_int32_T *ii;
  emxArray_real_T *b_x;
  emxArray_uint32_T *err_ok_tmp;
  int32_T exitg1;
  int32_T iv13[2];
  int32_T b_halfh[2];
  int32_T n;
  emxArray_real_T b_x_matrix;
  int32_T iv14[2];
  real_T finite_test[6];
  int32_T calclen;
  boolean_T exitg2;
  real_T alpha1;
  real_T beta1;
  uint32_T unnamed_idx_1;
  int32_T tmp_size[2];
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  real_T b_b;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  char_T TRANSA;
  char_T TRANSB;
  real_T tmp_data[334];
  boolean_T b_finite_test[6];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
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
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  for (i = 0; i < 6; i++) {
    q[i] = 0.0;
    errbnd[i] = 0.0;
  }

  emxInit_real_T(sp, &halfh, 2, &o_emlrtRTEI, true);

  /*  Iterative routine to perform the integration. */
  /*  Compute the path length and split tinterval if needed. */
  st.site = &o_emlrtRSI;
  split(&st, halfh, &pathlen);

  /*  Initialize array of subintervals of [a,b]. */
  if (1 > halfh->size[1] - 1) {
    loop_ub = 0;
  } else {
    i78 = halfh->size[1];
    if (1 > i78) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i78, &c_emlrtBCI, sp);
    }

    i78 = halfh->size[1];
    loop_ub = halfh->size[1] - 1;
    if ((loop_ub < 1) || (loop_ub > i78)) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i78, &b_emlrtBCI, sp);
    }
  }

  if (2 > halfh->size[1]) {
    i78 = 0;
    nx = 0;
  } else {
    i78 = 1;
    i79 = halfh->size[1];
    nx = halfh->size[1];
    if ((nx < 1) || (nx > i79)) {
      emlrtDynamicBoundsCheckR2012b(nx, 1, i79, &emlrtBCI, sp);
    }
  }

  st.site = &p_emlrtRSI;
  b_st.site = &yb_emlrtRSI;
  c_st.site = &ac_emlrtRSI;
  overflow = true;
  i = nx - i78;
  if (i != loop_ub) {
    overflow = false;
  }

  if (!overflow) {
    emlrtErrorWithMessageIdR2018a(&c_st, &sf_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  emxInit_real_T(&c_st, &subs, 2, &m_emlrtRTEI, true);
  i79 = subs->size[0] * subs->size[1];
  subs->size[0] = 2;
  subs->size[1] = loop_ub;
  emxEnsureCapacity_real_T(&b_st, subs, i79, &m_emlrtRTEI);
  for (i79 = 0; i79 < loop_ub; i79++) {
    subs->data[i79 << 1] = halfh->data[i79];
  }

  for (i79 = 0; i79 < i; i79++) {
    subs->data[1 + (i79 << 1)] = halfh->data[i78 + i79];
  }

  /*  Initialize partial sums. */
  for (i = 0; i < 6; i++) {
    q_ok[i] = 0.0;
    err_ok[i] = 0.0;
  }

  /*  Initialize main loop */
  emxInit_real_T(sp, &x_matrix, 2, &lb_emlrtRTEI, true);
  emxInit_real_T(sp, &midpt, 2, &n_emlrtRTEI, true);
  emxInit_real_T(sp, &Q1, 2, &mb_emlrtRTEI, true);
  emxInit_real_T(sp, &Q2, 2, &nb_emlrtRTEI, true);
  emxInit_real_T(sp, &r26, 2, &ob_emlrtRTEI, true);
  emxInit_real_T(sp, &r27, 2, &ob_emlrtRTEI, true);
  emxInit_int32_T(sp, &r28, 1, &ob_emlrtRTEI, true);
  emxInit_real_T(sp, &r29, 2, &ob_emlrtRTEI, true);
  emxInit_real_T(sp, &varargout_1, 2, &ob_emlrtRTEI, true);
  emxInit_real_T(sp, &varargin_1, 2, &pb_emlrtRTEI, true);
  emxInit_real_T(sp, &b, 2, &qb_emlrtRTEI, true);
  emxInit_boolean_T(sp, &x, 2, &v_emlrtRTEI, true);
  emxInit_int32_T(sp, &ii, 2, &rb_emlrtRTEI, true);
  emxInit_real_T(sp, &b_x, 2, &jb_emlrtRTEI, true);
  emxInit_uint32_T(sp, &err_ok_tmp, 1, &db_emlrtRTEI, true);
  do {
    exitg1 = 0;

    /*  SUBS contains subintervals of [a,b] where the integral is not */
    /*  sufficiently accurate. The first row of SUBS holds the left end */
    /*  points and the second row, the corresponding right endpoints. */
    st.site = &q_emlrtRSI;
    sum(&st, subs, midpt);
    i78 = midpt->size[0] * midpt->size[1];
    i79 = midpt->size[0] * midpt->size[1];
    midpt->size[0] = 1;
    emxEnsureCapacity_real_T(sp, midpt, i79, &n_emlrtRTEI);
    loop_ub = i78 - 1;
    for (i78 = 0; i78 <= loop_ub; i78++) {
      midpt->data[i78] /= 2.0;
    }

    /*  midpoints of the subintervals */
    st.site = &r_emlrtRSI;
    b_diff(&st, subs, halfh);
    i78 = halfh->size[0] * halfh->size[1];
    i79 = halfh->size[0] * halfh->size[1];
    halfh->size[0] = 1;
    emxEnsureCapacity_real_T(sp, halfh, i79, &o_emlrtRTEI);
    loop_ub = i78 - 1;
    for (i78 = 0; i78 <= loop_ub; i78++) {
      halfh->data[i78] /= 2.0;
    }

    /*  half the lengths of the subintervals */
    i78 = r26->size[0] * r26->size[1];
    r26->size[0] = 15;
    r26->size[1] = halfh->size[1];
    emxEnsureCapacity_real_T(sp, r26, i78, &p_emlrtRTEI);
    for (i78 = 0; i78 < 15; i78++) {
      loop_ub = halfh->size[1];
      for (i79 = 0; i79 < loop_ub; i79++) {
        r26->data[i78 + 15 * i79] = dv0[i78] * halfh->data[i79];
      }
    }

    i78 = r27->size[0] * r27->size[1];
    r27->size[0] = 15;
    r27->size[1] = midpt->size[1];
    emxEnsureCapacity_real_T(sp, r27, i78, &q_emlrtRTEI);
    for (i78 = 0; i78 < 15; i78++) {
      loop_ub = midpt->size[1];
      for (i79 = 0; i79 < loop_ub; i79++) {
        r27->data[i78 + 15 * i79] = midpt->data[i79];
      }
    }

    iv13[0] = r26->size[0];
    iv13[1] = r26->size[1];
    b_halfh[0] = r27->size[0];
    b_halfh[1] = r27->size[1];
    if ((iv13[0] != b_halfh[0]) || (iv13[1] != b_halfh[1])) {
      emlrtSizeEqCheckNDR2012b(&iv13[0], &b_halfh[0], &g_emlrtECI, sp);
    }

    i78 = r26->size[1];
    if (5000 < i78) {
      emlrtDimSizeGeqCheckR2012b(5000, i78, &f_emlrtECI, sp);
    }

    i78 = x_matrix->size[0] * x_matrix->size[1];
    x_matrix->size[0] = 15;
    x_matrix->size[1] = r26->size[1];
    emxEnsureCapacity_real_T(sp, x_matrix, i78, &r_emlrtRTEI);
    loop_ub = r26->size[0] * r26->size[1];
    for (i78 = 0; i78 < loop_ub; i78++) {
      x_matrix->data[i78] = r26->data[i78] + r27->data[i78];
    }

    st.site = &s_emlrtRSI;
    nx = 15 * x_matrix->size[1];
    b_st.site = &hc_emlrtRSI;
    n = 15;
    if (x_matrix->size[1] > 15) {
      n = x_matrix->size[1];
    }

    if (nx > muIntScalarMax_sint32(nx, n)) {
      b_st.site = &gc_emlrtRSI;
      error(&b_st);
    }

    /*  function f expects a row vector */
    st.site = &t_emlrtRSI;
    b_st.site = &ic_emlrtRSI;
    b_x_matrix = *x_matrix;
    iv14[0] = 1;
    iv14[1] = nx;
    b_x_matrix.size = &iv14[0];
    b_x_matrix.numDimensions = 1;
    c_st.site = &l_emlrtRSI;
    e_f4(SD, &c_st, f_tunableEnvironment_f1, f_tunableEnvironment_f2,
         &b_x_matrix, varargout_1, &overflow);

    /*  Quit if mesh points are too close. */
    if (overflow) {
      exitg1 = 1;
    } else {
      i78 = Q1->size[0] * Q1->size[1];
      Q1->size[0] = 6;
      Q1->size[1] = midpt->size[1];
      emxEnsureCapacity_real_T(sp, Q1, i78, &s_emlrtRTEI);
      i78 = Q2->size[0] * Q2->size[1];
      Q2->size[0] = 6;
      Q2->size[1] = midpt->size[1];
      emxEnsureCapacity_real_T(sp, Q2, i78, &s_emlrtRTEI);
      for (n = 0; n < 6; n++) {
        st.site = &u_emlrtRSI;
        i78 = varargout_1->size[1];
        b_st.site = &hc_emlrtRSI;
        i79 = varargout_1->size[1];
        calclen = i79 / 15;
        i79 = varargout_1->size[1];
        if (calclen > i79) {
          emlrtErrorWithMessageIdR2018a(&b_st, &qf_emlrtRTEI,
            "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed",
            0);
        }

        i = 1;
        i79 = varargout_1->size[1];
        if (i79 > 1) {
          i = varargout_1->size[1];
        }

        i = muIntScalarMax_sint32(i78, i);
        if (15 > i) {
          b_st.site = &gc_emlrtRSI;
          error(&b_st);
        }

        if (calclen > i) {
          b_st.site = &gc_emlrtRSI;
          error(&b_st);
        }

        i78 = varargout_1->size[1];
        if (15 * calclen != i78) {
          emlrtErrorWithMessageIdR2018a(&st, &rf_emlrtRTEI,
            "Coder:MATLAB:getReshapeDims_notSameNumel",
            "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
        }

        loop_ub = varargout_1->size[1];
        for (i78 = 0; i78 < loop_ub; i78++) {
          SD->u2.f9.varargout_1_data[i78] = varargout_1->data[n +
            varargout_1->size[0] * i78];
        }

        loop_ub = 15 * calclen;
        if (0 <= loop_ub - 1) {
          memcpy(&SD->u2.f9.F_data[0], &SD->u2.f9.varargout_1_data[0], (uint32_T)
                 (loop_ub * (int32_T)sizeof(real_T)));
        }

        /*  Quantities for subintervals. */
        st.site = &v_emlrtRSI;
        b_st.site = &wm_emlrtRSI;
        if (calclen == 0) {
          tmp_size[1] = 0;
        } else {
          c_st.site = &xm_emlrtRSI;
          c_st.site = &ym_emlrtRSI;
          alpha1 = 1.0;
          beta1 = 0.0;
          m_t = (ptrdiff_t)1;
          n_t = (ptrdiff_t)calclen;
          k_t = (ptrdiff_t)15;
          lda_t = (ptrdiff_t)1;
          ldb_t = (ptrdiff_t)15;
          ldc_t = (ptrdiff_t)1;
          tmp_size[1] = calclen;
          TRANSA = 'N';
          TRANSB = 'N';
          dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &dv1[0], &lda_t,
                &SD->u2.f9.F_data[0], &ldb_t, &beta1, &tmp_data[0], &ldc_t);
        }

        iv13[0] = 1;
        iv13[1] = tmp_size[1];
        b_halfh[0] = halfh->size[0];
        b_halfh[1] = halfh->size[1];
        if ((1 != b_halfh[0]) || (tmp_size[1] != b_halfh[1])) {
          emlrtSizeEqCheckNDR2012b(&iv13[0], &b_halfh[0], &e_emlrtECI, sp);
        }

        loop_ub = Q1->size[1];
        i78 = r28->size[0];
        r28->size[0] = loop_ub;
        emxEnsureCapacity_int32_T(sp, r28, i78, &w_emlrtRTEI);
        for (i78 = 0; i78 < loop_ub; i78++) {
          r28->data[i78] = i78;
        }

        tmp_size[0] = 1;
        loop_ub = tmp_size[1] - 1;
        for (i78 = 0; i78 <= loop_ub; i78++) {
          alpha1 = tmp_data[i78] * halfh->data[i78];
          tmp_data[i78] = alpha1;
        }

        iv13[0] = 1;
        iv13[1] = r28->size[0];
        emlrtSubAssignSizeCheckR2012b(&iv13[0], 2, &tmp_size[0], 2, &c_emlrtECI,
          sp);
        loop_ub = tmp_size[1];
        for (i78 = 0; i78 < loop_ub; i78++) {
          Q1->data[n + 6 * r28->data[i78]] = tmp_data[i78];
        }

        st.site = &w_emlrtRSI;
        b_st.site = &wm_emlrtRSI;
        if (calclen == 0) {
          tmp_size[1] = 0;
        } else {
          c_st.site = &xm_emlrtRSI;
          c_st.site = &ym_emlrtRSI;
          alpha1 = 1.0;
          beta1 = 0.0;
          m_t = (ptrdiff_t)1;
          n_t = (ptrdiff_t)calclen;
          k_t = (ptrdiff_t)15;
          lda_t = (ptrdiff_t)1;
          ldb_t = (ptrdiff_t)15;
          ldc_t = (ptrdiff_t)1;
          tmp_size[1] = calclen;
          TRANSA = 'N';
          TRANSB = 'N';
          dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &dv2[0], &lda_t,
                &SD->u2.f9.F_data[0], &ldb_t, &beta1, &tmp_data[0], &ldc_t);
        }

        iv13[0] = 1;
        iv13[1] = tmp_size[1];
        b_halfh[0] = halfh->size[0];
        b_halfh[1] = halfh->size[1];
        if ((1 != b_halfh[0]) || (tmp_size[1] != b_halfh[1])) {
          emlrtSizeEqCheckNDR2012b(&iv13[0], &b_halfh[0], &d_emlrtECI, sp);
        }

        loop_ub = Q2->size[1];
        i78 = r28->size[0];
        r28->size[0] = loop_ub;
        emxEnsureCapacity_int32_T(sp, r28, i78, &cb_emlrtRTEI);
        for (i78 = 0; i78 < loop_ub; i78++) {
          r28->data[i78] = i78;
        }

        tmp_size[0] = 1;
        loop_ub = tmp_size[1] - 1;
        for (i78 = 0; i78 <= loop_ub; i78++) {
          alpha1 = tmp_data[i78] * halfh->data[i78];
          tmp_data[i78] = alpha1;
        }

        iv13[0] = 1;
        iv13[1] = r28->size[0];
        emlrtSubAssignSizeCheckR2012b(&iv13[0], 2, &tmp_size[0], 2, &b_emlrtECI,
          sp);
        loop_ub = tmp_size[1];
        for (i78 = 0; i78 < loop_ub; i78++) {
          Q2->data[n + 6 * r28->data[i78]] = tmp_data[i78];
        }

        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      /*  Calculate current values of q and tol. */
      b_sum(Q1, q);
      for (i78 = 0; i78 < 6; i78++) {
        q[i78] += q_ok[i78];
      }

      c_abs(q, finite_test);
      if (!muDoubleScalarIsNaN(finite_test[0])) {
        calclen = 1;
      } else {
        calclen = 0;
        i = 2;
        exitg2 = false;
        while ((!exitg2) && (i < 7)) {
          if (!muDoubleScalarIsNaN(finite_test[i - 1])) {
            calclen = i;
            exitg2 = true;
          } else {
            i++;
          }
        }
      }

      if (calclen == 0) {
        alpha1 = finite_test[0];
      } else {
        alpha1 = finite_test[calclen - 1];
        i78 = calclen + 1;
        for (i = i78; i < 7; i++) {
          beta1 = finite_test[i - 1];
          if (alpha1 < beta1) {
            alpha1 = beta1;
          }
        }
      }

      alpha1 = muDoubleScalarMax(1.0E-10, 1.0E-6 * alpha1);

      /*  Locate subintervals where the approximate integrals are */
      /*  sufficiently accurate and use them to update the partial */
      /*  error sum. */
      st.site = &x_emlrtRSI;
      d_abs(&st, Q2, varargin_1);
      st.site = &x_emlrtRSI;
      b_st.site = &dn_emlrtRSI;
      c_st.site = &en_emlrtRSI;
      d_st.site = &jn_emlrtRSI;
      e_st.site = &kn_emlrtRSI;
      f_st.site = &ln_emlrtRSI;
      g_st.site = &mn_emlrtRSI;
      n = varargin_1->size[1];
      unnamed_idx_1 = (uint32_T)varargin_1->size[1];
      i78 = r29->size[0] * r29->size[1];
      r29->size[0] = 1;
      r29->size[1] = (int32_T)unnamed_idx_1;
      emxEnsureCapacity_real_T(&g_st, r29, i78, &t_emlrtRTEI);
      if (varargin_1->size[1] >= 1) {
        h_st.site = &nn_emlrtRSI;
        overflow = (varargin_1->size[1] > 2147483646);
        if (overflow) {
          i_st.site = &lb_emlrtRSI;
          check_forloop_overflow_error(&i_st);
        }

        for (calclen = 0; calclen < n; calclen++) {
          r29->data[calclen] = varargin_1->data[6 * calclen];
          for (i = 0; i < 5; i++) {
            beta1 = r29->data[calclen];
            nx = (i + 6 * calclen) + 1;
            b_b = varargin_1->data[nx];
            if ((!muDoubleScalarIsNaN(b_b)) && (muDoubleScalarIsNaN(beta1) ||
                 (beta1 < b_b))) {
              r29->data[calclen] = varargin_1->data[nx];
            }
          }
        }
      }

      beta1 = 2.0 * alpha1 / pathlen;
      st.site = &x_emlrtRSI;
      b_abs(&st, halfh, b);
      i78 = b->size[0] * b->size[1];
      i79 = b->size[0] * b->size[1];
      b->size[0] = 1;
      emxEnsureCapacity_real_T(sp, b, i79, &u_emlrtRTEI);
      loop_ub = i78 - 1;
      for (i78 = 0; i78 <= loop_ub; i78++) {
        b->data[i78] *= beta1;
      }

      iv13[0] = r29->size[0];
      iv13[1] = r29->size[1];
      b_halfh[0] = b->size[0];
      b_halfh[1] = b->size[1];
      if ((iv13[0] != b_halfh[0]) || (iv13[1] != b_halfh[1])) {
        emlrtSizeEqCheckNDR2012b(&iv13[0], &b_halfh[0], &emlrtECI, sp);
      }

      st.site = &x_emlrtRSI;
      i78 = x->size[0] * x->size[1];
      x->size[0] = 1;
      x->size[1] = r29->size[1];
      emxEnsureCapacity_boolean_T(&st, x, i78, &v_emlrtRTEI);
      loop_ub = r29->size[0] * r29->size[1];
      for (i78 = 0; i78 < loop_ub; i78++) {
        x->data[i78] = (r29->data[i78] <= b->data[i78]);
      }

      b_st.site = &qb_emlrtRSI;
      nx = x->size[1];
      c_st.site = &rb_emlrtRSI;
      calclen = 0;
      i78 = ii->size[0] * ii->size[1];
      ii->size[0] = 1;
      ii->size[1] = x->size[1];
      emxEnsureCapacity_int32_T(&c_st, ii, i78, &y_emlrtRTEI);
      d_st.site = &sb_emlrtRSI;
      overflow = ((1 <= x->size[1]) && (x->size[1] > 2147483646));
      if (overflow) {
        e_st.site = &lb_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }

      i = 0;
      exitg2 = false;
      while ((!exitg2) && (i <= nx - 1)) {
        if (x->data[i]) {
          calclen++;
          ii->data[calclen - 1] = i + 1;
          if (calclen >= nx) {
            exitg2 = true;
          } else {
            i++;
          }
        } else {
          i++;
        }
      }

      if (calclen > x->size[1]) {
        emlrtErrorWithMessageIdR2018a(&c_st, &tf_emlrtRTEI,
          "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
      }

      if (x->size[1] == 1) {
        if (calclen == 0) {
          ii->size[0] = 1;
          ii->size[1] = 0;
        }
      } else if (1 > calclen) {
        ii->size[1] = 0;
      } else {
        i78 = ii->size[0] * ii->size[1];
        ii->size[1] = calclen;
        emxEnsureCapacity_int32_T(&c_st, ii, i78, &ab_emlrtRTEI);
      }

      i78 = halfh->size[0] * halfh->size[1];
      halfh->size[0] = 1;
      halfh->size[1] = ii->size[1];
      emxEnsureCapacity_real_T(&st, halfh, i78, &bb_emlrtRTEI);
      loop_ub = ii->size[0] * ii->size[1];
      for (i78 = 0; i78 < loop_ub; i78++) {
        halfh->data[i78] = ii->data[i78];
      }

      i78 = err_ok_tmp->size[0];
      err_ok_tmp->size[0] = halfh->size[1];
      emxEnsureCapacity_uint32_T(sp, err_ok_tmp, i78, &db_emlrtRTEI);
      loop_ub = halfh->size[1];
      for (i78 = 0; i78 < loop_ub; i78++) {
        err_ok_tmp->data[i78] = (uint32_T)halfh->data[i78];
      }

      i = Q2->size[1];
      i78 = varargin_1->size[0] * varargin_1->size[1];
      varargin_1->size[0] = 6;
      varargin_1->size[1] = err_ok_tmp->size[0];
      emxEnsureCapacity_real_T(sp, varargin_1, i78, &eb_emlrtRTEI);
      loop_ub = err_ok_tmp->size[0];
      for (i78 = 0; i78 < loop_ub; i78++) {
        for (i79 = 0; i79 < 6; i79++) {
          nx = (int32_T)err_ok_tmp->data[i78];
          if ((nx < 1) || (nx > i)) {
            emlrtDynamicBoundsCheckR2012b(nx, 1, i, &d_emlrtBCI, sp);
          }

          varargin_1->data[i79 + 6 * i78] = Q2->data[i79 + 6 * (nx - 1)];
        }
      }

      b_sum(varargin_1, finite_test);
      for (i78 = 0; i78 < 6; i78++) {
        err_ok[i78] += finite_test[i78];
      }

      /*  Remove errsubs entries for subintervals with accurate */
      /*  approximations. */
      i78 = ii->size[0] * ii->size[1];
      ii->size[0] = 1;
      ii->size[1] = halfh->size[1];
      emxEnsureCapacity_int32_T(sp, ii, i78, &fb_emlrtRTEI);
      loop_ub = halfh->size[0] * halfh->size[1];
      for (i78 = 0; i78 < loop_ub; i78++) {
        ii->data[i78] = (int32_T)halfh->data[i78];
      }

      st.site = &y_emlrtRSI;
      nullAssignment(&st, Q2, ii);
      c_abs(err_ok, errbnd);
      st.site = &ab_emlrtRSI;
      d_abs(&st, Q2, varargin_1);
      b_sum(varargin_1, finite_test);
      for (i78 = 0; i78 < 6; i78++) {
        errbnd[i78] += finite_test[i78];
      }

      /*  Check for nonfinites. */
      for (calclen = 0; calclen < 6; calclen++) {
        if (b_isfinite(q[calclen]) && b_isfinite(errbnd[calclen])) {
          overflow = true;
        } else {
          overflow = false;
        }

        finite_test[calclen] = overflow;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      st.site = &bb_emlrtRSI;
      for (i = 0; i < 6; i++) {
        b_finite_test[i] = !(finite_test[i] != 0.0);
      }

      if (ifWhileCond(b_finite_test)) {
        exitg1 = 1;
      } else {
        /*  Test for convergence. */
        for (i = 0; i < 6; i++) {
          b_finite_test[i] = (errbnd[i] <= alpha1);
        }

        if (ifWhileCond(b_finite_test)) {
          exitg1 = 1;
        } else {
          /*  Remove subintervals with accurate approximations. */
          i78 = ii->size[0] * ii->size[1];
          ii->size[0] = 1;
          ii->size[1] = halfh->size[1];
          emxEnsureCapacity_int32_T(sp, ii, i78, &gb_emlrtRTEI);
          loop_ub = halfh->size[0] * halfh->size[1];
          for (i78 = 0; i78 < loop_ub; i78++) {
            ii->data[i78] = (int32_T)halfh->data[i78];
          }

          st.site = &cb_emlrtRSI;
          b_nullAssignment(&st, subs, ii);
          if (subs->size[1] == 0) {
            exitg1 = 1;
          } else {
            /*  Update the partial sum for the integral. */
            i = Q1->size[1];
            i78 = varargin_1->size[0] * varargin_1->size[1];
            varargin_1->size[0] = 6;
            varargin_1->size[1] = err_ok_tmp->size[0];
            emxEnsureCapacity_real_T(sp, varargin_1, i78, &hb_emlrtRTEI);
            loop_ub = err_ok_tmp->size[0];
            for (i78 = 0; i78 < loop_ub; i78++) {
              for (i79 = 0; i79 < 6; i79++) {
                nx = (int32_T)err_ok_tmp->data[i78];
                if ((nx < 1) || (nx > i)) {
                  emlrtDynamicBoundsCheckR2012b(nx, 1, i, &e_emlrtBCI, sp);
                }

                varargin_1->data[i79 + 6 * i78] = Q1->data[i79 + 6 * (nx - 1)];
              }
            }

            b_sum(varargin_1, finite_test);
            for (i78 = 0; i78 < 6; i78++) {
              q_ok[i78] += finite_test[i78];
            }

            /*  Split the remaining subintervals in half. Quit if splitting */
            /*  results in too many subintervals. */
            if (((uint32_T)subs->size[1] << 1) > 5000U) {
              exitg1 = 1;
            } else {
              i78 = ii->size[0] * ii->size[1];
              ii->size[0] = 1;
              ii->size[1] = halfh->size[1];
              emxEnsureCapacity_int32_T(sp, ii, i78, &ib_emlrtRTEI);
              loop_ub = halfh->size[0] * halfh->size[1];
              for (i78 = 0; i78 < loop_ub; i78++) {
                ii->data[i78] = (int32_T)halfh->data[i78];
              }

              st.site = &db_emlrtRSI;
              c_nullAssignment(&st, midpt, ii);

              /*  Remove unneeded midpoints. */
              st.site = &eb_emlrtRSI;
              b_st.site = &yb_emlrtRSI;
              c_st.site = &ac_emlrtRSI;
              overflow = true;
              i78 = subs->size[1];
              if (midpt->size[1] != i78) {
                overflow = false;
              }

              if (!overflow) {
                emlrtErrorWithMessageIdR2018a(&c_st, &sf_emlrtRTEI,
                  "MATLAB:catenate:matrixDimensionMismatch",
                  "MATLAB:catenate:matrixDimensionMismatch", 0);
              }

              i78 = subs->size[1];
              if (midpt->size[1] != i78) {
                overflow = false;
              }

              if (!overflow) {
                emlrtErrorWithMessageIdR2018a(&c_st, &sf_emlrtRTEI,
                  "MATLAB:catenate:matrixDimensionMismatch",
                  "MATLAB:catenate:matrixDimensionMismatch", 0);
              }

              loop_ub = subs->size[1];
              i = subs->size[1] - 1;
              i78 = b_x->size[0] * b_x->size[1];
              b_x->size[0] = 4;
              b_x->size[1] = loop_ub;
              emxEnsureCapacity_real_T(&b_st, b_x, i78, &jb_emlrtRTEI);
              for (i78 = 0; i78 < loop_ub; i78++) {
                b_x->data[i78 << 2] = subs->data[i78 << 1];
              }

              loop_ub = midpt->size[1];
              for (i78 = 0; i78 < loop_ub; i78++) {
                b_x->data[1 + (i78 << 2)] = midpt->data[i78];
              }

              loop_ub = midpt->size[1];
              for (i78 = 0; i78 < loop_ub; i78++) {
                b_x->data[2 + (i78 << 2)] = midpt->data[i78];
              }

              for (i78 = 0; i78 <= i; i78++) {
                b_x->data[3 + (i78 << 2)] = subs->data[1 + (i78 << 1)];
              }

              st.site = &eb_emlrtRSI;
              nx = b_x->size[1] << 2;
              b_st.site = &hc_emlrtRSI;
              calclen = nx / 2;
              if (calclen > nx) {
                emlrtErrorWithMessageIdR2018a(&b_st, &qf_emlrtRTEI,
                  "Coder:builtins:AssertionFailed",
                  "Coder:builtins:AssertionFailed", 0);
              }

              n = 4;
              if (b_x->size[1] > 4) {
                n = b_x->size[1];
              }

              if (calclen > muIntScalarMax_sint32(nx, n)) {
                b_st.site = &gc_emlrtRSI;
                error(&b_st);
              }

              loop_ub = calclen << 1;
              if (loop_ub != nx) {
                emlrtErrorWithMessageIdR2018a(&st, &rf_emlrtRTEI,
                  "Coder:MATLAB:getReshapeDims_notSameNumel",
                  "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
              }

              i78 = subs->size[0] * subs->size[1];
              subs->size[0] = 2;
              subs->size[1] = calclen;
              emxEnsureCapacity_real_T(sp, subs, i78, &kb_emlrtRTEI);
              for (i78 = 0; i78 < loop_ub; i78++) {
                subs->data[i78] = b_x->data[i78];
              }

              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b(sp);
              }
            }
          }
        }
      }
    }
  } while (exitg1 == 0);

  emxFree_uint32_T(&err_ok_tmp);
  emxFree_real_T(&b_x);
  emxFree_int32_T(&ii);
  emxFree_boolean_T(&x);
  emxFree_real_T(&b);
  emxFree_real_T(&varargin_1);
  emxFree_real_T(&varargout_1);
  emxFree_real_T(&r29);
  emxFree_int32_T(&r28);
  emxFree_real_T(&r27);
  emxFree_real_T(&r26);
  emxFree_real_T(&Q2);
  emxFree_real_T(&Q1);
  emxFree_real_T(&halfh);
  emxFree_real_T(&midpt);
  emxFree_real_T(&subs);
  emxFree_real_T(&x_matrix);

  /*  vadapt */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void vadapt(stressStackData *SD, const emlrtStack *sp, coder_internal_ref_1
            *f_tunableEnvironment_f1, const coder_internal_ref
            *f_tunableEnvironment_f2, real_T q[6], real_T errbnd[6])
{
  int32_T i;
  emxArray_real_T *halfh;
  real_T pathlen;
  int32_T i1;
  int32_T loop_ub;
  int32_T i2;
  int32_T nx;
  boolean_T overflow;
  emxArray_real_T *subs;
  real_T q_ok[6];
  emxArray_real_T *x_matrix;
  real_T err_ok[6];
  emxArray_real_T *midpt;
  emxArray_real_T *Q1;
  emxArray_real_T *Q2;
  emxArray_real_T *r0;
  emxArray_real_T *r1;
  emxArray_int32_T *r2;
  emxArray_real_T *r3;
  emxArray_real_T *varargout_1;
  emxArray_real_T *varargin_1;
  emxArray_real_T *b;
  emxArray_boolean_T *x;
  emxArray_int32_T *ii;
  emxArray_real_T *b_x;
  emxArray_uint32_T *err_ok_tmp;
  int32_T exitg1;
  int32_T iv1[2];
  int32_T b_halfh[2];
  int32_T n;
  emxArray_real_T b_x_matrix;
  int32_T iv2[2];
  real_T finite_test[6];
  int32_T calclen;
  boolean_T exitg2;
  real_T alpha1;
  real_T beta1;
  uint32_T unnamed_idx_1;
  int32_T tmp_size[2];
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  real_T b_b;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  char_T TRANSA;
  char_T TRANSB;
  real_T tmp_data[334];
  boolean_T b_finite_test[6];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
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
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  for (i = 0; i < 6; i++) {
    q[i] = 0.0;
    errbnd[i] = 0.0;
  }

  emxInit_real_T(sp, &halfh, 2, &o_emlrtRTEI, true);

  /*  Iterative routine to perform the integration. */
  /*  Compute the path length and split tinterval if needed. */
  st.site = &o_emlrtRSI;
  split(&st, halfh, &pathlen);

  /*  Initialize array of subintervals of [a,b]. */
  if (1 > halfh->size[1] - 1) {
    loop_ub = 0;
  } else {
    i1 = halfh->size[1];
    if (1 > i1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i1, &c_emlrtBCI, sp);
    }

    i1 = halfh->size[1];
    loop_ub = halfh->size[1] - 1;
    if ((loop_ub < 1) || (loop_ub > i1)) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i1, &b_emlrtBCI, sp);
    }
  }

  if (2 > halfh->size[1]) {
    i1 = 0;
    nx = 0;
  } else {
    i1 = 1;
    i2 = halfh->size[1];
    nx = halfh->size[1];
    if ((nx < 1) || (nx > i2)) {
      emlrtDynamicBoundsCheckR2012b(nx, 1, i2, &emlrtBCI, sp);
    }
  }

  st.site = &p_emlrtRSI;
  b_st.site = &yb_emlrtRSI;
  c_st.site = &ac_emlrtRSI;
  overflow = true;
  i = nx - i1;
  if (i != loop_ub) {
    overflow = false;
  }

  if (!overflow) {
    emlrtErrorWithMessageIdR2018a(&c_st, &sf_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  emxInit_real_T(&c_st, &subs, 2, &m_emlrtRTEI, true);
  i2 = subs->size[0] * subs->size[1];
  subs->size[0] = 2;
  subs->size[1] = loop_ub;
  emxEnsureCapacity_real_T(&b_st, subs, i2, &m_emlrtRTEI);
  for (i2 = 0; i2 < loop_ub; i2++) {
    subs->data[i2 << 1] = halfh->data[i2];
  }

  for (i2 = 0; i2 < i; i2++) {
    subs->data[1 + (i2 << 1)] = halfh->data[i1 + i2];
  }

  /*  Initialize partial sums. */
  for (i = 0; i < 6; i++) {
    q_ok[i] = 0.0;
    err_ok[i] = 0.0;
  }

  /*  Initialize main loop */
  emxInit_real_T(sp, &x_matrix, 2, &lb_emlrtRTEI, true);
  emxInit_real_T(sp, &midpt, 2, &n_emlrtRTEI, true);
  emxInit_real_T(sp, &Q1, 2, &mb_emlrtRTEI, true);
  emxInit_real_T(sp, &Q2, 2, &nb_emlrtRTEI, true);
  emxInit_real_T(sp, &r0, 2, &ob_emlrtRTEI, true);
  emxInit_real_T(sp, &r1, 2, &ob_emlrtRTEI, true);
  emxInit_int32_T(sp, &r2, 1, &ob_emlrtRTEI, true);
  emxInit_real_T(sp, &r3, 2, &ob_emlrtRTEI, true);
  emxInit_real_T(sp, &varargout_1, 2, &ob_emlrtRTEI, true);
  emxInit_real_T(sp, &varargin_1, 2, &pb_emlrtRTEI, true);
  emxInit_real_T(sp, &b, 2, &qb_emlrtRTEI, true);
  emxInit_boolean_T(sp, &x, 2, &v_emlrtRTEI, true);
  emxInit_int32_T(sp, &ii, 2, &rb_emlrtRTEI, true);
  emxInit_real_T(sp, &b_x, 2, &jb_emlrtRTEI, true);
  emxInit_uint32_T(sp, &err_ok_tmp, 1, &db_emlrtRTEI, true);
  do {
    exitg1 = 0;

    /*  SUBS contains subintervals of [a,b] where the integral is not */
    /*  sufficiently accurate. The first row of SUBS holds the left end */
    /*  points and the second row, the corresponding right endpoints. */
    st.site = &q_emlrtRSI;
    sum(&st, subs, midpt);
    i1 = midpt->size[0] * midpt->size[1];
    i2 = midpt->size[0] * midpt->size[1];
    midpt->size[0] = 1;
    emxEnsureCapacity_real_T(sp, midpt, i2, &n_emlrtRTEI);
    loop_ub = i1 - 1;
    for (i1 = 0; i1 <= loop_ub; i1++) {
      midpt->data[i1] /= 2.0;
    }

    /*  midpoints of the subintervals */
    st.site = &r_emlrtRSI;
    b_diff(&st, subs, halfh);
    i1 = halfh->size[0] * halfh->size[1];
    i2 = halfh->size[0] * halfh->size[1];
    halfh->size[0] = 1;
    emxEnsureCapacity_real_T(sp, halfh, i2, &o_emlrtRTEI);
    loop_ub = i1 - 1;
    for (i1 = 0; i1 <= loop_ub; i1++) {
      halfh->data[i1] /= 2.0;
    }

    /*  half the lengths of the subintervals */
    i1 = r0->size[0] * r0->size[1];
    r0->size[0] = 15;
    r0->size[1] = halfh->size[1];
    emxEnsureCapacity_real_T(sp, r0, i1, &p_emlrtRTEI);
    for (i1 = 0; i1 < 15; i1++) {
      loop_ub = halfh->size[1];
      for (i2 = 0; i2 < loop_ub; i2++) {
        r0->data[i1 + 15 * i2] = dv0[i1] * halfh->data[i2];
      }
    }

    i1 = r1->size[0] * r1->size[1];
    r1->size[0] = 15;
    r1->size[1] = midpt->size[1];
    emxEnsureCapacity_real_T(sp, r1, i1, &q_emlrtRTEI);
    for (i1 = 0; i1 < 15; i1++) {
      loop_ub = midpt->size[1];
      for (i2 = 0; i2 < loop_ub; i2++) {
        r1->data[i1 + 15 * i2] = midpt->data[i2];
      }
    }

    iv1[0] = r0->size[0];
    iv1[1] = r0->size[1];
    b_halfh[0] = r1->size[0];
    b_halfh[1] = r1->size[1];
    if ((iv1[0] != b_halfh[0]) || (iv1[1] != b_halfh[1])) {
      emlrtSizeEqCheckNDR2012b(&iv1[0], &b_halfh[0], &g_emlrtECI, sp);
    }

    i1 = r0->size[1];
    if (5000 < i1) {
      emlrtDimSizeGeqCheckR2012b(5000, i1, &f_emlrtECI, sp);
    }

    i1 = x_matrix->size[0] * x_matrix->size[1];
    x_matrix->size[0] = 15;
    x_matrix->size[1] = r0->size[1];
    emxEnsureCapacity_real_T(sp, x_matrix, i1, &r_emlrtRTEI);
    loop_ub = r0->size[0] * r0->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      x_matrix->data[i1] = r0->data[i1] + r1->data[i1];
    }

    st.site = &s_emlrtRSI;
    nx = 15 * x_matrix->size[1];
    b_st.site = &hc_emlrtRSI;
    n = 15;
    if (x_matrix->size[1] > 15) {
      n = x_matrix->size[1];
    }

    if (nx > muIntScalarMax_sint32(nx, n)) {
      b_st.site = &gc_emlrtRSI;
      error(&b_st);
    }

    /*  function f expects a row vector */
    st.site = &t_emlrtRSI;
    b_st.site = &ic_emlrtRSI;
    b_x_matrix = *x_matrix;
    iv2[0] = 1;
    iv2[1] = nx;
    b_x_matrix.size = &iv2[0];
    b_x_matrix.numDimensions = 1;
    c_st.site = &l_emlrtRSI;
    f4(SD, &c_st, f_tunableEnvironment_f1, f_tunableEnvironment_f2, &b_x_matrix,
       varargout_1, &overflow);

    /*  Quit if mesh points are too close. */
    if (overflow) {
      exitg1 = 1;
    } else {
      i1 = Q1->size[0] * Q1->size[1];
      Q1->size[0] = 6;
      Q1->size[1] = midpt->size[1];
      emxEnsureCapacity_real_T(sp, Q1, i1, &s_emlrtRTEI);
      i1 = Q2->size[0] * Q2->size[1];
      Q2->size[0] = 6;
      Q2->size[1] = midpt->size[1];
      emxEnsureCapacity_real_T(sp, Q2, i1, &s_emlrtRTEI);
      for (n = 0; n < 6; n++) {
        st.site = &u_emlrtRSI;
        i1 = varargout_1->size[1];
        b_st.site = &hc_emlrtRSI;
        i2 = varargout_1->size[1];
        calclen = i2 / 15;
        i2 = varargout_1->size[1];
        if (calclen > i2) {
          emlrtErrorWithMessageIdR2018a(&b_st, &qf_emlrtRTEI,
            "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed",
            0);
        }

        i = 1;
        i2 = varargout_1->size[1];
        if (i2 > 1) {
          i = varargout_1->size[1];
        }

        i = muIntScalarMax_sint32(i1, i);
        if (15 > i) {
          b_st.site = &gc_emlrtRSI;
          error(&b_st);
        }

        if (calclen > i) {
          b_st.site = &gc_emlrtRSI;
          error(&b_st);
        }

        i1 = varargout_1->size[1];
        if (15 * calclen != i1) {
          emlrtErrorWithMessageIdR2018a(&st, &rf_emlrtRTEI,
            "Coder:MATLAB:getReshapeDims_notSameNumel",
            "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
        }

        loop_ub = varargout_1->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          SD->u2.f5.varargout_1_data[i1] = varargout_1->data[n +
            varargout_1->size[0] * i1];
        }

        loop_ub = 15 * calclen;
        if (0 <= loop_ub - 1) {
          memcpy(&SD->u2.f5.F_data[0], &SD->u2.f5.varargout_1_data[0], (uint32_T)
                 (loop_ub * (int32_T)sizeof(real_T)));
        }

        /*  Quantities for subintervals. */
        st.site = &v_emlrtRSI;
        b_st.site = &wm_emlrtRSI;
        if (calclen == 0) {
          tmp_size[1] = 0;
        } else {
          c_st.site = &xm_emlrtRSI;
          c_st.site = &ym_emlrtRSI;
          alpha1 = 1.0;
          beta1 = 0.0;
          m_t = (ptrdiff_t)1;
          n_t = (ptrdiff_t)calclen;
          k_t = (ptrdiff_t)15;
          lda_t = (ptrdiff_t)1;
          ldb_t = (ptrdiff_t)15;
          ldc_t = (ptrdiff_t)1;
          tmp_size[1] = calclen;
          TRANSA = 'N';
          TRANSB = 'N';
          dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &dv1[0], &lda_t,
                &SD->u2.f5.F_data[0], &ldb_t, &beta1, &tmp_data[0], &ldc_t);
        }

        iv1[0] = 1;
        iv1[1] = tmp_size[1];
        b_halfh[0] = halfh->size[0];
        b_halfh[1] = halfh->size[1];
        if ((1 != b_halfh[0]) || (tmp_size[1] != b_halfh[1])) {
          emlrtSizeEqCheckNDR2012b(&iv1[0], &b_halfh[0], &e_emlrtECI, sp);
        }

        loop_ub = Q1->size[1];
        i1 = r2->size[0];
        r2->size[0] = loop_ub;
        emxEnsureCapacity_int32_T(sp, r2, i1, &w_emlrtRTEI);
        for (i1 = 0; i1 < loop_ub; i1++) {
          r2->data[i1] = i1;
        }

        tmp_size[0] = 1;
        loop_ub = tmp_size[1] - 1;
        for (i1 = 0; i1 <= loop_ub; i1++) {
          alpha1 = tmp_data[i1] * halfh->data[i1];
          tmp_data[i1] = alpha1;
        }

        iv1[0] = 1;
        iv1[1] = r2->size[0];
        emlrtSubAssignSizeCheckR2012b(&iv1[0], 2, &tmp_size[0], 2, &c_emlrtECI,
          sp);
        loop_ub = tmp_size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          Q1->data[n + 6 * r2->data[i1]] = tmp_data[i1];
        }

        st.site = &w_emlrtRSI;
        b_st.site = &wm_emlrtRSI;
        if (calclen == 0) {
          tmp_size[1] = 0;
        } else {
          c_st.site = &xm_emlrtRSI;
          c_st.site = &ym_emlrtRSI;
          alpha1 = 1.0;
          beta1 = 0.0;
          m_t = (ptrdiff_t)1;
          n_t = (ptrdiff_t)calclen;
          k_t = (ptrdiff_t)15;
          lda_t = (ptrdiff_t)1;
          ldb_t = (ptrdiff_t)15;
          ldc_t = (ptrdiff_t)1;
          tmp_size[1] = calclen;
          TRANSA = 'N';
          TRANSB = 'N';
          dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &dv2[0], &lda_t,
                &SD->u2.f5.F_data[0], &ldb_t, &beta1, &tmp_data[0], &ldc_t);
        }

        iv1[0] = 1;
        iv1[1] = tmp_size[1];
        b_halfh[0] = halfh->size[0];
        b_halfh[1] = halfh->size[1];
        if ((1 != b_halfh[0]) || (tmp_size[1] != b_halfh[1])) {
          emlrtSizeEqCheckNDR2012b(&iv1[0], &b_halfh[0], &d_emlrtECI, sp);
        }

        loop_ub = Q2->size[1];
        i1 = r2->size[0];
        r2->size[0] = loop_ub;
        emxEnsureCapacity_int32_T(sp, r2, i1, &cb_emlrtRTEI);
        for (i1 = 0; i1 < loop_ub; i1++) {
          r2->data[i1] = i1;
        }

        tmp_size[0] = 1;
        loop_ub = tmp_size[1] - 1;
        for (i1 = 0; i1 <= loop_ub; i1++) {
          alpha1 = tmp_data[i1] * halfh->data[i1];
          tmp_data[i1] = alpha1;
        }

        iv1[0] = 1;
        iv1[1] = r2->size[0];
        emlrtSubAssignSizeCheckR2012b(&iv1[0], 2, &tmp_size[0], 2, &b_emlrtECI,
          sp);
        loop_ub = tmp_size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          Q2->data[n + 6 * r2->data[i1]] = tmp_data[i1];
        }

        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      /*  Calculate current values of q and tol. */
      b_sum(Q1, q);
      for (i1 = 0; i1 < 6; i1++) {
        q[i1] += q_ok[i1];
      }

      c_abs(q, finite_test);
      if (!muDoubleScalarIsNaN(finite_test[0])) {
        calclen = 1;
      } else {
        calclen = 0;
        i = 2;
        exitg2 = false;
        while ((!exitg2) && (i < 7)) {
          if (!muDoubleScalarIsNaN(finite_test[i - 1])) {
            calclen = i;
            exitg2 = true;
          } else {
            i++;
          }
        }
      }

      if (calclen == 0) {
        alpha1 = finite_test[0];
      } else {
        alpha1 = finite_test[calclen - 1];
        i1 = calclen + 1;
        for (i = i1; i < 7; i++) {
          beta1 = finite_test[i - 1];
          if (alpha1 < beta1) {
            alpha1 = beta1;
          }
        }
      }

      alpha1 = muDoubleScalarMax(1.0E-10, 1.0E-6 * alpha1);

      /*  Locate subintervals where the approximate integrals are */
      /*  sufficiently accurate and use them to update the partial */
      /*  error sum. */
      st.site = &x_emlrtRSI;
      d_abs(&st, Q2, varargin_1);
      st.site = &x_emlrtRSI;
      b_st.site = &dn_emlrtRSI;
      c_st.site = &en_emlrtRSI;
      d_st.site = &jn_emlrtRSI;
      e_st.site = &kn_emlrtRSI;
      f_st.site = &ln_emlrtRSI;
      g_st.site = &mn_emlrtRSI;
      n = varargin_1->size[1];
      unnamed_idx_1 = (uint32_T)varargin_1->size[1];
      i1 = r3->size[0] * r3->size[1];
      r3->size[0] = 1;
      r3->size[1] = (int32_T)unnamed_idx_1;
      emxEnsureCapacity_real_T(&g_st, r3, i1, &t_emlrtRTEI);
      if (varargin_1->size[1] >= 1) {
        h_st.site = &nn_emlrtRSI;
        overflow = (varargin_1->size[1] > 2147483646);
        if (overflow) {
          i_st.site = &lb_emlrtRSI;
          check_forloop_overflow_error(&i_st);
        }

        for (calclen = 0; calclen < n; calclen++) {
          r3->data[calclen] = varargin_1->data[6 * calclen];
          for (i = 0; i < 5; i++) {
            beta1 = r3->data[calclen];
            nx = (i + 6 * calclen) + 1;
            b_b = varargin_1->data[nx];
            if ((!muDoubleScalarIsNaN(b_b)) && (muDoubleScalarIsNaN(beta1) ||
                 (beta1 < b_b))) {
              r3->data[calclen] = varargin_1->data[nx];
            }
          }
        }
      }

      beta1 = 2.0 * alpha1 / pathlen;
      st.site = &x_emlrtRSI;
      b_abs(&st, halfh, b);
      i1 = b->size[0] * b->size[1];
      i2 = b->size[0] * b->size[1];
      b->size[0] = 1;
      emxEnsureCapacity_real_T(sp, b, i2, &u_emlrtRTEI);
      loop_ub = i1 - 1;
      for (i1 = 0; i1 <= loop_ub; i1++) {
        b->data[i1] *= beta1;
      }

      iv1[0] = r3->size[0];
      iv1[1] = r3->size[1];
      b_halfh[0] = b->size[0];
      b_halfh[1] = b->size[1];
      if ((iv1[0] != b_halfh[0]) || (iv1[1] != b_halfh[1])) {
        emlrtSizeEqCheckNDR2012b(&iv1[0], &b_halfh[0], &emlrtECI, sp);
      }

      st.site = &x_emlrtRSI;
      i1 = x->size[0] * x->size[1];
      x->size[0] = 1;
      x->size[1] = r3->size[1];
      emxEnsureCapacity_boolean_T(&st, x, i1, &v_emlrtRTEI);
      loop_ub = r3->size[0] * r3->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        x->data[i1] = (r3->data[i1] <= b->data[i1]);
      }

      b_st.site = &qb_emlrtRSI;
      nx = x->size[1];
      c_st.site = &rb_emlrtRSI;
      calclen = 0;
      i1 = ii->size[0] * ii->size[1];
      ii->size[0] = 1;
      ii->size[1] = x->size[1];
      emxEnsureCapacity_int32_T(&c_st, ii, i1, &y_emlrtRTEI);
      d_st.site = &sb_emlrtRSI;
      overflow = ((1 <= x->size[1]) && (x->size[1] > 2147483646));
      if (overflow) {
        e_st.site = &lb_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }

      i = 0;
      exitg2 = false;
      while ((!exitg2) && (i <= nx - 1)) {
        if (x->data[i]) {
          calclen++;
          ii->data[calclen - 1] = i + 1;
          if (calclen >= nx) {
            exitg2 = true;
          } else {
            i++;
          }
        } else {
          i++;
        }
      }

      if (calclen > x->size[1]) {
        emlrtErrorWithMessageIdR2018a(&c_st, &tf_emlrtRTEI,
          "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
      }

      if (x->size[1] == 1) {
        if (calclen == 0) {
          ii->size[0] = 1;
          ii->size[1] = 0;
        }
      } else if (1 > calclen) {
        ii->size[1] = 0;
      } else {
        i1 = ii->size[0] * ii->size[1];
        ii->size[1] = calclen;
        emxEnsureCapacity_int32_T(&c_st, ii, i1, &ab_emlrtRTEI);
      }

      i1 = halfh->size[0] * halfh->size[1];
      halfh->size[0] = 1;
      halfh->size[1] = ii->size[1];
      emxEnsureCapacity_real_T(&st, halfh, i1, &bb_emlrtRTEI);
      loop_ub = ii->size[0] * ii->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        halfh->data[i1] = ii->data[i1];
      }

      i1 = err_ok_tmp->size[0];
      err_ok_tmp->size[0] = halfh->size[1];
      emxEnsureCapacity_uint32_T(sp, err_ok_tmp, i1, &db_emlrtRTEI);
      loop_ub = halfh->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        err_ok_tmp->data[i1] = (uint32_T)halfh->data[i1];
      }

      i = Q2->size[1];
      i1 = varargin_1->size[0] * varargin_1->size[1];
      varargin_1->size[0] = 6;
      varargin_1->size[1] = err_ok_tmp->size[0];
      emxEnsureCapacity_real_T(sp, varargin_1, i1, &eb_emlrtRTEI);
      loop_ub = err_ok_tmp->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        for (i2 = 0; i2 < 6; i2++) {
          nx = (int32_T)err_ok_tmp->data[i1];
          if ((nx < 1) || (nx > i)) {
            emlrtDynamicBoundsCheckR2012b(nx, 1, i, &d_emlrtBCI, sp);
          }

          varargin_1->data[i2 + 6 * i1] = Q2->data[i2 + 6 * (nx - 1)];
        }
      }

      b_sum(varargin_1, finite_test);
      for (i1 = 0; i1 < 6; i1++) {
        err_ok[i1] += finite_test[i1];
      }

      /*  Remove errsubs entries for subintervals with accurate */
      /*  approximations. */
      i1 = ii->size[0] * ii->size[1];
      ii->size[0] = 1;
      ii->size[1] = halfh->size[1];
      emxEnsureCapacity_int32_T(sp, ii, i1, &fb_emlrtRTEI);
      loop_ub = halfh->size[0] * halfh->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        ii->data[i1] = (int32_T)halfh->data[i1];
      }

      st.site = &y_emlrtRSI;
      nullAssignment(&st, Q2, ii);
      c_abs(err_ok, errbnd);
      st.site = &ab_emlrtRSI;
      d_abs(&st, Q2, varargin_1);
      b_sum(varargin_1, finite_test);
      for (i1 = 0; i1 < 6; i1++) {
        errbnd[i1] += finite_test[i1];
      }

      /*  Check for nonfinites. */
      for (calclen = 0; calclen < 6; calclen++) {
        if (b_isfinite(q[calclen]) && b_isfinite(errbnd[calclen])) {
          overflow = true;
        } else {
          overflow = false;
        }

        finite_test[calclen] = overflow;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      st.site = &bb_emlrtRSI;
      for (i = 0; i < 6; i++) {
        b_finite_test[i] = !(finite_test[i] != 0.0);
      }

      if (ifWhileCond(b_finite_test)) {
        exitg1 = 1;
      } else {
        /*  Test for convergence. */
        for (i = 0; i < 6; i++) {
          b_finite_test[i] = (errbnd[i] <= alpha1);
        }

        if (ifWhileCond(b_finite_test)) {
          exitg1 = 1;
        } else {
          /*  Remove subintervals with accurate approximations. */
          i1 = ii->size[0] * ii->size[1];
          ii->size[0] = 1;
          ii->size[1] = halfh->size[1];
          emxEnsureCapacity_int32_T(sp, ii, i1, &gb_emlrtRTEI);
          loop_ub = halfh->size[0] * halfh->size[1];
          for (i1 = 0; i1 < loop_ub; i1++) {
            ii->data[i1] = (int32_T)halfh->data[i1];
          }

          st.site = &cb_emlrtRSI;
          b_nullAssignment(&st, subs, ii);
          if (subs->size[1] == 0) {
            exitg1 = 1;
          } else {
            /*  Update the partial sum for the integral. */
            i = Q1->size[1];
            i1 = varargin_1->size[0] * varargin_1->size[1];
            varargin_1->size[0] = 6;
            varargin_1->size[1] = err_ok_tmp->size[0];
            emxEnsureCapacity_real_T(sp, varargin_1, i1, &hb_emlrtRTEI);
            loop_ub = err_ok_tmp->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              for (i2 = 0; i2 < 6; i2++) {
                nx = (int32_T)err_ok_tmp->data[i1];
                if ((nx < 1) || (nx > i)) {
                  emlrtDynamicBoundsCheckR2012b(nx, 1, i, &e_emlrtBCI, sp);
                }

                varargin_1->data[i2 + 6 * i1] = Q1->data[i2 + 6 * (nx - 1)];
              }
            }

            b_sum(varargin_1, finite_test);
            for (i1 = 0; i1 < 6; i1++) {
              q_ok[i1] += finite_test[i1];
            }

            /*  Split the remaining subintervals in half. Quit if splitting */
            /*  results in too many subintervals. */
            if (((uint32_T)subs->size[1] << 1) > 5000U) {
              exitg1 = 1;
            } else {
              i1 = ii->size[0] * ii->size[1];
              ii->size[0] = 1;
              ii->size[1] = halfh->size[1];
              emxEnsureCapacity_int32_T(sp, ii, i1, &ib_emlrtRTEI);
              loop_ub = halfh->size[0] * halfh->size[1];
              for (i1 = 0; i1 < loop_ub; i1++) {
                ii->data[i1] = (int32_T)halfh->data[i1];
              }

              st.site = &db_emlrtRSI;
              c_nullAssignment(&st, midpt, ii);

              /*  Remove unneeded midpoints. */
              st.site = &eb_emlrtRSI;
              b_st.site = &yb_emlrtRSI;
              c_st.site = &ac_emlrtRSI;
              overflow = true;
              i1 = subs->size[1];
              if (midpt->size[1] != i1) {
                overflow = false;
              }

              if (!overflow) {
                emlrtErrorWithMessageIdR2018a(&c_st, &sf_emlrtRTEI,
                  "MATLAB:catenate:matrixDimensionMismatch",
                  "MATLAB:catenate:matrixDimensionMismatch", 0);
              }

              i1 = subs->size[1];
              if (midpt->size[1] != i1) {
                overflow = false;
              }

              if (!overflow) {
                emlrtErrorWithMessageIdR2018a(&c_st, &sf_emlrtRTEI,
                  "MATLAB:catenate:matrixDimensionMismatch",
                  "MATLAB:catenate:matrixDimensionMismatch", 0);
              }

              loop_ub = subs->size[1];
              i = subs->size[1] - 1;
              i1 = b_x->size[0] * b_x->size[1];
              b_x->size[0] = 4;
              b_x->size[1] = loop_ub;
              emxEnsureCapacity_real_T(&b_st, b_x, i1, &jb_emlrtRTEI);
              for (i1 = 0; i1 < loop_ub; i1++) {
                b_x->data[i1 << 2] = subs->data[i1 << 1];
              }

              loop_ub = midpt->size[1];
              for (i1 = 0; i1 < loop_ub; i1++) {
                b_x->data[1 + (i1 << 2)] = midpt->data[i1];
              }

              loop_ub = midpt->size[1];
              for (i1 = 0; i1 < loop_ub; i1++) {
                b_x->data[2 + (i1 << 2)] = midpt->data[i1];
              }

              for (i1 = 0; i1 <= i; i1++) {
                b_x->data[3 + (i1 << 2)] = subs->data[1 + (i1 << 1)];
              }

              st.site = &eb_emlrtRSI;
              nx = b_x->size[1] << 2;
              b_st.site = &hc_emlrtRSI;
              calclen = nx / 2;
              if (calclen > nx) {
                emlrtErrorWithMessageIdR2018a(&b_st, &qf_emlrtRTEI,
                  "Coder:builtins:AssertionFailed",
                  "Coder:builtins:AssertionFailed", 0);
              }

              n = 4;
              if (b_x->size[1] > 4) {
                n = b_x->size[1];
              }

              if (calclen > muIntScalarMax_sint32(nx, n)) {
                b_st.site = &gc_emlrtRSI;
                error(&b_st);
              }

              loop_ub = calclen << 1;
              if (loop_ub != nx) {
                emlrtErrorWithMessageIdR2018a(&st, &rf_emlrtRTEI,
                  "Coder:MATLAB:getReshapeDims_notSameNumel",
                  "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
              }

              i1 = subs->size[0] * subs->size[1];
              subs->size[0] = 2;
              subs->size[1] = calclen;
              emxEnsureCapacity_real_T(sp, subs, i1, &kb_emlrtRTEI);
              for (i1 = 0; i1 < loop_ub; i1++) {
                subs->data[i1] = b_x->data[i1];
              }

              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b(sp);
              }
            }
          }
        }
      }
    }
  } while (exitg1 == 0);

  emxFree_uint32_T(&err_ok_tmp);
  emxFree_real_T(&b_x);
  emxFree_int32_T(&ii);
  emxFree_boolean_T(&x);
  emxFree_real_T(&b);
  emxFree_real_T(&varargin_1);
  emxFree_real_T(&varargout_1);
  emxFree_real_T(&r3);
  emxFree_int32_T(&r2);
  emxFree_real_T(&r1);
  emxFree_real_T(&r0);
  emxFree_real_T(&Q2);
  emxFree_real_T(&Q1);
  emxFree_real_T(&halfh);
  emxFree_real_T(&midpt);
  emxFree_real_T(&subs);
  emxFree_real_T(&x_matrix);

  /*  vadapt */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (vadapt.c) */
