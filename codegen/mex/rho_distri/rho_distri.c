/*
 * rho_distri.c
 *
 * Code generation for function 'rho_distri'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "rho_distri.h"
#include "Q_R.h"
#include "P_R.h"
#include "rho_distri_emxutil.h"
#include "Im_Xi.h"
#include "Re_Xi.h"
#include "rho.h"
#include "mldivide.h"
#include "rho_distri_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 11,    /* lineNo */
  "rho_distri",                        /* fcnName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 12,  /* lineNo */
  "rho_distri",                        /* fcnName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 13,  /* lineNo */
  "rho_distri",                        /* fcnName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 14,  /* lineNo */
  "rho_distri",                        /* fcnName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 15,  /* lineNo */
  "rho_distri",                        /* fcnName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 16,  /* lineNo */
  "rho_distri",                        /* fcnName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 17,  /* lineNo */
  "rho_distri",                        /* fcnName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 18,  /* lineNo */
  "rho_distri",                        /* fcnName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 19,  /* lineNo */
  "rho_distri",                        /* fcnName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 20,  /* lineNo */
  "rho_distri",                        /* fcnName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 22,  /* lineNo */
  "rho_distri",                        /* fcnName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 23,  /* lineNo */
  "rho_distri",                        /* fcnName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 24,  /* lineNo */
  "rho_distri",                        /* fcnName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 25,  /* lineNo */
  "rho_distri",                        /* fcnName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 26,  /* lineNo */
  "rho_distri",                        /* fcnName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 27,  /* lineNo */
  "rho_distri",                        /* fcnName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 28,  /* lineNo */
  "rho_distri",                        /* fcnName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 29,  /* lineNo */
  "rho_distri",                        /* fcnName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 30,  /* lineNo */
  "rho_distri",                        /* fcnName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 31,  /* lineNo */
  "rho_distri",                        /* fcnName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 39,  /* lineNo */
  "rho_distri",                        /* fcnName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 41,  /* lineNo */
  "rho_distri",                        /* fcnName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pathName */
};

static emlrtRTEInfo emlrtRTEI = { 3,   /* lineNo */
  1,                                   /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 4, /* lineNo */
  1,                                   /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 6, /* lineNo */
  1,                                   /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 36,/* lineNo */
  1,                                   /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 37,/* lineNo */
  1,                                   /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 39,/* lineNo */
  58,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 39,/* lineNo */
  82,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 39,/* lineNo */
  40,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pName */
};

static emlrtRTEInfo j_emlrtRTEI = { 39,/* lineNo */
  39,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 39,/* lineNo */
  117,                                 /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 39,/* lineNo */
  127,                                 /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pName */
};

static emlrtRTEInfo m_emlrtRTEI = { 39,/* lineNo */
  12,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pName */
};

static emlrtRTEInfo n_emlrtRTEI = { 39,/* lineNo */
  18,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pName */
};

