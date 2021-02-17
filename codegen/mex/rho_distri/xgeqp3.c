/*
 * xgeqp3.c
 *
 * Code generation for function 'xgeqp3'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "rho_distri.h"
#include "xgeqp3.h"
#include "rho_distri_emxutil.h"
#include "colon.h"
#include "error.h"
#include "rho_distri_data.h"
#include "lapacke.h"

/* Variable Definitions */
static emlrtRSInfo ob_emlrtRSI = { 7,  /* lineNo */
  "int",                               /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/int.m"/* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 8,  /* lineNo */
  "majority",                          /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/majority.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 31, /* lineNo */
  "infocheck",                         /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/infocheck.m"/* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 25, /* lineNo */
  "colon",                             /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/colon.m"/* pathName */
};

static emlrtRSInfo dc_emlrtRSI = { 78, /* lineNo */
  "colon",                             /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/colon.m"/* pathName */
};

static emlrtRSInfo ec_emlrtRSI = { 121,/* lineNo */
  "colon",                             /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/colon.m"/* pathName */
};

static emlrtRSInfo mc_emlrtRSI = { 14, /* lineNo */
  "xgeqp3",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xgeqp3.m"/* pathName */
};

static emlrtRSInfo nc_emlrtRSI = { 37, /* lineNo */
  "xgeqp3",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xgeqp3.m"/* pathName */
};

static emlrtRSInfo oc_emlrtRSI = { 38, /* lineNo */
  "xgeqp3",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xgeqp3.m"/* pathName */
};

static emlrtRSInfo pc_emlrtRSI = { 41, /* lineNo */
  "xgeqp3",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xgeqp3.m"/* pathName */
};

static emlrtRSInfo qc_emlrtRSI = { 45, /* lineNo */
  "xgeqp3",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xgeqp3.m"/* pathName */
};

static emlrtRSInfo rc_emlrtRSI = { 64, /* lineNo */
  "xgeqp3",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xgeqp3.m"/* pathName */
};

static emlrtRSInfo sc_emlrtRSI = { 67, /* lineNo */
  "xgeqp3",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xgeqp3.m"/* pathName */
};

static emlrtRSInfo tc_emlrtRSI = { 76, /* lineNo */
  "xgeqp3",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xgeqp3.m"/* pathName */
};

static emlrtRSInfo uc_emlrtRSI = { 79, /* lineNo */
  "xgeqp3",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xgeqp3.m"/* pathName */
};

static emlrtRTEInfo qb_emlrtRTEI = { 14,/* lineNo */
  5,                                   /* colNo */
  "xgeqp3",                            /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xgeqp3.m"/* pName */
};

static emlrtRTEInfo rb_emlrtRTEI = { 45,/* lineNo */
  5,                                   /* colNo */
  "xgeqp3",                            /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xgeqp3.m"/* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = { 82,/* lineNo */
  9,                                   /* colNo */
  "xgeqp3",                            /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xgeqp3.m"/* pName */
};

static emlrtRTEInfo tb_emlrtRTEI = { 77,/* lineNo */
  9,                                   /* colNo */
  "xgeqp3",                            /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xgeqp3.m"/* pName */
};

static emlrtRTEInfo ub_emlrtRTEI = { 78,/* lineNo */
  9,                                   /* colNo */
  "xgeqp3",                            /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xgeqp3.m"/* pName */
};

/* Function Definitions */
void xgeqp3(const emlrtStack *sp, emxArray_real_T *A, emxArray_real_T *tau,
            emxArray_int32_T *jpvt)
{
  int32_T m;
  int32_T n;
  emxArray_ptrdiff_t *jpvt_t;
  int32_T i22;
  ptrdiff_t m_t;
  ptrdiff_t info_t;
  boolean_T p;
  boolean_T b_p;
  int32_T loop_ub;
  int32_T i23;
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
  st.site = &mc_emlrtRSI;
  m = A->size[0];
  n = A->size[1];
  b_st.site = &nc_emlrtRSI;
  c_st.site = &ob_emlrtRSI;
  b_st.site = &oc_emlrtRSI;
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    tau->size[0] = 0;
    b_st.site = &pc_emlrtRSI;
    c_st.site = &cc_emlrtRSI;
    d_st.site = &dc_emlrtRSI;
    e_st.site = &ec_emlrtRSI;
    eml_signed_integer_colon(&e_st, A->size[1], jpvt);
  } else {
    emxInit_ptrdiff_t(&st, &jpvt_t, 1, &rb_emlrtRTEI, true);
    i22 = tau->size[0];
    tau->size[0] = muIntScalarMin_sint32(m, n);
    emxEnsureCapacity_real_T(&st, tau, i22, &qb_emlrtRTEI);
    b_st.site = &qc_emlrtRSI;
    c_st.site = &ob_emlrtRSI;
    i22 = jpvt_t->size[0];
    jpvt_t->size[0] = A->size[1];
    emxEnsureCapacity_ptrdiff_t(&st, jpvt_t, i22, &rb_emlrtRTEI);
    m = A->size[1];
    for (i22 = 0; i22 < m; i22++) {
      jpvt_t->data[i22] = (ptrdiff_t)0;
    }

    b_st.site = &rc_emlrtRSI;
    c_st.site = &ob_emlrtRSI;
    m_t = (ptrdiff_t)A->size[0];
    b_st.site = &sc_emlrtRSI;
    c_st.site = &xb_emlrtRSI;
    info_t = LAPACKE_dgeqp3(102, m_t, (ptrdiff_t)A->size[1], &A->data[0], m_t,
      &jpvt_t->data[0], &tau->data[0]);
    m = (int32_T)info_t;
    b_st.site = &tc_emlrtRSI;
    c_st.site = &yb_emlrtRSI;
    if (m != 0) {
      p = true;
      b_p = false;
      if (m == -4) {
        b_p = true;
      }

      if (!b_p) {
        if (m == -1010) {
          c_st.site = &ac_emlrtRSI;
          error(&c_st);
        } else {
          c_st.site = &bc_emlrtRSI;
          c_error(&c_st, m);
        }
      }
    } else {
      p = false;
    }

    if (p) {
      i22 = A->size[0] * A->size[1];
      emxEnsureCapacity_real_T(&st, A, i22, &tb_emlrtRTEI);
      m = A->size[1];
      for (i22 = 0; i22 < m; i22++) {
        loop_ub = A->size[0];
        for (i23 = 0; i23 < loop_ub; i23++) {
          A->data[i23 + A->size[0] * i22] = rtNaN;
        }
      }

      m = tau->size[0];
      i22 = tau->size[0];
      tau->size[0] = m;
      emxEnsureCapacity_real_T(&st, tau, i22, &ub_emlrtRTEI);
      for (i22 = 0; i22 < m; i22++) {
        tau->data[i22] = rtNaN;
      }

      b_st.site = &uc_emlrtRSI;
      c_st.site = &cc_emlrtRSI;
      d_st.site = &dc_emlrtRSI;
      e_st.site = &ec_emlrtRSI;
      eml_signed_integer_colon(&e_st, n, jpvt);
    } else {
      i22 = jpvt->size[0] * jpvt->size[1];
      jpvt->size[0] = 1;
      jpvt->size[1] = jpvt_t->size[0];
      emxEnsureCapacity_int32_T(&st, jpvt, i22, &sb_emlrtRTEI);
      m = jpvt_t->size[0];
      for (i22 = 0; i22 < m; i22++) {
        jpvt->data[i22] = (int32_T)jpvt_t->data[i22];
      }
    }

    emxFree_ptrdiff_t(&jpvt_t);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (xgeqp3.c) */