static emlrtRTEInfo o_emlrtRTEI = { 1, /* lineNo */
  21,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pName */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  39,                                  /* lineNo */
  1,                                   /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "rho_t_Napp",                        /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo b_emlrtECI = { 2,   /* nDims */
  39,                                  /* lineNo */
  117,                                 /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pName */
};

static emlrtECInfo c_emlrtECI = { 2,   /* nDims */
  39,                                  /* lineNo */
  18,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pName */
};

static emlrtECInfo d_emlrtECI = { 2,   /* nDims */
  39,                                  /* lineNo */
  40,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pName */
};

static emlrtRTEInfo xb_emlrtRTEI = { 9,/* lineNo */
  15,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 3,     /* lineNo */
  18,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 3,   /* lineNo */
  18,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 3,   /* lineNo */
  27,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 3,   /* lineNo */
  27,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 4,   /* lineNo */
  22,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 4,   /* lineNo */
  22,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 3,   /* lineNo */
  1,                                   /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 3,   /* lineNo */
  1,                                   /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 4,   /* lineNo */
  1,                                   /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 4,   /* lineNo */
  1,                                   /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  11,                                  /* lineNo */
  17,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 11,  /* lineNo */
  17,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  11,                                  /* lineNo */
  43,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 11,  /* lineNo */
  43,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  11,                                  /* lineNo */
  110,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  11,                                  /* lineNo */
  203,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  12,                                  /* lineNo */
  17,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 12,  /* lineNo */
  17,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  12,                                  /* lineNo */
  43,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 12,  /* lineNo */
  43,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  12,                                  /* lineNo */
  110,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  12,                                  /* lineNo */
  222,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  13,                                  /* lineNo */
  114,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  13,                                  /* lineNo */
  265,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  13,                                  /* lineNo */
  377,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  13,                                  /* lineNo */
  521,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  13,                                  /* lineNo */
  17,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 13,  /* lineNo */
  17,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  13,                                  /* lineNo */
  43,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 13,  /* lineNo */
  43,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  102,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  205,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  306,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  405,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  17,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 14,  /* lineNo */
  17,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  43,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 14,  /* lineNo */
  43,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  112,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  256,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  370,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  521,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  17,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = { 15,  /* lineNo */
  17,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  44,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 15,  /* lineNo */
  44,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  102,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  201,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  302,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  405,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  17,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 16,  /* lineNo */
  17,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  44,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 16,  /* lineNo */
  44,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  116,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  267,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  383,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  534,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  17,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = { 17,  /* lineNo */
  17,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  44,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = { 17,  /* lineNo */
  44,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  104,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  207,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  310,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  413,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  17,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = { 18,  /* lineNo */
  17,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  44,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = { 18, /* lineNo */
  44,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  116,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  267,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  383,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  534,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  17,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI = { 19, /* lineNo */
  17,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  44,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo cb_emlrtDCI = { 19, /* lineNo */
  44,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  104,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  207,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  310,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  413,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  17,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo db_emlrtDCI = { 20, /* lineNo */
  17,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  44,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo eb_emlrtDCI = { 20, /* lineNo */
  44,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  17,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo fb_emlrtDCI = { 22, /* lineNo */
  17,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  46,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo gb_emlrtDCI = { 22, /* lineNo */
  46,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  116,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  209,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  17,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo hb_emlrtDCI = { 23, /* lineNo */
  17,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  46,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ib_emlrtDCI = { 23, /* lineNo */
  46,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  116,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  228,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  120,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  271,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  383,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  527,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  17,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo jb_emlrtDCI = { 24, /* lineNo */
  17,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  46,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo kb_emlrtDCI = { 24, /* lineNo */
  46,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  112,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  255,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  361,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  499,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  17,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo lb_emlrtDCI = { 25, /* lineNo */
  17,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  46,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo mb_emlrtDCI = { 25, /* lineNo */
  46,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  118,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  262,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  376,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  527,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  17,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo nb_emlrtDCI = { 26, /* lineNo */
  17,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  47,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ob_emlrtDCI = { 26, /* lineNo */
  47,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  112,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  250,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  356,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  499,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  17,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo pb_emlrtDCI = { 27, /* lineNo */
  17,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  47,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo qb_emlrtDCI = { 27, /* lineNo */
  47,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  122,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  273,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  389,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  540,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  17,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo rb_emlrtDCI = { 28, /* lineNo */
  17,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo td_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  47,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo sb_emlrtDCI = { 28, /* lineNo */
  47,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ud_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  114,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  257,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  365,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  508,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  17,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo tb_emlrtDCI = { 29, /* lineNo */
  17,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ae_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  47,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ub_emlrtDCI = { 29, /* lineNo */
  47,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo be_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  122,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ce_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  273,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo de_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  389,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ee_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  540,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  17,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo vb_emlrtDCI = { 30, /* lineNo */
  17,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ge_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  47,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo wb_emlrtDCI = { 30, /* lineNo */
  47,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo he_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  114,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ie_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  257,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo je_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  365,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ke_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  508,                                 /* colNo */
  "x_w",                               /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo le_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  17,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo xb_emlrtDCI = { 31, /* lineNo */
  17,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo me_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  47,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo yb_emlrtDCI = { 31, /* lineNo */
  47,                                  /* colNo */
  "rho_distri",                        /* fName */
  "/home/xiaolei/Documents/ImageStress/rho_distri.m",/* pName */
  1                                    /* checkKind */
};

/* Function Definitions */
void rho_distri(const emlrtStack *sp, const emxArray_real_T *C_rho, const
                emxArray_real_T *C0_Cinv_C0_rho, const emxArray_real_T
                *C0_Cinv_rho, const emxArray_real_T *CH_H_rho, const
                emxArray_real_T *CI_I_rho, const emxArray_real_T *CH_H0_H_rho,
                const emxArray_real_T *CI_H0_I_rho, const real_T C_I[81], const
                creal_T P_I[3], const real_T P_I_Re[3], const real_T P_I_Im[3],
                const creal_T A_I[9], const creal_T B_I[9], const real_T C_II[81],
                const creal_T P_II[3], const real_T P_II_Re[3], const real_T
                P_II_Im[3], const creal_T A_II[9], const creal_T B_II[9], const
                real_T C_GB[81], const creal_T P_GB[3], const real_T P_GB_Re[3],
                const real_T P_GB_Im[3], const creal_T A_GB[9], const creal_T
                B_GB[9], const real_T C_SU[81], const creal_T P_SU[3], const
                real_T P_SU_Re[3], const real_T P_SU_Im[3], const creal_T A_SU[9],
                const creal_T B_SU[9], const real_T C_SL[81], const creal_T
                P_SL[3], const real_T P_SL_Re[3], const real_T P_SL_Im[3], const
                creal_T A_SL[9], const creal_T B_SL[9], const real_T h[25],
                real_T XL1, real_T XL2, real_T N_app, const emxArray_real_T
                *weights, const emxArray_real_T *x_w, const real_T C[900], const
                real_T C0_Cinv[900], const real_T C0_Cinv_C0[900], const real_T
                b[3], real_T n, const emxArray_real_T *Range, emxArray_real_T
                *distri_rho)
{
  emxArray_real_T *rho_t_Napp;
  int32_T i0;
  real_T d0;
  int32_T loop_ub;
  emxArray_real_T *zeros_30Napp_3;
  emxArray_real_T *CR_H0_R_rho;
  int32_T t;
  int32_T i1;
  int32_T g;
  int32_T i2;
  int32_T b_C_rho[2];
  int32_T b_C0_Cinv_C0_rho[2];
  int32_T i3;
  int32_T i4;
  real_T d1;
  real_T d2;
  real_T d3;
  emxArray_real_T *a;
  real_T alpha1;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  real_T d4;
  real_T d5;
  char_T TRANSA;
  char_T TRANSB;
  emxArray_real_T *r0;
  int32_T iv0[2];
  real_T d6;
  real_T d7;
  real_T d8;
  real_T d9;
  real_T d10;
  real_T d11;
  real_T d12;
  real_T d13;
  real_T im_tmp;
  real_T im;
  real_T d14;
  real_T re;
  real_T b_im;
  emxArray_real_T *r1;
  real_T d15;
  real_T d16;
  emxArray_int32_T *r2;
  real_T b_re;
  real_T d17;
  real_T d18;
  emxArray_real_T *r3;
  int32_T iv1[1];
  real_T d19;
  real_T d20;
  real_T d21;
  real_T c_im;
  real_T d22;
  real_T d23;
  real_T d24;
  real_T d25;
  real_T d26;
  real_T d27;
  real_T d28;
  real_T d29;
  real_T d30;
  real_T d31;
  real_T d32;
  real_T d33;
  real_T d34;
  real_T d35;
  real_T d36;
  real_T c_re;
  real_T d_re;
  real_T d37;
  real_T d_im;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &rho_t_Napp, 2, &emlrtRTEI, true);
  i0 = rho_t_Napp->size[0] * rho_t_Napp->size[1];
  d0 = 30.0 * N_app;
  if (!(d0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d0, &b_emlrtDCI, sp);
  }

  if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
    emlrtIntegerCheckR2012b(d0, &emlrtDCI, sp);
  }

  rho_t_Napp->size[0] = (int32_T)d0;
  if (!(n >= 0.0)) {
    emlrtNonNegativeCheckR2012b(n, &d_emlrtDCI, sp);
  }

  if (n != (int32_T)muDoubleScalarFloor(n)) {
    emlrtIntegerCheckR2012b(n, &c_emlrtDCI, sp);
  }

  rho_t_Napp->size[1] = (int32_T)n;
  emxEnsureCapacity_real_T(sp, rho_t_Napp, i0, &emlrtRTEI);
  d0 = 30.0 * N_app;
  if (!(d0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d0, &h_emlrtDCI, sp);
  }

  if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
    emlrtIntegerCheckR2012b(d0, &g_emlrtDCI, sp);
  }

  if (n != (int32_T)muDoubleScalarFloor(n)) {
    emlrtIntegerCheckR2012b(n, &g_emlrtDCI, sp);
  }

  loop_ub = (int32_T)d0 * (int32_T)n;
  for (i0 = 0; i0 < loop_ub; i0++) {
    rho_t_Napp->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &zeros_30Napp_3, 2, &b_emlrtRTEI, true);
  i0 = zeros_30Napp_3->size[0] * zeros_30Napp_3->size[1];
  d0 = 30.0 * N_app;
  if (!(d0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d0, &f_emlrtDCI, sp);
  }

  if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
    emlrtIntegerCheckR2012b(d0, &e_emlrtDCI, sp);
  }

  zeros_30Napp_3->size[0] = (int32_T)d0;
  zeros_30Napp_3->size[1] = 3;
  emxEnsureCapacity_real_T(sp, zeros_30Napp_3, i0, &b_emlrtRTEI);
  d0 = 30.0 * N_app;
  if (!(d0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d0, &j_emlrtDCI, sp);
  }

  if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
    emlrtIntegerCheckR2012b(d0, &i_emlrtDCI, sp);
  }

  loop_ub = (int32_T)d0 * 3;
  for (i0 = 0; i0 < loop_ub; i0++) {
    zeros_30Napp_3->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &CR_H0_R_rho, 2, &c_emlrtRTEI, true);
  i0 = CR_H0_R_rho->size[0] * CR_H0_R_rho->size[1];
  CR_H0_R_rho->size[0] = (int32_T)(30.0 * N_app);
  CR_H0_R_rho->size[1] = 3;
  emxEnsureCapacity_real_T(sp, CR_H0_R_rho, i0, &c_emlrtRTEI);
  loop_ub = (int32_T)(30.0 * N_app) * 3;
  for (i0 = 0; i0 < loop_ub; i0++) {
    CR_H0_R_rho->data[i0] = 0.0;
  }

  i0 = (int32_T)N_app;
  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    for (t = 0; t < 3; t++) {
      emlrtForLoopVectorCheckR2012b(1.0, 1.0, N_app, mxDOUBLE_CLASS, (int32_T)
        N_app, &xb_emlrtRTEI, sp);
      for (g = 0; g < i0; g++) {
        i1 = zeros_30Napp_3->size[0];
        d0 = ((1.0 + (real_T)loop_ub) - 1.0) * N_app + (1.0 + (real_T)g);
        if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
          emlrtIntegerCheckR2012b(d0, &k_emlrtDCI, sp);
        }

        i2 = (int32_T)d0;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &b_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
          emlrtIntegerCheckR2012b(d0, &l_emlrtDCI, sp);
        }

        i3 = (int32_T)d0;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &c_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i4 = (int32_T)(1U + g);
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &d_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &e_emlrtBCI, sp);
        }

        st.site = &emlrtRSI;
        d1 = Re_Xi(&st, 1.0 + (real_T)t, 1.0, 1.0 + (real_T)loop_ub, C_SU, P_SU,
                   A_SU, B_SU);
        st.site = &emlrtRSI;
        d2 = Im_Xi(&st, 1.0 + (real_T)t, 1.0, 1.0 + (real_T)loop_ub, C_SU, P_SU,
                   A_SU, B_SU);
        st.site = &emlrtRSI;
        zeros_30Napp_3->data[(i2 + zeros_30Napp_3->size[0] * t) - 1] =
          (zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] - d1 *
           Q_R(x_w->data[i4 - 1], XL1, -P_SU_Re[0] * XL2, -P_SU_Im[0] * XL2)) +
          d2 * P_R(x_w->data[i4 - 1], XL1, -P_SU_Re[0] * XL2, -P_SU_Im[0] * XL2);
        i1 = zeros_30Napp_3->size[0];
        d3 = ((1.0 + (real_T)loop_ub) + 2.0) * N_app + (1.0 + (real_T)g);
        if (d3 != (int32_T)muDoubleScalarFloor(d3)) {
          emlrtIntegerCheckR2012b(d3, &m_emlrtDCI, sp);
        }

        i2 = (int32_T)d3;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &f_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d3 != (int32_T)muDoubleScalarFloor(d3)) {
          emlrtIntegerCheckR2012b(d3, &n_emlrtDCI, sp);
        }

        i3 = (int32_T)d3;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &g_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &h_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &i_emlrtBCI, sp);
        }

        st.site = &b_emlrtRSI;
        d4 = Re_Xi(&st, 1.0 + (real_T)t, 1.0, 1.0 + (real_T)loop_ub, C_SL, P_SL,
                   A_SL, B_SL);
        st.site = &b_emlrtRSI;
        d5 = Im_Xi(&st, 1.0 + (real_T)t, 1.0, 1.0 + (real_T)loop_ub, C_SL, P_SL,
                   A_SL, B_SL);
        st.site = &b_emlrtRSI;
        zeros_30Napp_3->data[(i2 + zeros_30Napp_3->size[0] * t) - 1] =
          (zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] - d4 *
           Q_R(x_w->data[i4 - 1], XL1, P_SL_Re[0] * (-h[20] - XL2), -P_SL_Im[0] *
               (-h[20] - XL2))) - d5 * P_R(x_w->data[i4 - 1], XL1, P_SL_Re[0] *
          (-h[20] - XL2), -P_SL_Im[0] * (-h[20] - XL2));
        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &j_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &k_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &l_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &m_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        d6 = ((1.0 + (real_T)loop_ub) + 5.0) * N_app + (1.0 + (real_T)g);
        if (d6 != (int32_T)muDoubleScalarFloor(d6)) {
          emlrtIntegerCheckR2012b(d6, &o_emlrtDCI, sp);
        }

        i2 = (int32_T)d6;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &n_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d6 != (int32_T)muDoubleScalarFloor(d6)) {
          emlrtIntegerCheckR2012b(d6, &p_emlrtDCI, sp);
        }

        i3 = (int32_T)d6;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &o_emlrtBCI, sp);
        }

        d7 = -h[0] - XL2;
        st.site = &c_emlrtRSI;
        d8 = Re_Xi(&st, 1.0 + (real_T)t, 1.0, 1.0 + (real_T)loop_ub, C_I, P_I,
                   A_I, B_I);
        st.site = &c_emlrtRSI;
        d9 = Im_Xi(&st, 1.0 + (real_T)t, 1.0, 1.0 + (real_T)loop_ub, C_I, P_I,
                   A_I, B_I);
        d10 = muDoubleScalarSign(P_SU_Im[0] * d7);
        d11 = d10 * d2;
        d12 = muDoubleScalarSign(P_I_Im[0] * d7);
        d13 = d12 * d9;
        st.site = &c_emlrtRSI;
        zeros_30Napp_3->data[(i2 + zeros_30Napp_3->size[0] * t) - 1] =
          (((zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] - d1 *
             Q_R(x_w->data[g], XL1, P_SU_Re[0] * (-h[0] - XL2),
                 muDoubleScalarAbs(P_SU_Im[0] * (-h[0] - XL2)))) + d11 * P_R
            (x_w->data[g], XL1, P_SU_Re[0] * (-h[0] - XL2), muDoubleScalarAbs
             (P_SU_Im[0] * (-h[0] - XL2)))) + d8 * Q_R(x_w->data[g], XL1,
            P_I_Re[0] * (-h[0] - XL2), muDoubleScalarAbs(P_I_Im[0] * (-h[0] -
              XL2)))) - d13 * P_R(x_w->data[g], XL1, P_I_Re[0] * (-h[0] - XL2),
          muDoubleScalarAbs(P_I_Im[0] * (-h[0] - XL2)));

        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        alpha1 = A_SU[loop_ub].re * B_SU[t].re - A_SU[loop_ub].im * B_SU[t].im;
        im_tmp = A_SU[loop_ub].re * B_SU[t].im + A_SU[loop_ub].im * B_SU[t].re;
        if (im_tmp == 0.0) {
          im = 0.0;
        } else if (alpha1 == 0.0) {
          im = im_tmp / 2.0;
        } else {
          im = im_tmp / 2.0;
        }

        if (im == 0.0) {
          im = 0.0;
        } else {
          im /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &p_emlrtBCI, sp);
        }

        st.site = &d_emlrtRSI;
        d14 = P_R(x_w->data[i4 - 1], XL1, P_SU_Re[0] * (-h[0] - XL2), P_SU_Im[0]
                  * (-h[0] - XL2));
        if (im_tmp == 0.0) {
          re = alpha1 / 2.0;
          b_im = 0.0;
        } else if (alpha1 == 0.0) {
          re = 0.0;
          b_im = im_tmp / 2.0;
        } else {
          re = alpha1 / 2.0;
          b_im = im_tmp / 2.0;
        }

        if (b_im == 0.0) {
          re /= 3.1415926535897931;
        } else if (re == 0.0) {
          re = 0.0;
        } else {
          re /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &q_emlrtBCI, sp);
        }

        st.site = &d_emlrtRSI;
        d15 = Q_R(x_w->data[i4 - 1], XL1, P_SU_Re[0] * (-h[0] - XL2), P_SU_Im[0]
                  * (-h[0] - XL2));
        alpha1 = A_I[loop_ub].re * B_I[t].re - A_I[loop_ub].im * B_I[t].im;
        im_tmp = A_I[loop_ub].re * B_I[t].im + A_I[loop_ub].im * B_I[t].re;
        if (im_tmp == 0.0) {
          b_im = 0.0;
        } else if (alpha1 == 0.0) {
          b_im = im_tmp / 2.0;
        } else {
          b_im = im_tmp / 2.0;
        }

        if (b_im == 0.0) {
          b_im = 0.0;
        } else {
          b_im /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &r_emlrtBCI, sp);
        }

        st.site = &d_emlrtRSI;
        d16 = P_R(x_w->data[i4 - 1], XL1, P_I_Re[0] * (-h[0] - XL2), P_I_Im[0] *
                  (-h[0] - XL2));
        if (im_tmp == 0.0) {
          b_re = alpha1 / 2.0;
          beta1 = 0.0;
        } else if (alpha1 == 0.0) {
          b_re = 0.0;
          beta1 = im_tmp / 2.0;
        } else {
          b_re = alpha1 / 2.0;
          beta1 = im_tmp / 2.0;
        }

        if (beta1 == 0.0) {
          b_re /= 3.1415926535897931;
        } else if (b_re == 0.0) {
          b_re = 0.0;
        } else {
          b_re /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &s_emlrtBCI, sp);
        }

        st.site = &d_emlrtRSI;
        d17 = Q_R(x_w->data[i4 - 1], XL1, P_I_Re[0] * (-h[0] - XL2), P_I_Im[0] *
                  (-h[0] - XL2));
        i1 = zeros_30Napp_3->size[0];
        d18 = ((1.0 + (real_T)loop_ub) + 8.0) * N_app + (1.0 + (real_T)g);
        if (d18 != (int32_T)muDoubleScalarFloor(d18)) {
          emlrtIntegerCheckR2012b(d18, &q_emlrtDCI, sp);
        }

        i2 = (int32_T)d18;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &t_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d18 != (int32_T)muDoubleScalarFloor(d18)) {
          emlrtIntegerCheckR2012b(d18, &r_emlrtDCI, sp);
        }

        i3 = (int32_T)d18;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &u_emlrtBCI, sp);
        }

        zeros_30Napp_3->data[(i2 + zeros_30Napp_3->size[0] * t) - 1] =
          (((zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] + im *
             d14) + -re * d15) - b_im * d16) - -b_re * d17;
        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &v_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &w_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &x_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &y_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        d19 = ((1.0 + (real_T)loop_ub) + 11.0) * N_app + (1.0 + (real_T)g);
        if (d19 != (int32_T)muDoubleScalarFloor(d19)) {
          emlrtIntegerCheckR2012b(d19, &s_emlrtDCI, sp);
        }

        i2 = (int32_T)d19;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ab_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d19 != (int32_T)muDoubleScalarFloor(d19)) {
          emlrtIntegerCheckR2012b(d19, &t_emlrtDCI, sp);
        }

        i3 = (int32_T)d19;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &bb_emlrtBCI, sp);
        }

        d20 = -h[5] - XL2;
        st.site = &e_emlrtRSI;
        d14 = Re_Xi(&st, 1.0 + (real_T)t, 1.0, 1.0 + (real_T)loop_ub, C_GB, P_GB,
                    A_GB, B_GB);
        st.site = &e_emlrtRSI;
        d15 = Im_Xi(&st, 1.0 + (real_T)t, 1.0, 1.0 + (real_T)loop_ub, C_GB, P_GB,
                    A_GB, B_GB);
        d16 = muDoubleScalarSign(P_I_Im[0] * d20);
        d9 *= d16;
        d17 = muDoubleScalarSign(P_GB_Im[0] * d20);
        d21 = d17 * d15;
        st.site = &e_emlrtRSI;
        zeros_30Napp_3->data[(i2 + zeros_30Napp_3->size[0] * t) - 1] =
          (((zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] - d8 *
             Q_R(x_w->data[g], XL1, P_I_Re[0] * (-h[5] - XL2), muDoubleScalarAbs
                 (P_I_Im[0] * (-h[5] - XL2)))) + d9 * P_R(x_w->data[g], XL1,
             P_I_Re[0] * (-h[5] - XL2), muDoubleScalarAbs(P_I_Im[0] * (-h[5] -
               XL2)))) + d14 * Q_R(x_w->data[g], XL1, P_GB_Re[0] * (-h[5] - XL2),
            muDoubleScalarAbs(P_GB_Im[0] * (-h[5] - XL2)))) - d21 * P_R
          (x_w->data[g], XL1, P_GB_Re[0] * (-h[5] - XL2), muDoubleScalarAbs
           (P_GB_Im[0] * (-h[5] - XL2)));

        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        alpha1 = A_I[loop_ub].re * B_I[t].re - A_I[loop_ub].im * B_I[t].im;
        c_im = A_I[loop_ub].re * B_I[t].im + A_I[loop_ub].im * B_I[t].re;
        if (c_im == 0.0) {
          c_im = 0.0;
        } else if (alpha1 == 0.0) {
          c_im /= 2.0;
        } else {
          c_im /= 2.0;
        }

        if (c_im == 0.0) {
          c_im = 0.0;
        } else {
          c_im /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &cb_emlrtBCI, sp);
        }

        st.site = &f_emlrtRSI;
        d22 = P_R(x_w->data[i4 - 1], XL1, P_I_Re[0] * (-h[5] - XL2), P_I_Im[0] *
                  (-h[5] - XL2));
        alpha1 = A_I[loop_ub].re * B_I[t].re - A_I[loop_ub].im * B_I[t].im;
        im = A_I[loop_ub].re * B_I[t].im + A_I[loop_ub].im * B_I[t].re;
        if (im == 0.0) {
          re = alpha1 / 2.0;
          im = 0.0;
        } else if (alpha1 == 0.0) {
          re = 0.0;
          im /= 2.0;
        } else {
          re = alpha1 / 2.0;
          im /= 2.0;
        }

        if (im == 0.0) {
          re /= 3.1415926535897931;
        } else if (re == 0.0) {
          re = 0.0;
        } else {
          re /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &db_emlrtBCI, sp);
        }

        st.site = &f_emlrtRSI;
        d23 = Q_R(x_w->data[i4 - 1], XL1, P_I_Re[0] * (-h[5] - XL2), P_I_Im[0] *
                  (-h[5] - XL2));
        alpha1 = A_GB[loop_ub].re * B_GB[t].re - A_GB[loop_ub].im * B_GB[t].im;
        im_tmp = A_GB[loop_ub].re * B_GB[t].im + A_GB[loop_ub].im * B_GB[t].re;
        if (im_tmp == 0.0) {
          im = 0.0;
        } else if (alpha1 == 0.0) {
          im = im_tmp / 2.0;
        } else {
          im = im_tmp / 2.0;
        }

        if (im == 0.0) {
          im = 0.0;
        } else {
          im /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &eb_emlrtBCI, sp);
        }

        st.site = &f_emlrtRSI;
        d24 = P_R(x_w->data[i4 - 1], XL1, P_GB_Re[0] * (-h[5] - XL2), P_GB_Im[0]
                  * (-h[5] - XL2));
        if (im_tmp == 0.0) {
          b_re = alpha1 / 2.0;
          b_im = 0.0;
        } else if (alpha1 == 0.0) {
          b_re = 0.0;
          b_im = im_tmp / 2.0;
        } else {
          b_re = alpha1 / 2.0;
          b_im = im_tmp / 2.0;
        }

        if (b_im == 0.0) {
          b_re /= 3.1415926535897931;
        } else if (b_re == 0.0) {
          b_re = 0.0;
        } else {
          b_re /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &fb_emlrtBCI, sp);
        }

        st.site = &f_emlrtRSI;
        d25 = Q_R(x_w->data[i4 - 1], XL1, P_GB_Re[0] * (-h[5] - XL2), P_GB_Im[0]
                  * (-h[5] - XL2));
        i1 = zeros_30Napp_3->size[0];
        d26 = ((1.0 + (real_T)loop_ub) + 14.0) * N_app + (1.0 + (real_T)g);
        if (d26 != (int32_T)muDoubleScalarFloor(d26)) {
          emlrtIntegerCheckR2012b(d26, &u_emlrtDCI, sp);
        }

        i2 = (int32_T)d26;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &gb_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d26 != (int32_T)muDoubleScalarFloor(d26)) {
          emlrtIntegerCheckR2012b(d26, &v_emlrtDCI, sp);
        }

        i3 = (int32_T)d26;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &hb_emlrtBCI, sp);
        }

        zeros_30Napp_3->data[(i2 + zeros_30Napp_3->size[0] * t) - 1] =
          (((zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] + c_im
             * d22) + -re * d23) - im * d24) - -b_re * d25;
        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ib_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &jb_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &kb_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &lb_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        d27 = ((1.0 + (real_T)loop_ub) + 17.0) * N_app + (1.0 + (real_T)g);
        if (d27 != (int32_T)muDoubleScalarFloor(d27)) {
          emlrtIntegerCheckR2012b(d27, &w_emlrtDCI, sp);
        }

        i2 = (int32_T)d27;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &mb_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d27 != (int32_T)muDoubleScalarFloor(d27)) {
          emlrtIntegerCheckR2012b(d27, &x_emlrtDCI, sp);
        }

        i3 = (int32_T)d27;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &nb_emlrtBCI, sp);
        }

        d28 = -h[10] - XL2;
        st.site = &g_emlrtRSI;
        d22 = Re_Xi(&st, 1.0 + (real_T)t, 1.0, 1.0 + (real_T)loop_ub, C_II, P_II,
                    A_II, B_II);
        st.site = &g_emlrtRSI;
        d23 = Im_Xi(&st, 1.0 + (real_T)t, 1.0, 1.0 + (real_T)loop_ub, C_II, P_II,
                    A_II, B_II);
        d24 = muDoubleScalarSign(P_GB_Im[0] * d28);
        d15 *= d24;
        d25 = muDoubleScalarSign(P_II_Im[0] * d28);
        d29 = d25 * d23;
        st.site = &g_emlrtRSI;
        zeros_30Napp_3->data[(i2 + zeros_30Napp_3->size[0] * t) - 1] =
          (((zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] - d14 *
             Q_R(x_w->data[g], XL1, P_GB_Re[0] * (-h[10] - XL2),
                 muDoubleScalarAbs(P_GB_Im[0] * (-h[10] - XL2)))) + d15 * P_R
            (x_w->data[g], XL1, P_GB_Re[0] * (-h[10] - XL2), muDoubleScalarAbs
             (P_GB_Im[0] * (-h[10] - XL2)))) + d22 * Q_R(x_w->data[g], XL1,
            P_II_Re[0] * (-h[10] - XL2), muDoubleScalarAbs(P_II_Im[0] * (-h[10]
              - XL2)))) - d29 * P_R(x_w->data[g], XL1, P_II_Re[0] * (-h[10] -
          XL2), muDoubleScalarAbs(P_II_Im[0] * (-h[10] - XL2)));

        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        alpha1 = A_GB[loop_ub].re * B_GB[t].re - A_GB[loop_ub].im * B_GB[t].im;
        c_im = A_GB[loop_ub].re * B_GB[t].im + A_GB[loop_ub].im * B_GB[t].re;
        if (c_im == 0.0) {
          c_im = 0.0;
        } else if (alpha1 == 0.0) {
          c_im /= 2.0;
        } else {
          c_im /= 2.0;
        }

        if (c_im == 0.0) {
          c_im = 0.0;
        } else {
          c_im /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &ob_emlrtBCI, sp);
        }

        st.site = &h_emlrtRSI;
        d30 = P_R(x_w->data[i4 - 1], XL1, P_GB_Re[0] * (-h[10] - XL2), P_GB_Im[0]
                  * (-h[10] - XL2));
        alpha1 = A_GB[loop_ub].re * B_GB[t].re - A_GB[loop_ub].im * B_GB[t].im;
        im = A_GB[loop_ub].re * B_GB[t].im + A_GB[loop_ub].im * B_GB[t].re;
        if (im == 0.0) {
          re = alpha1 / 2.0;
          im = 0.0;
        } else if (alpha1 == 0.0) {
          re = 0.0;
          im /= 2.0;
        } else {
          re = alpha1 / 2.0;
          im /= 2.0;
        }

        if (im == 0.0) {
          re /= 3.1415926535897931;
        } else if (re == 0.0) {
          re = 0.0;
        } else {
          re /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &pb_emlrtBCI, sp);
        }

        st.site = &h_emlrtRSI;
        d31 = Q_R(x_w->data[i4 - 1], XL1, P_GB_Re[0] * (-h[10] - XL2), P_GB_Im[0]
                  * (-h[10] - XL2));
        alpha1 = A_II[loop_ub].re * B_II[t].re - A_II[loop_ub].im * B_II[t].im;
        im_tmp = A_II[loop_ub].re * B_II[t].im + A_II[loop_ub].im * B_II[t].re;
        if (im_tmp == 0.0) {
          im = 0.0;
        } else if (alpha1 == 0.0) {
          im = im_tmp / 2.0;
        } else {
          im = im_tmp / 2.0;
        }

        if (im == 0.0) {
          im = 0.0;
        } else {
          im /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &qb_emlrtBCI, sp);
        }

        st.site = &h_emlrtRSI;
        d32 = P_R(x_w->data[i4 - 1], XL1, P_II_Re[0] * (-h[10] - XL2), P_II_Im[0]
                  * (-h[10] - XL2));
        if (im_tmp == 0.0) {
          b_re = alpha1 / 2.0;
          b_im = 0.0;
        } else if (alpha1 == 0.0) {
          b_re = 0.0;
          b_im = im_tmp / 2.0;
        } else {
          b_re = alpha1 / 2.0;
          b_im = im_tmp / 2.0;
        }

        if (b_im == 0.0) {
          b_re /= 3.1415926535897931;
        } else if (b_re == 0.0) {
          b_re = 0.0;
        } else {
          b_re /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &rb_emlrtBCI, sp);
        }

        st.site = &h_emlrtRSI;
        d33 = Q_R(x_w->data[i4 - 1], XL1, P_II_Re[0] * (-h[10] - XL2), P_II_Im[0]
                  * (-h[10] - XL2));
        i1 = zeros_30Napp_3->size[0];
        d34 = ((1.0 + (real_T)loop_ub) + 20.0) * N_app + (1.0 + (real_T)g);
        if (d34 != (int32_T)muDoubleScalarFloor(d34)) {
          emlrtIntegerCheckR2012b(d34, &y_emlrtDCI, sp);
        }

        i2 = (int32_T)d34;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &sb_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d34 != (int32_T)muDoubleScalarFloor(d34)) {
          emlrtIntegerCheckR2012b(d34, &ab_emlrtDCI, sp);
        }

        i3 = (int32_T)d34;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &tb_emlrtBCI, sp);
        }

        zeros_30Napp_3->data[(i2 + zeros_30Napp_3->size[0] * t) - 1] =
          (((zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] + c_im
             * d30) + -re * d31) - im * d32) - -b_re * d33;
        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ub_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &vb_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &wb_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &xb_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        d35 = ((1.0 + (real_T)loop_ub) + 23.0) * N_app + (1.0 + (real_T)g);
        if (d35 != (int32_T)muDoubleScalarFloor(d35)) {
          emlrtIntegerCheckR2012b(d35, &bb_emlrtDCI, sp);
        }

        i2 = (int32_T)d35;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &yb_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d35 != (int32_T)muDoubleScalarFloor(d35)) {
          emlrtIntegerCheckR2012b(d35, &cb_emlrtDCI, sp);
        }

        i3 = (int32_T)d35;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &ac_emlrtBCI, sp);
        }

        d36 = -h[15] - XL2;
        d30 = muDoubleScalarSign(P_II_Im[0] * d36);
        d23 *= d30;
        d31 = muDoubleScalarSign(P_SL_Im[0] * d36);
        d32 = d31 * d5;
        st.site = &i_emlrtRSI;
        zeros_30Napp_3->data[(i2 + zeros_30Napp_3->size[0] * t) - 1] =
          (((zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] - d22 *
             Q_R(x_w->data[g], XL1, P_II_Re[0] * (-h[15] - XL2),
                 muDoubleScalarAbs(P_II_Im[0] * (-h[15] - XL2)))) + d23 * P_R
            (x_w->data[g], XL1, P_II_Re[0] * (-h[15] - XL2), muDoubleScalarAbs
             (P_II_Im[0] * (-h[15] - XL2)))) + d4 * Q_R(x_w->data[g], XL1,
            P_SL_Re[0] * (-h[15] - XL2), muDoubleScalarAbs(P_SL_Im[0] * (-h[15]
              - XL2)))) - d32 * P_R(x_w->data[g], XL1, P_SL_Re[0] * (-h[15] -
          XL2), muDoubleScalarAbs(P_SL_Im[0] * (-h[15] - XL2)));

        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        alpha1 = A_II[loop_ub].re * B_II[t].re - A_II[loop_ub].im * B_II[t].im;
        c_im = A_II[loop_ub].re * B_II[t].im + A_II[loop_ub].im * B_II[t].re;
        if (c_im == 0.0) {
          c_im = 0.0;
        } else if (alpha1 == 0.0) {
          c_im /= 2.0;
        } else {
          c_im /= 2.0;
        }

        if (c_im == 0.0) {
          c_im = 0.0;
        } else {
          c_im /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &bc_emlrtBCI, sp);
        }

        st.site = &j_emlrtRSI;
        d33 = P_R(x_w->data[i4 - 1], XL1, P_II_Re[0] * (-h[15] - XL2), P_II_Im[0]
                  * (-h[15] - XL2));
        alpha1 = A_II[loop_ub].re * B_II[t].re - A_II[loop_ub].im * B_II[t].im;
        beta1 = A_II[loop_ub].re * B_II[t].im + A_II[loop_ub].im * B_II[t].re;
        if (beta1 == 0.0) {
          c_re = alpha1 / 2.0;
          beta1 = 0.0;
        } else if (alpha1 == 0.0) {
          c_re = 0.0;
          beta1 /= 2.0;
        } else {
          c_re = alpha1 / 2.0;
          beta1 /= 2.0;
        }

        if (beta1 == 0.0) {
          c_re /= 3.1415926535897931;
        } else if (c_re == 0.0) {
          c_re = 0.0;
        } else {
          c_re /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &cc_emlrtBCI, sp);
        }

        st.site = &j_emlrtRSI;
        d_re = Q_R(x_w->data[i4 - 1], XL1, P_II_Re[0] * (-h[15] - XL2), P_II_Im
                   [0] * (-h[15] - XL2));
        alpha1 = A_SL[loop_ub].re * B_SL[t].re - A_SL[loop_ub].im * B_SL[t].im;
        im_tmp = A_SL[loop_ub].re * B_SL[t].im + A_SL[loop_ub].im * B_SL[t].re;
        if (im_tmp == 0.0) {
          im = 0.0;
        } else if (alpha1 == 0.0) {
          im = im_tmp / 2.0;
        } else {
          im = im_tmp / 2.0;
        }

        if (im == 0.0) {
          im = 0.0;
        } else {
          im /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &dc_emlrtBCI, sp);
        }

        st.site = &j_emlrtRSI;
        beta1 = P_R(x_w->data[i4 - 1], XL1, P_SL_Re[0] * (-h[15] - XL2),
                    P_SL_Im[0] * (-h[15] - XL2));
        if (im_tmp == 0.0) {
          re = alpha1 / 2.0;
          b_im = 0.0;
        } else if (alpha1 == 0.0) {
          re = 0.0;
          b_im = im_tmp / 2.0;
        } else {
          re = alpha1 / 2.0;
          b_im = im_tmp / 2.0;
        }

        if (b_im == 0.0) {
          re /= 3.1415926535897931;
        } else if (re == 0.0) {
          re = 0.0;
        } else {
          re /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &ec_emlrtBCI, sp);
        }

        st.site = &j_emlrtRSI;
        alpha1 = Q_R(x_w->data[i4 - 1], XL1, P_SL_Re[0] * (-h[15] - XL2),
                     P_SL_Im[0] * (-h[15] - XL2));
        i1 = zeros_30Napp_3->size[0];
        d37 = ((1.0 + (real_T)loop_ub) + 26.0) * N_app + (1.0 + (real_T)g);
        if (d37 != (int32_T)muDoubleScalarFloor(d37)) {
          emlrtIntegerCheckR2012b(d37, &db_emlrtDCI, sp);
        }

        i2 = (int32_T)d37;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &fc_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d37 != (int32_T)muDoubleScalarFloor(d37)) {
          emlrtIntegerCheckR2012b(d37, &eb_emlrtDCI, sp);
        }

        i3 = (int32_T)d37;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &gc_emlrtBCI, sp);
        }

        zeros_30Napp_3->data[(i2 + zeros_30Napp_3->size[0] * t) - 1] =
          (((zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] + c_im
             * d33) + -c_re * d_re) - im * beta1) - -re * alpha1;
        i1 = CR_H0_R_rho->size[0];
        if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
          emlrtIntegerCheckR2012b(d0, &fb_emlrtDCI, sp);
        }

        i2 = (int32_T)d0;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &hc_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
          emlrtIntegerCheckR2012b(d0, &gb_emlrtDCI, sp);
        }

        i3 = (int32_T)d0;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &ic_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &jc_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &kc_emlrtBCI, sp);
        }

        st.site = &k_emlrtRSI;
        CR_H0_R_rho->data[(i2 + CR_H0_R_rho->size[0] * t) - 1] =
          (CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] - d1 * P_R
           (x_w->data[i4 - 1], XL1, -P_SU_Re[0] * XL2, -P_SU_Im[0] * XL2)) - d2 *
          Q_R(x_w->data[i4 - 1], XL1, -P_SU_Re[0] * XL2, -P_SU_Im[0] * XL2);
        i1 = CR_H0_R_rho->size[0];
        if (d3 != (int32_T)muDoubleScalarFloor(d3)) {
          emlrtIntegerCheckR2012b(d3, &hb_emlrtDCI, sp);
        }

        i2 = (int32_T)d3;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &lc_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d3 != (int32_T)muDoubleScalarFloor(d3)) {
          emlrtIntegerCheckR2012b(d3, &ib_emlrtDCI, sp);
        }

        i3 = (int32_T)d3;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &mc_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &nc_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &oc_emlrtBCI, sp);
        }

        st.site = &l_emlrtRSI;
        CR_H0_R_rho->data[(i2 + CR_H0_R_rho->size[0] * t) - 1] =
          (CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] - d4 * P_R
           (x_w->data[i4 - 1], XL1, P_SL_Re[0] * (-h[20] - XL2), -P_SL_Im[0] * (
             -h[20] - XL2))) + d5 * Q_R(x_w->data[i4 - 1], XL1, P_SL_Re[0] *
          (-h[20] - XL2), -P_SL_Im[0] * (-h[20] - XL2));
        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &pc_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &qc_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &rc_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &sc_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d6 != (int32_T)muDoubleScalarFloor(d6)) {
          emlrtIntegerCheckR2012b(d6, &jb_emlrtDCI, sp);
        }

        i2 = (int32_T)d6;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &tc_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d6 != (int32_T)muDoubleScalarFloor(d6)) {
          emlrtIntegerCheckR2012b(d6, &kb_emlrtDCI, sp);
        }

        i3 = (int32_T)d6;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &uc_emlrtBCI, sp);
        }

        st.site = &m_emlrtRSI;
        CR_H0_R_rho->data[(i2 + CR_H0_R_rho->size[0] * t) - 1] =
          (((CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] - d1 * P_R
             (x_w->data[g], XL1, P_SU_Re[0] * (-h[0] - XL2), muDoubleScalarAbs
              (P_SU_Im[0] * (-h[0] - XL2)))) - d11 * Q_R(x_w->data[g], XL1,
             P_SU_Re[0] * (-h[0] - XL2), muDoubleScalarAbs(P_SU_Im[0] * (-h[0] -
               XL2)))) + d8 * P_R(x_w->data[g], XL1, P_I_Re[0] * (-h[0] - XL2),
            muDoubleScalarAbs(P_I_Im[0] * (-h[0] - XL2)))) + d13 * Q_R(x_w->
          data[g], XL1, P_I_Re[0] * (-h[0] - XL2), muDoubleScalarAbs(P_I_Im[0] *
          (-h[0] - XL2)));
        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &vc_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &wc_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &xc_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &yc_emlrtBCI, sp);
        }

        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        alpha1 = A_SU[loop_ub].re * B_SU[t].re - A_SU[loop_ub].im * B_SU[t].im;
        c_im = A_SU[loop_ub].re * B_SU[t].im + A_SU[loop_ub].im * B_SU[t].re;
        if (c_im == 0.0) {
          c_im = 0.0;
        } else if (alpha1 == 0.0) {
          c_im /= 2.0;
        } else {
          c_im /= 2.0;
        }

        if (c_im == 0.0) {
          c_im = 0.0;
        } else {
          c_im /= 3.1415926535897931;
        }

        st.site = &n_emlrtRSI;
        d1 = Q_R(x_w->data[g], XL1, P_SU_Re[0] * (-h[0] - XL2),
                 muDoubleScalarAbs(P_SU_Im[0] * (-h[0] - XL2)));
        alpha1 = A_SU[loop_ub].re * B_SU[t].re - A_SU[loop_ub].im * B_SU[t].im;
        im = A_SU[loop_ub].re * B_SU[t].im + A_SU[loop_ub].im * B_SU[t].re;
        if (im == 0.0) {
          re = alpha1 / 2.0;
          im = 0.0;
        } else if (alpha1 == 0.0) {
          re = 0.0;
          im /= 2.0;
        } else {
          re = alpha1 / 2.0;
          im /= 2.0;
        }

        if (im == 0.0) {
          re /= 3.1415926535897931;
        } else if (re == 0.0) {
          re = 0.0;
        } else {
          re /= 3.1415926535897931;
        }

        st.site = &n_emlrtRSI;
        d2 = P_R(x_w->data[g], XL1, P_SU_Re[0] * (-h[0] - XL2),
                 muDoubleScalarAbs(P_SU_Im[0] * (-h[0] - XL2)));
        b_re = A_I[loop_ub].re * B_I[t].re - A_I[loop_ub].im * B_I[t].im;
        im = A_I[loop_ub].re * B_I[t].im + A_I[loop_ub].im * B_I[t].re;
        if (im == 0.0) {
          im = 0.0;
        } else if (b_re == 0.0) {
          im /= 2.0;
        } else {
          im /= 2.0;
        }

        if (im == 0.0) {
          im = 0.0;
        } else {
          im /= 3.1415926535897931;
        }

        st.site = &n_emlrtRSI;
        d5 = Q_R(x_w->data[g], XL1, P_I_Re[0] * (-h[0] - XL2), muDoubleScalarAbs
                 (P_I_Im[0] * (-h[0] - XL2)));
        b_re = A_I[loop_ub].re * B_I[t].re - A_I[loop_ub].im * B_I[t].im;
        b_im = A_I[loop_ub].re * B_I[t].im + A_I[loop_ub].im * B_I[t].re;
        if (b_im == 0.0) {
          b_re /= 2.0;
          b_im = 0.0;
        } else if (b_re == 0.0) {
          b_re = 0.0;
          b_im /= 2.0;
        } else {
          b_re /= 2.0;
          b_im /= 2.0;
        }

        if (b_im == 0.0) {
          b_re /= 3.1415926535897931;
        } else if (b_re == 0.0) {
          b_re = 0.0;
        } else {
          b_re /= 3.1415926535897931;
        }

        st.site = &n_emlrtRSI;
        d11 = P_R(x_w->data[g], XL1, P_I_Re[0] * (-h[0] - XL2),
                  muDoubleScalarAbs(P_I_Im[0] * (-h[0] - XL2)));
        i1 = CR_H0_R_rho->size[0];
        if (d18 != (int32_T)muDoubleScalarFloor(d18)) {
          emlrtIntegerCheckR2012b(d18, &lb_emlrtDCI, sp);
        }

        i2 = (int32_T)d18;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ad_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d18 != (int32_T)muDoubleScalarFloor(d18)) {
          emlrtIntegerCheckR2012b(d18, &mb_emlrtDCI, sp);
        }

        i3 = (int32_T)d18;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &bd_emlrtBCI, sp);
        }

        CR_H0_R_rho->data[(i2 + CR_H0_R_rho->size[0] * t) - 1] =
          (((CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] - c_im * d1)
            + d10 * -re * d2) + im * d5) - d12 * -b_re * d11;
        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &cd_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &dd_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ed_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &fd_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d19 != (int32_T)muDoubleScalarFloor(d19)) {
          emlrtIntegerCheckR2012b(d19, &nb_emlrtDCI, sp);
        }

        i2 = (int32_T)d19;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &gd_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d19 != (int32_T)muDoubleScalarFloor(d19)) {
          emlrtIntegerCheckR2012b(d19, &ob_emlrtDCI, sp);
        }

        i3 = (int32_T)d19;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &hd_emlrtBCI, sp);
        }

        st.site = &o_emlrtRSI;
        CR_H0_R_rho->data[(i2 + CR_H0_R_rho->size[0] * t) - 1] =
          (((CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] - d8 * P_R
             (x_w->data[g], XL1, P_I_Re[0] * (-h[5] - XL2), muDoubleScalarAbs
              (P_I_Im[0] * (-h[5] - XL2)))) - d9 * Q_R(x_w->data[g], XL1,
             P_I_Re[0] * (-h[5] - XL2), muDoubleScalarAbs(P_I_Im[0] * (-h[5] -
               XL2)))) + d14 * P_R(x_w->data[g], XL1, P_GB_Re[0] * (-h[5] - XL2),
            muDoubleScalarAbs(P_GB_Im[0] * (-h[5] - XL2)))) + d21 * Q_R
          (x_w->data[g], XL1, P_GB_Re[0] * (-h[5] - XL2), muDoubleScalarAbs
           (P_GB_Im[0] * (-h[5] - XL2)));
        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &id_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &jd_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &kd_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ld_emlrtBCI, sp);
        }

        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        alpha1 = A_I[loop_ub].re * B_I[t].re - A_I[loop_ub].im * B_I[t].im;
        c_im = A_I[loop_ub].re * B_I[t].im + A_I[loop_ub].im * B_I[t].re;
        if (c_im == 0.0) {
          c_im = 0.0;
        } else if (alpha1 == 0.0) {
          c_im /= 2.0;
        } else {
          c_im /= 2.0;
        }

        if (c_im == 0.0) {
          c_im = 0.0;
        } else {
          c_im /= 3.1415926535897931;
        }

        st.site = &p_emlrtRSI;
        d1 = Q_R(x_w->data[g], XL1, P_I_Re[0] * (-h[5] - XL2), muDoubleScalarAbs
                 (P_I_Im[0] * (-h[5] - XL2)));
        alpha1 = A_I[loop_ub].re * B_I[t].re - A_I[loop_ub].im * B_I[t].im;
        im = A_I[loop_ub].re * B_I[t].im + A_I[loop_ub].im * B_I[t].re;
        if (im == 0.0) {
          re = alpha1 / 2.0;
          im = 0.0;
        } else if (alpha1 == 0.0) {
          re = 0.0;
          im /= 2.0;
        } else {
          re = alpha1 / 2.0;
          im /= 2.0;
        }

        if (im == 0.0) {
          re /= 3.1415926535897931;
        } else if (re == 0.0) {
          re = 0.0;
        } else {
          re /= 3.1415926535897931;
        }

        st.site = &p_emlrtRSI;
        d2 = P_R(x_w->data[g], XL1, P_I_Re[0] * (-h[5] - XL2), muDoubleScalarAbs
                 (P_I_Im[0] * (-h[5] - XL2)));
        b_re = A_GB[loop_ub].re * B_GB[t].re - A_GB[loop_ub].im * B_GB[t].im;
        im = A_GB[loop_ub].re * B_GB[t].im + A_GB[loop_ub].im * B_GB[t].re;
        if (im == 0.0) {
          im = 0.0;
        } else if (b_re == 0.0) {
          im /= 2.0;
        } else {
          im /= 2.0;
        }

        if (im == 0.0) {
          im = 0.0;
        } else {
          im /= 3.1415926535897931;
        }

        st.site = &p_emlrtRSI;
        d5 = Q_R(x_w->data[g], XL1, P_GB_Re[0] * (-h[5] - XL2),
                 muDoubleScalarAbs(P_GB_Im[0] * (-h[5] - XL2)));
        b_re = A_GB[loop_ub].re * B_GB[t].re - A_GB[loop_ub].im * B_GB[t].im;
        b_im = A_GB[loop_ub].re * B_GB[t].im + A_GB[loop_ub].im * B_GB[t].re;
        if (b_im == 0.0) {
          b_re /= 2.0;
          b_im = 0.0;
        } else if (b_re == 0.0) {
          b_re = 0.0;
          b_im /= 2.0;
        } else {
          b_re /= 2.0;
          b_im /= 2.0;
        }

        if (b_im == 0.0) {
          b_re /= 3.1415926535897931;
        } else if (b_re == 0.0) {
          b_re = 0.0;
        } else {
          b_re /= 3.1415926535897931;
        }

        st.site = &p_emlrtRSI;
        d8 = P_R(x_w->data[g], XL1, P_GB_Re[0] * (-h[5] - XL2),
                 muDoubleScalarAbs(P_GB_Im[0] * (-h[5] - XL2)));
        i1 = CR_H0_R_rho->size[0];
        if (d26 != (int32_T)muDoubleScalarFloor(d26)) {
          emlrtIntegerCheckR2012b(d26, &pb_emlrtDCI, sp);
        }

        i2 = (int32_T)d26;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &md_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d26 != (int32_T)muDoubleScalarFloor(d26)) {
          emlrtIntegerCheckR2012b(d26, &qb_emlrtDCI, sp);
        }

        i3 = (int32_T)d26;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &nd_emlrtBCI, sp);
        }

        CR_H0_R_rho->data[(i2 + CR_H0_R_rho->size[0] * t) - 1] =
          (((CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] - c_im * d1)
            + d16 * -re * d2) + im * d5) - d17 * -b_re * d8;
        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &od_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &pd_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &qd_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &rd_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d27 != (int32_T)muDoubleScalarFloor(d27)) {
          emlrtIntegerCheckR2012b(d27, &rb_emlrtDCI, sp);
        }

        i2 = (int32_T)d27;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &sd_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d27 != (int32_T)muDoubleScalarFloor(d27)) {
          emlrtIntegerCheckR2012b(d27, &sb_emlrtDCI, sp);
        }

        i3 = (int32_T)d27;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &td_emlrtBCI, sp);
        }

        st.site = &q_emlrtRSI;
        CR_H0_R_rho->data[(i2 + CR_H0_R_rho->size[0] * t) - 1] =
          (((CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] - d14 * P_R
             (x_w->data[g], XL1, P_GB_Re[0] * (-h[10] - XL2), muDoubleScalarAbs
              (P_GB_Im[0] * (-h[10] - XL2)))) - d15 * Q_R(x_w->data[g], XL1,
             P_GB_Re[0] * (-h[10] - XL2), muDoubleScalarAbs(P_GB_Im[0] * (-h[10]
               - XL2)))) + d22 * P_R(x_w->data[g], XL1, P_II_Re[0] * (-h[10] -
             XL2), muDoubleScalarAbs(P_II_Im[0] * (-h[10] - XL2)))) + d29 * Q_R
          (x_w->data[g], XL1, P_II_Re[0] * (-h[10] - XL2), muDoubleScalarAbs
           (P_II_Im[0] * (-h[10] - XL2)));
        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ud_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &vd_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &wd_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &xd_emlrtBCI, sp);
        }

        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        alpha1 = A_GB[loop_ub].re * B_GB[t].re - A_GB[loop_ub].im * B_GB[t].im;
        c_im = A_GB[loop_ub].re * B_GB[t].im + A_GB[loop_ub].im * B_GB[t].re;
        if (c_im == 0.0) {
          c_im = 0.0;
        } else if (alpha1 == 0.0) {
          c_im /= 2.0;
        } else {
          c_im /= 2.0;
        }

        if (c_im == 0.0) {
          c_im = 0.0;
        } else {
          c_im /= 3.1415926535897931;
        }

        st.site = &r_emlrtRSI;
        d1 = Q_R(x_w->data[g], XL1, P_GB_Re[0] * (-h[10] - XL2),
                 muDoubleScalarAbs(P_GB_Im[0] * (-h[10] - XL2)));
        alpha1 = A_GB[loop_ub].re * B_GB[t].re - A_GB[loop_ub].im * B_GB[t].im;
        im = A_GB[loop_ub].re * B_GB[t].im + A_GB[loop_ub].im * B_GB[t].re;
        if (im == 0.0) {
          re = alpha1 / 2.0;
          im = 0.0;
        } else if (alpha1 == 0.0) {
          re = 0.0;
          im /= 2.0;
        } else {
          re = alpha1 / 2.0;
          im /= 2.0;
        }

        if (im == 0.0) {
          re /= 3.1415926535897931;
        } else if (re == 0.0) {
          re = 0.0;
        } else {
          re /= 3.1415926535897931;
        }

        st.site = &r_emlrtRSI;
        d2 = P_R(x_w->data[g], XL1, P_GB_Re[0] * (-h[10] - XL2),
                 muDoubleScalarAbs(P_GB_Im[0] * (-h[10] - XL2)));
        b_re = A_II[loop_ub].re * B_II[t].re - A_II[loop_ub].im * B_II[t].im;
        im = A_II[loop_ub].re * B_II[t].im + A_II[loop_ub].im * B_II[t].re;
        if (im == 0.0) {
          im = 0.0;
        } else if (b_re == 0.0) {
          im /= 2.0;
        } else {
          im /= 2.0;
        }

        if (im == 0.0) {
          im = 0.0;
        } else {
          im /= 3.1415926535897931;
        }

        st.site = &r_emlrtRSI;
        d5 = Q_R(x_w->data[g], XL1, P_II_Re[0] * (-h[10] - XL2),
                 muDoubleScalarAbs(P_II_Im[0] * (-h[10] - XL2)));
        b_re = A_II[loop_ub].re * B_II[t].re - A_II[loop_ub].im * B_II[t].im;
        b_im = A_II[loop_ub].re * B_II[t].im + A_II[loop_ub].im * B_II[t].re;
        if (b_im == 0.0) {
          b_re /= 2.0;
          b_im = 0.0;
        } else if (b_re == 0.0) {
          b_re = 0.0;
          b_im /= 2.0;
        } else {
          b_re /= 2.0;
          b_im /= 2.0;
        }

        if (b_im == 0.0) {
          b_re /= 3.1415926535897931;
        } else if (b_re == 0.0) {
          b_re = 0.0;
        } else {
          b_re /= 3.1415926535897931;
        }

        st.site = &r_emlrtRSI;
        d8 = P_R(x_w->data[g], XL1, P_II_Re[0] * (-h[10] - XL2),
                 muDoubleScalarAbs(P_II_Im[0] * (-h[10] - XL2)));
        i1 = CR_H0_R_rho->size[0];
        if (d34 != (int32_T)muDoubleScalarFloor(d34)) {
          emlrtIntegerCheckR2012b(d34, &tb_emlrtDCI, sp);
        }

        i2 = (int32_T)d34;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &yd_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d34 != (int32_T)muDoubleScalarFloor(d34)) {
          emlrtIntegerCheckR2012b(d34, &ub_emlrtDCI, sp);
        }

        i3 = (int32_T)d34;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &ae_emlrtBCI, sp);
        }

        CR_H0_R_rho->data[(i2 + CR_H0_R_rho->size[0] * t) - 1] =
          (((CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] - c_im * d1)
            + d24 * -re * d2) + im * d5) - d25 * -b_re * d8;
        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &be_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ce_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &de_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ee_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d35 != (int32_T)muDoubleScalarFloor(d35)) {
          emlrtIntegerCheckR2012b(d35, &vb_emlrtDCI, sp);
        }

        i2 = (int32_T)d35;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &fe_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d35 != (int32_T)muDoubleScalarFloor(d35)) {
          emlrtIntegerCheckR2012b(d35, &wb_emlrtDCI, sp);
        }

        i3 = (int32_T)d35;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &ge_emlrtBCI, sp);
        }

        st.site = &s_emlrtRSI;
        CR_H0_R_rho->data[(i2 + CR_H0_R_rho->size[0] * t) - 1] =
          (((CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] - d22 * P_R
             (x_w->data[g], XL1, P_II_Re[0] * (-h[15] - XL2), muDoubleScalarAbs
              (P_II_Im[0] * (-h[15] - XL2)))) - d23 * Q_R(x_w->data[g], XL1,
             P_II_Re[0] * (-h[15] - XL2), muDoubleScalarAbs(P_II_Im[0] * (-h[15]
               - XL2)))) + d4 * P_R(x_w->data[g], XL1, P_SL_Re[0] * (-h[15] -
             XL2), muDoubleScalarAbs(P_SL_Im[0] * (-h[15] - XL2)))) + d32 * Q_R
          (x_w->data[g], XL1, P_SL_Re[0] * (-h[15] - XL2), muDoubleScalarAbs
           (P_SL_Im[0] * (-h[15] - XL2)));
        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &he_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ie_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &je_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ke_emlrtBCI, sp);
        }

        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        alpha1 = A_II[loop_ub].re * B_II[t].re - A_II[loop_ub].im * B_II[t].im;
        c_im = A_II[loop_ub].re * B_II[t].im + A_II[loop_ub].im * B_II[t].re;
        if (c_im == 0.0) {
          c_im = 0.0;
        } else if (alpha1 == 0.0) {
          c_im /= 2.0;
        } else {
          c_im /= 2.0;
        }

        if (c_im == 0.0) {
          c_im = 0.0;
        } else {
          c_im /= 3.1415926535897931;
        }

        st.site = &t_emlrtRSI;
        d1 = Q_R(x_w->data[g], XL1, P_II_Re[0] * (-h[15] - XL2),
                 muDoubleScalarAbs(P_II_Im[0] * (-h[15] - XL2)));
        alpha1 = A_II[loop_ub].re * B_II[t].re - A_II[loop_ub].im * B_II[t].im;
        beta1 = A_II[loop_ub].re * B_II[t].im + A_II[loop_ub].im * B_II[t].re;
        if (beta1 == 0.0) {
          c_re = alpha1 / 2.0;
          beta1 = 0.0;
        } else if (alpha1 == 0.0) {
          c_re = 0.0;
          beta1 /= 2.0;
        } else {
          c_re = alpha1 / 2.0;
          beta1 /= 2.0;
        }

        if (beta1 == 0.0) {
          c_re /= 3.1415926535897931;
        } else if (c_re == 0.0) {
          c_re = 0.0;
        } else {
          c_re /= 3.1415926535897931;
        }

        st.site = &t_emlrtRSI;
        d2 = P_R(x_w->data[g], XL1, P_II_Re[0] * (-h[15] - XL2),
                 muDoubleScalarAbs(P_II_Im[0] * (-h[15] - XL2)));
        d_re = A_SL[loop_ub].re * B_SL[t].re - A_SL[loop_ub].im * B_SL[t].im;
        beta1 = A_SL[loop_ub].re * B_SL[t].im + A_SL[loop_ub].im * B_SL[t].re;
        if (beta1 == 0.0) {
          beta1 = 0.0;
        } else if (d_re == 0.0) {
          beta1 /= 2.0;
        } else {
          beta1 /= 2.0;
        }

        if (beta1 == 0.0) {
          beta1 = 0.0;
        } else {
          beta1 /= 3.1415926535897931;
        }

        st.site = &t_emlrtRSI;
        d4 = Q_R(x_w->data[g], XL1, P_SL_Re[0] * (-h[15] - XL2),
                 muDoubleScalarAbs(P_SL_Im[0] * (-h[15] - XL2)));
        d_re = A_SL[loop_ub].re * B_SL[t].re - A_SL[loop_ub].im * B_SL[t].im;
        im = A_SL[loop_ub].re * B_SL[t].im + A_SL[loop_ub].im * B_SL[t].re;
        if (im == 0.0) {
          re = d_re / 2.0;
          im = 0.0;
        } else if (d_re == 0.0) {
          re = 0.0;
          im /= 2.0;
        } else {
          re = d_re / 2.0;
          im /= 2.0;
        }

        if (im == 0.0) {
          re /= 3.1415926535897931;
        } else if (re == 0.0) {
          re = 0.0;
        } else {
          re /= 3.1415926535897931;
        }

        st.site = &t_emlrtRSI;
        d5 = P_R(x_w->data[g], XL1, P_SL_Re[0] * (-h[15] - XL2),
                 muDoubleScalarAbs(P_SL_Im[0] * (-h[15] - XL2)));
        i1 = CR_H0_R_rho->size[0];
        if (d37 != (int32_T)muDoubleScalarFloor(d37)) {
          emlrtIntegerCheckR2012b(d37, &xb_emlrtDCI, sp);
        }

        i2 = (int32_T)d37;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &le_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d37 != (int32_T)muDoubleScalarFloor(d37)) {
          emlrtIntegerCheckR2012b(d37, &yb_emlrtDCI, sp);
        }

        i3 = (int32_T)d37;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &me_emlrtBCI, sp);
        }

        CR_H0_R_rho->data[(i2 + CR_H0_R_rho->size[0] * t) - 1] =
          (((CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] - c_im * d1)
            + d30 * -c_re * d2) + beta1 * d4) - d31 * -re * d5;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
          emlrtIntegerCheckR2012b(d0, &k_emlrtDCI, sp);
        }

        i2 = (int32_T)d0;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &b_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
          emlrtIntegerCheckR2012b(d0, &l_emlrtDCI, sp);
        }

        i3 = (int32_T)d0;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &c_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &d_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &e_emlrtBCI, sp);
        }

        st.site = &emlrtRSI;
        d1 = Re_Xi(&st, 1.0 + (real_T)t, 2.0, 1.0 + (real_T)loop_ub, C_SU, P_SU,
                   A_SU, B_SU);
        st.site = &emlrtRSI;
        d2 = Im_Xi(&st, 1.0 + (real_T)t, 2.0, 1.0 + (real_T)loop_ub, C_SU, P_SU,
                   A_SU, B_SU);
        st.site = &emlrtRSI;
        zeros_30Napp_3->data[(i2 + zeros_30Napp_3->size[0] * t) - 1] =
          (zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] - d1 *
           Q_R(x_w->data[i4 - 1], XL1, -P_SU_Re[1] * XL2, -P_SU_Im[1] * XL2)) +
          d2 * P_R(x_w->data[i4 - 1], XL1, -P_SU_Re[1] * XL2, -P_SU_Im[1] * XL2);
        i1 = zeros_30Napp_3->size[0];
        if (d3 != (int32_T)muDoubleScalarFloor(d3)) {
          emlrtIntegerCheckR2012b(d3, &m_emlrtDCI, sp);
        }

        i2 = (int32_T)d3;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &f_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d3 != (int32_T)muDoubleScalarFloor(d3)) {
          emlrtIntegerCheckR2012b(d3, &n_emlrtDCI, sp);
        }

        i3 = (int32_T)d3;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &g_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &h_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &i_emlrtBCI, sp);
        }

        st.site = &b_emlrtRSI;
        d4 = Re_Xi(&st, 1.0 + (real_T)t, 2.0, 1.0 + (real_T)loop_ub, C_SL, P_SL,
                   A_SL, B_SL);
        st.site = &b_emlrtRSI;
        d5 = Im_Xi(&st, 1.0 + (real_T)t, 2.0, 1.0 + (real_T)loop_ub, C_SL, P_SL,
                   A_SL, B_SL);
        st.site = &b_emlrtRSI;
        zeros_30Napp_3->data[(i2 + zeros_30Napp_3->size[0] * t) - 1] =
          (zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] - d4 *
           Q_R(x_w->data[i4 - 1], XL1, P_SL_Re[1] * (-h[20] - XL2), -P_SL_Im[1] *
               (-h[20] - XL2))) - d5 * P_R(x_w->data[i4 - 1], XL1, P_SL_Re[1] *
          (-h[20] - XL2), -P_SL_Im[1] * (-h[20] - XL2));
        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &j_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &k_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &l_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &m_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d6 != (int32_T)muDoubleScalarFloor(d6)) {
          emlrtIntegerCheckR2012b(d6, &o_emlrtDCI, sp);
        }

        i2 = (int32_T)d6;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &n_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d6 != (int32_T)muDoubleScalarFloor(d6)) {
          emlrtIntegerCheckR2012b(d6, &p_emlrtDCI, sp);
        }

        i3 = (int32_T)d6;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &o_emlrtBCI, sp);
        }

        st.site = &c_emlrtRSI;
        d8 = Re_Xi(&st, 1.0 + (real_T)t, 2.0, 1.0 + (real_T)loop_ub, C_I, P_I,
                   A_I, B_I);
        st.site = &c_emlrtRSI;
        d9 = Im_Xi(&st, 1.0 + (real_T)t, 2.0, 1.0 + (real_T)loop_ub, C_I, P_I,
                   A_I, B_I);
        d10 = muDoubleScalarSign(P_SU_Im[1] * d7);
        d11 = d10 * d2;
        d12 = muDoubleScalarSign(P_I_Im[1] * d7);
        d13 = d12 * d9;
        st.site = &c_emlrtRSI;
        zeros_30Napp_3->data[(i2 + zeros_30Napp_3->size[0] * t) - 1] =
          (((zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] - d1 *
             Q_R(x_w->data[g], XL1, P_SU_Re[1] * (-h[0] - XL2),
                 muDoubleScalarAbs(P_SU_Im[1] * (-h[0] - XL2)))) + d11 * P_R
            (x_w->data[g], XL1, P_SU_Re[1] * (-h[0] - XL2), muDoubleScalarAbs
             (P_SU_Im[1] * (-h[0] - XL2)))) + d8 * Q_R(x_w->data[g], XL1,
            P_I_Re[1] * (-h[0] - XL2), muDoubleScalarAbs(P_I_Im[1] * (-h[0] -
              XL2)))) - d13 * P_R(x_w->data[g], XL1, P_I_Re[1] * (-h[0] - XL2),
          muDoubleScalarAbs(P_I_Im[1] * (-h[0] - XL2)));

        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        re = A_SU[loop_ub + 3].re;
        im = A_SU[loop_ub + 3].im;
        b_re = B_SU[t + 3].re;
        b_im = B_SU[t + 3].im;
        c_re = A_I[loop_ub + 3].re;
        beta1 = A_I[loop_ub + 3].im;
        d_re = B_I[t + 3].re;
        d_im = B_I[t + 3].im;
        alpha1 = re * b_re - im * b_im;
        im_tmp = re * b_im + im * b_re;
        if (im_tmp == 0.0) {
          im = 0.0;
        } else if (alpha1 == 0.0) {
          im = im_tmp / 2.0;
        } else {
          im = im_tmp / 2.0;
        }

        if (im == 0.0) {
          im = 0.0;
        } else {
          im /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &p_emlrtBCI, sp);
        }

        st.site = &d_emlrtRSI;
        d14 = P_R(x_w->data[i4 - 1], XL1, P_SU_Re[1] * (-h[0] - XL2), P_SU_Im[1]
                  * (-h[0] - XL2));
        if (im_tmp == 0.0) {
          re = alpha1 / 2.0;
          b_im = 0.0;
        } else if (alpha1 == 0.0) {
          re = 0.0;
          b_im = im_tmp / 2.0;
        } else {
          re = alpha1 / 2.0;
          b_im = im_tmp / 2.0;
        }

        if (b_im == 0.0) {
          re /= 3.1415926535897931;
        } else if (re == 0.0) {
          re = 0.0;
        } else {
          re /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &q_emlrtBCI, sp);
        }

        st.site = &d_emlrtRSI;
        d15 = Q_R(x_w->data[i4 - 1], XL1, P_SU_Re[1] * (-h[0] - XL2), P_SU_Im[1]
                  * (-h[0] - XL2));
        alpha1 = c_re * d_re - beta1 * d_im;
        im_tmp = c_re * d_im + beta1 * d_re;
        if (im_tmp == 0.0) {
          b_im = 0.0;
        } else if (alpha1 == 0.0) {
          b_im = im_tmp / 2.0;
        } else {
          b_im = im_tmp / 2.0;
        }

        if (b_im == 0.0) {
          b_im = 0.0;
        } else {
          b_im /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &r_emlrtBCI, sp);
        }

        st.site = &d_emlrtRSI;
        d16 = P_R(x_w->data[i4 - 1], XL1, P_I_Re[1] * (-h[0] - XL2), P_I_Im[1] *
                  (-h[0] - XL2));
        if (im_tmp == 0.0) {
          b_re = alpha1 / 2.0;
          beta1 = 0.0;
        } else if (alpha1 == 0.0) {
          b_re = 0.0;
          beta1 = im_tmp / 2.0;
        } else {
          b_re = alpha1 / 2.0;
          beta1 = im_tmp / 2.0;
        }

        if (beta1 == 0.0) {
          b_re /= 3.1415926535897931;
        } else if (b_re == 0.0) {
          b_re = 0.0;
        } else {
          b_re /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &s_emlrtBCI, sp);
        }

        st.site = &d_emlrtRSI;
        d17 = Q_R(x_w->data[i4 - 1], XL1, P_I_Re[1] * (-h[0] - XL2), P_I_Im[1] *
                  (-h[0] - XL2));
        i1 = zeros_30Napp_3->size[0];
        if (d18 != (int32_T)muDoubleScalarFloor(d18)) {
          emlrtIntegerCheckR2012b(d18, &q_emlrtDCI, sp);
        }

        i2 = (int32_T)d18;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &t_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d18 != (int32_T)muDoubleScalarFloor(d18)) {
          emlrtIntegerCheckR2012b(d18, &r_emlrtDCI, sp);
        }

        i3 = (int32_T)d18;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &u_emlrtBCI, sp);
        }

        zeros_30Napp_3->data[(i2 + zeros_30Napp_3->size[0] * t) - 1] =
          (((zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] + im *
             d14) + -re * d15) - b_im * d16) - -b_re * d17;
        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &v_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &w_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &x_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &y_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d19 != (int32_T)muDoubleScalarFloor(d19)) {
          emlrtIntegerCheckR2012b(d19, &s_emlrtDCI, sp);
        }

        i2 = (int32_T)d19;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ab_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d19 != (int32_T)muDoubleScalarFloor(d19)) {
          emlrtIntegerCheckR2012b(d19, &t_emlrtDCI, sp);
        }

        i3 = (int32_T)d19;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &bb_emlrtBCI, sp);
        }

        st.site = &e_emlrtRSI;
        d14 = Re_Xi(&st, 1.0 + (real_T)t, 2.0, 1.0 + (real_T)loop_ub, C_GB, P_GB,
                    A_GB, B_GB);
        st.site = &e_emlrtRSI;
        d15 = Im_Xi(&st, 1.0 + (real_T)t, 2.0, 1.0 + (real_T)loop_ub, C_GB, P_GB,
                    A_GB, B_GB);
        d16 = muDoubleScalarSign(P_I_Im[1] * d20);
        d9 *= d16;
        d17 = muDoubleScalarSign(P_GB_Im[1] * d20);
        d21 = d17 * d15;
        st.site = &e_emlrtRSI;
        zeros_30Napp_3->data[(i2 + zeros_30Napp_3->size[0] * t) - 1] =
          (((zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] - d8 *
             Q_R(x_w->data[g], XL1, P_I_Re[1] * (-h[5] - XL2), muDoubleScalarAbs
                 (P_I_Im[1] * (-h[5] - XL2)))) + d9 * P_R(x_w->data[g], XL1,
             P_I_Re[1] * (-h[5] - XL2), muDoubleScalarAbs(P_I_Im[1] * (-h[5] -
               XL2)))) + d14 * Q_R(x_w->data[g], XL1, P_GB_Re[1] * (-h[5] - XL2),
            muDoubleScalarAbs(P_GB_Im[1] * (-h[5] - XL2)))) - d21 * P_R
          (x_w->data[g], XL1, P_GB_Re[1] * (-h[5] - XL2), muDoubleScalarAbs
           (P_GB_Im[1] * (-h[5] - XL2)));

        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        re = A_I[loop_ub + 3].re;
        im = A_I[loop_ub + 3].im;
        b_re = B_I[t + 3].re;
        b_im = B_I[t + 3].im;
        c_re = A_GB[loop_ub + 3].re;
        beta1 = A_GB[loop_ub + 3].im;
        d_re = B_GB[t + 3].re;
        d_im = B_GB[t + 3].im;
        alpha1 = re * b_re - im * b_im;
        c_im = re * b_im + im * b_re;
        if (c_im == 0.0) {
          c_im = 0.0;
        } else if (alpha1 == 0.0) {
          c_im /= 2.0;
        } else {
          c_im /= 2.0;
        }

        if (c_im == 0.0) {
          c_im = 0.0;
        } else {
          c_im /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &cb_emlrtBCI, sp);
        }

        st.site = &f_emlrtRSI;
        d22 = P_R(x_w->data[i4 - 1], XL1, P_I_Re[1] * (-h[5] - XL2), P_I_Im[1] *
                  (-h[5] - XL2));
        alpha1 = re * b_re - im * b_im;
        im = re * b_im + im * b_re;
        if (im == 0.0) {
          re = alpha1 / 2.0;
          im = 0.0;
        } else if (alpha1 == 0.0) {
          re = 0.0;
          im /= 2.0;
        } else {
          re = alpha1 / 2.0;
          im /= 2.0;
        }

        if (im == 0.0) {
          re /= 3.1415926535897931;
        } else if (re == 0.0) {
          re = 0.0;
        } else {
          re /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &db_emlrtBCI, sp);
        }

        st.site = &f_emlrtRSI;
        d23 = Q_R(x_w->data[i4 - 1], XL1, P_I_Re[1] * (-h[5] - XL2), P_I_Im[1] *
                  (-h[5] - XL2));
        alpha1 = c_re * d_re - beta1 * d_im;
        im_tmp = c_re * d_im + beta1 * d_re;
        if (im_tmp == 0.0) {
          im = 0.0;
        } else if (alpha1 == 0.0) {
          im = im_tmp / 2.0;
        } else {
          im = im_tmp / 2.0;
        }

        if (im == 0.0) {
          im = 0.0;
        } else {
          im /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &eb_emlrtBCI, sp);
        }

        st.site = &f_emlrtRSI;
        d24 = P_R(x_w->data[i4 - 1], XL1, P_GB_Re[1] * (-h[5] - XL2), P_GB_Im[1]
                  * (-h[5] - XL2));
        if (im_tmp == 0.0) {
          b_re = alpha1 / 2.0;
          b_im = 0.0;
        } else if (alpha1 == 0.0) {
          b_re = 0.0;
          b_im = im_tmp / 2.0;
        } else {
          b_re = alpha1 / 2.0;
          b_im = im_tmp / 2.0;
        }

        if (b_im == 0.0) {
          b_re /= 3.1415926535897931;
        } else if (b_re == 0.0) {
          b_re = 0.0;
        } else {
          b_re /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &fb_emlrtBCI, sp);
        }

        st.site = &f_emlrtRSI;
        d25 = Q_R(x_w->data[i4 - 1], XL1, P_GB_Re[1] * (-h[5] - XL2), P_GB_Im[1]
                  * (-h[5] - XL2));
        i1 = zeros_30Napp_3->size[0];
        if (d26 != (int32_T)muDoubleScalarFloor(d26)) {
          emlrtIntegerCheckR2012b(d26, &u_emlrtDCI, sp);
        }

        i2 = (int32_T)d26;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &gb_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d26 != (int32_T)muDoubleScalarFloor(d26)) {
          emlrtIntegerCheckR2012b(d26, &v_emlrtDCI, sp);
        }

        i3 = (int32_T)d26;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &hb_emlrtBCI, sp);
        }

        zeros_30Napp_3->data[(i2 + zeros_30Napp_3->size[0] * t) - 1] =
          (((zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] + c_im
             * d22) + -re * d23) - im * d24) - -b_re * d25;
        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ib_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &jb_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &kb_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &lb_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d27 != (int32_T)muDoubleScalarFloor(d27)) {
          emlrtIntegerCheckR2012b(d27, &w_emlrtDCI, sp);
        }

        i2 = (int32_T)d27;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &mb_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d27 != (int32_T)muDoubleScalarFloor(d27)) {
          emlrtIntegerCheckR2012b(d27, &x_emlrtDCI, sp);
        }

        i3 = (int32_T)d27;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &nb_emlrtBCI, sp);
        }

        st.site = &g_emlrtRSI;
        d22 = Re_Xi(&st, 1.0 + (real_T)t, 2.0, 1.0 + (real_T)loop_ub, C_II, P_II,
                    A_II, B_II);
        st.site = &g_emlrtRSI;
        d23 = Im_Xi(&st, 1.0 + (real_T)t, 2.0, 1.0 + (real_T)loop_ub, C_II, P_II,
                    A_II, B_II);
        d24 = muDoubleScalarSign(P_GB_Im[1] * d28);
        d15 *= d24;
        d25 = muDoubleScalarSign(P_II_Im[1] * d28);
        d29 = d25 * d23;
        st.site = &g_emlrtRSI;
        zeros_30Napp_3->data[(i2 + zeros_30Napp_3->size[0] * t) - 1] =
          (((zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] - d14 *
             Q_R(x_w->data[g], XL1, P_GB_Re[1] * (-h[10] - XL2),
                 muDoubleScalarAbs(P_GB_Im[1] * (-h[10] - XL2)))) + d15 * P_R
            (x_w->data[g], XL1, P_GB_Re[1] * (-h[10] - XL2), muDoubleScalarAbs
             (P_GB_Im[1] * (-h[10] - XL2)))) + d22 * Q_R(x_w->data[g], XL1,
            P_II_Re[1] * (-h[10] - XL2), muDoubleScalarAbs(P_II_Im[1] * (-h[10]
              - XL2)))) - d29 * P_R(x_w->data[g], XL1, P_II_Re[1] * (-h[10] -
          XL2), muDoubleScalarAbs(P_II_Im[1] * (-h[10] - XL2)));

        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        re = A_GB[loop_ub + 3].re;
        im = A_GB[loop_ub + 3].im;
        b_re = B_GB[t + 3].re;
        b_im = B_GB[t + 3].im;
        c_re = A_II[loop_ub + 3].re;
        beta1 = A_II[loop_ub + 3].im;
        d_re = B_II[t + 3].re;
        d_im = B_II[t + 3].im;
        alpha1 = re * b_re - im * b_im;
        c_im = re * b_im + im * b_re;
        if (c_im == 0.0) {
          c_im = 0.0;
        } else if (alpha1 == 0.0) {
          c_im /= 2.0;
        } else {
          c_im /= 2.0;
        }

        if (c_im == 0.0) {
          c_im = 0.0;
        } else {
          c_im /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &ob_emlrtBCI, sp);
        }

        st.site = &h_emlrtRSI;
        d30 = P_R(x_w->data[i4 - 1], XL1, P_GB_Re[1] * (-h[10] - XL2), P_GB_Im[1]
                  * (-h[10] - XL2));
        alpha1 = re * b_re - im * b_im;
        im = re * b_im + im * b_re;
        if (im == 0.0) {
          re = alpha1 / 2.0;
          im = 0.0;
        } else if (alpha1 == 0.0) {
          re = 0.0;
          im /= 2.0;
        } else {
          re = alpha1 / 2.0;
          im /= 2.0;
        }

        if (im == 0.0) {
          re /= 3.1415926535897931;
        } else if (re == 0.0) {
          re = 0.0;
        } else {
          re /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &pb_emlrtBCI, sp);
        }

        st.site = &h_emlrtRSI;
        d31 = Q_R(x_w->data[i4 - 1], XL1, P_GB_Re[1] * (-h[10] - XL2), P_GB_Im[1]
                  * (-h[10] - XL2));
        alpha1 = c_re * d_re - beta1 * d_im;
        im_tmp = c_re * d_im + beta1 * d_re;
        if (im_tmp == 0.0) {
          im = 0.0;
        } else if (alpha1 == 0.0) {
          im = im_tmp / 2.0;
        } else {
          im = im_tmp / 2.0;
        }

        if (im == 0.0) {
          im = 0.0;
        } else {
          im /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &qb_emlrtBCI, sp);
        }

        st.site = &h_emlrtRSI;
        d32 = P_R(x_w->data[i4 - 1], XL1, P_II_Re[1] * (-h[10] - XL2), P_II_Im[1]
                  * (-h[10] - XL2));
        if (im_tmp == 0.0) {
          b_re = alpha1 / 2.0;
          b_im = 0.0;
        } else if (alpha1 == 0.0) {
          b_re = 0.0;
          b_im = im_tmp / 2.0;
        } else {
          b_re = alpha1 / 2.0;
          b_im = im_tmp / 2.0;
        }

        if (b_im == 0.0) {
          b_re /= 3.1415926535897931;
        } else if (b_re == 0.0) {
          b_re = 0.0;
        } else {
          b_re /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &rb_emlrtBCI, sp);
        }

        st.site = &h_emlrtRSI;
        d33 = Q_R(x_w->data[i4 - 1], XL1, P_II_Re[1] * (-h[10] - XL2), P_II_Im[1]
                  * (-h[10] - XL2));
        i1 = zeros_30Napp_3->size[0];
        if (d34 != (int32_T)muDoubleScalarFloor(d34)) {
          emlrtIntegerCheckR2012b(d34, &y_emlrtDCI, sp);
        }

        i2 = (int32_T)d34;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &sb_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d34 != (int32_T)muDoubleScalarFloor(d34)) {
          emlrtIntegerCheckR2012b(d34, &ab_emlrtDCI, sp);
        }

        i3 = (int32_T)d34;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &tb_emlrtBCI, sp);
        }

        zeros_30Napp_3->data[(i2 + zeros_30Napp_3->size[0] * t) - 1] =
          (((zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] + c_im
             * d30) + -re * d31) - im * d32) - -b_re * d33;
        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ub_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &vb_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &wb_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &xb_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d35 != (int32_T)muDoubleScalarFloor(d35)) {
          emlrtIntegerCheckR2012b(d35, &bb_emlrtDCI, sp);
        }

        i2 = (int32_T)d35;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &yb_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d35 != (int32_T)muDoubleScalarFloor(d35)) {
          emlrtIntegerCheckR2012b(d35, &cb_emlrtDCI, sp);
        }

        i3 = (int32_T)d35;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &ac_emlrtBCI, sp);
        }

        d30 = muDoubleScalarSign(P_II_Im[1] * d36);
        d23 *= d30;
        d31 = muDoubleScalarSign(P_SL_Im[1] * d36);
        d32 = d31 * d5;
        st.site = &i_emlrtRSI;
        zeros_30Napp_3->data[(i2 + zeros_30Napp_3->size[0] * t) - 1] =
          (((zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] - d22 *
             Q_R(x_w->data[g], XL1, P_II_Re[1] * (-h[15] - XL2),
                 muDoubleScalarAbs(P_II_Im[1] * (-h[15] - XL2)))) + d23 * P_R
            (x_w->data[g], XL1, P_II_Re[1] * (-h[15] - XL2), muDoubleScalarAbs
             (P_II_Im[1] * (-h[15] - XL2)))) + d4 * Q_R(x_w->data[g], XL1,
            P_SL_Re[1] * (-h[15] - XL2), muDoubleScalarAbs(P_SL_Im[1] * (-h[15]
              - XL2)))) - d32 * P_R(x_w->data[g], XL1, P_SL_Re[1] * (-h[15] -
          XL2), muDoubleScalarAbs(P_SL_Im[1] * (-h[15] - XL2)));

        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        re = A_SL[loop_ub + 3].re;
        im = A_SL[loop_ub + 3].im;
        b_re = B_SL[t + 3].re;
        b_im = B_SL[t + 3].im;
        c_re = A_II[loop_ub + 3].re;
        beta1 = A_II[loop_ub + 3].im;
        d_re = B_II[t + 3].re;
        d_im = B_II[t + 3].im;
        alpha1 = c_re * d_re - beta1 * d_im;
        c_im = c_re * d_im + beta1 * d_re;
        if (c_im == 0.0) {
          c_im = 0.0;
        } else if (alpha1 == 0.0) {
          c_im /= 2.0;
        } else {
          c_im /= 2.0;
        }

        if (c_im == 0.0) {
          c_im = 0.0;
        } else {
          c_im /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &bc_emlrtBCI, sp);
        }

        st.site = &j_emlrtRSI;
        d33 = P_R(x_w->data[i4 - 1], XL1, P_II_Re[1] * (-h[15] - XL2), P_II_Im[1]
                  * (-h[15] - XL2));
        alpha1 = c_re * d_re - beta1 * d_im;
        beta1 = c_re * d_im + beta1 * d_re;
        if (beta1 == 0.0) {
          c_re = alpha1 / 2.0;
          beta1 = 0.0;
        } else if (alpha1 == 0.0) {
          c_re = 0.0;
          beta1 /= 2.0;
        } else {
          c_re = alpha1 / 2.0;
          beta1 /= 2.0;
        }

        if (beta1 == 0.0) {
          c_re /= 3.1415926535897931;
        } else if (c_re == 0.0) {
          c_re = 0.0;
        } else {
          c_re /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &cc_emlrtBCI, sp);
        }

        st.site = &j_emlrtRSI;
        d_re = Q_R(x_w->data[i4 - 1], XL1, P_II_Re[1] * (-h[15] - XL2), P_II_Im
                   [1] * (-h[15] - XL2));
        alpha1 = re * b_re - im * b_im;
        im_tmp = re * b_im + im * b_re;
        if (im_tmp == 0.0) {
          im = 0.0;
        } else if (alpha1 == 0.0) {
          im = im_tmp / 2.0;
        } else {
          im = im_tmp / 2.0;
        }

        if (im == 0.0) {
          im = 0.0;
        } else {
          im /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &dc_emlrtBCI, sp);
        }

        st.site = &j_emlrtRSI;
        beta1 = P_R(x_w->data[i4 - 1], XL1, P_SL_Re[1] * (-h[15] - XL2),
                    P_SL_Im[1] * (-h[15] - XL2));
        if (im_tmp == 0.0) {
          re = alpha1 / 2.0;
          b_im = 0.0;
        } else if (alpha1 == 0.0) {
          re = 0.0;
          b_im = im_tmp / 2.0;
        } else {
          re = alpha1 / 2.0;
          b_im = im_tmp / 2.0;
        }

        if (b_im == 0.0) {
          re /= 3.1415926535897931;
        } else if (re == 0.0) {
          re = 0.0;
        } else {
          re /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &ec_emlrtBCI, sp);
        }

        st.site = &j_emlrtRSI;
        alpha1 = Q_R(x_w->data[i4 - 1], XL1, P_SL_Re[1] * (-h[15] - XL2),
                     P_SL_Im[1] * (-h[15] - XL2));
        i1 = zeros_30Napp_3->size[0];
        if (d37 != (int32_T)muDoubleScalarFloor(d37)) {
          emlrtIntegerCheckR2012b(d37, &db_emlrtDCI, sp);
        }

        i2 = (int32_T)d37;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &fc_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d37 != (int32_T)muDoubleScalarFloor(d37)) {
          emlrtIntegerCheckR2012b(d37, &eb_emlrtDCI, sp);
        }

        i3 = (int32_T)d37;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &gc_emlrtBCI, sp);
        }

        zeros_30Napp_3->data[(i2 + zeros_30Napp_3->size[0] * t) - 1] =
          (((zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] + c_im
             * d33) + -c_re * d_re) - im * beta1) - -re * alpha1;
        i1 = CR_H0_R_rho->size[0];
        if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
          emlrtIntegerCheckR2012b(d0, &fb_emlrtDCI, sp);
        }

        i2 = (int32_T)d0;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &hc_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
          emlrtIntegerCheckR2012b(d0, &gb_emlrtDCI, sp);
        }

        i3 = (int32_T)d0;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &ic_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &jc_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &kc_emlrtBCI, sp);
        }

        st.site = &k_emlrtRSI;
        CR_H0_R_rho->data[(i2 + CR_H0_R_rho->size[0] * t) - 1] =
          (CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] - d1 * P_R
           (x_w->data[i4 - 1], XL1, -P_SU_Re[1] * XL2, -P_SU_Im[1] * XL2)) - d2 *
          Q_R(x_w->data[i4 - 1], XL1, -P_SU_Re[1] * XL2, -P_SU_Im[1] * XL2);
        i1 = CR_H0_R_rho->size[0];
        if (d3 != (int32_T)muDoubleScalarFloor(d3)) {
          emlrtIntegerCheckR2012b(d3, &hb_emlrtDCI, sp);
        }

        i2 = (int32_T)d3;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &lc_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d3 != (int32_T)muDoubleScalarFloor(d3)) {
          emlrtIntegerCheckR2012b(d3, &ib_emlrtDCI, sp);
        }

        i3 = (int32_T)d3;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &mc_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &nc_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &oc_emlrtBCI, sp);
        }

        st.site = &l_emlrtRSI;
        CR_H0_R_rho->data[(i2 + CR_H0_R_rho->size[0] * t) - 1] =
          (CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] - d4 * P_R
           (x_w->data[i4 - 1], XL1, P_SL_Re[1] * (-h[20] - XL2), -P_SL_Im[1] * (
             -h[20] - XL2))) + d5 * Q_R(x_w->data[i4 - 1], XL1, P_SL_Re[1] *
          (-h[20] - XL2), -P_SL_Im[1] * (-h[20] - XL2));
        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &pc_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &qc_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &rc_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &sc_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d6 != (int32_T)muDoubleScalarFloor(d6)) {
          emlrtIntegerCheckR2012b(d6, &jb_emlrtDCI, sp);
        }

        i2 = (int32_T)d6;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &tc_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d6 != (int32_T)muDoubleScalarFloor(d6)) {
          emlrtIntegerCheckR2012b(d6, &kb_emlrtDCI, sp);
        }

        i3 = (int32_T)d6;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &uc_emlrtBCI, sp);
        }

        st.site = &m_emlrtRSI;
        CR_H0_R_rho->data[(i2 + CR_H0_R_rho->size[0] * t) - 1] =
          (((CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] - d1 * P_R
             (x_w->data[g], XL1, P_SU_Re[1] * (-h[0] - XL2), muDoubleScalarAbs
              (P_SU_Im[1] * (-h[0] - XL2)))) - d11 * Q_R(x_w->data[g], XL1,
             P_SU_Re[1] * (-h[0] - XL2), muDoubleScalarAbs(P_SU_Im[1] * (-h[0] -
               XL2)))) + d8 * P_R(x_w->data[g], XL1, P_I_Re[1] * (-h[0] - XL2),
            muDoubleScalarAbs(P_I_Im[1] * (-h[0] - XL2)))) + d13 * Q_R(x_w->
          data[g], XL1, P_I_Re[1] * (-h[0] - XL2), muDoubleScalarAbs(P_I_Im[1] *
          (-h[0] - XL2)));
        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &vc_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &wc_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &xc_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &yc_emlrtBCI, sp);
        }

        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        re = A_SU[loop_ub + 3].re;
        im = A_SU[loop_ub + 3].im;
        b_re = B_SU[t + 3].re;
        b_im = B_SU[t + 3].im;
        c_re = A_I[loop_ub + 3].re;
        beta1 = A_I[loop_ub + 3].im;
        d_re = B_I[t + 3].re;
        d_im = B_I[t + 3].im;
        alpha1 = re * b_re - im * b_im;
        c_im = re * b_im + im * b_re;
        if (c_im == 0.0) {
          c_im = 0.0;
        } else if (alpha1 == 0.0) {
          c_im /= 2.0;
        } else {
          c_im /= 2.0;
        }

        if (c_im == 0.0) {
          c_im = 0.0;
        } else {
          c_im /= 3.1415926535897931;
        }

        st.site = &n_emlrtRSI;
        d1 = Q_R(x_w->data[g], XL1, P_SU_Re[1] * (-h[0] - XL2),
                 muDoubleScalarAbs(P_SU_Im[1] * (-h[0] - XL2)));
        alpha1 = re * b_re - im * b_im;
        im = re * b_im + im * b_re;
        if (im == 0.0) {
          re = alpha1 / 2.0;
          im = 0.0;
        } else if (alpha1 == 0.0) {
          re = 0.0;
          im /= 2.0;
        } else {
          re = alpha1 / 2.0;
          im /= 2.0;
        }

        if (im == 0.0) {
          re /= 3.1415926535897931;
        } else if (re == 0.0) {
          re = 0.0;
        } else {
          re /= 3.1415926535897931;
        }

        st.site = &n_emlrtRSI;
        d2 = P_R(x_w->data[g], XL1, P_SU_Re[1] * (-h[0] - XL2),
                 muDoubleScalarAbs(P_SU_Im[1] * (-h[0] - XL2)));
        b_re = c_re * d_re - beta1 * d_im;
        im = c_re * d_im + beta1 * d_re;
        if (im == 0.0) {
          im = 0.0;
        } else if (b_re == 0.0) {
          im /= 2.0;
        } else {
          im /= 2.0;
        }

        if (im == 0.0) {
          im = 0.0;
        } else {
          im /= 3.1415926535897931;
        }

        st.site = &n_emlrtRSI;
        d5 = Q_R(x_w->data[g], XL1, P_I_Re[1] * (-h[0] - XL2), muDoubleScalarAbs
                 (P_I_Im[1] * (-h[0] - XL2)));
        b_re = c_re * d_re - beta1 * d_im;
        b_im = c_re * d_im + beta1 * d_re;
        if (b_im == 0.0) {
          b_re /= 2.0;
          b_im = 0.0;
        } else if (b_re == 0.0) {
          b_re = 0.0;
          b_im /= 2.0;
        } else {
          b_re /= 2.0;
          b_im /= 2.0;
        }

        if (b_im == 0.0) {
          b_re /= 3.1415926535897931;
        } else if (b_re == 0.0) {
          b_re = 0.0;
        } else {
          b_re /= 3.1415926535897931;
        }

        st.site = &n_emlrtRSI;
        d11 = P_R(x_w->data[g], XL1, P_I_Re[1] * (-h[0] - XL2),
                  muDoubleScalarAbs(P_I_Im[1] * (-h[0] - XL2)));
        i1 = CR_H0_R_rho->size[0];
        if (d18 != (int32_T)muDoubleScalarFloor(d18)) {
          emlrtIntegerCheckR2012b(d18, &lb_emlrtDCI, sp);
        }

        i2 = (int32_T)d18;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ad_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d18 != (int32_T)muDoubleScalarFloor(d18)) {
          emlrtIntegerCheckR2012b(d18, &mb_emlrtDCI, sp);
        }

        i3 = (int32_T)d18;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &bd_emlrtBCI, sp);
        }

        CR_H0_R_rho->data[(i2 + CR_H0_R_rho->size[0] * t) - 1] =
          (((CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] - c_im * d1)
            + d10 * -re * d2) + im * d5) - d12 * -b_re * d11;
        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &cd_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &dd_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ed_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &fd_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d19 != (int32_T)muDoubleScalarFloor(d19)) {
          emlrtIntegerCheckR2012b(d19, &nb_emlrtDCI, sp);
        }

        i2 = (int32_T)d19;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &gd_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d19 != (int32_T)muDoubleScalarFloor(d19)) {
          emlrtIntegerCheckR2012b(d19, &ob_emlrtDCI, sp);
        }

        i3 = (int32_T)d19;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &hd_emlrtBCI, sp);
        }

        st.site = &o_emlrtRSI;
        CR_H0_R_rho->data[(i2 + CR_H0_R_rho->size[0] * t) - 1] =
          (((CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] - d8 * P_R
             (x_w->data[g], XL1, P_I_Re[1] * (-h[5] - XL2), muDoubleScalarAbs
              (P_I_Im[1] * (-h[5] - XL2)))) - d9 * Q_R(x_w->data[g], XL1,
             P_I_Re[1] * (-h[5] - XL2), muDoubleScalarAbs(P_I_Im[1] * (-h[5] -
               XL2)))) + d14 * P_R(x_w->data[g], XL1, P_GB_Re[1] * (-h[5] - XL2),
            muDoubleScalarAbs(P_GB_Im[1] * (-h[5] - XL2)))) + d21 * Q_R
          (x_w->data[g], XL1, P_GB_Re[1] * (-h[5] - XL2), muDoubleScalarAbs
           (P_GB_Im[1] * (-h[5] - XL2)));
        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &id_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &jd_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &kd_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ld_emlrtBCI, sp);
        }

        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        re = A_I[loop_ub + 3].re;
        im = A_I[loop_ub + 3].im;
        b_re = B_I[t + 3].re;
        b_im = B_I[t + 3].im;
        c_re = A_GB[loop_ub + 3].re;
        beta1 = A_GB[loop_ub + 3].im;
        d_re = B_GB[t + 3].re;
        d_im = B_GB[t + 3].im;
        alpha1 = re * b_re - im * b_im;
        c_im = re * b_im + im * b_re;
        if (c_im == 0.0) {
          c_im = 0.0;
        } else if (alpha1 == 0.0) {
          c_im /= 2.0;
        } else {
          c_im /= 2.0;
        }

        if (c_im == 0.0) {
          c_im = 0.0;
        } else {
          c_im /= 3.1415926535897931;
        }

        st.site = &p_emlrtRSI;
        d1 = Q_R(x_w->data[g], XL1, P_I_Re[1] * (-h[5] - XL2), muDoubleScalarAbs
                 (P_I_Im[1] * (-h[5] - XL2)));
        alpha1 = re * b_re - im * b_im;
        im = re * b_im + im * b_re;
        if (im == 0.0) {
          re = alpha1 / 2.0;
          im = 0.0;
        } else if (alpha1 == 0.0) {
          re = 0.0;
          im /= 2.0;
        } else {
          re = alpha1 / 2.0;
          im /= 2.0;
        }

        if (im == 0.0) {
          re /= 3.1415926535897931;
        } else if (re == 0.0) {
          re = 0.0;
        } else {
          re /= 3.1415926535897931;
        }

        st.site = &p_emlrtRSI;
        d2 = P_R(x_w->data[g], XL1, P_I_Re[1] * (-h[5] - XL2), muDoubleScalarAbs
                 (P_I_Im[1] * (-h[5] - XL2)));
        b_re = c_re * d_re - beta1 * d_im;
        im = c_re * d_im + beta1 * d_re;
        if (im == 0.0) {
          im = 0.0;
        } else if (b_re == 0.0) {
          im /= 2.0;
        } else {
          im /= 2.0;
        }

        if (im == 0.0) {
          im = 0.0;
        } else {
          im /= 3.1415926535897931;
        }

        st.site = &p_emlrtRSI;
        d5 = Q_R(x_w->data[g], XL1, P_GB_Re[1] * (-h[5] - XL2),
                 muDoubleScalarAbs(P_GB_Im[1] * (-h[5] - XL2)));
        b_re = c_re * d_re - beta1 * d_im;
        b_im = c_re * d_im + beta1 * d_re;
        if (b_im == 0.0) {
          b_re /= 2.0;
          b_im = 0.0;
        } else if (b_re == 0.0) {
          b_re = 0.0;
          b_im /= 2.0;
        } else {
          b_re /= 2.0;
          b_im /= 2.0;
        }

        if (b_im == 0.0) {
          b_re /= 3.1415926535897931;
        } else if (b_re == 0.0) {
          b_re = 0.0;
        } else {
          b_re /= 3.1415926535897931;
        }

        st.site = &p_emlrtRSI;
        d8 = P_R(x_w->data[g], XL1, P_GB_Re[1] * (-h[5] - XL2),
                 muDoubleScalarAbs(P_GB_Im[1] * (-h[5] - XL2)));
        i1 = CR_H0_R_rho->size[0];
        if (d26 != (int32_T)muDoubleScalarFloor(d26)) {
          emlrtIntegerCheckR2012b(d26, &pb_emlrtDCI, sp);
        }

        i2 = (int32_T)d26;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &md_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d26 != (int32_T)muDoubleScalarFloor(d26)) {
          emlrtIntegerCheckR2012b(d26, &qb_emlrtDCI, sp);
        }

        i3 = (int32_T)d26;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &nd_emlrtBCI, sp);
        }

        CR_H0_R_rho->data[(i2 + CR_H0_R_rho->size[0] * t) - 1] =
          (((CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] - c_im * d1)
            + d16 * -re * d2) + im * d5) - d17 * -b_re * d8;
        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &od_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &pd_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &qd_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &rd_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d27 != (int32_T)muDoubleScalarFloor(d27)) {
          emlrtIntegerCheckR2012b(d27, &rb_emlrtDCI, sp);
        }

        i2 = (int32_T)d27;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &sd_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d27 != (int32_T)muDoubleScalarFloor(d27)) {
          emlrtIntegerCheckR2012b(d27, &sb_emlrtDCI, sp);
        }

        i3 = (int32_T)d27;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &td_emlrtBCI, sp);
        }

        st.site = &q_emlrtRSI;
        CR_H0_R_rho->data[(i2 + CR_H0_R_rho->size[0] * t) - 1] =
          (((CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] - d14 * P_R
             (x_w->data[g], XL1, P_GB_Re[1] * (-h[10] - XL2), muDoubleScalarAbs
              (P_GB_Im[1] * (-h[10] - XL2)))) - d15 * Q_R(x_w->data[g], XL1,
             P_GB_Re[1] * (-h[10] - XL2), muDoubleScalarAbs(P_GB_Im[1] * (-h[10]
               - XL2)))) + d22 * P_R(x_w->data[g], XL1, P_II_Re[1] * (-h[10] -
             XL2), muDoubleScalarAbs(P_II_Im[1] * (-h[10] - XL2)))) + d29 * Q_R
          (x_w->data[g], XL1, P_II_Re[1] * (-h[10] - XL2), muDoubleScalarAbs
           (P_II_Im[1] * (-h[10] - XL2)));
        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ud_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &vd_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &wd_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &xd_emlrtBCI, sp);
        }

        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        re = A_GB[loop_ub + 3].re;
        im = A_GB[loop_ub + 3].im;
        b_re = B_GB[t + 3].re;
        b_im = B_GB[t + 3].im;
        c_re = A_II[loop_ub + 3].re;
        beta1 = A_II[loop_ub + 3].im;
        d_re = B_II[t + 3].re;
        d_im = B_II[t + 3].im;
        alpha1 = re * b_re - im * b_im;
        c_im = re * b_im + im * b_re;
        if (c_im == 0.0) {
          c_im = 0.0;
        } else if (alpha1 == 0.0) {
          c_im /= 2.0;
        } else {
          c_im /= 2.0;
        }

        if (c_im == 0.0) {
          c_im = 0.0;
        } else {
          c_im /= 3.1415926535897931;
        }

        st.site = &r_emlrtRSI;
        d1 = Q_R(x_w->data[g], XL1, P_GB_Re[1] * (-h[10] - XL2),
                 muDoubleScalarAbs(P_GB_Im[1] * (-h[10] - XL2)));
        alpha1 = re * b_re - im * b_im;
        im = re * b_im + im * b_re;
        if (im == 0.0) {
          re = alpha1 / 2.0;
          im = 0.0;
        } else if (alpha1 == 0.0) {
          re = 0.0;
          im /= 2.0;
        } else {
          re = alpha1 / 2.0;
          im /= 2.0;
        }

        if (im == 0.0) {
          re /= 3.1415926535897931;
        } else if (re == 0.0) {
          re = 0.0;
        } else {
          re /= 3.1415926535897931;
        }

        st.site = &r_emlrtRSI;
        d2 = P_R(x_w->data[g], XL1, P_GB_Re[1] * (-h[10] - XL2),
                 muDoubleScalarAbs(P_GB_Im[1] * (-h[10] - XL2)));
        b_re = c_re * d_re - beta1 * d_im;
        im = c_re * d_im + beta1 * d_re;
        if (im == 0.0) {
          im = 0.0;
        } else if (b_re == 0.0) {
          im /= 2.0;
        } else {
          im /= 2.0;
        }

        if (im == 0.0) {
          im = 0.0;
        } else {
          im /= 3.1415926535897931;
        }

        st.site = &r_emlrtRSI;
        d5 = Q_R(x_w->data[g], XL1, P_II_Re[1] * (-h[10] - XL2),
                 muDoubleScalarAbs(P_II_Im[1] * (-h[10] - XL2)));
        b_re = c_re * d_re - beta1 * d_im;
        b_im = c_re * d_im + beta1 * d_re;
        if (b_im == 0.0) {
          b_re /= 2.0;
          b_im = 0.0;
        } else if (b_re == 0.0) {
          b_re = 0.0;
          b_im /= 2.0;
        } else {
          b_re /= 2.0;
          b_im /= 2.0;
        }

        if (b_im == 0.0) {
          b_re /= 3.1415926535897931;
        } else if (b_re == 0.0) {
          b_re = 0.0;
        } else {
          b_re /= 3.1415926535897931;
        }

        st.site = &r_emlrtRSI;
        d8 = P_R(x_w->data[g], XL1, P_II_Re[1] * (-h[10] - XL2),
                 muDoubleScalarAbs(P_II_Im[1] * (-h[10] - XL2)));
        i1 = CR_H0_R_rho->size[0];
        if (d34 != (int32_T)muDoubleScalarFloor(d34)) {
          emlrtIntegerCheckR2012b(d34, &tb_emlrtDCI, sp);
        }

        i2 = (int32_T)d34;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &yd_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d34 != (int32_T)muDoubleScalarFloor(d34)) {
          emlrtIntegerCheckR2012b(d34, &ub_emlrtDCI, sp);
        }

        i3 = (int32_T)d34;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &ae_emlrtBCI, sp);
        }

        CR_H0_R_rho->data[(i2 + CR_H0_R_rho->size[0] * t) - 1] =
          (((CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] - c_im * d1)
            + d24 * -re * d2) + im * d5) - d25 * -b_re * d8;
        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &be_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ce_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &de_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ee_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d35 != (int32_T)muDoubleScalarFloor(d35)) {
          emlrtIntegerCheckR2012b(d35, &vb_emlrtDCI, sp);
        }

        i2 = (int32_T)d35;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &fe_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d35 != (int32_T)muDoubleScalarFloor(d35)) {
          emlrtIntegerCheckR2012b(d35, &wb_emlrtDCI, sp);
        }

        i3 = (int32_T)d35;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &ge_emlrtBCI, sp);
        }

        st.site = &s_emlrtRSI;
        CR_H0_R_rho->data[(i2 + CR_H0_R_rho->size[0] * t) - 1] =
          (((CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] - d22 * P_R
             (x_w->data[g], XL1, P_II_Re[1] * (-h[15] - XL2), muDoubleScalarAbs
              (P_II_Im[1] * (-h[15] - XL2)))) - d23 * Q_R(x_w->data[g], XL1,
             P_II_Re[1] * (-h[15] - XL2), muDoubleScalarAbs(P_II_Im[1] * (-h[15]
               - XL2)))) + d4 * P_R(x_w->data[g], XL1, P_SL_Re[1] * (-h[15] -
             XL2), muDoubleScalarAbs(P_SL_Im[1] * (-h[15] - XL2)))) + d32 * Q_R
          (x_w->data[g], XL1, P_SL_Re[1] * (-h[15] - XL2), muDoubleScalarAbs
           (P_SL_Im[1] * (-h[15] - XL2)));
        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &he_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ie_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &je_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ke_emlrtBCI, sp);
        }

        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        re = A_SL[loop_ub + 3].re;
        im = A_SL[loop_ub + 3].im;
        b_re = B_SL[t + 3].re;
        b_im = B_SL[t + 3].im;
        c_re = A_II[loop_ub + 3].re;
        beta1 = A_II[loop_ub + 3].im;
        d_re = B_II[t + 3].re;
        d_im = B_II[t + 3].im;
        alpha1 = c_re * d_re - beta1 * d_im;
        c_im = c_re * d_im + beta1 * d_re;
        if (c_im == 0.0) {
          c_im = 0.0;
        } else if (alpha1 == 0.0) {
          c_im /= 2.0;
        } else {
          c_im /= 2.0;
        }

        if (c_im == 0.0) {
          c_im = 0.0;
        } else {
          c_im /= 3.1415926535897931;
        }

        st.site = &t_emlrtRSI;
        d1 = Q_R(x_w->data[g], XL1, P_II_Re[1] * (-h[15] - XL2),
                 muDoubleScalarAbs(P_II_Im[1] * (-h[15] - XL2)));
        alpha1 = c_re * d_re - beta1 * d_im;
        beta1 = c_re * d_im + beta1 * d_re;
        if (beta1 == 0.0) {
          c_re = alpha1 / 2.0;
          beta1 = 0.0;
        } else if (alpha1 == 0.0) {
          c_re = 0.0;
          beta1 /= 2.0;
        } else {
          c_re = alpha1 / 2.0;
          beta1 /= 2.0;
        }

        if (beta1 == 0.0) {
          c_re /= 3.1415926535897931;
        } else if (c_re == 0.0) {
          c_re = 0.0;
        } else {
          c_re /= 3.1415926535897931;
        }

        st.site = &t_emlrtRSI;
        d2 = P_R(x_w->data[g], XL1, P_II_Re[1] * (-h[15] - XL2),
                 muDoubleScalarAbs(P_II_Im[1] * (-h[15] - XL2)));
        d_re = re * b_re - im * b_im;
        beta1 = re * b_im + im * b_re;
        if (beta1 == 0.0) {
          beta1 = 0.0;
        } else if (d_re == 0.0) {
          beta1 /= 2.0;
        } else {
          beta1 /= 2.0;
        }

        if (beta1 == 0.0) {
          beta1 = 0.0;
        } else {
          beta1 /= 3.1415926535897931;
        }

        st.site = &t_emlrtRSI;
        d4 = Q_R(x_w->data[g], XL1, P_SL_Re[1] * (-h[15] - XL2),
                 muDoubleScalarAbs(P_SL_Im[1] * (-h[15] - XL2)));
        d_re = re * b_re - im * b_im;
        im = re * b_im + im * b_re;
        if (im == 0.0) {
          re = d_re / 2.0;
          im = 0.0;
        } else if (d_re == 0.0) {
          re = 0.0;
          im /= 2.0;
        } else {
          re = d_re / 2.0;
          im /= 2.0;
        }

        if (im == 0.0) {
          re /= 3.1415926535897931;
        } else if (re == 0.0) {
          re = 0.0;
        } else {
          re /= 3.1415926535897931;
        }

        st.site = &t_emlrtRSI;
        d5 = P_R(x_w->data[g], XL1, P_SL_Re[1] * (-h[15] - XL2),
                 muDoubleScalarAbs(P_SL_Im[1] * (-h[15] - XL2)));
        i1 = CR_H0_R_rho->size[0];
        if (d37 != (int32_T)muDoubleScalarFloor(d37)) {
          emlrtIntegerCheckR2012b(d37, &xb_emlrtDCI, sp);
        }

        i2 = (int32_T)d37;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &le_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d37 != (int32_T)muDoubleScalarFloor(d37)) {
          emlrtIntegerCheckR2012b(d37, &yb_emlrtDCI, sp);
        }

        i3 = (int32_T)d37;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &me_emlrtBCI, sp);
        }

        CR_H0_R_rho->data[(i2 + CR_H0_R_rho->size[0] * t) - 1] =
          (((CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] - c_im * d1)
            + d30 * -c_re * d2) + beta1 * d4) - d31 * -re * d5;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
          emlrtIntegerCheckR2012b(d0, &k_emlrtDCI, sp);
        }

        i2 = (int32_T)d0;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &b_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
          emlrtIntegerCheckR2012b(d0, &l_emlrtDCI, sp);
        }

        i3 = (int32_T)d0;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &c_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &d_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &e_emlrtBCI, sp);
        }

        st.site = &emlrtRSI;
        d1 = Re_Xi(&st, 1.0 + (real_T)t, 3.0, 1.0 + (real_T)loop_ub, C_SU, P_SU,
                   A_SU, B_SU);
        st.site = &emlrtRSI;
        d2 = Im_Xi(&st, 1.0 + (real_T)t, 3.0, 1.0 + (real_T)loop_ub, C_SU, P_SU,
                   A_SU, B_SU);
        st.site = &emlrtRSI;
        zeros_30Napp_3->data[(i2 + zeros_30Napp_3->size[0] * t) - 1] =
          (zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] - d1 *
           Q_R(x_w->data[i4 - 1], XL1, -P_SU_Re[2] * XL2, -P_SU_Im[2] * XL2)) +
          d2 * P_R(x_w->data[i4 - 1], XL1, -P_SU_Re[2] * XL2, -P_SU_Im[2] * XL2);
        i1 = zeros_30Napp_3->size[0];
        if (d3 != (int32_T)muDoubleScalarFloor(d3)) {
          emlrtIntegerCheckR2012b(d3, &m_emlrtDCI, sp);
        }

        i2 = (int32_T)d3;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &f_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d3 != (int32_T)muDoubleScalarFloor(d3)) {
          emlrtIntegerCheckR2012b(d3, &n_emlrtDCI, sp);
        }

        i3 = (int32_T)d3;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &g_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &h_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &i_emlrtBCI, sp);
        }

        st.site = &b_emlrtRSI;
        d4 = Re_Xi(&st, 1.0 + (real_T)t, 3.0, 1.0 + (real_T)loop_ub, C_SL, P_SL,
                   A_SL, B_SL);
        st.site = &b_emlrtRSI;
        d5 = Im_Xi(&st, 1.0 + (real_T)t, 3.0, 1.0 + (real_T)loop_ub, C_SL, P_SL,
                   A_SL, B_SL);
        st.site = &b_emlrtRSI;
        zeros_30Napp_3->data[(i2 + zeros_30Napp_3->size[0] * t) - 1] =
          (zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] - d4 *
           Q_R(x_w->data[i4 - 1], XL1, P_SL_Re[2] * (-h[20] - XL2), -P_SL_Im[2] *
               (-h[20] - XL2))) - d5 * P_R(x_w->data[i4 - 1], XL1, P_SL_Re[2] *
          (-h[20] - XL2), -P_SL_Im[2] * (-h[20] - XL2));
        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &j_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &k_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &l_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &m_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d6 != (int32_T)muDoubleScalarFloor(d6)) {
          emlrtIntegerCheckR2012b(d6, &o_emlrtDCI, sp);
        }

        i2 = (int32_T)d6;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &n_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d6 != (int32_T)muDoubleScalarFloor(d6)) {
          emlrtIntegerCheckR2012b(d6, &p_emlrtDCI, sp);
        }

        i3 = (int32_T)d6;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &o_emlrtBCI, sp);
        }

        st.site = &c_emlrtRSI;
        d8 = Re_Xi(&st, 1.0 + (real_T)t, 3.0, 1.0 + (real_T)loop_ub, C_I, P_I,
                   A_I, B_I);
        st.site = &c_emlrtRSI;
        d9 = Im_Xi(&st, 1.0 + (real_T)t, 3.0, 1.0 + (real_T)loop_ub, C_I, P_I,
                   A_I, B_I);
        d10 = muDoubleScalarSign(P_SU_Im[2] * d7);
        d11 = d10 * d2;
        d7 = muDoubleScalarSign(P_I_Im[2] * d7);
        d12 = d7 * d9;
        st.site = &c_emlrtRSI;
        zeros_30Napp_3->data[(i2 + zeros_30Napp_3->size[0] * t) - 1] =
          (((zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] - d1 *
             Q_R(x_w->data[g], XL1, P_SU_Re[2] * (-h[0] - XL2),
                 muDoubleScalarAbs(P_SU_Im[2] * (-h[0] - XL2)))) + d11 * P_R
            (x_w->data[g], XL1, P_SU_Re[2] * (-h[0] - XL2), muDoubleScalarAbs
             (P_SU_Im[2] * (-h[0] - XL2)))) + d8 * Q_R(x_w->data[g], XL1,
            P_I_Re[2] * (-h[0] - XL2), muDoubleScalarAbs(P_I_Im[2] * (-h[0] -
              XL2)))) - d12 * P_R(x_w->data[g], XL1, P_I_Re[2] * (-h[0] - XL2),
          muDoubleScalarAbs(P_I_Im[2] * (-h[0] - XL2)));

        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        re = A_SU[loop_ub + 6].re;
        im = A_SU[loop_ub + 6].im;
        b_re = B_SU[t + 6].re;
        b_im = B_SU[t + 6].im;
        c_re = A_I[loop_ub + 6].re;
        beta1 = A_I[loop_ub + 6].im;
        d_re = B_I[t + 6].re;
        d_im = B_I[t + 6].im;
        alpha1 = re * b_re - im * b_im;
        im_tmp = re * b_im + im * b_re;
        if (im_tmp == 0.0) {
          im = 0.0;
        } else if (alpha1 == 0.0) {
          im = im_tmp / 2.0;
        } else {
          im = im_tmp / 2.0;
        }

        if (im == 0.0) {
          im = 0.0;
        } else {
          im /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &p_emlrtBCI, sp);
        }

        st.site = &d_emlrtRSI;
        d14 = P_R(x_w->data[i4 - 1], XL1, P_SU_Re[2] * (-h[0] - XL2), P_SU_Im[2]
                  * (-h[0] - XL2));
        if (im_tmp == 0.0) {
          re = alpha1 / 2.0;
          b_im = 0.0;
        } else if (alpha1 == 0.0) {
          re = 0.0;
          b_im = im_tmp / 2.0;
        } else {
          re = alpha1 / 2.0;
          b_im = im_tmp / 2.0;
        }

        if (b_im == 0.0) {
          re /= 3.1415926535897931;
        } else if (re == 0.0) {
          re = 0.0;
        } else {
          re /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &q_emlrtBCI, sp);
        }

        st.site = &d_emlrtRSI;
        d15 = Q_R(x_w->data[i4 - 1], XL1, P_SU_Re[2] * (-h[0] - XL2), P_SU_Im[2]
                  * (-h[0] - XL2));
        alpha1 = c_re * d_re - beta1 * d_im;
        im_tmp = c_re * d_im + beta1 * d_re;
        if (im_tmp == 0.0) {
          b_im = 0.0;
        } else if (alpha1 == 0.0) {
          b_im = im_tmp / 2.0;
        } else {
          b_im = im_tmp / 2.0;
        }

        if (b_im == 0.0) {
          b_im = 0.0;
        } else {
          b_im /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &r_emlrtBCI, sp);
        }

        st.site = &d_emlrtRSI;
        d16 = P_R(x_w->data[i4 - 1], XL1, P_I_Re[2] * (-h[0] - XL2), P_I_Im[2] *
                  (-h[0] - XL2));
        if (im_tmp == 0.0) {
          b_re = alpha1 / 2.0;
          beta1 = 0.0;
        } else if (alpha1 == 0.0) {
          b_re = 0.0;
          beta1 = im_tmp / 2.0;
        } else {
          b_re = alpha1 / 2.0;
          beta1 = im_tmp / 2.0;
        }

        if (beta1 == 0.0) {
          b_re /= 3.1415926535897931;
        } else if (b_re == 0.0) {
          b_re = 0.0;
        } else {
          b_re /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &s_emlrtBCI, sp);
        }

        st.site = &d_emlrtRSI;
        d17 = Q_R(x_w->data[i4 - 1], XL1, P_I_Re[2] * (-h[0] - XL2), P_I_Im[2] *
                  (-h[0] - XL2));
        i1 = zeros_30Napp_3->size[0];
        if (d18 != (int32_T)muDoubleScalarFloor(d18)) {
          emlrtIntegerCheckR2012b(d18, &q_emlrtDCI, sp);
        }

        i2 = (int32_T)d18;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &t_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d18 != (int32_T)muDoubleScalarFloor(d18)) {
          emlrtIntegerCheckR2012b(d18, &r_emlrtDCI, sp);
        }

        i3 = (int32_T)d18;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &u_emlrtBCI, sp);
        }

        zeros_30Napp_3->data[(i2 + zeros_30Napp_3->size[0] * t) - 1] =
          (((zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] + im *
             d14) + -re * d15) - b_im * d16) - -b_re * d17;
        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &v_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &w_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &x_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &y_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d19 != (int32_T)muDoubleScalarFloor(d19)) {
          emlrtIntegerCheckR2012b(d19, &s_emlrtDCI, sp);
        }

        i2 = (int32_T)d19;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ab_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d19 != (int32_T)muDoubleScalarFloor(d19)) {
          emlrtIntegerCheckR2012b(d19, &t_emlrtDCI, sp);
        }

        i3 = (int32_T)d19;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &bb_emlrtBCI, sp);
        }

        st.site = &e_emlrtRSI;
        d13 = Re_Xi(&st, 1.0 + (real_T)t, 3.0, 1.0 + (real_T)loop_ub, C_GB, P_GB,
                    A_GB, B_GB);
        st.site = &e_emlrtRSI;
        d14 = Im_Xi(&st, 1.0 + (real_T)t, 3.0, 1.0 + (real_T)loop_ub, C_GB, P_GB,
                    A_GB, B_GB);
        d15 = muDoubleScalarSign(P_I_Im[2] * d20);
        d9 *= d15;
        d16 = muDoubleScalarSign(P_GB_Im[2] * d20);
        d17 = d16 * d14;
        st.site = &e_emlrtRSI;
        zeros_30Napp_3->data[(i2 + zeros_30Napp_3->size[0] * t) - 1] =
          (((zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] - d8 *
             Q_R(x_w->data[g], XL1, P_I_Re[2] * (-h[5] - XL2), muDoubleScalarAbs
                 (P_I_Im[2] * (-h[5] - XL2)))) + d9 * P_R(x_w->data[g], XL1,
             P_I_Re[2] * (-h[5] - XL2), muDoubleScalarAbs(P_I_Im[2] * (-h[5] -
               XL2)))) + d13 * Q_R(x_w->data[g], XL1, P_GB_Re[2] * (-h[5] - XL2),
            muDoubleScalarAbs(P_GB_Im[2] * (-h[5] - XL2)))) - d17 * P_R
          (x_w->data[g], XL1, P_GB_Re[2] * (-h[5] - XL2), muDoubleScalarAbs
           (P_GB_Im[2] * (-h[5] - XL2)));

        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        re = A_I[loop_ub + 6].re;
        im = A_I[loop_ub + 6].im;
        b_re = B_I[t + 6].re;
        b_im = B_I[t + 6].im;
        c_re = A_GB[loop_ub + 6].re;
        beta1 = A_GB[loop_ub + 6].im;
        d_re = B_GB[t + 6].re;
        d_im = B_GB[t + 6].im;
        alpha1 = re * b_re - im * b_im;
        c_im = re * b_im + im * b_re;
        if (c_im == 0.0) {
          c_im = 0.0;
        } else if (alpha1 == 0.0) {
          c_im /= 2.0;
        } else {
          c_im /= 2.0;
        }

        if (c_im == 0.0) {
          c_im = 0.0;
        } else {
          c_im /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &cb_emlrtBCI, sp);
        }

        st.site = &f_emlrtRSI;
        d22 = P_R(x_w->data[i4 - 1], XL1, P_I_Re[2] * (-h[5] - XL2), P_I_Im[2] *
                  (-h[5] - XL2));
        alpha1 = re * b_re - im * b_im;
        im = re * b_im + im * b_re;
        if (im == 0.0) {
          re = alpha1 / 2.0;
          im = 0.0;
        } else if (alpha1 == 0.0) {
          re = 0.0;
          im /= 2.0;
        } else {
          re = alpha1 / 2.0;
          im /= 2.0;
        }

        if (im == 0.0) {
          re /= 3.1415926535897931;
        } else if (re == 0.0) {
          re = 0.0;
        } else {
          re /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &db_emlrtBCI, sp);
        }

        st.site = &f_emlrtRSI;
        d23 = Q_R(x_w->data[i4 - 1], XL1, P_I_Re[2] * (-h[5] - XL2), P_I_Im[2] *
                  (-h[5] - XL2));
        alpha1 = c_re * d_re - beta1 * d_im;
        im_tmp = c_re * d_im + beta1 * d_re;
        if (im_tmp == 0.0) {
          im = 0.0;
        } else if (alpha1 == 0.0) {
          im = im_tmp / 2.0;
        } else {
          im = im_tmp / 2.0;
        }

        if (im == 0.0) {
          im = 0.0;
        } else {
          im /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &eb_emlrtBCI, sp);
        }

        st.site = &f_emlrtRSI;
        d24 = P_R(x_w->data[i4 - 1], XL1, P_GB_Re[2] * (-h[5] - XL2), P_GB_Im[2]
                  * (-h[5] - XL2));
        if (im_tmp == 0.0) {
          b_re = alpha1 / 2.0;
          b_im = 0.0;
        } else if (alpha1 == 0.0) {
          b_re = 0.0;
          b_im = im_tmp / 2.0;
        } else {
          b_re = alpha1 / 2.0;
          b_im = im_tmp / 2.0;
        }

        if (b_im == 0.0) {
          b_re /= 3.1415926535897931;
        } else if (b_re == 0.0) {
          b_re = 0.0;
        } else {
          b_re /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &fb_emlrtBCI, sp);
        }

        st.site = &f_emlrtRSI;
        d25 = Q_R(x_w->data[i4 - 1], XL1, P_GB_Re[2] * (-h[5] - XL2), P_GB_Im[2]
                  * (-h[5] - XL2));
        i1 = zeros_30Napp_3->size[0];
        if (d26 != (int32_T)muDoubleScalarFloor(d26)) {
          emlrtIntegerCheckR2012b(d26, &u_emlrtDCI, sp);
        }

        i2 = (int32_T)d26;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &gb_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d26 != (int32_T)muDoubleScalarFloor(d26)) {
          emlrtIntegerCheckR2012b(d26, &v_emlrtDCI, sp);
        }

        i3 = (int32_T)d26;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &hb_emlrtBCI, sp);
        }

        zeros_30Napp_3->data[(i2 + zeros_30Napp_3->size[0] * t) - 1] =
          (((zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] + c_im
             * d22) + -re * d23) - im * d24) - -b_re * d25;
        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ib_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &jb_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &kb_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &lb_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d27 != (int32_T)muDoubleScalarFloor(d27)) {
          emlrtIntegerCheckR2012b(d27, &w_emlrtDCI, sp);
        }

        i2 = (int32_T)d27;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &mb_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d27 != (int32_T)muDoubleScalarFloor(d27)) {
          emlrtIntegerCheckR2012b(d27, &x_emlrtDCI, sp);
        }

        i3 = (int32_T)d27;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &nb_emlrtBCI, sp);
        }

        st.site = &g_emlrtRSI;
        d20 = Re_Xi(&st, 1.0 + (real_T)t, 3.0, 1.0 + (real_T)loop_ub, C_II, P_II,
                    A_II, B_II);
        st.site = &g_emlrtRSI;
        d21 = Im_Xi(&st, 1.0 + (real_T)t, 3.0, 1.0 + (real_T)loop_ub, C_II, P_II,
                    A_II, B_II);
        d22 = muDoubleScalarSign(P_GB_Im[2] * d28);
        d14 *= d22;
        d23 = muDoubleScalarSign(P_II_Im[2] * d28);
        d24 = d23 * d21;
        st.site = &g_emlrtRSI;
        zeros_30Napp_3->data[(i2 + zeros_30Napp_3->size[0] * t) - 1] =
          (((zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] - d13 *
             Q_R(x_w->data[g], XL1, P_GB_Re[2] * (-h[10] - XL2),
                 muDoubleScalarAbs(P_GB_Im[2] * (-h[10] - XL2)))) + d14 * P_R
            (x_w->data[g], XL1, P_GB_Re[2] * (-h[10] - XL2), muDoubleScalarAbs
             (P_GB_Im[2] * (-h[10] - XL2)))) + d20 * Q_R(x_w->data[g], XL1,
            P_II_Re[2] * (-h[10] - XL2), muDoubleScalarAbs(P_II_Im[2] * (-h[10]
              - XL2)))) - d24 * P_R(x_w->data[g], XL1, P_II_Re[2] * (-h[10] -
          XL2), muDoubleScalarAbs(P_II_Im[2] * (-h[10] - XL2)));

        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        re = A_GB[loop_ub + 6].re;
        im = A_GB[loop_ub + 6].im;
        b_re = B_GB[t + 6].re;
        b_im = B_GB[t + 6].im;
        c_re = A_II[loop_ub + 6].re;
        beta1 = A_II[loop_ub + 6].im;
        d_re = B_II[t + 6].re;
        d_im = B_II[t + 6].im;
        alpha1 = re * b_re - im * b_im;
        c_im = re * b_im + im * b_re;
        if (c_im == 0.0) {
          c_im = 0.0;
        } else if (alpha1 == 0.0) {
          c_im /= 2.0;
        } else {
          c_im /= 2.0;
        }

        if (c_im == 0.0) {
          c_im = 0.0;
        } else {
          c_im /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &ob_emlrtBCI, sp);
        }

        st.site = &h_emlrtRSI;
        d30 = P_R(x_w->data[i4 - 1], XL1, P_GB_Re[2] * (-h[10] - XL2), P_GB_Im[2]
                  * (-h[10] - XL2));
        alpha1 = re * b_re - im * b_im;
        im = re * b_im + im * b_re;
        if (im == 0.0) {
          re = alpha1 / 2.0;
          im = 0.0;
        } else if (alpha1 == 0.0) {
          re = 0.0;
          im /= 2.0;
        } else {
          re = alpha1 / 2.0;
          im /= 2.0;
        }

        if (im == 0.0) {
          re /= 3.1415926535897931;
        } else if (re == 0.0) {
          re = 0.0;
        } else {
          re /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &pb_emlrtBCI, sp);
        }

        st.site = &h_emlrtRSI;
        d31 = Q_R(x_w->data[i4 - 1], XL1, P_GB_Re[2] * (-h[10] - XL2), P_GB_Im[2]
                  * (-h[10] - XL2));
        alpha1 = c_re * d_re - beta1 * d_im;
        im_tmp = c_re * d_im + beta1 * d_re;
        if (im_tmp == 0.0) {
          im = 0.0;
        } else if (alpha1 == 0.0) {
          im = im_tmp / 2.0;
        } else {
          im = im_tmp / 2.0;
        }

        if (im == 0.0) {
          im = 0.0;
        } else {
          im /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &qb_emlrtBCI, sp);
        }

        st.site = &h_emlrtRSI;
        d32 = P_R(x_w->data[i4 - 1], XL1, P_II_Re[2] * (-h[10] - XL2), P_II_Im[2]
                  * (-h[10] - XL2));
        if (im_tmp == 0.0) {
          b_re = alpha1 / 2.0;
          b_im = 0.0;
        } else if (alpha1 == 0.0) {
          b_re = 0.0;
          b_im = im_tmp / 2.0;
        } else {
          b_re = alpha1 / 2.0;
          b_im = im_tmp / 2.0;
        }

        if (b_im == 0.0) {
          b_re /= 3.1415926535897931;
        } else if (b_re == 0.0) {
          b_re = 0.0;
        } else {
          b_re /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &rb_emlrtBCI, sp);
        }

        st.site = &h_emlrtRSI;
        d33 = Q_R(x_w->data[i4 - 1], XL1, P_II_Re[2] * (-h[10] - XL2), P_II_Im[2]
                  * (-h[10] - XL2));
        i1 = zeros_30Napp_3->size[0];
        if (d34 != (int32_T)muDoubleScalarFloor(d34)) {
          emlrtIntegerCheckR2012b(d34, &y_emlrtDCI, sp);
        }

        i2 = (int32_T)d34;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &sb_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d34 != (int32_T)muDoubleScalarFloor(d34)) {
          emlrtIntegerCheckR2012b(d34, &ab_emlrtDCI, sp);
        }

        i3 = (int32_T)d34;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &tb_emlrtBCI, sp);
        }

        zeros_30Napp_3->data[(i2 + zeros_30Napp_3->size[0] * t) - 1] =
          (((zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] + c_im
             * d30) + -re * d31) - im * d32) - -b_re * d33;
        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ub_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &vb_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &wb_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &xb_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d35 != (int32_T)muDoubleScalarFloor(d35)) {
          emlrtIntegerCheckR2012b(d35, &bb_emlrtDCI, sp);
        }

        i2 = (int32_T)d35;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &yb_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d35 != (int32_T)muDoubleScalarFloor(d35)) {
          emlrtIntegerCheckR2012b(d35, &cb_emlrtDCI, sp);
        }

        i3 = (int32_T)d35;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &ac_emlrtBCI, sp);
        }

        d25 = muDoubleScalarSign(P_II_Im[2] * d36);
        d21 *= d25;
        d28 = muDoubleScalarSign(P_SL_Im[2] * d36);
        d29 = d28 * d5;
        st.site = &i_emlrtRSI;
        zeros_30Napp_3->data[(i2 + zeros_30Napp_3->size[0] * t) - 1] =
          (((zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] - d20 *
             Q_R(x_w->data[g], XL1, P_II_Re[2] * (-h[15] - XL2),
                 muDoubleScalarAbs(P_II_Im[2] * (-h[15] - XL2)))) + d21 * P_R
            (x_w->data[g], XL1, P_II_Re[2] * (-h[15] - XL2), muDoubleScalarAbs
             (P_II_Im[2] * (-h[15] - XL2)))) + d4 * Q_R(x_w->data[g], XL1,
            P_SL_Re[2] * (-h[15] - XL2), muDoubleScalarAbs(P_SL_Im[2] * (-h[15]
              - XL2)))) - d29 * P_R(x_w->data[g], XL1, P_SL_Re[2] * (-h[15] -
          XL2), muDoubleScalarAbs(P_SL_Im[2] * (-h[15] - XL2)));

        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        re = A_SL[loop_ub + 6].re;
        im = A_SL[loop_ub + 6].im;
        b_re = B_SL[t + 6].re;
        b_im = B_SL[t + 6].im;
        c_re = A_II[loop_ub + 6].re;
        beta1 = A_II[loop_ub + 6].im;
        d_re = B_II[t + 6].re;
        d_im = B_II[t + 6].im;
        alpha1 = c_re * d_re - beta1 * d_im;
        c_im = c_re * d_im + beta1 * d_re;
        if (c_im == 0.0) {
          c_im = 0.0;
        } else if (alpha1 == 0.0) {
          c_im /= 2.0;
        } else {
          c_im /= 2.0;
        }

        if (c_im == 0.0) {
          c_im = 0.0;
        } else {
          c_im /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &bc_emlrtBCI, sp);
        }

        st.site = &j_emlrtRSI;
        d33 = P_R(x_w->data[i4 - 1], XL1, P_II_Re[2] * (-h[15] - XL2), P_II_Im[2]
                  * (-h[15] - XL2));
        alpha1 = c_re * d_re - beta1 * d_im;
        beta1 = c_re * d_im + beta1 * d_re;
        if (beta1 == 0.0) {
          c_re = alpha1 / 2.0;
          beta1 = 0.0;
        } else if (alpha1 == 0.0) {
          c_re = 0.0;
          beta1 /= 2.0;
        } else {
          c_re = alpha1 / 2.0;
          beta1 /= 2.0;
        }

        if (beta1 == 0.0) {
          c_re /= 3.1415926535897931;
        } else if (c_re == 0.0) {
          c_re = 0.0;
        } else {
          c_re /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &cc_emlrtBCI, sp);
        }

        st.site = &j_emlrtRSI;
        d_re = Q_R(x_w->data[i4 - 1], XL1, P_II_Re[2] * (-h[15] - XL2), P_II_Im
                   [2] * (-h[15] - XL2));
        alpha1 = re * b_re - im * b_im;
        im_tmp = re * b_im + im * b_re;
        if (im_tmp == 0.0) {
          im = 0.0;
        } else if (alpha1 == 0.0) {
          im = im_tmp / 2.0;
        } else {
          im = im_tmp / 2.0;
        }

        if (im == 0.0) {
          im = 0.0;
        } else {
          im /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &dc_emlrtBCI, sp);
        }

        st.site = &j_emlrtRSI;
        beta1 = P_R(x_w->data[i4 - 1], XL1, P_SL_Re[2] * (-h[15] - XL2),
                    P_SL_Im[2] * (-h[15] - XL2));
        if (im_tmp == 0.0) {
          re = alpha1 / 2.0;
          b_im = 0.0;
        } else if (alpha1 == 0.0) {
          re = 0.0;
          b_im = im_tmp / 2.0;
        } else {
          re = alpha1 / 2.0;
          b_im = im_tmp / 2.0;
        }

        if (b_im == 0.0) {
          re /= 3.1415926535897931;
        } else if (re == 0.0) {
          re = 0.0;
        } else {
          re /= 3.1415926535897931;
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &ec_emlrtBCI, sp);
        }

        st.site = &j_emlrtRSI;
        alpha1 = Q_R(x_w->data[i4 - 1], XL1, P_SL_Re[2] * (-h[15] - XL2),
                     P_SL_Im[2] * (-h[15] - XL2));
        i1 = zeros_30Napp_3->size[0];
        if (d37 != (int32_T)muDoubleScalarFloor(d37)) {
          emlrtIntegerCheckR2012b(d37, &db_emlrtDCI, sp);
        }

        i2 = (int32_T)d37;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &fc_emlrtBCI, sp);
        }

        i1 = zeros_30Napp_3->size[0];
        if (d37 != (int32_T)muDoubleScalarFloor(d37)) {
          emlrtIntegerCheckR2012b(d37, &eb_emlrtDCI, sp);
        }

        i3 = (int32_T)d37;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &gc_emlrtBCI, sp);
        }

        zeros_30Napp_3->data[(i2 + zeros_30Napp_3->size[0] * t) - 1] =
          (((zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] + c_im
             * d33) + -c_re * d_re) - im * beta1) - -re * alpha1;
        i1 = CR_H0_R_rho->size[0];
        if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
          emlrtIntegerCheckR2012b(d0, &fb_emlrtDCI, sp);
        }

        i2 = (int32_T)d0;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &hc_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
          emlrtIntegerCheckR2012b(d0, &gb_emlrtDCI, sp);
        }

        i3 = (int32_T)d0;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &ic_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &jc_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &kc_emlrtBCI, sp);
        }

        st.site = &k_emlrtRSI;
        CR_H0_R_rho->data[(i2 + CR_H0_R_rho->size[0] * t) - 1] =
          (CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] - d1 * P_R
           (x_w->data[i4 - 1], XL1, -P_SU_Re[2] * XL2, -P_SU_Im[2] * XL2)) - d2 *
          Q_R(x_w->data[i4 - 1], XL1, -P_SU_Re[2] * XL2, -P_SU_Im[2] * XL2);
        i1 = CR_H0_R_rho->size[0];
        if (d3 != (int32_T)muDoubleScalarFloor(d3)) {
          emlrtIntegerCheckR2012b(d3, &hb_emlrtDCI, sp);
        }

        i2 = (int32_T)d3;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &lc_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d3 != (int32_T)muDoubleScalarFloor(d3)) {
          emlrtIntegerCheckR2012b(d3, &ib_emlrtDCI, sp);
        }

        i3 = (int32_T)d3;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &mc_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &nc_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        if ((i4 < 1) || (i4 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &oc_emlrtBCI, sp);
        }

        st.site = &l_emlrtRSI;
        CR_H0_R_rho->data[(i2 + CR_H0_R_rho->size[0] * t) - 1] =
          (CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] - d4 * P_R
           (x_w->data[i4 - 1], XL1, P_SL_Re[2] * (-h[20] - XL2), -P_SL_Im[2] * (
             -h[20] - XL2))) + d5 * Q_R(x_w->data[i4 - 1], XL1, P_SL_Re[2] *
          (-h[20] - XL2), -P_SL_Im[2] * (-h[20] - XL2));
        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &pc_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &qc_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &rc_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &sc_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d6 != (int32_T)muDoubleScalarFloor(d6)) {
          emlrtIntegerCheckR2012b(d6, &jb_emlrtDCI, sp);
        }

        i2 = (int32_T)d6;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &tc_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d6 != (int32_T)muDoubleScalarFloor(d6)) {
          emlrtIntegerCheckR2012b(d6, &kb_emlrtDCI, sp);
        }

        i3 = (int32_T)d6;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &uc_emlrtBCI, sp);
        }

        st.site = &m_emlrtRSI;
        CR_H0_R_rho->data[(i2 + CR_H0_R_rho->size[0] * t) - 1] =
          (((CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] - d1 * P_R
             (x_w->data[g], XL1, P_SU_Re[2] * (-h[0] - XL2), muDoubleScalarAbs
              (P_SU_Im[2] * (-h[0] - XL2)))) - d11 * Q_R(x_w->data[g], XL1,
             P_SU_Re[2] * (-h[0] - XL2), muDoubleScalarAbs(P_SU_Im[2] * (-h[0] -
               XL2)))) + d8 * P_R(x_w->data[g], XL1, P_I_Re[2] * (-h[0] - XL2),
            muDoubleScalarAbs(P_I_Im[2] * (-h[0] - XL2)))) + d12 * Q_R(x_w->
          data[g], XL1, P_I_Re[2] * (-h[0] - XL2), muDoubleScalarAbs(P_I_Im[2] *
          (-h[0] - XL2)));
        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &vc_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &wc_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &xc_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &yc_emlrtBCI, sp);
        }

        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        re = A_SU[loop_ub + 6].re;
        im = A_SU[loop_ub + 6].im;
        b_re = B_SU[t + 6].re;
        b_im = B_SU[t + 6].im;
        c_re = A_I[loop_ub + 6].re;
        beta1 = A_I[loop_ub + 6].im;
        d_re = B_I[t + 6].re;
        d_im = B_I[t + 6].im;
        alpha1 = re * b_re - im * b_im;
        c_im = re * b_im + im * b_re;
        if (c_im == 0.0) {
          c_im = 0.0;
        } else if (alpha1 == 0.0) {
          c_im /= 2.0;
        } else {
          c_im /= 2.0;
        }

        if (c_im == 0.0) {
          c_im = 0.0;
        } else {
          c_im /= 3.1415926535897931;
        }

        st.site = &n_emlrtRSI;
        d1 = Q_R(x_w->data[g], XL1, P_SU_Re[2] * (-h[0] - XL2),
                 muDoubleScalarAbs(P_SU_Im[2] * (-h[0] - XL2)));
        alpha1 = re * b_re - im * b_im;
        im = re * b_im + im * b_re;
        if (im == 0.0) {
          re = alpha1 / 2.0;
          im = 0.0;
        } else if (alpha1 == 0.0) {
          re = 0.0;
          im /= 2.0;
        } else {
          re = alpha1 / 2.0;
          im /= 2.0;
        }

        if (im == 0.0) {
          re /= 3.1415926535897931;
        } else if (re == 0.0) {
          re = 0.0;
        } else {
          re /= 3.1415926535897931;
        }

        st.site = &n_emlrtRSI;
        d2 = P_R(x_w->data[g], XL1, P_SU_Re[2] * (-h[0] - XL2),
                 muDoubleScalarAbs(P_SU_Im[2] * (-h[0] - XL2)));
        b_re = c_re * d_re - beta1 * d_im;
        im = c_re * d_im + beta1 * d_re;
        if (im == 0.0) {
          im = 0.0;
        } else if (b_re == 0.0) {
          im /= 2.0;
        } else {
          im /= 2.0;
        }

        if (im == 0.0) {
          im = 0.0;
        } else {
          im /= 3.1415926535897931;
        }

        st.site = &n_emlrtRSI;
        d5 = Q_R(x_w->data[g], XL1, P_I_Re[2] * (-h[0] - XL2), muDoubleScalarAbs
                 (P_I_Im[2] * (-h[0] - XL2)));
        b_re = c_re * d_re - beta1 * d_im;
        b_im = c_re * d_im + beta1 * d_re;
        if (b_im == 0.0) {
          b_re /= 2.0;
          b_im = 0.0;
        } else if (b_re == 0.0) {
          b_re = 0.0;
          b_im /= 2.0;
        } else {
          b_re /= 2.0;
          b_im /= 2.0;
        }

        if (b_im == 0.0) {
          b_re /= 3.1415926535897931;
        } else if (b_re == 0.0) {
          b_re = 0.0;
        } else {
          b_re /= 3.1415926535897931;
        }

        st.site = &n_emlrtRSI;
        d11 = P_R(x_w->data[g], XL1, P_I_Re[2] * (-h[0] - XL2),
                  muDoubleScalarAbs(P_I_Im[2] * (-h[0] - XL2)));
        i1 = CR_H0_R_rho->size[0];
        if (d18 != (int32_T)muDoubleScalarFloor(d18)) {
          emlrtIntegerCheckR2012b(d18, &lb_emlrtDCI, sp);
        }

        i2 = (int32_T)d18;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ad_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d18 != (int32_T)muDoubleScalarFloor(d18)) {
          emlrtIntegerCheckR2012b(d18, &mb_emlrtDCI, sp);
        }

        i3 = (int32_T)d18;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &bd_emlrtBCI, sp);
        }

        CR_H0_R_rho->data[(i2 + CR_H0_R_rho->size[0] * t) - 1] =
          (((CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] - c_im * d1)
            + d10 * -re * d2) + im * d5) - d7 * -b_re * d11;
        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &cd_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &dd_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ed_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &fd_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d19 != (int32_T)muDoubleScalarFloor(d19)) {
          emlrtIntegerCheckR2012b(d19, &nb_emlrtDCI, sp);
        }

        i2 = (int32_T)d19;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &gd_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d19 != (int32_T)muDoubleScalarFloor(d19)) {
          emlrtIntegerCheckR2012b(d19, &ob_emlrtDCI, sp);
        }

        i3 = (int32_T)d19;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &hd_emlrtBCI, sp);
        }

        st.site = &o_emlrtRSI;
        CR_H0_R_rho->data[(i2 + CR_H0_R_rho->size[0] * t) - 1] =
          (((CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] - d8 * P_R
             (x_w->data[g], XL1, P_I_Re[2] * (-h[5] - XL2), muDoubleScalarAbs
              (P_I_Im[2] * (-h[5] - XL2)))) - d9 * Q_R(x_w->data[g], XL1,
             P_I_Re[2] * (-h[5] - XL2), muDoubleScalarAbs(P_I_Im[2] * (-h[5] -
               XL2)))) + d13 * P_R(x_w->data[g], XL1, P_GB_Re[2] * (-h[5] - XL2),
            muDoubleScalarAbs(P_GB_Im[2] * (-h[5] - XL2)))) + d17 * Q_R
          (x_w->data[g], XL1, P_GB_Re[2] * (-h[5] - XL2), muDoubleScalarAbs
           (P_GB_Im[2] * (-h[5] - XL2)));
        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &id_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &jd_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &kd_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ld_emlrtBCI, sp);
        }

        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        re = A_I[loop_ub + 6].re;
        im = A_I[loop_ub + 6].im;
        b_re = B_I[t + 6].re;
        b_im = B_I[t + 6].im;
        c_re = A_GB[loop_ub + 6].re;
        beta1 = A_GB[loop_ub + 6].im;
        d_re = B_GB[t + 6].re;
        d_im = B_GB[t + 6].im;
        alpha1 = re * b_re - im * b_im;
        c_im = re * b_im + im * b_re;
        if (c_im == 0.0) {
          c_im = 0.0;
        } else if (alpha1 == 0.0) {
          c_im /= 2.0;
        } else {
          c_im /= 2.0;
        }

        if (c_im == 0.0) {
          c_im = 0.0;
        } else {
          c_im /= 3.1415926535897931;
        }

        st.site = &p_emlrtRSI;
        d1 = Q_R(x_w->data[g], XL1, P_I_Re[2] * (-h[5] - XL2), muDoubleScalarAbs
                 (P_I_Im[2] * (-h[5] - XL2)));
        alpha1 = re * b_re - im * b_im;
        im = re * b_im + im * b_re;
        if (im == 0.0) {
          re = alpha1 / 2.0;
          im = 0.0;
        } else if (alpha1 == 0.0) {
          re = 0.0;
          im /= 2.0;
        } else {
          re = alpha1 / 2.0;
          im /= 2.0;
        }

        if (im == 0.0) {
          re /= 3.1415926535897931;
        } else if (re == 0.0) {
          re = 0.0;
        } else {
          re /= 3.1415926535897931;
        }

        st.site = &p_emlrtRSI;
        d2 = P_R(x_w->data[g], XL1, P_I_Re[2] * (-h[5] - XL2), muDoubleScalarAbs
                 (P_I_Im[2] * (-h[5] - XL2)));
        b_re = c_re * d_re - beta1 * d_im;
        im = c_re * d_im + beta1 * d_re;
        if (im == 0.0) {
          im = 0.0;
        } else if (b_re == 0.0) {
          im /= 2.0;
        } else {
          im /= 2.0;
        }

        if (im == 0.0) {
          im = 0.0;
        } else {
          im /= 3.1415926535897931;
        }

        st.site = &p_emlrtRSI;
        d5 = Q_R(x_w->data[g], XL1, P_GB_Re[2] * (-h[5] - XL2),
                 muDoubleScalarAbs(P_GB_Im[2] * (-h[5] - XL2)));
        b_re = c_re * d_re - beta1 * d_im;
        b_im = c_re * d_im + beta1 * d_re;
        if (b_im == 0.0) {
          b_re /= 2.0;
          b_im = 0.0;
        } else if (b_re == 0.0) {
          b_re = 0.0;
          b_im /= 2.0;
        } else {
          b_re /= 2.0;
          b_im /= 2.0;
        }

        if (b_im == 0.0) {
          b_re /= 3.1415926535897931;
        } else if (b_re == 0.0) {
          b_re = 0.0;
        } else {
          b_re /= 3.1415926535897931;
        }

        st.site = &p_emlrtRSI;
        d8 = P_R(x_w->data[g], XL1, P_GB_Re[2] * (-h[5] - XL2),
                 muDoubleScalarAbs(P_GB_Im[2] * (-h[5] - XL2)));
        i1 = CR_H0_R_rho->size[0];
        if (d26 != (int32_T)muDoubleScalarFloor(d26)) {
          emlrtIntegerCheckR2012b(d26, &pb_emlrtDCI, sp);
        }

        i2 = (int32_T)d26;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &md_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d26 != (int32_T)muDoubleScalarFloor(d26)) {
          emlrtIntegerCheckR2012b(d26, &qb_emlrtDCI, sp);
        }

        i3 = (int32_T)d26;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &nd_emlrtBCI, sp);
        }

        CR_H0_R_rho->data[(i2 + CR_H0_R_rho->size[0] * t) - 1] =
          (((CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] - c_im * d1)
            + d15 * -re * d2) + im * d5) - d16 * -b_re * d8;
        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &od_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &pd_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &qd_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &rd_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d27 != (int32_T)muDoubleScalarFloor(d27)) {
          emlrtIntegerCheckR2012b(d27, &rb_emlrtDCI, sp);
        }

        i2 = (int32_T)d27;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &sd_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d27 != (int32_T)muDoubleScalarFloor(d27)) {
          emlrtIntegerCheckR2012b(d27, &sb_emlrtDCI, sp);
        }

        i3 = (int32_T)d27;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &td_emlrtBCI, sp);
        }

        st.site = &q_emlrtRSI;
        CR_H0_R_rho->data[(i2 + CR_H0_R_rho->size[0] * t) - 1] =
          (((CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] - d13 * P_R
             (x_w->data[g], XL1, P_GB_Re[2] * (-h[10] - XL2), muDoubleScalarAbs
              (P_GB_Im[2] * (-h[10] - XL2)))) - d14 * Q_R(x_w->data[g], XL1,
             P_GB_Re[2] * (-h[10] - XL2), muDoubleScalarAbs(P_GB_Im[2] * (-h[10]
               - XL2)))) + d20 * P_R(x_w->data[g], XL1, P_II_Re[2] * (-h[10] -
             XL2), muDoubleScalarAbs(P_II_Im[2] * (-h[10] - XL2)))) + d24 * Q_R
          (x_w->data[g], XL1, P_II_Re[2] * (-h[10] - XL2), muDoubleScalarAbs
           (P_II_Im[2] * (-h[10] - XL2)));
        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ud_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &vd_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &wd_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &xd_emlrtBCI, sp);
        }

        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        re = A_GB[loop_ub + 6].re;
        im = A_GB[loop_ub + 6].im;
        b_re = B_GB[t + 6].re;
        b_im = B_GB[t + 6].im;
        c_re = A_II[loop_ub + 6].re;
        beta1 = A_II[loop_ub + 6].im;
        d_re = B_II[t + 6].re;
        d_im = B_II[t + 6].im;
        alpha1 = re * b_re - im * b_im;
        c_im = re * b_im + im * b_re;
        if (c_im == 0.0) {
          c_im = 0.0;
        } else if (alpha1 == 0.0) {
          c_im /= 2.0;
        } else {
          c_im /= 2.0;
        }

        if (c_im == 0.0) {
          c_im = 0.0;
        } else {
          c_im /= 3.1415926535897931;
        }

        st.site = &r_emlrtRSI;
        d1 = Q_R(x_w->data[g], XL1, P_GB_Re[2] * (-h[10] - XL2),
                 muDoubleScalarAbs(P_GB_Im[2] * (-h[10] - XL2)));
        alpha1 = re * b_re - im * b_im;
        im = re * b_im + im * b_re;
        if (im == 0.0) {
          re = alpha1 / 2.0;
          im = 0.0;
        } else if (alpha1 == 0.0) {
          re = 0.0;
          im /= 2.0;
        } else {
          re = alpha1 / 2.0;
          im /= 2.0;
        }

        if (im == 0.0) {
          re /= 3.1415926535897931;
        } else if (re == 0.0) {
          re = 0.0;
        } else {
          re /= 3.1415926535897931;
        }

        st.site = &r_emlrtRSI;
        d2 = P_R(x_w->data[g], XL1, P_GB_Re[2] * (-h[10] - XL2),
                 muDoubleScalarAbs(P_GB_Im[2] * (-h[10] - XL2)));
        b_re = c_re * d_re - beta1 * d_im;
        im = c_re * d_im + beta1 * d_re;
        if (im == 0.0) {
          im = 0.0;
        } else if (b_re == 0.0) {
          im /= 2.0;
        } else {
          im /= 2.0;
        }

        if (im == 0.0) {
          im = 0.0;
        } else {
          im /= 3.1415926535897931;
        }

        st.site = &r_emlrtRSI;
        d5 = Q_R(x_w->data[g], XL1, P_II_Re[2] * (-h[10] - XL2),
                 muDoubleScalarAbs(P_II_Im[2] * (-h[10] - XL2)));
        b_re = c_re * d_re - beta1 * d_im;
        b_im = c_re * d_im + beta1 * d_re;
        if (b_im == 0.0) {
          b_re /= 2.0;
          b_im = 0.0;
        } else if (b_re == 0.0) {
          b_re = 0.0;
          b_im /= 2.0;
        } else {
          b_re /= 2.0;
          b_im /= 2.0;
        }

        if (b_im == 0.0) {
          b_re /= 3.1415926535897931;
        } else if (b_re == 0.0) {
          b_re = 0.0;
        } else {
          b_re /= 3.1415926535897931;
        }

        st.site = &r_emlrtRSI;
        d8 = P_R(x_w->data[g], XL1, P_II_Re[2] * (-h[10] - XL2),
                 muDoubleScalarAbs(P_II_Im[2] * (-h[10] - XL2)));
        i1 = CR_H0_R_rho->size[0];
        if (d34 != (int32_T)muDoubleScalarFloor(d34)) {
          emlrtIntegerCheckR2012b(d34, &tb_emlrtDCI, sp);
        }

        i2 = (int32_T)d34;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &yd_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d34 != (int32_T)muDoubleScalarFloor(d34)) {
          emlrtIntegerCheckR2012b(d34, &ub_emlrtDCI, sp);
        }

        i3 = (int32_T)d34;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &ae_emlrtBCI, sp);
        }

        CR_H0_R_rho->data[(i2 + CR_H0_R_rho->size[0] * t) - 1] =
          (((CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] - c_im * d1)
            + d22 * -re * d2) + im * d5) - d23 * -b_re * d8;
        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &be_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ce_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &de_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ee_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d35 != (int32_T)muDoubleScalarFloor(d35)) {
          emlrtIntegerCheckR2012b(d35, &vb_emlrtDCI, sp);
        }

        i2 = (int32_T)d35;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &fe_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d35 != (int32_T)muDoubleScalarFloor(d35)) {
          emlrtIntegerCheckR2012b(d35, &wb_emlrtDCI, sp);
        }

        i3 = (int32_T)d35;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &ge_emlrtBCI, sp);
        }

        st.site = &s_emlrtRSI;
        CR_H0_R_rho->data[(i2 + CR_H0_R_rho->size[0] * t) - 1] =
          (((CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] - d20 * P_R
             (x_w->data[g], XL1, P_II_Re[2] * (-h[15] - XL2), muDoubleScalarAbs
              (P_II_Im[2] * (-h[15] - XL2)))) - d21 * Q_R(x_w->data[g], XL1,
             P_II_Re[2] * (-h[15] - XL2), muDoubleScalarAbs(P_II_Im[2] * (-h[15]
               - XL2)))) + d4 * P_R(x_w->data[g], XL1, P_SL_Re[2] * (-h[15] -
             XL2), muDoubleScalarAbs(P_SL_Im[2] * (-h[15] - XL2)))) + d29 * Q_R
          (x_w->data[g], XL1, P_SL_Re[2] * (-h[15] - XL2), muDoubleScalarAbs
           (P_SL_Im[2] * (-h[15] - XL2)));
        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &he_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ie_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &je_emlrtBCI, sp);
        }

        i1 = x_w->size[0];
        i2 = 1 + g;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ke_emlrtBCI, sp);
        }

        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        /*  Eq. 3 in Ref.[2] */
        re = A_SL[loop_ub + 6].re;
        im = A_SL[loop_ub + 6].im;
        b_re = B_SL[t + 6].re;
        b_im = B_SL[t + 6].im;
        c_re = A_II[loop_ub + 6].re;
        beta1 = A_II[loop_ub + 6].im;
        d_re = B_II[t + 6].re;
        d_im = B_II[t + 6].im;
        alpha1 = c_re * d_re - beta1 * d_im;
        c_im = c_re * d_im + beta1 * d_re;
        if (c_im == 0.0) {
          c_im = 0.0;
        } else if (alpha1 == 0.0) {
          c_im /= 2.0;
        } else {
          c_im /= 2.0;
        }

        if (c_im == 0.0) {
          c_im = 0.0;
        } else {
          c_im /= 3.1415926535897931;
        }

        st.site = &t_emlrtRSI;
        d1 = Q_R(x_w->data[g], XL1, P_II_Re[2] * (-h[15] - XL2),
                 muDoubleScalarAbs(P_II_Im[2] * (-h[15] - XL2)));
        alpha1 = c_re * d_re - beta1 * d_im;
        beta1 = c_re * d_im + beta1 * d_re;
        if (beta1 == 0.0) {
          c_re = alpha1 / 2.0;
          beta1 = 0.0;
        } else if (alpha1 == 0.0) {
          c_re = 0.0;
          beta1 /= 2.0;
        } else {
          c_re = alpha1 / 2.0;
          beta1 /= 2.0;
        }

        if (beta1 == 0.0) {
          c_re /= 3.1415926535897931;
        } else if (c_re == 0.0) {
          c_re = 0.0;
        } else {
          c_re /= 3.1415926535897931;
        }

        st.site = &t_emlrtRSI;
        d2 = P_R(x_w->data[g], XL1, P_II_Re[2] * (-h[15] - XL2),
                 muDoubleScalarAbs(P_II_Im[2] * (-h[15] - XL2)));
        d_re = re * b_re - im * b_im;
        beta1 = re * b_im + im * b_re;
        if (beta1 == 0.0) {
          beta1 = 0.0;
        } else if (d_re == 0.0) {
          beta1 /= 2.0;
        } else {
          beta1 /= 2.0;
        }

        if (beta1 == 0.0) {
          beta1 = 0.0;
        } else {
          beta1 /= 3.1415926535897931;
        }

        st.site = &t_emlrtRSI;
        d4 = Q_R(x_w->data[g], XL1, P_SL_Re[2] * (-h[15] - XL2),
                 muDoubleScalarAbs(P_SL_Im[2] * (-h[15] - XL2)));
        d_re = re * b_re - im * b_im;
        im = re * b_im + im * b_re;
        if (im == 0.0) {
          re = d_re / 2.0;
          im = 0.0;
        } else if (d_re == 0.0) {
          re = 0.0;
          im /= 2.0;
        } else {
          re = d_re / 2.0;
          im /= 2.0;
        }

        if (im == 0.0) {
          re /= 3.1415926535897931;
        } else if (re == 0.0) {
          re = 0.0;
        } else {
          re /= 3.1415926535897931;
        }

        st.site = &t_emlrtRSI;
        d5 = P_R(x_w->data[g], XL1, P_SL_Re[2] * (-h[15] - XL2),
                 muDoubleScalarAbs(P_SL_Im[2] * (-h[15] - XL2)));
        i1 = CR_H0_R_rho->size[0];
        if (d37 != (int32_T)muDoubleScalarFloor(d37)) {
          emlrtIntegerCheckR2012b(d37, &xb_emlrtDCI, sp);
        }

        i2 = (int32_T)d37;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &le_emlrtBCI, sp);
        }

        i1 = CR_H0_R_rho->size[0];
        if (d37 != (int32_T)muDoubleScalarFloor(d37)) {
          emlrtIntegerCheckR2012b(d37, &yb_emlrtDCI, sp);
        }

        i3 = (int32_T)d37;
        if ((i3 < 1) || (i3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &me_emlrtBCI, sp);
        }

        CR_H0_R_rho->data[(i2 + CR_H0_R_rho->size[0] * t) - 1] =
          (((CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] - c_im * d1)
            + d25 * -c_re * d2) + beta1 * d4) - d28 * -re * d5;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }

        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  i0 = zeros_30Napp_3->size[0] * zeros_30Napp_3->size[1];
  i1 = zeros_30Napp_3->size[0] * zeros_30Napp_3->size[1];
  zeros_30Napp_3->size[1] = 3;
  emxEnsureCapacity_real_T(sp, zeros_30Napp_3, i1, &d_emlrtRTEI);
  loop_ub = i0 - 1;
  for (i0 = 0; i0 <= loop_ub; i0++) {
    zeros_30Napp_3->data[i0] *= 2.0;
  }

  i0 = CR_H0_R_rho->size[0] * CR_H0_R_rho->size[1];
  i1 = CR_H0_R_rho->size[0] * CR_H0_R_rho->size[1];
  CR_H0_R_rho->size[1] = 3;
  emxEnsureCapacity_real_T(sp, CR_H0_R_rho, i1, &e_emlrtRTEI);
  loop_ub = i0 - 1;
  for (i0 = 0; i0 <= loop_ub; i0++) {
    CR_H0_R_rho->data[i0] *= 2.0;
  }

  b_C_rho[0] = C_rho->size[0];
  b_C0_Cinv_C0_rho[0] = C0_Cinv_C0_rho->size[0];
  b_C_rho[1] = C_rho->size[1];
  b_C0_Cinv_C0_rho[1] = C0_Cinv_C0_rho->size[1];
  if ((b_C_rho[0] != b_C0_Cinv_C0_rho[0]) || (b_C_rho[1] != b_C0_Cinv_C0_rho[1]))
  {
    emlrtSizeEqCheckNDR2012b(&b_C_rho[0], &b_C0_Cinv_C0_rho[0], &c_emlrtECI, sp);
  }

  b_C_rho[0] = CH_H_rho->size[0];
  b_C0_Cinv_C0_rho[0] = CI_I_rho->size[0];
  b_C_rho[1] = CH_H_rho->size[1];
  b_C0_Cinv_C0_rho[1] = CI_I_rho->size[1];
  if ((b_C_rho[0] != b_C0_Cinv_C0_rho[0]) || (b_C_rho[1] != b_C0_Cinv_C0_rho[1]))
  {
    emlrtSizeEqCheckNDR2012b(&b_C_rho[0], &b_C0_Cinv_C0_rho[0], &d_emlrtECI, sp);
  }

  st.site = &u_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  if (C0_Cinv_rho->size[1] != CH_H0_H_rho->size[0]) {
    if (((C0_Cinv_rho->size[0] == 1) && (C0_Cinv_rho->size[1] == 1)) ||
        ((CH_H0_H_rho->size[0] == 1) && (CH_H0_H_rho->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(&b_st, &vb_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &wb_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  emxInit_real_T(&st, &a, 2, &i_emlrtRTEI, true);
  if ((C0_Cinv_rho->size[1] == 1) || (CH_H0_H_rho->size[0] == 1)) {
    i0 = a->size[0] * a->size[1];
    a->size[0] = C0_Cinv_rho->size[0];
    a->size[1] = CH_H0_H_rho->size[1];
    emxEnsureCapacity_real_T(&st, a, i0, &f_emlrtRTEI);
    loop_ub = C0_Cinv_rho->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      t = CH_H0_H_rho->size[1];
      for (i1 = 0; i1 < t; i1++) {
        a->data[i0 + a->size[0] * i1] = 0.0;
        g = C0_Cinv_rho->size[1];
        for (i2 = 0; i2 < g; i2++) {
          a->data[i0 + a->size[0] * i1] += C0_Cinv_rho->data[i0 +
            C0_Cinv_rho->size[0] * i2] * CH_H0_H_rho->data[i2 +
            CH_H0_H_rho->size[0] * i1];
        }
      }
    }
  } else {
    b_st.site = &bb_emlrtRSI;
    if ((C0_Cinv_rho->size[0] == 0) || (C0_Cinv_rho->size[1] == 0) ||
        (CH_H0_H_rho->size[0] == 0) || (CH_H0_H_rho->size[1] == 0)) {
      i0 = a->size[0] * a->size[1];
      a->size[0] = C0_Cinv_rho->size[0];
      a->size[1] = CH_H0_H_rho->size[1];
      emxEnsureCapacity_real_T(&b_st, a, i0, &f_emlrtRTEI);
      loop_ub = C0_Cinv_rho->size[0] * CH_H0_H_rho->size[1];
      for (i0 = 0; i0 < loop_ub; i0++) {
        a->data[i0] = 0.0;
      }
    } else {
      c_st.site = &eb_emlrtRSI;
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)C0_Cinv_rho->size[0];
      n_t = (ptrdiff_t)CH_H0_H_rho->size[1];
      k_t = (ptrdiff_t)C0_Cinv_rho->size[1];
      lda_t = (ptrdiff_t)C0_Cinv_rho->size[0];
      ldb_t = (ptrdiff_t)C0_Cinv_rho->size[1];
      ldc_t = (ptrdiff_t)C0_Cinv_rho->size[0];
      i0 = a->size[0] * a->size[1];
      a->size[0] = C0_Cinv_rho->size[0];
      a->size[1] = CH_H0_H_rho->size[1];
      emxEnsureCapacity_real_T(&c_st, a, i0, &g_emlrtRTEI);
      TRANSA = 'N';
      TRANSB = 'N';
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &C0_Cinv_rho->data[0],
            &lda_t, &CH_H0_H_rho->data[0], &ldb_t, &beta1, &a->data[0], &ldc_t);
    }
  }

  b_C_rho[0] = CH_H_rho->size[0];
  b_C_rho[1] = CH_H_rho->size[1];
  b_C0_Cinv_C0_rho[0] = a->size[0];
  b_C0_Cinv_C0_rho[1] = a->size[1];
  if ((b_C_rho[0] != b_C0_Cinv_C0_rho[0]) || (b_C_rho[1] != b_C0_Cinv_C0_rho[1]))
  {
    emlrtSizeEqCheckNDR2012b(&b_C_rho[0], &b_C0_Cinv_C0_rho[0], &d_emlrtECI, sp);
  }

  st.site = &u_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  if (C0_Cinv_rho->size[1] != CI_H0_I_rho->size[0]) {
    if (((C0_Cinv_rho->size[0] == 1) && (C0_Cinv_rho->size[1] == 1)) ||
        ((CI_H0_I_rho->size[0] == 1) && (CI_H0_I_rho->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(&b_st, &vb_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &wb_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  emxInit_real_T(&st, &r0, 2, &o_emlrtRTEI, true);
  if ((C0_Cinv_rho->size[1] == 1) || (CI_H0_I_rho->size[0] == 1)) {
    i0 = r0->size[0] * r0->size[1];
    r0->size[0] = C0_Cinv_rho->size[0];
    r0->size[1] = CI_H0_I_rho->size[1];
    emxEnsureCapacity_real_T(&st, r0, i0, &h_emlrtRTEI);
    loop_ub = C0_Cinv_rho->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      t = CI_H0_I_rho->size[1];
      for (i1 = 0; i1 < t; i1++) {
        r0->data[i0 + r0->size[0] * i1] = 0.0;
        g = C0_Cinv_rho->size[1];
        for (i2 = 0; i2 < g; i2++) {
          r0->data[i0 + r0->size[0] * i1] += C0_Cinv_rho->data[i0 +
            C0_Cinv_rho->size[0] * i2] * CI_H0_I_rho->data[i2 +
            CI_H0_I_rho->size[0] * i1];
        }
      }
    }
  } else {
    b_st.site = &bb_emlrtRSI;
    if ((C0_Cinv_rho->size[0] == 0) || (C0_Cinv_rho->size[1] == 0) ||
        (CI_H0_I_rho->size[0] == 0) || (CI_H0_I_rho->size[1] == 0)) {
      i0 = r0->size[0] * r0->size[1];
      r0->size[0] = C0_Cinv_rho->size[0];
      r0->size[1] = CI_H0_I_rho->size[1];
      emxEnsureCapacity_real_T(&b_st, r0, i0, &h_emlrtRTEI);
      loop_ub = C0_Cinv_rho->size[0] * CI_H0_I_rho->size[1];
      for (i0 = 0; i0 < loop_ub; i0++) {
        r0->data[i0] = 0.0;
      }
    } else {
      c_st.site = &eb_emlrtRSI;
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)C0_Cinv_rho->size[0];
      n_t = (ptrdiff_t)CI_H0_I_rho->size[1];
      k_t = (ptrdiff_t)C0_Cinv_rho->size[1];
      lda_t = (ptrdiff_t)C0_Cinv_rho->size[0];
      ldb_t = (ptrdiff_t)C0_Cinv_rho->size[1];
      ldc_t = (ptrdiff_t)C0_Cinv_rho->size[0];
      i0 = r0->size[0] * r0->size[1];
      r0->size[0] = C0_Cinv_rho->size[0];
      r0->size[1] = CI_H0_I_rho->size[1];
      emxEnsureCapacity_real_T(&c_st, r0, i0, &g_emlrtRTEI);
      TRANSA = 'N';
      TRANSB = 'N';
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &C0_Cinv_rho->data[0],
            &lda_t, &CI_H0_I_rho->data[0], &ldb_t, &beta1, &r0->data[0], &ldc_t);
    }
  }

  b_C_rho[0] = CH_H_rho->size[0];
  b_C_rho[1] = CH_H_rho->size[1];
  iv0[0] = r0->size[0];
  iv0[1] = r0->size[1];
  if ((b_C_rho[0] != iv0[0]) || (b_C_rho[1] != iv0[1])) {
    emlrtSizeEqCheckNDR2012b(&b_C_rho[0], &iv0[0], &d_emlrtECI, sp);
  }

  st.site = &u_emlrtRSI;
  i0 = CH_H_rho->size[0] * CH_H_rho->size[1];
  i1 = a->size[0] * a->size[1];
  a->size[0] = CH_H_rho->size[0];
  a->size[1] = CH_H_rho->size[1];
  emxEnsureCapacity_real_T(&st, a, i1, &i_emlrtRTEI);
  loop_ub = i0 - 1;
  for (i0 = 0; i0 <= loop_ub; i0++) {
    a->data[i0] = ((CH_H_rho->data[i0] + CI_I_rho->data[i0]) - a->data[i0]) -
      r0->data[i0];
  }

  b_st.site = &cb_emlrtRSI;
  if (a->size[1] != weights->size[0]) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((weights->size[0] == 1) &&
         (weights->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(&b_st, &vb_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &wb_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  if ((a->size[1] == 1) || (weights->size[0] == 1)) {
    i0 = r0->size[0] * r0->size[1];
    r0->size[0] = a->size[0];
    r0->size[1] = weights->size[1];
    emxEnsureCapacity_real_T(&st, r0, i0, &j_emlrtRTEI);
    loop_ub = a->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      t = weights->size[1];
      for (i1 = 0; i1 < t; i1++) {
        r0->data[i0 + r0->size[0] * i1] = 0.0;
        g = a->size[1];
        for (i2 = 0; i2 < g; i2++) {
          r0->data[i0 + r0->size[0] * i1] += a->data[i0 + a->size[0] * i2] *
            weights->data[i2 + weights->size[0] * i1];
        }
      }
    }
  } else {
    b_st.site = &bb_emlrtRSI;
    if ((a->size[0] == 0) || (a->size[1] == 0) || (weights->size[0] == 0) ||
        (weights->size[1] == 0)) {
      i0 = r0->size[0] * r0->size[1];
      r0->size[0] = a->size[0];
      r0->size[1] = weights->size[1];
      emxEnsureCapacity_real_T(&b_st, r0, i0, &j_emlrtRTEI);
      loop_ub = a->size[0] * weights->size[1];
      for (i0 = 0; i0 < loop_ub; i0++) {
        r0->data[i0] = 0.0;
      }
    } else {
      c_st.site = &eb_emlrtRSI;
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)a->size[0];
      n_t = (ptrdiff_t)weights->size[1];
      k_t = (ptrdiff_t)a->size[1];
      lda_t = (ptrdiff_t)a->size[0];
      ldb_t = (ptrdiff_t)a->size[1];
      ldc_t = (ptrdiff_t)a->size[0];
      i0 = r0->size[0] * r0->size[1];
      r0->size[0] = a->size[0];
      r0->size[1] = weights->size[1];
      emxEnsureCapacity_real_T(&c_st, r0, i0, &g_emlrtRTEI);
      TRANSA = 'N';
      TRANSB = 'N';
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a->data[0], &lda_t,
            &weights->data[0], &ldb_t, &beta1, &r0->data[0], &ldc_t);
    }
  }

  b_C_rho[0] = C_rho->size[0];
  b_C_rho[1] = C_rho->size[1];
  iv0[0] = r0->size[0];
  iv0[1] = r0->size[1];
  if ((b_C_rho[0] != iv0[0]) || (b_C_rho[1] != iv0[1])) {
    emlrtSizeEqCheckNDR2012b(&b_C_rho[0], &iv0[0], &c_emlrtECI, sp);
  }

  i0 = zeros_30Napp_3->size[0] * zeros_30Napp_3->size[1];
  i1 = zeros_30Napp_3->size[0] * zeros_30Napp_3->size[1];
  zeros_30Napp_3->size[1] = 3;
  emxEnsureCapacity_real_T(sp, zeros_30Napp_3, i1, &k_emlrtRTEI);
  loop_ub = i0 - 1;
  for (i0 = 0; i0 <= loop_ub; i0++) {
    zeros_30Napp_3->data[i0] = -zeros_30Napp_3->data[i0];
  }

  st.site = &u_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  if (C0_Cinv_rho->size[1] != CR_H0_R_rho->size[0]) {
    if ((C0_Cinv_rho->size[0] == 1) && (C0_Cinv_rho->size[1] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &vb_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &wb_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  emxInit_real_T(&st, &r1, 2, &o_emlrtRTEI, true);
  if ((C0_Cinv_rho->size[1] == 1) || (CR_H0_R_rho->size[0] == 1)) {
    i0 = r1->size[0] * r1->size[1];
    r1->size[0] = C0_Cinv_rho->size[0];
    r1->size[1] = 3;
    emxEnsureCapacity_real_T(&st, r1, i0, &l_emlrtRTEI);
    loop_ub = C0_Cinv_rho->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      for (i1 = 0; i1 < 3; i1++) {
        r1->data[i0 + r1->size[0] * i1] = 0.0;
        t = C0_Cinv_rho->size[1];
        for (i2 = 0; i2 < t; i2++) {
          r1->data[i0 + r1->size[0] * i1] += C0_Cinv_rho->data[i0 +
            C0_Cinv_rho->size[0] * i2] * CR_H0_R_rho->data[i2 +
            CR_H0_R_rho->size[0] * i1];
        }
      }
    }
  } else {
    b_st.site = &bb_emlrtRSI;
    if ((C0_Cinv_rho->size[0] == 0) || (C0_Cinv_rho->size[1] == 0) ||
        (CR_H0_R_rho->size[0] == 0)) {
      i0 = r1->size[0] * r1->size[1];
      r1->size[0] = C0_Cinv_rho->size[0];
      r1->size[1] = 3;
      emxEnsureCapacity_real_T(&b_st, r1, i0, &l_emlrtRTEI);
      loop_ub = C0_Cinv_rho->size[0] * 3;
      for (i0 = 0; i0 < loop_ub; i0++) {
        r1->data[i0] = 0.0;
      }
    } else {
      c_st.site = &eb_emlrtRSI;
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)C0_Cinv_rho->size[0];
      n_t = (ptrdiff_t)3;
      k_t = (ptrdiff_t)C0_Cinv_rho->size[1];
      lda_t = (ptrdiff_t)C0_Cinv_rho->size[0];
      ldb_t = (ptrdiff_t)C0_Cinv_rho->size[1];
      ldc_t = (ptrdiff_t)C0_Cinv_rho->size[0];
      i0 = r1->size[0] * r1->size[1];
      r1->size[0] = C0_Cinv_rho->size[0];
      r1->size[1] = 3;
      emxEnsureCapacity_real_T(&c_st, r1, i0, &g_emlrtRTEI);
      TRANSA = 'N';
      TRANSB = 'N';
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &C0_Cinv_rho->data[0],
            &lda_t, &CR_H0_R_rho->data[0], &ldb_t, &beta1, &r1->data[0], &ldc_t);
    }
  }

  b_C0_Cinv_C0_rho[0] = zeros_30Napp_3->size[0];
  b_C0_Cinv_C0_rho[1] = zeros_30Napp_3->size[1];
  iv0[0] = r1->size[0];
  iv0[1] = r1->size[1];
  emxInit_int32_T(sp, &r2, 1, &o_emlrtRTEI, true);
  if ((b_C0_Cinv_C0_rho[0] != iv0[0]) || (b_C0_Cinv_C0_rho[1] != iv0[1])) {
    emlrtSizeEqCheckNDR2012b(&b_C0_Cinv_C0_rho[0], &iv0[0], &b_emlrtECI, sp);
  }

  loop_ub = (int32_T)(30.0 * N_app);
  i0 = r2->size[0];
  r2->size[0] = loop_ub;
  emxEnsureCapacity_int32_T(sp, r2, i0, &m_emlrtRTEI);
  for (i0 = 0; i0 < loop_ub; i0++) {
    r2->data[i0] = i0;
  }

  i0 = (int32_T)n;
  i1 = (int32_T)n;
  if ((i1 < 1) || (i1 > i0)) {
    emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &emlrtBCI, sp);
  }

  i0 = a->size[0] * a->size[1];
  a->size[0] = C_rho->size[0];
  a->size[1] = C_rho->size[1];
  emxEnsureCapacity_real_T(sp, a, i0, &n_emlrtRTEI);
  loop_ub = C_rho->size[0] * C_rho->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    a->data[i0] = (C_rho->data[i0] + C0_Cinv_C0_rho->data[i0]) + r0->data[i0];
  }

  emxFree_real_T(&r0);
  i0 = CR_H0_R_rho->size[0] * CR_H0_R_rho->size[1];
  CR_H0_R_rho->size[0] = zeros_30Napp_3->size[0];
  CR_H0_R_rho->size[1] = 3;
  emxEnsureCapacity_real_T(sp, CR_H0_R_rho, i0, &k_emlrtRTEI);
  loop_ub = zeros_30Napp_3->size[0] * zeros_30Napp_3->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    CR_H0_R_rho->data[i0] = zeros_30Napp_3->data[i0] + r1->data[i0];
  }

  emxFree_real_T(&r1);
  st.site = &u_emlrtRSI;
  mldivide(&st, a, CR_H0_R_rho, zeros_30Napp_3);
  st.site = &u_emlrtRSI;
  b_st.site = &bb_emlrtRSI;
  emxFree_real_T(&a);
  emxFree_real_T(&CR_H0_R_rho);
  emxInit_real_T(&b_st, &r3, 1, &o_emlrtRTEI, true);
  if (zeros_30Napp_3->size[0] == 0) {
    r3->size[0] = 0;
  } else {
    c_st.site = &eb_emlrtRSI;
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)zeros_30Napp_3->size[0];
    n_t = (ptrdiff_t)1;
    k_t = (ptrdiff_t)3;
    lda_t = (ptrdiff_t)zeros_30Napp_3->size[0];
    ldb_t = (ptrdiff_t)3;
    ldc_t = (ptrdiff_t)zeros_30Napp_3->size[0];
    i0 = r3->size[0];
    r3->size[0] = zeros_30Napp_3->size[0];
    emxEnsureCapacity_real_T(&c_st, r3, i0, &g_emlrtRTEI);
    TRANSA = 'N';
    TRANSB = 'N';
    dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &zeros_30Napp_3->data[0],
          &lda_t, &b[0], &ldb_t, &beta1, &r3->data[0], &ldc_t);
  }

  emxFree_real_T(&zeros_30Napp_3);
  iv1[0] = r2->size[0];
  emlrtSubAssignSizeCheckR2012b(&iv1[0], 1, &(*(int32_T (*)[1])r3->size)[0], 1,
    &emlrtECI, sp);
  loop_ub = r3->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    rho_t_Napp->data[r2->data[i0] + rho_t_Napp->size[0] * ((int32_T)n - 1)] =
      r3->data[i0];
  }

  emxFree_real_T(&r3);
  emxFree_int32_T(&r2);
  st.site = &v_emlrtRSI;
  rho(&st, Range, C_I, P_I, P_I_Re, P_I_Im, A_I, B_I, C_II, P_II, P_II_Re,
      P_II_Im, A_II, B_II, C_GB, P_GB, P_GB_Re, P_GB_Im, A_GB, B_GB, C_SU, P_SU,
      P_SU_Re, P_SU_Im, A_SU, B_SU, C_SL, P_SL, P_SL_Re, P_SL_Im, A_SL, B_SL, h,
      XL1, XL2, N_app, weights, rho_t_Napp, x_w, C, C0_Cinv, C0_Cinv_C0, b,
      distri_rho);
  emxFree_real_T(&rho_t_Napp);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (rho_distri.c) */
