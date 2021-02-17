/*
 * Rho_density.c
 *
 * Code generation for function 'Rho_density'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "Rho_density.h"
#include "Q_R.h"
#include "P_R.h"
#include "Rho_density_emxutil.h"
#include "Im_Xi.h"
#include "Re_Xi.h"
#include "mldivide.h"
#include "Rho_density_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 13,    /* lineNo */
  "Rho_density",                       /* fcnName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 14,  /* lineNo */
  "Rho_density",                       /* fcnName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 15,  /* lineNo */
  "Rho_density",                       /* fcnName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 16,  /* lineNo */
  "Rho_density",                       /* fcnName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 17,  /* lineNo */
  "Rho_density",                       /* fcnName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 18,  /* lineNo */
  "Rho_density",                       /* fcnName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 19,  /* lineNo */
  "Rho_density",                       /* fcnName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 20,  /* lineNo */
  "Rho_density",                       /* fcnName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 21,  /* lineNo */
  "Rho_density",                       /* fcnName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 22,  /* lineNo */
  "Rho_density",                       /* fcnName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 24,  /* lineNo */
  "Rho_density",                       /* fcnName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 25,  /* lineNo */
  "Rho_density",                       /* fcnName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 26,  /* lineNo */
  "Rho_density",                       /* fcnName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 27,  /* lineNo */
  "Rho_density",                       /* fcnName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 28,  /* lineNo */
  "Rho_density",                       /* fcnName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 29,  /* lineNo */
  "Rho_density",                       /* fcnName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 30,  /* lineNo */
  "Rho_density",                       /* fcnName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 31,  /* lineNo */
  "Rho_density",                       /* fcnName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 32,  /* lineNo */
  "Rho_density",                       /* fcnName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 33,  /* lineNo */
  "Rho_density",                       /* fcnName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 41,  /* lineNo */
  "Rho_density",                       /* fcnName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 52, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 21, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 118,/* lineNo */
  "mtimes",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+blas/mtimes.m"/* pathName */
};

static emlrtRTEInfo emlrtRTEI = { 3,   /* lineNo */
  1,                                   /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 6, /* lineNo */
  5,                                   /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 8, /* lineNo */
  5,                                   /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 38,/* lineNo */
  5,                                   /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 39,/* lineNo */
  5,                                   /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 41,/* lineNo */
  66,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 118,/* lineNo */
  13,                                  /* colNo */
  "mtimes",                            /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+blas/mtimes.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 41,/* lineNo */
  90,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 41,/* lineNo */
  48,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pName */
};

static emlrtRTEInfo j_emlrtRTEI = { 41,/* lineNo */
  47,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 41,/* lineNo */
  125,                                 /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 41,/* lineNo */
  135,                                 /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pName */
};

static emlrtRTEInfo m_emlrtRTEI = { 41,/* lineNo */
  16,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pName */
};

static emlrtRTEInfo n_emlrtRTEI = { 41,/* lineNo */
  26,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pName */
};

static emlrtRTEInfo o_emlrtRTEI = { 1, /* lineNo */
  21,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = { 83,/* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = { 88,/* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  41,                                  /* lineNo */
  5,                                   /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  18,                                  /* colNo */
  "rho_t_Napp",                        /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo b_emlrtECI = { 2,   /* nDims */
  41,                                  /* lineNo */
  125,                                 /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pName */
};

static emlrtECInfo c_emlrtECI = { 2,   /* nDims */
  41,                                  /* lineNo */
  26,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pName */
};

static emlrtECInfo d_emlrtECI = { 2,   /* nDims */
  41,                                  /* lineNo */
  48,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = { 11,/* lineNo */
  19,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = { 5,/* lineNo */
  11,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 3,     /* lineNo */
  18,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 3,   /* lineNo */
  18,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 3,   /* lineNo */
  27,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 3,   /* lineNo */
  27,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 6,   /* lineNo */
  26,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 6,   /* lineNo */
  26,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 3,   /* lineNo */
  1,                                   /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 3,   /* lineNo */
  1,                                   /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 6,   /* lineNo */
  5,                                   /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 6,   /* lineNo */
  5,                                   /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  13,                                  /* lineNo */
  21,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 13,  /* lineNo */
  21,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  13,                                  /* lineNo */
  47,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 13,  /* lineNo */
  47,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  13,                                  /* lineNo */
  114,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  13,                                  /* lineNo */
  121,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  13,                                  /* lineNo */
  148,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  13,                                  /* lineNo */
  175,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  13,                                  /* lineNo */
  228,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  13,                                  /* lineNo */
  235,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  13,                                  /* lineNo */
  262,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  13,                                  /* lineNo */
  289,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  21,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 14,  /* lineNo */
  21,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  47,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 14,  /* lineNo */
  47,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  114,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  121,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  156,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  193,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  247,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  254,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  289,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  326,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  118,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  125,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  160,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  200,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  297,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  304,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  339,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  379,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  430,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  437,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  471,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  510,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  602,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  609,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  643,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  682,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  243,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  552,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  21,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 15,  /* lineNo */
  21,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  47,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 15,  /* lineNo */
  47,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  106,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  113,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  148,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  184,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  230,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  237,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  272,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  308,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  352,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  359,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  393,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  428,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  472,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  479,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  513,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  548,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  21,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 16,  /* lineNo */
  21,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  47,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 16,  /* lineNo */
  47,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  116,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  123,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  157,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  196,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  288,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  295,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  329,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  368,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  423,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  430,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  465,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  505,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  602,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  609,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  644,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  684,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  238,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  548,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  21,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = { 17,  /* lineNo */
  21,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  48,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 17,  /* lineNo */
  48,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  106,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  113,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  147,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  182,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  226,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  233,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  267,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  302,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  348,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  355,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  390,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  426,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  472,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  479,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  514,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo td_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  550,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ud_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  21,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 18,  /* lineNo */
  21,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo vd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  48,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 18,  /* lineNo */
  48,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo wd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  120,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  127,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  162,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ae_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  202,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo be_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  299,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ce_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  306,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo de_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  341,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ee_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  381,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  436,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ge_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  443,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo he_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  478,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ie_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  518,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo je_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  615,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ke_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  622,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo le_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  657,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo me_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  697,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ne_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  245,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  561,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  21,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = { 19,  /* lineNo */
  21,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo qe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  48,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = { 19,  /* lineNo */
  48,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo re_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  108,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo se_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  115,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo te_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  150,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ue_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  186,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ve_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  232,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo we_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  239,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  274,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ye_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  310,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo af_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  356,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  363,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  398,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo df_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  434,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ef_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  480,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ff_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  487,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  522,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  558,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo if_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  21,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = { 20,  /* lineNo */
  21,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo jf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  48,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = { 20, /* lineNo */
  48,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo kf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  120,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  127,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  162,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  202,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo of_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  299,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  306,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  341,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  381,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  436,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  443,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  478,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  518,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  615,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  622,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  657,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ag_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  697,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  245,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  561,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  21,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI = { 21, /* lineNo */
  21,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo eg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  48,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo cb_emlrtDCI = { 21, /* lineNo */
  48,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo fg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  108,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  115,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  150,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ig_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  186,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  232,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  239,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  274,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  310,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ng_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  356,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo og_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  363,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  398,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  434,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  480,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  487,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  522,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ug_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  558,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  21,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo db_emlrtDCI = { 22, /* lineNo */
  21,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo wg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  48,                                  /* colNo */
  "CR_R_rho",                          /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo eb_emlrtDCI = { 22, /* lineNo */
  48,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo xg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  21,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo fb_emlrtDCI = { 24, /* lineNo */
  21,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo yg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  50,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo gb_emlrtDCI = { 24, /* lineNo */
  50,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ah_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  120,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  127,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ch_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  154,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  181,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  234,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  241,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  268,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  295,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ih_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  21,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo hb_emlrtDCI = { 25, /* lineNo */
  21,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo jh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  50,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ib_emlrtDCI = { 25, /* lineNo */
  50,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo kh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  120,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  127,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  162,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  199,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  253,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ph_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  260,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  295,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  332,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  124,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo th_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  131,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  166,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  206,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  303,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  310,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  345,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ai_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  385,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  436,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ci_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  443,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo di_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  477,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ei_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  516,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  608,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  615,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  649,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ii_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  688,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ji_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  249,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ki_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  558,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo li_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  21,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo jb_emlrtDCI = { 26, /* lineNo */
  21,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo mi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  50,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo kb_emlrtDCI = { 26, /* lineNo */
  50,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ni_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  116,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  123,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  158,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  198,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ri_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  287,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo si_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  294,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ti_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  329,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ui_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  369,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  414,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  421,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  455,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  494,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo aj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  580,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  587,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  621,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  660,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ej_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  241,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  536,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  21,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo lb_emlrtDCI = { 27, /* lineNo */
  21,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo hj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  50,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo mb_emlrtDCI = { 27, /* lineNo */
  50,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ij_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  122,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  129,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  163,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  202,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  294,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  301,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  335,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  374,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  429,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  436,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  471,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  511,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  608,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  615,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  650,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  690,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  244,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ak_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  554,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  21,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo nb_emlrtDCI = { 28, /* lineNo */
  21,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ck_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  51,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ob_emlrtDCI = { 28, /* lineNo */
  51,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo dk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  116,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ek_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  123,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  157,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  196,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  282,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ik_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  289,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  323,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  362,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  409,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  416,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  451,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ok_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  491,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  580,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  587,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  622,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  662,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  238,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  534,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  21,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo pb_emlrtDCI = { 29, /* lineNo */
  21,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo wk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  51,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo qb_emlrtDCI = { 29, /* lineNo */
  51,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo xk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  126,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  133,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo al_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  168,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  208,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  305,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  312,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo el_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  347,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  387,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  442,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  449,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo il_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  484,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  524,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  621,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ll_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  628,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ml_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  663,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  703,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ol_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  251,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  567,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ql_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  21,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo rb_emlrtDCI = { 30, /* lineNo */
  21,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo rl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  51,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo sb_emlrtDCI = { 30, /* lineNo */
  51,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo sl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  118,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  125,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ul_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  160,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  200,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  289,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  296,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  331,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo am_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  371,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  418,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  425,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  460,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo em_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  500,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  589,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  596,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  631,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo im_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  671,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  243,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo km_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  543,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  21,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo tb_emlrtDCI = { 31, /* lineNo */
  21,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo mm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  51,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ub_emlrtDCI = { 31, /* lineNo */
  51,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo nm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  126,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo om_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  133,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  168,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  208,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  305,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  312,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  347,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo um_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  387,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  442,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  449,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  484,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ym_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  524,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo an_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  621,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  628,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  663,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  703,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo en_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  251,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  567,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  21,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo vb_emlrtDCI = { 32, /* lineNo */
  21,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo hn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  51,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo wb_emlrtDCI = { 32, /* lineNo */
  51,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo in_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  118,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  125,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  160,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ln_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  200,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  289,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  296,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo on_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  331,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  371,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  418,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  425,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  460,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  500,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo un_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  589,                                 /* colNo */
  "x_w",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  596,                                 /* colNo */
  "XL1",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  631,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  671,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  243,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ao_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  543,                                 /* colNo */
  "XL2",                               /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bo_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  21,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo xb_emlrtDCI = { 33, /* lineNo */
  21,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo co_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  51,                                  /* colNo */
  "CR_H0_R_rho",                       /* aName */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo yb_emlrtDCI = { 33, /* lineNo */
  51,                                  /* colNo */
  "Rho_density",                       /* fName */
  "/home/xiaolei/Documents/ImageStress/Rho_density.m",/* pName */
  1                                    /* checkKind */
};

/* Function Definitions */
void Rho_density(const emlrtStack *sp, const real_T b[3], real_T n, const
                 emxArray_real_T *XL1, const emxArray_real_T *XL2, const
                 emxArray_real_T *C_rho, const emxArray_real_T *C0_Cinv_C0_rho,
                 const emxArray_real_T *C0_Cinv_rho, const emxArray_real_T
                 *CH_H_rho, const emxArray_real_T *CI_I_rho, const
                 emxArray_real_T *CH_H0_H_rho, const emxArray_real_T
                 *CI_H0_I_rho, const real_T C_I[81], const creal_T P_I[3], const
                 real_T P_I_Re[3], const real_T P_I_Im[3], const creal_T A_I[9],
                 const creal_T B_I[9], const real_T C_II[81], const creal_T
                 P_II[3], const real_T P_II_Re[3], const real_T P_II_Im[3],
                 const creal_T A_II[9], const creal_T B_II[9], const real_T
                 C_GB[81], const creal_T P_GB[3], const real_T P_GB_Re[3], const
                 real_T P_GB_Im[3], const creal_T A_GB[9], const creal_T B_GB[9],
                 const real_T C_SU[81], const creal_T P_SU[3], const real_T
                 P_SU_Re[3], const real_T P_SU_Im[3], const creal_T A_SU[9],
                 const creal_T B_SU[9], const real_T C_SL[81], const creal_T
                 P_SL[3], const real_T P_SL_Re[3], const real_T P_SL_Im[3],
                 const creal_T A_SL[9], const creal_T B_SL[9], const real_T h[25],
                 real_T N_app, const emxArray_real_T *weights, const
                 emxArray_real_T *x_w, emxArray_real_T *rho_t_Napp)
{
  int32_T i0;
  real_T d0;
  int32_T loop_ub;
  emxArray_real_T *zeros_30Napp_3;
  emxArray_real_T *CR_H0_R_rho;
  emxArray_real_T *r0;
  emxArray_real_T *r1;
  emxArray_int32_T *r2;
  emxArray_real_T *r3;
  emxArray_real_T *a;
  emxArray_real_T *b_C_rho;
  emxArray_real_T *b_zeros_30Napp_3;
  int32_T n_dis;
  int32_T i1;
  int32_T t;
  int32_T i2;
  int32_T g;
  int32_T i3;
  int32_T c_C_rho[2];
  int32_T b_C0_Cinv_C0_rho[2];
  int32_T i4;
  int32_T i5;
  int32_T i6;
  real_T alpha1;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  real_T d1;
  ptrdiff_t ldc_t;
  real_T d2;
  real_T d3;
  char_T TRANSA;
  char_T TRANSB;
  int32_T iv0[2];
  real_T d4;
  real_T d5;
  int32_T iv1[1];
  real_T d6;
  real_T d7;
  real_T d8;
  real_T im_tmp;
  real_T im;
  real_T d9;
  real_T re;
  real_T b_im;
  real_T d10;
  real_T d11;
  real_T b_re;
  real_T d12;
  real_T d13;
  real_T d14;
  real_T c_im;
  real_T d15;
  real_T d16;
  real_T d17;
  real_T d18;
  real_T c_re;
  real_T d19;
  real_T d_re;
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

  i0 = (int32_T)n;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, n, mxDOUBLE_CLASS, (int32_T)n,
    &mb_emlrtRTEI, sp);
  emxInit_real_T(sp, &zeros_30Napp_3, 2, &b_emlrtRTEI, true);
  emxInit_real_T(sp, &CR_H0_R_rho, 2, &c_emlrtRTEI, true);
  emxInit_real_T(sp, &r0, 2, &o_emlrtRTEI, true);
  emxInit_real_T(sp, &r1, 2, &o_emlrtRTEI, true);
  emxInit_int32_T(sp, &r2, 1, &o_emlrtRTEI, true);
  emxInit_real_T(sp, &r3, 1, &o_emlrtRTEI, true);
  emxInit_real_T(sp, &a, 2, &i_emlrtRTEI, true);
  emxInit_real_T(sp, &b_C_rho, 2, &n_emlrtRTEI, true);
  emxInit_real_T(sp, &b_zeros_30Napp_3, 2, &k_emlrtRTEI, true);
  for (n_dis = 0; n_dis < i0; n_dis++) {
    i1 = zeros_30Napp_3->size[0] * zeros_30Napp_3->size[1];
    d0 = 30.0 * N_app;
    if (!(d0 >= 0.0)) {
      emlrtNonNegativeCheckR2012b(d0, &f_emlrtDCI, sp);
    }

    if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
      emlrtIntegerCheckR2012b(d0, &e_emlrtDCI, sp);
    }

    zeros_30Napp_3->size[0] = (int32_T)d0;
    zeros_30Napp_3->size[1] = 3;
    emxEnsureCapacity_real_T(sp, zeros_30Napp_3, i1, &b_emlrtRTEI);
    d0 = 30.0 * N_app;
    if (!(d0 >= 0.0)) {
      emlrtNonNegativeCheckR2012b(d0, &j_emlrtDCI, sp);
    }

    if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
      emlrtIntegerCheckR2012b(d0, &i_emlrtDCI, sp);
    }

    loop_ub = (int32_T)d0 * 3;
    for (i1 = 0; i1 < loop_ub; i1++) {
      zeros_30Napp_3->data[i1] = 0.0;
    }

    i1 = CR_H0_R_rho->size[0] * CR_H0_R_rho->size[1];
    CR_H0_R_rho->size[0] = (int32_T)(30.0 * N_app);
    CR_H0_R_rho->size[1] = 3;
    emxEnsureCapacity_real_T(sp, CR_H0_R_rho, i1, &c_emlrtRTEI);
    loop_ub = (int32_T)(30.0 * N_app) * 3;
    for (i1 = 0; i1 < loop_ub; i1++) {
      CR_H0_R_rho->data[i1] = 0.0;
    }

    i1 = (int32_T)N_app;
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      for (t = 0; t < 3; t++) {
        emlrtForLoopVectorCheckR2012b(1.0, 1.0, N_app, mxDOUBLE_CLASS, (int32_T)
          N_app, &lb_emlrtRTEI, sp);
        for (g = 0; g < i1; g++) {
          i2 = zeros_30Napp_3->size[0];
          d0 = ((1.0 + (real_T)loop_ub) - 1.0) * N_app + (1.0 + (real_T)g);
          if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
            emlrtIntegerCheckR2012b(d0, &k_emlrtDCI, sp);
          }

          i3 = (int32_T)d0;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &b_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
            emlrtIntegerCheckR2012b(d0, &l_emlrtDCI, sp);
          }

          i4 = (int32_T)d0;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &c_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i5 = (int32_T)(1U + g);
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &d_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i6 = (int32_T)(1U + n_dis);
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &e_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &f_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &g_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &h_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &i_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &j_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &k_emlrtBCI, sp);
          }

          st.site = &emlrtRSI;
          d1 = Re_Xi(&st, 1.0 + (real_T)t, 1.0, 1.0 + (real_T)loop_ub, C_SU,
                     P_SU, A_SU, B_SU);
          st.site = &emlrtRSI;
          d2 = Im_Xi(&st, 1.0 + (real_T)t, 1.0, 1.0 + (real_T)loop_ub, C_SU,
                     P_SU, A_SU, B_SU);
          st.site = &emlrtRSI;
          zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] =
            (zeros_30Napp_3->data[(i4 + zeros_30Napp_3->size[0] * t) - 1] - d1 *
             Q_R(x_w->data[i5 - 1], XL1->data[i6 - 1], -P_SU_Re[0] * XL2->
                 data[i6 - 1], -P_SU_Im[0] * XL2->data[i6 - 1])) + d2 * P_R
            (x_w->data[i5 - 1], XL1->data[i6 - 1], -P_SU_Re[0] * XL2->data[i6 -
             1], -P_SU_Im[0] * XL2->data[i6 - 1]);
          i2 = zeros_30Napp_3->size[0];
          d3 = ((1.0 + (real_T)loop_ub) + 2.0) * N_app + (1.0 + (real_T)g);
          if (d3 != (int32_T)muDoubleScalarFloor(d3)) {
            emlrtIntegerCheckR2012b(d3, &m_emlrtDCI, sp);
          }

          i3 = (int32_T)d3;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &l_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d3 != (int32_T)muDoubleScalarFloor(d3)) {
            emlrtIntegerCheckR2012b(d3, &n_emlrtDCI, sp);
          }

          i4 = (int32_T)d3;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &m_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &n_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &o_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &p_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &q_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &r_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &s_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &t_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &u_emlrtBCI, sp);
          }

          st.site = &b_emlrtRSI;
          d4 = Re_Xi(&st, 1.0 + (real_T)t, 1.0, 1.0 + (real_T)loop_ub, C_SL,
                     P_SL, A_SL, B_SL);
          st.site = &b_emlrtRSI;
          d5 = Im_Xi(&st, 1.0 + (real_T)t, 1.0, 1.0 + (real_T)loop_ub, C_SL,
                     P_SL, A_SL, B_SL);
          st.site = &b_emlrtRSI;
          zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] =
            (zeros_30Napp_3->data[(i4 + zeros_30Napp_3->size[0] * t) - 1] - d4 *
             Q_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_SL_Re[0] * (-h[20] -
               XL2->data[i6 - 1]), -P_SL_Im[0] * (-h[20] - XL2->data[i6 - 1])))
            - d5 * P_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_SL_Re[0] * (-h[20]
            - XL2->data[i6 - 1]), -P_SL_Im[0] * (-h[20] - XL2->data[i6 - 1]));
          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &v_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &w_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &x_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &y_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ab_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &bb_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &cb_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &db_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &eb_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &fb_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &gb_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &hb_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ib_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &jb_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &kb_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &lb_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &mb_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &nb_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          d6 = ((1.0 + (real_T)loop_ub) + 5.0) * N_app + (1.0 + (real_T)g);
          if (d6 != (int32_T)muDoubleScalarFloor(d6)) {
            emlrtIntegerCheckR2012b(d6, &o_emlrtDCI, sp);
          }

          i3 = (int32_T)d6;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ob_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d6 != (int32_T)muDoubleScalarFloor(d6)) {
            emlrtIntegerCheckR2012b(d6, &p_emlrtDCI, sp);
          }

          i4 = (int32_T)d6;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &pb_emlrtBCI, sp);
          }

          st.site = &c_emlrtRSI;
          d7 = Re_Xi(&st, 1.0 + (real_T)t, 1.0, 1.0 + (real_T)loop_ub, C_I, P_I,
                     A_I, B_I);
          st.site = &c_emlrtRSI;
          d8 = Im_Xi(&st, 1.0 + (real_T)t, 1.0, 1.0 + (real_T)loop_ub, C_I, P_I,
                     A_I, B_I);
          st.site = &c_emlrtRSI;
          zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] =
            (((zeros_30Napp_3->data[(i4 + zeros_30Napp_3->size[0] * t) - 1] - d1
               * Q_R(x_w->data[g], XL1->data[n_dis], P_SU_Re[0] * (-h[0] -
                 XL2->data[n_dis]), muDoubleScalarAbs(P_SU_Im[0] * (-h[0] -
                  XL2->data[n_dis])))) + muDoubleScalarSign(P_SU_Im[0] * (-h[0]
                - XL2->data[n_dis])) * d2 * P_R(x_w->data[g], XL1->data[n_dis],
               P_SU_Re[0] * (-h[0] - XL2->data[n_dis]), muDoubleScalarAbs
               (P_SU_Im[0] * (-h[0] - XL2->data[n_dis])))) + d7 * Q_R(x_w->
              data[g], XL1->data[n_dis], P_I_Re[0] * (-h[0] - XL2->data[n_dis]),
              muDoubleScalarAbs(P_I_Im[0] * (-h[0] - XL2->data[n_dis])))) -
            muDoubleScalarSign(P_I_Im[0] * (-h[0] - XL2->data[n_dis])) * d8 *
            P_R(x_w->data[g], XL1->data[n_dis], P_I_Re[0] * (-h[0] - XL2->
                 data[n_dis]), muDoubleScalarAbs(P_I_Im[0] * (-h[0] - XL2->
                  data[n_dis])));

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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &qb_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &rb_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &sb_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &tb_emlrtBCI, sp);
          }

          st.site = &d_emlrtRSI;
          d9 = P_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_SU_Re[0] * (-h[0] -
                    XL2->data[i6 - 1]), P_SU_Im[0] * (-h[0] - XL2->data[i6 - 1]));
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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &ub_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &vb_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &wb_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &xb_emlrtBCI, sp);
          }

          st.site = &d_emlrtRSI;
          d10 = Q_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_SU_Re[0] * (-h[0] -
                     XL2->data[i6 - 1]), P_SU_Im[0] * (-h[0] - XL2->data[i6 - 1]));
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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &yb_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &ac_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &bc_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &cc_emlrtBCI, sp);
          }

          st.site = &d_emlrtRSI;
          d11 = P_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_I_Re[0] * (-h[0] -
                     XL2->data[i6 - 1]), P_I_Im[0] * (-h[0] - XL2->data[i6 - 1]));
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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &dc_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &ec_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &fc_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &gc_emlrtBCI, sp);
          }

          st.site = &d_emlrtRSI;
          d12 = Q_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_I_Re[0] * (-h[0] -
                     XL2->data[i6 - 1]), P_I_Im[0] * (-h[0] - XL2->data[i6 - 1]));
          i2 = zeros_30Napp_3->size[0];
          d13 = ((1.0 + (real_T)loop_ub) + 8.0) * N_app + (1.0 + (real_T)g);
          if (d13 != (int32_T)muDoubleScalarFloor(d13)) {
            emlrtIntegerCheckR2012b(d13, &q_emlrtDCI, sp);
          }

          i3 = (int32_T)d13;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &hc_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d13 != (int32_T)muDoubleScalarFloor(d13)) {
            emlrtIntegerCheckR2012b(d13, &r_emlrtDCI, sp);
          }

          i4 = (int32_T)d13;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &ic_emlrtBCI, sp);
          }

          zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] =
            (((zeros_30Napp_3->data[(i4 + zeros_30Napp_3->size[0] * t) - 1] + im
               * d9) + -re * d10) - b_im * d11) - -b_re * d12;
          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &jc_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &kc_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &lc_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &mc_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &nc_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &oc_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &pc_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &qc_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &rc_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &sc_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &tc_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &uc_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &vc_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &wc_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &xc_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &yc_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ad_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &bd_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          d14 = ((1.0 + (real_T)loop_ub) + 11.0) * N_app + (1.0 + (real_T)g);
          if (d14 != (int32_T)muDoubleScalarFloor(d14)) {
            emlrtIntegerCheckR2012b(d14, &s_emlrtDCI, sp);
          }

          i3 = (int32_T)d14;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &cd_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d14 != (int32_T)muDoubleScalarFloor(d14)) {
            emlrtIntegerCheckR2012b(d14, &t_emlrtDCI, sp);
          }

          i4 = (int32_T)d14;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &dd_emlrtBCI, sp);
          }

          st.site = &e_emlrtRSI;
          d9 = Re_Xi(&st, 1.0 + (real_T)t, 1.0, 1.0 + (real_T)loop_ub, C_GB,
                     P_GB, A_GB, B_GB);
          st.site = &e_emlrtRSI;
          d10 = Im_Xi(&st, 1.0 + (real_T)t, 1.0, 1.0 + (real_T)loop_ub, C_GB,
                      P_GB, A_GB, B_GB);
          st.site = &e_emlrtRSI;
          zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] =
            (((zeros_30Napp_3->data[(i4 + zeros_30Napp_3->size[0] * t) - 1] - d7
               * Q_R(x_w->data[g], XL1->data[n_dis], P_I_Re[0] * (-h[5] -
                 XL2->data[n_dis]), muDoubleScalarAbs(P_I_Im[0] * (-h[5] -
                  XL2->data[n_dis])))) + muDoubleScalarSign(P_I_Im[0] * (-h[5] -
                XL2->data[n_dis])) * d8 * P_R(x_w->data[g], XL1->data[n_dis],
               P_I_Re[0] * (-h[5] - XL2->data[n_dis]), muDoubleScalarAbs(P_I_Im
                [0] * (-h[5] - XL2->data[n_dis])))) + d9 * Q_R(x_w->data[g],
              XL1->data[n_dis], P_GB_Re[0] * (-h[5] - XL2->data[n_dis]),
              muDoubleScalarAbs(P_GB_Im[0] * (-h[5] - XL2->data[n_dis])))) -
            muDoubleScalarSign(P_GB_Im[0] * (-h[5] - XL2->data[n_dis])) * d10 *
            P_R(x_w->data[g], XL1->data[n_dis], P_GB_Re[0] * (-h[5] - XL2->
                 data[n_dis]), muDoubleScalarAbs(P_GB_Im[0] * (-h[5] - XL2->
                  data[n_dis])));

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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &ed_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &fd_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &gd_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &hd_emlrtBCI, sp);
          }

          st.site = &f_emlrtRSI;
          d8 = P_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_I_Re[0] * (-h[5] -
                    XL2->data[i6 - 1]), P_I_Im[0] * (-h[5] - XL2->data[i6 - 1]));
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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &id_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &jd_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &kd_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &ld_emlrtBCI, sp);
          }

          st.site = &f_emlrtRSI;
          d11 = Q_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_I_Re[0] * (-h[5] -
                     XL2->data[i6 - 1]), P_I_Im[0] * (-h[5] - XL2->data[i6 - 1]));
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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &md_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &nd_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &od_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &pd_emlrtBCI, sp);
          }

          st.site = &f_emlrtRSI;
          d12 = P_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_GB_Re[0] * (-h[5] -
                     XL2->data[i6 - 1]), P_GB_Im[0] * (-h[5] - XL2->data[i6 - 1]));
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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &qd_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &rd_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &sd_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &td_emlrtBCI, sp);
          }

          st.site = &f_emlrtRSI;
          beta1 = Q_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_GB_Re[0] * (-h[5]
            - XL2->data[i6 - 1]), P_GB_Im[0] * (-h[5] - XL2->data[i6 - 1]));
          i2 = zeros_30Napp_3->size[0];
          d15 = ((1.0 + (real_T)loop_ub) + 14.0) * N_app + (1.0 + (real_T)g);
          if (d15 != (int32_T)muDoubleScalarFloor(d15)) {
            emlrtIntegerCheckR2012b(d15, &u_emlrtDCI, sp);
          }

          i3 = (int32_T)d15;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ud_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d15 != (int32_T)muDoubleScalarFloor(d15)) {
            emlrtIntegerCheckR2012b(d15, &v_emlrtDCI, sp);
          }

          i4 = (int32_T)d15;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &vd_emlrtBCI, sp);
          }

          zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] =
            (((zeros_30Napp_3->data[(i4 + zeros_30Napp_3->size[0] * t) - 1] +
               c_im * d8) + -re * d11) - im * d12) - -b_re * beta1;
          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &wd_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &xd_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &yd_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ae_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &be_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ce_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &de_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ee_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &fe_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ge_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &he_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ie_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &je_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ke_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &le_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &me_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ne_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &oe_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          d16 = ((1.0 + (real_T)loop_ub) + 17.0) * N_app + (1.0 + (real_T)g);
          if (d16 != (int32_T)muDoubleScalarFloor(d16)) {
            emlrtIntegerCheckR2012b(d16, &w_emlrtDCI, sp);
          }

          i3 = (int32_T)d16;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &pe_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d16 != (int32_T)muDoubleScalarFloor(d16)) {
            emlrtIntegerCheckR2012b(d16, &x_emlrtDCI, sp);
          }

          i4 = (int32_T)d16;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &qe_emlrtBCI, sp);
          }

          st.site = &g_emlrtRSI;
          d8 = Re_Xi(&st, 1.0 + (real_T)t, 1.0, 1.0 + (real_T)loop_ub, C_II,
                     P_II, A_II, B_II);
          st.site = &g_emlrtRSI;
          d11 = Im_Xi(&st, 1.0 + (real_T)t, 1.0, 1.0 + (real_T)loop_ub, C_II,
                      P_II, A_II, B_II);
          st.site = &g_emlrtRSI;
          zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] =
            (((zeros_30Napp_3->data[(i4 + zeros_30Napp_3->size[0] * t) - 1] - d9
               * Q_R(x_w->data[g], XL1->data[n_dis], P_GB_Re[0] * (-h[10] -
                 XL2->data[n_dis]), muDoubleScalarAbs(P_GB_Im[0] * (-h[10] -
                  XL2->data[n_dis])))) + muDoubleScalarSign(P_GB_Im[0] * (-h[10]
                - XL2->data[n_dis])) * d10 * P_R(x_w->data[g], XL1->data[n_dis],
               P_GB_Re[0] * (-h[10] - XL2->data[n_dis]), muDoubleScalarAbs
               (P_GB_Im[0] * (-h[10] - XL2->data[n_dis])))) + d8 * Q_R(x_w->
              data[g], XL1->data[n_dis], P_II_Re[0] * (-h[10] - XL2->data[n_dis]),
              muDoubleScalarAbs(P_II_Im[0] * (-h[10] - XL2->data[n_dis])))) -
            muDoubleScalarSign(P_II_Im[0] * (-h[10] - XL2->data[n_dis])) * d11 *
            P_R(x_w->data[g], XL1->data[n_dis], P_II_Re[0] * (-h[10] - XL2->
                 data[n_dis]), muDoubleScalarAbs(P_II_Im[0] * (-h[10] -
                  XL2->data[n_dis])));

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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &re_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &se_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &te_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &ue_emlrtBCI, sp);
          }

          st.site = &h_emlrtRSI;
          d10 = P_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_GB_Re[0] * (-h[10] -
                     XL2->data[i6 - 1]), P_GB_Im[0] * (-h[10] - XL2->data[i6 - 1]));
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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &ve_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &we_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &xe_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &ye_emlrtBCI, sp);
          }

          st.site = &h_emlrtRSI;
          d12 = Q_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_GB_Re[0] * (-h[10] -
                     XL2->data[i6 - 1]), P_GB_Im[0] * (-h[10] - XL2->data[i6 - 1]));
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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &af_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &bf_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &cf_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &df_emlrtBCI, sp);
          }

          st.site = &h_emlrtRSI;
          beta1 = P_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_II_Re[0] * (-h[10]
            - XL2->data[i6 - 1]), P_II_Im[0] * (-h[10] - XL2->data[i6 - 1]));
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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &ef_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &ff_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &gf_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &hf_emlrtBCI, sp);
          }

          st.site = &h_emlrtRSI;
          alpha1 = Q_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_II_Re[0] * (-h[10]
            - XL2->data[i6 - 1]), P_II_Im[0] * (-h[10] - XL2->data[i6 - 1]));
          i2 = zeros_30Napp_3->size[0];
          d17 = ((1.0 + (real_T)loop_ub) + 20.0) * N_app + (1.0 + (real_T)g);
          if (d17 != (int32_T)muDoubleScalarFloor(d17)) {
            emlrtIntegerCheckR2012b(d17, &y_emlrtDCI, sp);
          }

          i3 = (int32_T)d17;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &if_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d17 != (int32_T)muDoubleScalarFloor(d17)) {
            emlrtIntegerCheckR2012b(d17, &ab_emlrtDCI, sp);
          }

          i4 = (int32_T)d17;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &jf_emlrtBCI, sp);
          }

          zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] =
            (((zeros_30Napp_3->data[(i4 + zeros_30Napp_3->size[0] * t) - 1] +
               c_im * d10) + -re * d12) - im * beta1) - -b_re * alpha1;
          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &kf_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &lf_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &mf_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &nf_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &of_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &pf_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &qf_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &rf_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &sf_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &tf_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &uf_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &vf_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &wf_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &xf_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &yf_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ag_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &bg_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &cg_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          d18 = ((1.0 + (real_T)loop_ub) + 23.0) * N_app + (1.0 + (real_T)g);
          if (d18 != (int32_T)muDoubleScalarFloor(d18)) {
            emlrtIntegerCheckR2012b(d18, &bb_emlrtDCI, sp);
          }

          i3 = (int32_T)d18;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &dg_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d18 != (int32_T)muDoubleScalarFloor(d18)) {
            emlrtIntegerCheckR2012b(d18, &cb_emlrtDCI, sp);
          }

          i4 = (int32_T)d18;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &eg_emlrtBCI, sp);
          }

          st.site = &i_emlrtRSI;
          zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] =
            (((zeros_30Napp_3->data[(i4 + zeros_30Napp_3->size[0] * t) - 1] - d8
               * Q_R(x_w->data[g], XL1->data[n_dis], P_II_Re[0] * (-h[15] -
                 XL2->data[n_dis]), muDoubleScalarAbs(P_II_Im[0] * (-h[15] -
                  XL2->data[n_dis])))) + muDoubleScalarSign(P_II_Im[0] * (-h[15]
                - XL2->data[n_dis])) * d11 * P_R(x_w->data[g], XL1->data[n_dis],
               P_II_Re[0] * (-h[15] - XL2->data[n_dis]), muDoubleScalarAbs
               (P_II_Im[0] * (-h[15] - XL2->data[n_dis])))) + d4 * Q_R(x_w->
              data[g], XL1->data[n_dis], P_SL_Re[0] * (-h[15] - XL2->data[n_dis]),
              muDoubleScalarAbs(P_SL_Im[0] * (-h[15] - XL2->data[n_dis])))) -
            muDoubleScalarSign(P_SL_Im[0] * (-h[15] - XL2->data[n_dis])) * d5 *
            P_R(x_w->data[g], XL1->data[n_dis], P_SL_Re[0] * (-h[15] - XL2->
                 data[n_dis]), muDoubleScalarAbs(P_SL_Im[0] * (-h[15] -
                  XL2->data[n_dis])));

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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &fg_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &gg_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &hg_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &ig_emlrtBCI, sp);
          }

          st.site = &j_emlrtRSI;
          d10 = P_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_II_Re[0] * (-h[15] -
                     XL2->data[i6 - 1]), P_II_Im[0] * (-h[15] - XL2->data[i6 - 1]));
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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &jg_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &kg_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &lg_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &mg_emlrtBCI, sp);
          }

          st.site = &j_emlrtRSI;
          d11 = Q_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_II_Re[0] * (-h[15] -
                     XL2->data[i6 - 1]), P_II_Im[0] * (-h[15] - XL2->data[i6 - 1]));
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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &ng_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &og_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &pg_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &qg_emlrtBCI, sp);
          }

          st.site = &j_emlrtRSI;
          d12 = P_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_SL_Re[0] * (-h[15] -
                     XL2->data[i6 - 1]), P_SL_Im[0] * (-h[15] - XL2->data[i6 - 1]));
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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &rg_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &sg_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &tg_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &ug_emlrtBCI, sp);
          }

          st.site = &j_emlrtRSI;
          beta1 = Q_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_SL_Re[0] * (-h[15]
            - XL2->data[i6 - 1]), P_SL_Im[0] * (-h[15] - XL2->data[i6 - 1]));
          i2 = zeros_30Napp_3->size[0];
          d19 = ((1.0 + (real_T)loop_ub) + 26.0) * N_app + (1.0 + (real_T)g);
          if (d19 != (int32_T)muDoubleScalarFloor(d19)) {
            emlrtIntegerCheckR2012b(d19, &db_emlrtDCI, sp);
          }

          i3 = (int32_T)d19;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &vg_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d19 != (int32_T)muDoubleScalarFloor(d19)) {
            emlrtIntegerCheckR2012b(d19, &eb_emlrtDCI, sp);
          }

          i4 = (int32_T)d19;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &wg_emlrtBCI, sp);
          }

          zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] =
            (((zeros_30Napp_3->data[(i4 + zeros_30Napp_3->size[0] * t) - 1] +
               c_im * d10) + -c_re * d11) - im * d12) - -re * beta1;
          i2 = CR_H0_R_rho->size[0];
          if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
            emlrtIntegerCheckR2012b(d0, &fb_emlrtDCI, sp);
          }

          i3 = (int32_T)d0;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &xg_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
            emlrtIntegerCheckR2012b(d0, &gb_emlrtDCI, sp);
          }

          i4 = (int32_T)d0;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &yg_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &ah_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &bh_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &ch_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &dh_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &eh_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &fh_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &gh_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &hh_emlrtBCI, sp);
          }

          st.site = &k_emlrtRSI;
          CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] =
            (CR_H0_R_rho->data[(i4 + CR_H0_R_rho->size[0] * t) - 1] - d1 * P_R
             (x_w->data[i5 - 1], XL1->data[i6 - 1], -P_SU_Re[0] * XL2->data[i6 -
              1], -P_SU_Im[0] * XL2->data[i6 - 1])) - d2 * Q_R(x_w->data[i5 - 1],
            XL1->data[i6 - 1], -P_SU_Re[0] * XL2->data[i6 - 1], -P_SU_Im[0] *
            XL2->data[i6 - 1]);
          i2 = CR_H0_R_rho->size[0];
          if (d3 != (int32_T)muDoubleScalarFloor(d3)) {
            emlrtIntegerCheckR2012b(d3, &hb_emlrtDCI, sp);
          }

          i3 = (int32_T)d3;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ih_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d3 != (int32_T)muDoubleScalarFloor(d3)) {
            emlrtIntegerCheckR2012b(d3, &ib_emlrtDCI, sp);
          }

          i4 = (int32_T)d3;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &jh_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &kh_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &lh_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &mh_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &nh_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &oh_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &ph_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &qh_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &rh_emlrtBCI, sp);
          }

          st.site = &l_emlrtRSI;
          CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] =
            (CR_H0_R_rho->data[(i4 + CR_H0_R_rho->size[0] * t) - 1] - d4 * P_R
             (x_w->data[i5 - 1], XL1->data[i6 - 1], P_SL_Re[0] * (-h[20] -
               XL2->data[i6 - 1]), -P_SL_Im[0] * (-h[20] - XL2->data[i6 - 1])))
            + d5 * Q_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_SL_Re[0] * (-h[20]
            - XL2->data[i6 - 1]), -P_SL_Im[0] * (-h[20] - XL2->data[i6 - 1]));
          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &sh_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &th_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &uh_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &vh_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &wh_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &xh_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &yh_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ai_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &bi_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ci_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &di_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ei_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &fi_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &gi_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &hi_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ii_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ji_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ki_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d6 != (int32_T)muDoubleScalarFloor(d6)) {
            emlrtIntegerCheckR2012b(d6, &jb_emlrtDCI, sp);
          }

          i3 = (int32_T)d6;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &li_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d6 != (int32_T)muDoubleScalarFloor(d6)) {
            emlrtIntegerCheckR2012b(d6, &kb_emlrtDCI, sp);
          }

          i4 = (int32_T)d6;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &mi_emlrtBCI, sp);
          }

          st.site = &m_emlrtRSI;
          CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] =
            (((CR_H0_R_rho->data[(i4 + CR_H0_R_rho->size[0] * t) - 1] - d1 * P_R
               (x_w->data[g], XL1->data[n_dis], P_SU_Re[0] * (-h[0] - XL2->
                 data[n_dis]), muDoubleScalarAbs(P_SU_Im[0] * (-h[0] - XL2->
                  data[n_dis])))) - muDoubleScalarSign(P_SU_Im[0] * (-h[0] -
                XL2->data[n_dis])) * Im_Xi(&st, 1.0 + (real_T)t, 1.0, 1.0 +
               (real_T)loop_ub, C_SU, P_SU, A_SU, B_SU) * Q_R(x_w->data[g],
               XL1->data[n_dis], P_SU_Re[0] * (-h[0] - XL2->data[n_dis]),
               muDoubleScalarAbs(P_SU_Im[0] * (-h[0] - XL2->data[n_dis])))) + d7
             * P_R(x_w->data[g], XL1->data[n_dis], P_I_Re[0] * (-h[0] -
               XL2->data[n_dis]), muDoubleScalarAbs(P_I_Im[0] * (-h[0] -
                XL2->data[n_dis])))) + muDoubleScalarSign(P_I_Im[0] * (-h[0] -
            XL2->data[n_dis])) * Im_Xi(&st, 1.0 + (real_T)t, 1.0, 1.0 + (real_T)
            loop_ub, C_I, P_I, A_I, B_I) * Q_R(x_w->data[g], XL1->data[n_dis],
            P_I_Re[0] * (-h[0] - XL2->data[n_dis]), muDoubleScalarAbs(P_I_Im[0] *
            (-h[0] - XL2->data[n_dis])));
          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ni_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &oi_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &pi_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &qi_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ri_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &si_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ti_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ui_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &vi_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &wi_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &xi_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &yi_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &aj_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &bj_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &cj_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &dj_emlrtBCI, sp);
          }

          /*  Eq. 3 in Ref.[2] */
          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ej_emlrtBCI, sp);
          }

          /*  Eq. 3 in Ref.[2] */
          /*  Eq. 3 in Ref.[2] */
          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &fj_emlrtBCI, sp);
          }

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
          d1 = Q_R(x_w->data[g], XL1->data[n_dis], P_SU_Re[0] * (-h[0] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_SU_Im[0] * (-h[0] -
                     XL2->data[n_dis])));
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
          d2 = P_R(x_w->data[g], XL1->data[n_dis], P_SU_Re[0] * (-h[0] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_SU_Im[0] * (-h[0] -
                     XL2->data[n_dis])));
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
          d5 = Q_R(x_w->data[g], XL1->data[n_dis], P_I_Re[0] * (-h[0] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_I_Im[0] * (-h[0] -
                     XL2->data[n_dis])));
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
          d10 = P_R(x_w->data[g], XL1->data[n_dis], P_I_Re[0] * (-h[0] -
                     XL2->data[n_dis]), muDoubleScalarAbs(P_I_Im[0] * (-h[0] -
                      XL2->data[n_dis])));
          i2 = CR_H0_R_rho->size[0];
          if (d13 != (int32_T)muDoubleScalarFloor(d13)) {
            emlrtIntegerCheckR2012b(d13, &lb_emlrtDCI, sp);
          }

          i3 = (int32_T)d13;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &gj_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d13 != (int32_T)muDoubleScalarFloor(d13)) {
            emlrtIntegerCheckR2012b(d13, &mb_emlrtDCI, sp);
          }

          i4 = (int32_T)d13;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &hj_emlrtBCI, sp);
          }

          CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] =
            (((CR_H0_R_rho->data[(i4 + CR_H0_R_rho->size[0] * t) - 1] - c_im *
               d1) + muDoubleScalarSign(P_SU_Im[0] * (-h[0] - XL2->data[n_dis]))
              * -re * d2) + im * d5) - muDoubleScalarSign(P_I_Im[0] * (-h[0] -
            XL2->data[n_dis])) * -b_re * d10;
          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ij_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &jj_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &kj_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &lj_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &mj_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &nj_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &oj_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &pj_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &qj_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &rj_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &sj_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &tj_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &uj_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &vj_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &wj_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &xj_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &yj_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ak_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d14 != (int32_T)muDoubleScalarFloor(d14)) {
            emlrtIntegerCheckR2012b(d14, &nb_emlrtDCI, sp);
          }

          i3 = (int32_T)d14;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &bk_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d14 != (int32_T)muDoubleScalarFloor(d14)) {
            emlrtIntegerCheckR2012b(d14, &ob_emlrtDCI, sp);
          }

          i4 = (int32_T)d14;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &ck_emlrtBCI, sp);
          }

          st.site = &o_emlrtRSI;
          CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] =
            (((CR_H0_R_rho->data[(i4 + CR_H0_R_rho->size[0] * t) - 1] - d7 * P_R
               (x_w->data[g], XL1->data[n_dis], P_I_Re[0] * (-h[5] - XL2->
                 data[n_dis]), muDoubleScalarAbs(P_I_Im[0] * (-h[5] - XL2->
                  data[n_dis])))) - muDoubleScalarSign(P_I_Im[0] * (-h[5] -
                XL2->data[n_dis])) * Im_Xi(&st, 1.0 + (real_T)t, 1.0, 1.0 +
               (real_T)loop_ub, C_I, P_I, A_I, B_I) * Q_R(x_w->data[g],
               XL1->data[n_dis], P_I_Re[0] * (-h[5] - XL2->data[n_dis]),
               muDoubleScalarAbs(P_I_Im[0] * (-h[5] - XL2->data[n_dis])))) + d9 *
             P_R(x_w->data[g], XL1->data[n_dis], P_GB_Re[0] * (-h[5] - XL2->
               data[n_dis]), muDoubleScalarAbs(P_GB_Im[0] * (-h[5] - XL2->
                data[n_dis])))) + muDoubleScalarSign(P_GB_Im[0] * (-h[5] -
            XL2->data[n_dis])) * Im_Xi(&st, 1.0 + (real_T)t, 1.0, 1.0 + (real_T)
            loop_ub, C_GB, P_GB, A_GB, B_GB) * Q_R(x_w->data[g], XL1->data[n_dis],
            P_GB_Re[0] * (-h[5] - XL2->data[n_dis]), muDoubleScalarAbs(P_GB_Im[0]
            * (-h[5] - XL2->data[n_dis])));
          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &dk_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ek_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &fk_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &gk_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &hk_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ik_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &jk_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &kk_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &lk_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &mk_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &nk_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ok_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &pk_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &qk_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &rk_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &sk_emlrtBCI, sp);
          }

          /*  Eq. 3 in Ref.[2] */
          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &tk_emlrtBCI, sp);
          }

          /*  Eq. 3 in Ref.[2] */
          /*  Eq. 3 in Ref.[2] */
          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &uk_emlrtBCI, sp);
          }

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
          d1 = Q_R(x_w->data[g], XL1->data[n_dis], P_I_Re[0] * (-h[5] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_I_Im[0] * (-h[5] -
                     XL2->data[n_dis])));
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
          d2 = P_R(x_w->data[g], XL1->data[n_dis], P_I_Re[0] * (-h[5] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_I_Im[0] * (-h[5] -
                     XL2->data[n_dis])));
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
          d5 = Q_R(x_w->data[g], XL1->data[n_dis], P_GB_Re[0] * (-h[5] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_GB_Im[0] * (-h[5] -
                     XL2->data[n_dis])));
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
          d7 = P_R(x_w->data[g], XL1->data[n_dis], P_GB_Re[0] * (-h[5] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_GB_Im[0] * (-h[5] -
                     XL2->data[n_dis])));
          i2 = CR_H0_R_rho->size[0];
          if (d15 != (int32_T)muDoubleScalarFloor(d15)) {
            emlrtIntegerCheckR2012b(d15, &pb_emlrtDCI, sp);
          }

          i3 = (int32_T)d15;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &vk_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d15 != (int32_T)muDoubleScalarFloor(d15)) {
            emlrtIntegerCheckR2012b(d15, &qb_emlrtDCI, sp);
          }

          i4 = (int32_T)d15;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &wk_emlrtBCI, sp);
          }

          CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] =
            (((CR_H0_R_rho->data[(i4 + CR_H0_R_rho->size[0] * t) - 1] - c_im *
               d1) + muDoubleScalarSign(P_I_Im[0] * (-h[5] - XL2->data[n_dis])) *
              -re * d2) + im * d5) - muDoubleScalarSign(P_GB_Im[0] * (-h[5] -
            XL2->data[n_dis])) * -b_re * d7;
          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &xk_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &yk_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &al_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &bl_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &cl_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &dl_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &el_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &fl_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &gl_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &hl_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &il_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &jl_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &kl_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ll_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ml_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &nl_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ol_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &pl_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d16 != (int32_T)muDoubleScalarFloor(d16)) {
            emlrtIntegerCheckR2012b(d16, &rb_emlrtDCI, sp);
          }

          i3 = (int32_T)d16;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ql_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d16 != (int32_T)muDoubleScalarFloor(d16)) {
            emlrtIntegerCheckR2012b(d16, &sb_emlrtDCI, sp);
          }

          i4 = (int32_T)d16;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &rl_emlrtBCI, sp);
          }

          st.site = &q_emlrtRSI;
          CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] =
            (((CR_H0_R_rho->data[(i4 + CR_H0_R_rho->size[0] * t) - 1] - d9 * P_R
               (x_w->data[g], XL1->data[n_dis], P_GB_Re[0] * (-h[10] - XL2->
                 data[n_dis]), muDoubleScalarAbs(P_GB_Im[0] * (-h[10] -
                  XL2->data[n_dis])))) - muDoubleScalarSign(P_GB_Im[0] * (-h[10]
                - XL2->data[n_dis])) * Im_Xi(&st, 1.0 + (real_T)t, 1.0, 1.0 +
               (real_T)loop_ub, C_GB, P_GB, A_GB, B_GB) * Q_R(x_w->data[g],
               XL1->data[n_dis], P_GB_Re[0] * (-h[10] - XL2->data[n_dis]),
               muDoubleScalarAbs(P_GB_Im[0] * (-h[10] - XL2->data[n_dis])))) +
             d8 * P_R(x_w->data[g], XL1->data[n_dis], P_II_Re[0] * (-h[10] -
               XL2->data[n_dis]), muDoubleScalarAbs(P_II_Im[0] * (-h[10] -
                XL2->data[n_dis])))) + muDoubleScalarSign(P_II_Im[0] * (-h[10] -
            XL2->data[n_dis])) * Im_Xi(&st, 1.0 + (real_T)t, 1.0, 1.0 + (real_T)
            loop_ub, C_II, P_II, A_II, B_II) * Q_R(x_w->data[g], XL1->data[n_dis],
            P_II_Re[0] * (-h[10] - XL2->data[n_dis]), muDoubleScalarAbs(P_II_Im
            [0] * (-h[10] - XL2->data[n_dis])));
          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &sl_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &tl_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ul_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &vl_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &wl_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &xl_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &yl_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &am_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &bm_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &cm_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &dm_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &em_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &fm_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &gm_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &hm_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &im_emlrtBCI, sp);
          }

          /*  Eq. 3 in Ref.[2] */
          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &jm_emlrtBCI, sp);
          }

          /*  Eq. 3 in Ref.[2] */
          /*  Eq. 3 in Ref.[2] */
          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &km_emlrtBCI, sp);
          }

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
          d1 = Q_R(x_w->data[g], XL1->data[n_dis], P_GB_Re[0] * (-h[10] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_GB_Im[0] * (-h[10] -
                     XL2->data[n_dis])));
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
          d2 = P_R(x_w->data[g], XL1->data[n_dis], P_GB_Re[0] * (-h[10] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_GB_Im[0] * (-h[10] -
                     XL2->data[n_dis])));
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
          d5 = Q_R(x_w->data[g], XL1->data[n_dis], P_II_Re[0] * (-h[10] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_II_Im[0] * (-h[10] -
                     XL2->data[n_dis])));
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
          d7 = P_R(x_w->data[g], XL1->data[n_dis], P_II_Re[0] * (-h[10] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_II_Im[0] * (-h[10] -
                     XL2->data[n_dis])));
          i2 = CR_H0_R_rho->size[0];
          if (d17 != (int32_T)muDoubleScalarFloor(d17)) {
            emlrtIntegerCheckR2012b(d17, &tb_emlrtDCI, sp);
          }

          i3 = (int32_T)d17;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &lm_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d17 != (int32_T)muDoubleScalarFloor(d17)) {
            emlrtIntegerCheckR2012b(d17, &ub_emlrtDCI, sp);
          }

          i4 = (int32_T)d17;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &mm_emlrtBCI, sp);
          }

          CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] =
            (((CR_H0_R_rho->data[(i4 + CR_H0_R_rho->size[0] * t) - 1] - c_im *
               d1) + muDoubleScalarSign(P_GB_Im[0] * (-h[10] - XL2->data[n_dis]))
              * -re * d2) + im * d5) - muDoubleScalarSign(P_II_Im[0] * (-h[10] -
            XL2->data[n_dis])) * -b_re * d7;
          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &nm_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &om_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &pm_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &qm_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &rm_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &sm_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &tm_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &um_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &vm_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &wm_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &xm_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ym_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &an_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &bn_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &cn_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &dn_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &en_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &fn_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d18 != (int32_T)muDoubleScalarFloor(d18)) {
            emlrtIntegerCheckR2012b(d18, &vb_emlrtDCI, sp);
          }

          i3 = (int32_T)d18;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &gn_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d18 != (int32_T)muDoubleScalarFloor(d18)) {
            emlrtIntegerCheckR2012b(d18, &wb_emlrtDCI, sp);
          }

          i4 = (int32_T)d18;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &hn_emlrtBCI, sp);
          }

          st.site = &s_emlrtRSI;
          CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] =
            (((CR_H0_R_rho->data[(i4 + CR_H0_R_rho->size[0] * t) - 1] - d8 * P_R
               (x_w->data[g], XL1->data[n_dis], P_II_Re[0] * (-h[15] - XL2->
                 data[n_dis]), muDoubleScalarAbs(P_II_Im[0] * (-h[15] -
                  XL2->data[n_dis])))) - muDoubleScalarSign(P_II_Im[0] * (-h[15]
                - XL2->data[n_dis])) * Im_Xi(&st, 1.0 + (real_T)t, 1.0, 1.0 +
               (real_T)loop_ub, C_II, P_II, A_II, B_II) * Q_R(x_w->data[g],
               XL1->data[n_dis], P_II_Re[0] * (-h[15] - XL2->data[n_dis]),
               muDoubleScalarAbs(P_II_Im[0] * (-h[15] - XL2->data[n_dis])))) +
             d4 * P_R(x_w->data[g], XL1->data[n_dis], P_SL_Re[0] * (-h[15] -
               XL2->data[n_dis]), muDoubleScalarAbs(P_SL_Im[0] * (-h[15] -
                XL2->data[n_dis])))) + muDoubleScalarSign(P_SL_Im[0] * (-h[15] -
            XL2->data[n_dis])) * Im_Xi(&st, 1.0 + (real_T)t, 1.0, 1.0 + (real_T)
            loop_ub, C_SL, P_SL, A_SL, B_SL) * Q_R(x_w->data[g], XL1->data[n_dis],
            P_SL_Re[0] * (-h[15] - XL2->data[n_dis]), muDoubleScalarAbs(P_SL_Im
            [0] * (-h[15] - XL2->data[n_dis])));
          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &in_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &jn_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &kn_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ln_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &mn_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &nn_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &on_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &pn_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &qn_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &rn_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &sn_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &tn_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &un_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &vn_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &wn_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &xn_emlrtBCI, sp);
          }

          /*  Eq. 3 in Ref.[2] */
          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &yn_emlrtBCI, sp);
          }

          /*  Eq. 3 in Ref.[2] */
          /*  Eq. 3 in Ref.[2] */
          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ao_emlrtBCI, sp);
          }

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
          d1 = Q_R(x_w->data[g], XL1->data[n_dis], P_II_Re[0] * (-h[15] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_II_Im[0] * (-h[15] -
                     XL2->data[n_dis])));
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
          d2 = P_R(x_w->data[g], XL1->data[n_dis], P_II_Re[0] * (-h[15] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_II_Im[0] * (-h[15] -
                     XL2->data[n_dis])));
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
          d4 = Q_R(x_w->data[g], XL1->data[n_dis], P_SL_Re[0] * (-h[15] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_SL_Im[0] * (-h[15] -
                     XL2->data[n_dis])));
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
          d5 = P_R(x_w->data[g], XL1->data[n_dis], P_SL_Re[0] * (-h[15] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_SL_Im[0] * (-h[15] -
                     XL2->data[n_dis])));
          i2 = CR_H0_R_rho->size[0];
          if (d19 != (int32_T)muDoubleScalarFloor(d19)) {
            emlrtIntegerCheckR2012b(d19, &xb_emlrtDCI, sp);
          }

          i3 = (int32_T)d19;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &bo_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d19 != (int32_T)muDoubleScalarFloor(d19)) {
            emlrtIntegerCheckR2012b(d19, &yb_emlrtDCI, sp);
          }

          i4 = (int32_T)d19;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &co_emlrtBCI, sp);
          }

          CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] =
            (((CR_H0_R_rho->data[(i4 + CR_H0_R_rho->size[0] * t) - 1] - c_im *
               d1) + muDoubleScalarSign(P_II_Im[0] * (-h[15] - XL2->data[n_dis]))
              * -c_re * d2) + beta1 * d4) - muDoubleScalarSign(P_SL_Im[0] * (-h
            [15] - XL2->data[n_dis])) * -re * d5;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
            emlrtIntegerCheckR2012b(d0, &k_emlrtDCI, sp);
          }

          i3 = (int32_T)d0;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &b_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
            emlrtIntegerCheckR2012b(d0, &l_emlrtDCI, sp);
          }

          i4 = (int32_T)d0;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &c_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &d_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &e_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &f_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &g_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &h_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &i_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &j_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &k_emlrtBCI, sp);
          }

          st.site = &emlrtRSI;
          d1 = Re_Xi(&st, 1.0 + (real_T)t, 2.0, 1.0 + (real_T)loop_ub, C_SU,
                     P_SU, A_SU, B_SU);
          st.site = &emlrtRSI;
          d2 = Im_Xi(&st, 1.0 + (real_T)t, 2.0, 1.0 + (real_T)loop_ub, C_SU,
                     P_SU, A_SU, B_SU);
          st.site = &emlrtRSI;
          zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] =
            (zeros_30Napp_3->data[(i4 + zeros_30Napp_3->size[0] * t) - 1] - d1 *
             Q_R(x_w->data[i5 - 1], XL1->data[i6 - 1], -P_SU_Re[1] * XL2->
                 data[i6 - 1], -P_SU_Im[1] * XL2->data[i6 - 1])) + d2 * P_R
            (x_w->data[i5 - 1], XL1->data[i6 - 1], -P_SU_Re[1] * XL2->data[i6 -
             1], -P_SU_Im[1] * XL2->data[i6 - 1]);
          i2 = zeros_30Napp_3->size[0];
          if (d3 != (int32_T)muDoubleScalarFloor(d3)) {
            emlrtIntegerCheckR2012b(d3, &m_emlrtDCI, sp);
          }

          i3 = (int32_T)d3;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &l_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d3 != (int32_T)muDoubleScalarFloor(d3)) {
            emlrtIntegerCheckR2012b(d3, &n_emlrtDCI, sp);
          }

          i4 = (int32_T)d3;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &m_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &n_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &o_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &p_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &q_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &r_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &s_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &t_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &u_emlrtBCI, sp);
          }

          st.site = &b_emlrtRSI;
          d4 = Re_Xi(&st, 1.0 + (real_T)t, 2.0, 1.0 + (real_T)loop_ub, C_SL,
                     P_SL, A_SL, B_SL);
          st.site = &b_emlrtRSI;
          d5 = Im_Xi(&st, 1.0 + (real_T)t, 2.0, 1.0 + (real_T)loop_ub, C_SL,
                     P_SL, A_SL, B_SL);
          st.site = &b_emlrtRSI;
          zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] =
            (zeros_30Napp_3->data[(i4 + zeros_30Napp_3->size[0] * t) - 1] - d4 *
             Q_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_SL_Re[1] * (-h[20] -
               XL2->data[i6 - 1]), -P_SL_Im[1] * (-h[20] - XL2->data[i6 - 1])))
            - d5 * P_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_SL_Re[1] * (-h[20]
            - XL2->data[i6 - 1]), -P_SL_Im[1] * (-h[20] - XL2->data[i6 - 1]));
          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &v_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &w_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &x_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &y_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ab_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &bb_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &cb_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &db_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &eb_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &fb_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &gb_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &hb_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ib_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &jb_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &kb_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &lb_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &mb_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &nb_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d6 != (int32_T)muDoubleScalarFloor(d6)) {
            emlrtIntegerCheckR2012b(d6, &o_emlrtDCI, sp);
          }

          i3 = (int32_T)d6;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ob_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d6 != (int32_T)muDoubleScalarFloor(d6)) {
            emlrtIntegerCheckR2012b(d6, &p_emlrtDCI, sp);
          }

          i4 = (int32_T)d6;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &pb_emlrtBCI, sp);
          }

          st.site = &c_emlrtRSI;
          d7 = Re_Xi(&st, 1.0 + (real_T)t, 2.0, 1.0 + (real_T)loop_ub, C_I, P_I,
                     A_I, B_I);
          st.site = &c_emlrtRSI;
          d8 = Im_Xi(&st, 1.0 + (real_T)t, 2.0, 1.0 + (real_T)loop_ub, C_I, P_I,
                     A_I, B_I);
          st.site = &c_emlrtRSI;
          zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] =
            (((zeros_30Napp_3->data[(i4 + zeros_30Napp_3->size[0] * t) - 1] - d1
               * Q_R(x_w->data[g], XL1->data[n_dis], P_SU_Re[1] * (-h[0] -
                 XL2->data[n_dis]), muDoubleScalarAbs(P_SU_Im[1] * (-h[0] -
                  XL2->data[n_dis])))) + muDoubleScalarSign(P_SU_Im[1] * (-h[0]
                - XL2->data[n_dis])) * d2 * P_R(x_w->data[g], XL1->data[n_dis],
               P_SU_Re[1] * (-h[0] - XL2->data[n_dis]), muDoubleScalarAbs
               (P_SU_Im[1] * (-h[0] - XL2->data[n_dis])))) + d7 * Q_R(x_w->
              data[g], XL1->data[n_dis], P_I_Re[1] * (-h[0] - XL2->data[n_dis]),
              muDoubleScalarAbs(P_I_Im[1] * (-h[0] - XL2->data[n_dis])))) -
            muDoubleScalarSign(P_I_Im[1] * (-h[0] - XL2->data[n_dis])) * d8 *
            P_R(x_w->data[g], XL1->data[n_dis], P_I_Re[1] * (-h[0] - XL2->
                 data[n_dis]), muDoubleScalarAbs(P_I_Im[1] * (-h[0] - XL2->
                  data[n_dis])));

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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &qb_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &rb_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &sb_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &tb_emlrtBCI, sp);
          }

          st.site = &d_emlrtRSI;
          d9 = P_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_SU_Re[1] * (-h[0] -
                    XL2->data[i6 - 1]), P_SU_Im[1] * (-h[0] - XL2->data[i6 - 1]));
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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &ub_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &vb_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &wb_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &xb_emlrtBCI, sp);
          }

          st.site = &d_emlrtRSI;
          d10 = Q_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_SU_Re[1] * (-h[0] -
                     XL2->data[i6 - 1]), P_SU_Im[1] * (-h[0] - XL2->data[i6 - 1]));
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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &yb_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &ac_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &bc_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &cc_emlrtBCI, sp);
          }

          st.site = &d_emlrtRSI;
          d11 = P_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_I_Re[1] * (-h[0] -
                     XL2->data[i6 - 1]), P_I_Im[1] * (-h[0] - XL2->data[i6 - 1]));
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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &dc_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &ec_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &fc_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &gc_emlrtBCI, sp);
          }

          st.site = &d_emlrtRSI;
          d12 = Q_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_I_Re[1] * (-h[0] -
                     XL2->data[i6 - 1]), P_I_Im[1] * (-h[0] - XL2->data[i6 - 1]));
          i2 = zeros_30Napp_3->size[0];
          if (d13 != (int32_T)muDoubleScalarFloor(d13)) {
            emlrtIntegerCheckR2012b(d13, &q_emlrtDCI, sp);
          }

          i3 = (int32_T)d13;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &hc_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d13 != (int32_T)muDoubleScalarFloor(d13)) {
            emlrtIntegerCheckR2012b(d13, &r_emlrtDCI, sp);
          }

          i4 = (int32_T)d13;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &ic_emlrtBCI, sp);
          }

          zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] =
            (((zeros_30Napp_3->data[(i4 + zeros_30Napp_3->size[0] * t) - 1] + im
               * d9) + -re * d10) - b_im * d11) - -b_re * d12;
          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &jc_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &kc_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &lc_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &mc_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &nc_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &oc_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &pc_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &qc_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &rc_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &sc_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &tc_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &uc_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &vc_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &wc_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &xc_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &yc_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ad_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &bd_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d14 != (int32_T)muDoubleScalarFloor(d14)) {
            emlrtIntegerCheckR2012b(d14, &s_emlrtDCI, sp);
          }

          i3 = (int32_T)d14;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &cd_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d14 != (int32_T)muDoubleScalarFloor(d14)) {
            emlrtIntegerCheckR2012b(d14, &t_emlrtDCI, sp);
          }

          i4 = (int32_T)d14;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &dd_emlrtBCI, sp);
          }

          st.site = &e_emlrtRSI;
          d9 = Re_Xi(&st, 1.0 + (real_T)t, 2.0, 1.0 + (real_T)loop_ub, C_GB,
                     P_GB, A_GB, B_GB);
          st.site = &e_emlrtRSI;
          d10 = Im_Xi(&st, 1.0 + (real_T)t, 2.0, 1.0 + (real_T)loop_ub, C_GB,
                      P_GB, A_GB, B_GB);
          st.site = &e_emlrtRSI;
          zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] =
            (((zeros_30Napp_3->data[(i4 + zeros_30Napp_3->size[0] * t) - 1] - d7
               * Q_R(x_w->data[g], XL1->data[n_dis], P_I_Re[1] * (-h[5] -
                 XL2->data[n_dis]), muDoubleScalarAbs(P_I_Im[1] * (-h[5] -
                  XL2->data[n_dis])))) + muDoubleScalarSign(P_I_Im[1] * (-h[5] -
                XL2->data[n_dis])) * d8 * P_R(x_w->data[g], XL1->data[n_dis],
               P_I_Re[1] * (-h[5] - XL2->data[n_dis]), muDoubleScalarAbs(P_I_Im
                [1] * (-h[5] - XL2->data[n_dis])))) + d9 * Q_R(x_w->data[g],
              XL1->data[n_dis], P_GB_Re[1] * (-h[5] - XL2->data[n_dis]),
              muDoubleScalarAbs(P_GB_Im[1] * (-h[5] - XL2->data[n_dis])))) -
            muDoubleScalarSign(P_GB_Im[1] * (-h[5] - XL2->data[n_dis])) * d10 *
            P_R(x_w->data[g], XL1->data[n_dis], P_GB_Re[1] * (-h[5] - XL2->
                 data[n_dis]), muDoubleScalarAbs(P_GB_Im[1] * (-h[5] - XL2->
                  data[n_dis])));

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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &ed_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &fd_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &gd_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &hd_emlrtBCI, sp);
          }

          st.site = &f_emlrtRSI;
          d8 = P_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_I_Re[1] * (-h[5] -
                    XL2->data[i6 - 1]), P_I_Im[1] * (-h[5] - XL2->data[i6 - 1]));
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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &id_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &jd_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &kd_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &ld_emlrtBCI, sp);
          }

          st.site = &f_emlrtRSI;
          d11 = Q_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_I_Re[1] * (-h[5] -
                     XL2->data[i6 - 1]), P_I_Im[1] * (-h[5] - XL2->data[i6 - 1]));
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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &md_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &nd_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &od_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &pd_emlrtBCI, sp);
          }

          st.site = &f_emlrtRSI;
          d12 = P_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_GB_Re[1] * (-h[5] -
                     XL2->data[i6 - 1]), P_GB_Im[1] * (-h[5] - XL2->data[i6 - 1]));
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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &qd_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &rd_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &sd_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &td_emlrtBCI, sp);
          }

          st.site = &f_emlrtRSI;
          beta1 = Q_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_GB_Re[1] * (-h[5]
            - XL2->data[i6 - 1]), P_GB_Im[1] * (-h[5] - XL2->data[i6 - 1]));
          i2 = zeros_30Napp_3->size[0];
          if (d15 != (int32_T)muDoubleScalarFloor(d15)) {
            emlrtIntegerCheckR2012b(d15, &u_emlrtDCI, sp);
          }

          i3 = (int32_T)d15;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ud_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d15 != (int32_T)muDoubleScalarFloor(d15)) {
            emlrtIntegerCheckR2012b(d15, &v_emlrtDCI, sp);
          }

          i4 = (int32_T)d15;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &vd_emlrtBCI, sp);
          }

          zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] =
            (((zeros_30Napp_3->data[(i4 + zeros_30Napp_3->size[0] * t) - 1] +
               c_im * d8) + -re * d11) - im * d12) - -b_re * beta1;
          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &wd_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &xd_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &yd_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ae_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &be_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ce_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &de_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ee_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &fe_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ge_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &he_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ie_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &je_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ke_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &le_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &me_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ne_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &oe_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d16 != (int32_T)muDoubleScalarFloor(d16)) {
            emlrtIntegerCheckR2012b(d16, &w_emlrtDCI, sp);
          }

          i3 = (int32_T)d16;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &pe_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d16 != (int32_T)muDoubleScalarFloor(d16)) {
            emlrtIntegerCheckR2012b(d16, &x_emlrtDCI, sp);
          }

          i4 = (int32_T)d16;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &qe_emlrtBCI, sp);
          }

          st.site = &g_emlrtRSI;
          d8 = Re_Xi(&st, 1.0 + (real_T)t, 2.0, 1.0 + (real_T)loop_ub, C_II,
                     P_II, A_II, B_II);
          st.site = &g_emlrtRSI;
          d11 = Im_Xi(&st, 1.0 + (real_T)t, 2.0, 1.0 + (real_T)loop_ub, C_II,
                      P_II, A_II, B_II);
          st.site = &g_emlrtRSI;
          zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] =
            (((zeros_30Napp_3->data[(i4 + zeros_30Napp_3->size[0] * t) - 1] - d9
               * Q_R(x_w->data[g], XL1->data[n_dis], P_GB_Re[1] * (-h[10] -
                 XL2->data[n_dis]), muDoubleScalarAbs(P_GB_Im[1] * (-h[10] -
                  XL2->data[n_dis])))) + muDoubleScalarSign(P_GB_Im[1] * (-h[10]
                - XL2->data[n_dis])) * d10 * P_R(x_w->data[g], XL1->data[n_dis],
               P_GB_Re[1] * (-h[10] - XL2->data[n_dis]), muDoubleScalarAbs
               (P_GB_Im[1] * (-h[10] - XL2->data[n_dis])))) + d8 * Q_R(x_w->
              data[g], XL1->data[n_dis], P_II_Re[1] * (-h[10] - XL2->data[n_dis]),
              muDoubleScalarAbs(P_II_Im[1] * (-h[10] - XL2->data[n_dis])))) -
            muDoubleScalarSign(P_II_Im[1] * (-h[10] - XL2->data[n_dis])) * d11 *
            P_R(x_w->data[g], XL1->data[n_dis], P_II_Re[1] * (-h[10] - XL2->
                 data[n_dis]), muDoubleScalarAbs(P_II_Im[1] * (-h[10] -
                  XL2->data[n_dis])));

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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &re_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &se_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &te_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &ue_emlrtBCI, sp);
          }

          st.site = &h_emlrtRSI;
          d10 = P_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_GB_Re[1] * (-h[10] -
                     XL2->data[i6 - 1]), P_GB_Im[1] * (-h[10] - XL2->data[i6 - 1]));
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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &ve_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &we_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &xe_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &ye_emlrtBCI, sp);
          }

          st.site = &h_emlrtRSI;
          d12 = Q_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_GB_Re[1] * (-h[10] -
                     XL2->data[i6 - 1]), P_GB_Im[1] * (-h[10] - XL2->data[i6 - 1]));
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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &af_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &bf_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &cf_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &df_emlrtBCI, sp);
          }

          st.site = &h_emlrtRSI;
          beta1 = P_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_II_Re[1] * (-h[10]
            - XL2->data[i6 - 1]), P_II_Im[1] * (-h[10] - XL2->data[i6 - 1]));
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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &ef_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &ff_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &gf_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &hf_emlrtBCI, sp);
          }

          st.site = &h_emlrtRSI;
          alpha1 = Q_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_II_Re[1] * (-h[10]
            - XL2->data[i6 - 1]), P_II_Im[1] * (-h[10] - XL2->data[i6 - 1]));
          i2 = zeros_30Napp_3->size[0];
          if (d17 != (int32_T)muDoubleScalarFloor(d17)) {
            emlrtIntegerCheckR2012b(d17, &y_emlrtDCI, sp);
          }

          i3 = (int32_T)d17;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &if_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d17 != (int32_T)muDoubleScalarFloor(d17)) {
            emlrtIntegerCheckR2012b(d17, &ab_emlrtDCI, sp);
          }

          i4 = (int32_T)d17;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &jf_emlrtBCI, sp);
          }

          zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] =
            (((zeros_30Napp_3->data[(i4 + zeros_30Napp_3->size[0] * t) - 1] +
               c_im * d10) + -re * d12) - im * beta1) - -b_re * alpha1;
          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &kf_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &lf_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &mf_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &nf_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &of_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &pf_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &qf_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &rf_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &sf_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &tf_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &uf_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &vf_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &wf_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &xf_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &yf_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ag_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &bg_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &cg_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d18 != (int32_T)muDoubleScalarFloor(d18)) {
            emlrtIntegerCheckR2012b(d18, &bb_emlrtDCI, sp);
          }

          i3 = (int32_T)d18;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &dg_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d18 != (int32_T)muDoubleScalarFloor(d18)) {
            emlrtIntegerCheckR2012b(d18, &cb_emlrtDCI, sp);
          }

          i4 = (int32_T)d18;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &eg_emlrtBCI, sp);
          }

          st.site = &i_emlrtRSI;
          zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] =
            (((zeros_30Napp_3->data[(i4 + zeros_30Napp_3->size[0] * t) - 1] - d8
               * Q_R(x_w->data[g], XL1->data[n_dis], P_II_Re[1] * (-h[15] -
                 XL2->data[n_dis]), muDoubleScalarAbs(P_II_Im[1] * (-h[15] -
                  XL2->data[n_dis])))) + muDoubleScalarSign(P_II_Im[1] * (-h[15]
                - XL2->data[n_dis])) * d11 * P_R(x_w->data[g], XL1->data[n_dis],
               P_II_Re[1] * (-h[15] - XL2->data[n_dis]), muDoubleScalarAbs
               (P_II_Im[1] * (-h[15] - XL2->data[n_dis])))) + d4 * Q_R(x_w->
              data[g], XL1->data[n_dis], P_SL_Re[1] * (-h[15] - XL2->data[n_dis]),
              muDoubleScalarAbs(P_SL_Im[1] * (-h[15] - XL2->data[n_dis])))) -
            muDoubleScalarSign(P_SL_Im[1] * (-h[15] - XL2->data[n_dis])) * d5 *
            P_R(x_w->data[g], XL1->data[n_dis], P_SL_Re[1] * (-h[15] - XL2->
                 data[n_dis]), muDoubleScalarAbs(P_SL_Im[1] * (-h[15] -
                  XL2->data[n_dis])));

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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &fg_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &gg_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &hg_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &ig_emlrtBCI, sp);
          }

          st.site = &j_emlrtRSI;
          d10 = P_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_II_Re[1] * (-h[15] -
                     XL2->data[i6 - 1]), P_II_Im[1] * (-h[15] - XL2->data[i6 - 1]));
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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &jg_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &kg_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &lg_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &mg_emlrtBCI, sp);
          }

          st.site = &j_emlrtRSI;
          d11 = Q_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_II_Re[1] * (-h[15] -
                     XL2->data[i6 - 1]), P_II_Im[1] * (-h[15] - XL2->data[i6 - 1]));
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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &ng_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &og_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &pg_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &qg_emlrtBCI, sp);
          }

          st.site = &j_emlrtRSI;
          d12 = P_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_SL_Re[1] * (-h[15] -
                     XL2->data[i6 - 1]), P_SL_Im[1] * (-h[15] - XL2->data[i6 - 1]));
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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &rg_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &sg_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &tg_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &ug_emlrtBCI, sp);
          }

          st.site = &j_emlrtRSI;
          beta1 = Q_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_SL_Re[1] * (-h[15]
            - XL2->data[i6 - 1]), P_SL_Im[1] * (-h[15] - XL2->data[i6 - 1]));
          i2 = zeros_30Napp_3->size[0];
          if (d19 != (int32_T)muDoubleScalarFloor(d19)) {
            emlrtIntegerCheckR2012b(d19, &db_emlrtDCI, sp);
          }

          i3 = (int32_T)d19;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &vg_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d19 != (int32_T)muDoubleScalarFloor(d19)) {
            emlrtIntegerCheckR2012b(d19, &eb_emlrtDCI, sp);
          }

          i4 = (int32_T)d19;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &wg_emlrtBCI, sp);
          }

          zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] =
            (((zeros_30Napp_3->data[(i4 + zeros_30Napp_3->size[0] * t) - 1] +
               c_im * d10) + -c_re * d11) - im * d12) - -re * beta1;
          i2 = CR_H0_R_rho->size[0];
          if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
            emlrtIntegerCheckR2012b(d0, &fb_emlrtDCI, sp);
          }

          i3 = (int32_T)d0;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &xg_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
            emlrtIntegerCheckR2012b(d0, &gb_emlrtDCI, sp);
          }

          i4 = (int32_T)d0;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &yg_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &ah_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &bh_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &ch_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &dh_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &eh_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &fh_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &gh_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &hh_emlrtBCI, sp);
          }

          st.site = &k_emlrtRSI;
          CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] =
            (CR_H0_R_rho->data[(i4 + CR_H0_R_rho->size[0] * t) - 1] - d1 * P_R
             (x_w->data[i5 - 1], XL1->data[i6 - 1], -P_SU_Re[1] * XL2->data[i6 -
              1], -P_SU_Im[1] * XL2->data[i6 - 1])) - d2 * Q_R(x_w->data[i5 - 1],
            XL1->data[i6 - 1], -P_SU_Re[1] * XL2->data[i6 - 1], -P_SU_Im[1] *
            XL2->data[i6 - 1]);
          i2 = CR_H0_R_rho->size[0];
          if (d3 != (int32_T)muDoubleScalarFloor(d3)) {
            emlrtIntegerCheckR2012b(d3, &hb_emlrtDCI, sp);
          }

          i3 = (int32_T)d3;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ih_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d3 != (int32_T)muDoubleScalarFloor(d3)) {
            emlrtIntegerCheckR2012b(d3, &ib_emlrtDCI, sp);
          }

          i4 = (int32_T)d3;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &jh_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &kh_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &lh_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &mh_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &nh_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &oh_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &ph_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &qh_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &rh_emlrtBCI, sp);
          }

          st.site = &l_emlrtRSI;
          CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] =
            (CR_H0_R_rho->data[(i4 + CR_H0_R_rho->size[0] * t) - 1] - d4 * P_R
             (x_w->data[i5 - 1], XL1->data[i6 - 1], P_SL_Re[1] * (-h[20] -
               XL2->data[i6 - 1]), -P_SL_Im[1] * (-h[20] - XL2->data[i6 - 1])))
            + d5 * Q_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_SL_Re[1] * (-h[20]
            - XL2->data[i6 - 1]), -P_SL_Im[1] * (-h[20] - XL2->data[i6 - 1]));
          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &sh_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &th_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &uh_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &vh_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &wh_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &xh_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &yh_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ai_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &bi_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ci_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &di_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ei_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &fi_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &gi_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &hi_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ii_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ji_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ki_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d6 != (int32_T)muDoubleScalarFloor(d6)) {
            emlrtIntegerCheckR2012b(d6, &jb_emlrtDCI, sp);
          }

          i3 = (int32_T)d6;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &li_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d6 != (int32_T)muDoubleScalarFloor(d6)) {
            emlrtIntegerCheckR2012b(d6, &kb_emlrtDCI, sp);
          }

          i4 = (int32_T)d6;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &mi_emlrtBCI, sp);
          }

          st.site = &m_emlrtRSI;
          CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] =
            (((CR_H0_R_rho->data[(i4 + CR_H0_R_rho->size[0] * t) - 1] - d1 * P_R
               (x_w->data[g], XL1->data[n_dis], P_SU_Re[1] * (-h[0] - XL2->
                 data[n_dis]), muDoubleScalarAbs(P_SU_Im[1] * (-h[0] - XL2->
                  data[n_dis])))) - muDoubleScalarSign(P_SU_Im[1] * (-h[0] -
                XL2->data[n_dis])) * Im_Xi(&st, 1.0 + (real_T)t, 2.0, 1.0 +
               (real_T)loop_ub, C_SU, P_SU, A_SU, B_SU) * Q_R(x_w->data[g],
               XL1->data[n_dis], P_SU_Re[1] * (-h[0] - XL2->data[n_dis]),
               muDoubleScalarAbs(P_SU_Im[1] * (-h[0] - XL2->data[n_dis])))) + d7
             * P_R(x_w->data[g], XL1->data[n_dis], P_I_Re[1] * (-h[0] -
               XL2->data[n_dis]), muDoubleScalarAbs(P_I_Im[1] * (-h[0] -
                XL2->data[n_dis])))) + muDoubleScalarSign(P_I_Im[1] * (-h[0] -
            XL2->data[n_dis])) * Im_Xi(&st, 1.0 + (real_T)t, 2.0, 1.0 + (real_T)
            loop_ub, C_I, P_I, A_I, B_I) * Q_R(x_w->data[g], XL1->data[n_dis],
            P_I_Re[1] * (-h[0] - XL2->data[n_dis]), muDoubleScalarAbs(P_I_Im[1] *
            (-h[0] - XL2->data[n_dis])));
          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ni_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &oi_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &pi_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &qi_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ri_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &si_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ti_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ui_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &vi_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &wi_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &xi_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &yi_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &aj_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &bj_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &cj_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &dj_emlrtBCI, sp);
          }

          /*  Eq. 3 in Ref.[2] */
          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ej_emlrtBCI, sp);
          }

          /*  Eq. 3 in Ref.[2] */
          /*  Eq. 3 in Ref.[2] */
          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &fj_emlrtBCI, sp);
          }

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
          d1 = Q_R(x_w->data[g], XL1->data[n_dis], P_SU_Re[1] * (-h[0] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_SU_Im[1] * (-h[0] -
                     XL2->data[n_dis])));
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
          d2 = P_R(x_w->data[g], XL1->data[n_dis], P_SU_Re[1] * (-h[0] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_SU_Im[1] * (-h[0] -
                     XL2->data[n_dis])));
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
          d5 = Q_R(x_w->data[g], XL1->data[n_dis], P_I_Re[1] * (-h[0] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_I_Im[1] * (-h[0] -
                     XL2->data[n_dis])));
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
          d10 = P_R(x_w->data[g], XL1->data[n_dis], P_I_Re[1] * (-h[0] -
                     XL2->data[n_dis]), muDoubleScalarAbs(P_I_Im[1] * (-h[0] -
                      XL2->data[n_dis])));
          i2 = CR_H0_R_rho->size[0];
          if (d13 != (int32_T)muDoubleScalarFloor(d13)) {
            emlrtIntegerCheckR2012b(d13, &lb_emlrtDCI, sp);
          }

          i3 = (int32_T)d13;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &gj_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d13 != (int32_T)muDoubleScalarFloor(d13)) {
            emlrtIntegerCheckR2012b(d13, &mb_emlrtDCI, sp);
          }

          i4 = (int32_T)d13;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &hj_emlrtBCI, sp);
          }

          CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] =
            (((CR_H0_R_rho->data[(i4 + CR_H0_R_rho->size[0] * t) - 1] - c_im *
               d1) + muDoubleScalarSign(P_SU_Im[1] * (-h[0] - XL2->data[n_dis]))
              * -re * d2) + im * d5) - muDoubleScalarSign(P_I_Im[1] * (-h[0] -
            XL2->data[n_dis])) * -b_re * d10;
          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ij_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &jj_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &kj_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &lj_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &mj_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &nj_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &oj_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &pj_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &qj_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &rj_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &sj_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &tj_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &uj_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &vj_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &wj_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &xj_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &yj_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ak_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d14 != (int32_T)muDoubleScalarFloor(d14)) {
            emlrtIntegerCheckR2012b(d14, &nb_emlrtDCI, sp);
          }

          i3 = (int32_T)d14;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &bk_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d14 != (int32_T)muDoubleScalarFloor(d14)) {
            emlrtIntegerCheckR2012b(d14, &ob_emlrtDCI, sp);
          }

          i4 = (int32_T)d14;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &ck_emlrtBCI, sp);
          }

          st.site = &o_emlrtRSI;
          CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] =
            (((CR_H0_R_rho->data[(i4 + CR_H0_R_rho->size[0] * t) - 1] - d7 * P_R
               (x_w->data[g], XL1->data[n_dis], P_I_Re[1] * (-h[5] - XL2->
                 data[n_dis]), muDoubleScalarAbs(P_I_Im[1] * (-h[5] - XL2->
                  data[n_dis])))) - muDoubleScalarSign(P_I_Im[1] * (-h[5] -
                XL2->data[n_dis])) * Im_Xi(&st, 1.0 + (real_T)t, 2.0, 1.0 +
               (real_T)loop_ub, C_I, P_I, A_I, B_I) * Q_R(x_w->data[g],
               XL1->data[n_dis], P_I_Re[1] * (-h[5] - XL2->data[n_dis]),
               muDoubleScalarAbs(P_I_Im[1] * (-h[5] - XL2->data[n_dis])))) + d9 *
             P_R(x_w->data[g], XL1->data[n_dis], P_GB_Re[1] * (-h[5] - XL2->
               data[n_dis]), muDoubleScalarAbs(P_GB_Im[1] * (-h[5] - XL2->
                data[n_dis])))) + muDoubleScalarSign(P_GB_Im[1] * (-h[5] -
            XL2->data[n_dis])) * Im_Xi(&st, 1.0 + (real_T)t, 2.0, 1.0 + (real_T)
            loop_ub, C_GB, P_GB, A_GB, B_GB) * Q_R(x_w->data[g], XL1->data[n_dis],
            P_GB_Re[1] * (-h[5] - XL2->data[n_dis]), muDoubleScalarAbs(P_GB_Im[1]
            * (-h[5] - XL2->data[n_dis])));
          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &dk_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ek_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &fk_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &gk_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &hk_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ik_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &jk_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &kk_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &lk_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &mk_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &nk_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ok_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &pk_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &qk_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &rk_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &sk_emlrtBCI, sp);
          }

          /*  Eq. 3 in Ref.[2] */
          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &tk_emlrtBCI, sp);
          }

          /*  Eq. 3 in Ref.[2] */
          /*  Eq. 3 in Ref.[2] */
          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &uk_emlrtBCI, sp);
          }

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
          d1 = Q_R(x_w->data[g], XL1->data[n_dis], P_I_Re[1] * (-h[5] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_I_Im[1] * (-h[5] -
                     XL2->data[n_dis])));
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
          d2 = P_R(x_w->data[g], XL1->data[n_dis], P_I_Re[1] * (-h[5] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_I_Im[1] * (-h[5] -
                     XL2->data[n_dis])));
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
          d5 = Q_R(x_w->data[g], XL1->data[n_dis], P_GB_Re[1] * (-h[5] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_GB_Im[1] * (-h[5] -
                     XL2->data[n_dis])));
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
          d7 = P_R(x_w->data[g], XL1->data[n_dis], P_GB_Re[1] * (-h[5] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_GB_Im[1] * (-h[5] -
                     XL2->data[n_dis])));
          i2 = CR_H0_R_rho->size[0];
          if (d15 != (int32_T)muDoubleScalarFloor(d15)) {
            emlrtIntegerCheckR2012b(d15, &pb_emlrtDCI, sp);
          }

          i3 = (int32_T)d15;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &vk_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d15 != (int32_T)muDoubleScalarFloor(d15)) {
            emlrtIntegerCheckR2012b(d15, &qb_emlrtDCI, sp);
          }

          i4 = (int32_T)d15;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &wk_emlrtBCI, sp);
          }

          CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] =
            (((CR_H0_R_rho->data[(i4 + CR_H0_R_rho->size[0] * t) - 1] - c_im *
               d1) + muDoubleScalarSign(P_I_Im[1] * (-h[5] - XL2->data[n_dis])) *
              -re * d2) + im * d5) - muDoubleScalarSign(P_GB_Im[1] * (-h[5] -
            XL2->data[n_dis])) * -b_re * d7;
          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &xk_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &yk_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &al_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &bl_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &cl_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &dl_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &el_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &fl_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &gl_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &hl_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &il_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &jl_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &kl_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ll_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ml_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &nl_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ol_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &pl_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d16 != (int32_T)muDoubleScalarFloor(d16)) {
            emlrtIntegerCheckR2012b(d16, &rb_emlrtDCI, sp);
          }

          i3 = (int32_T)d16;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ql_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d16 != (int32_T)muDoubleScalarFloor(d16)) {
            emlrtIntegerCheckR2012b(d16, &sb_emlrtDCI, sp);
          }

          i4 = (int32_T)d16;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &rl_emlrtBCI, sp);
          }

          st.site = &q_emlrtRSI;
          CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] =
            (((CR_H0_R_rho->data[(i4 + CR_H0_R_rho->size[0] * t) - 1] - d9 * P_R
               (x_w->data[g], XL1->data[n_dis], P_GB_Re[1] * (-h[10] - XL2->
                 data[n_dis]), muDoubleScalarAbs(P_GB_Im[1] * (-h[10] -
                  XL2->data[n_dis])))) - muDoubleScalarSign(P_GB_Im[1] * (-h[10]
                - XL2->data[n_dis])) * Im_Xi(&st, 1.0 + (real_T)t, 2.0, 1.0 +
               (real_T)loop_ub, C_GB, P_GB, A_GB, B_GB) * Q_R(x_w->data[g],
               XL1->data[n_dis], P_GB_Re[1] * (-h[10] - XL2->data[n_dis]),
               muDoubleScalarAbs(P_GB_Im[1] * (-h[10] - XL2->data[n_dis])))) +
             d8 * P_R(x_w->data[g], XL1->data[n_dis], P_II_Re[1] * (-h[10] -
               XL2->data[n_dis]), muDoubleScalarAbs(P_II_Im[1] * (-h[10] -
                XL2->data[n_dis])))) + muDoubleScalarSign(P_II_Im[1] * (-h[10] -
            XL2->data[n_dis])) * Im_Xi(&st, 1.0 + (real_T)t, 2.0, 1.0 + (real_T)
            loop_ub, C_II, P_II, A_II, B_II) * Q_R(x_w->data[g], XL1->data[n_dis],
            P_II_Re[1] * (-h[10] - XL2->data[n_dis]), muDoubleScalarAbs(P_II_Im
            [1] * (-h[10] - XL2->data[n_dis])));
          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &sl_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &tl_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ul_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &vl_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &wl_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &xl_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &yl_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &am_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &bm_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &cm_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &dm_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &em_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &fm_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &gm_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &hm_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &im_emlrtBCI, sp);
          }

          /*  Eq. 3 in Ref.[2] */
          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &jm_emlrtBCI, sp);
          }

          /*  Eq. 3 in Ref.[2] */
          /*  Eq. 3 in Ref.[2] */
          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &km_emlrtBCI, sp);
          }

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
          d1 = Q_R(x_w->data[g], XL1->data[n_dis], P_GB_Re[1] * (-h[10] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_GB_Im[1] * (-h[10] -
                     XL2->data[n_dis])));
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
          d2 = P_R(x_w->data[g], XL1->data[n_dis], P_GB_Re[1] * (-h[10] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_GB_Im[1] * (-h[10] -
                     XL2->data[n_dis])));
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
          d5 = Q_R(x_w->data[g], XL1->data[n_dis], P_II_Re[1] * (-h[10] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_II_Im[1] * (-h[10] -
                     XL2->data[n_dis])));
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
          d7 = P_R(x_w->data[g], XL1->data[n_dis], P_II_Re[1] * (-h[10] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_II_Im[1] * (-h[10] -
                     XL2->data[n_dis])));
          i2 = CR_H0_R_rho->size[0];
          if (d17 != (int32_T)muDoubleScalarFloor(d17)) {
            emlrtIntegerCheckR2012b(d17, &tb_emlrtDCI, sp);
          }

          i3 = (int32_T)d17;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &lm_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d17 != (int32_T)muDoubleScalarFloor(d17)) {
            emlrtIntegerCheckR2012b(d17, &ub_emlrtDCI, sp);
          }

          i4 = (int32_T)d17;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &mm_emlrtBCI, sp);
          }

          CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] =
            (((CR_H0_R_rho->data[(i4 + CR_H0_R_rho->size[0] * t) - 1] - c_im *
               d1) + muDoubleScalarSign(P_GB_Im[1] * (-h[10] - XL2->data[n_dis]))
              * -re * d2) + im * d5) - muDoubleScalarSign(P_II_Im[1] * (-h[10] -
            XL2->data[n_dis])) * -b_re * d7;
          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &nm_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &om_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &pm_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &qm_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &rm_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &sm_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &tm_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &um_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &vm_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &wm_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &xm_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ym_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &an_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &bn_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &cn_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &dn_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &en_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &fn_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d18 != (int32_T)muDoubleScalarFloor(d18)) {
            emlrtIntegerCheckR2012b(d18, &vb_emlrtDCI, sp);
          }

          i3 = (int32_T)d18;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &gn_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d18 != (int32_T)muDoubleScalarFloor(d18)) {
            emlrtIntegerCheckR2012b(d18, &wb_emlrtDCI, sp);
          }

          i4 = (int32_T)d18;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &hn_emlrtBCI, sp);
          }

          st.site = &s_emlrtRSI;
          CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] =
            (((CR_H0_R_rho->data[(i4 + CR_H0_R_rho->size[0] * t) - 1] - d8 * P_R
               (x_w->data[g], XL1->data[n_dis], P_II_Re[1] * (-h[15] - XL2->
                 data[n_dis]), muDoubleScalarAbs(P_II_Im[1] * (-h[15] -
                  XL2->data[n_dis])))) - muDoubleScalarSign(P_II_Im[1] * (-h[15]
                - XL2->data[n_dis])) * Im_Xi(&st, 1.0 + (real_T)t, 2.0, 1.0 +
               (real_T)loop_ub, C_II, P_II, A_II, B_II) * Q_R(x_w->data[g],
               XL1->data[n_dis], P_II_Re[1] * (-h[15] - XL2->data[n_dis]),
               muDoubleScalarAbs(P_II_Im[1] * (-h[15] - XL2->data[n_dis])))) +
             d4 * P_R(x_w->data[g], XL1->data[n_dis], P_SL_Re[1] * (-h[15] -
               XL2->data[n_dis]), muDoubleScalarAbs(P_SL_Im[1] * (-h[15] -
                XL2->data[n_dis])))) + muDoubleScalarSign(P_SL_Im[1] * (-h[15] -
            XL2->data[n_dis])) * Im_Xi(&st, 1.0 + (real_T)t, 2.0, 1.0 + (real_T)
            loop_ub, C_SL, P_SL, A_SL, B_SL) * Q_R(x_w->data[g], XL1->data[n_dis],
            P_SL_Re[1] * (-h[15] - XL2->data[n_dis]), muDoubleScalarAbs(P_SL_Im
            [1] * (-h[15] - XL2->data[n_dis])));
          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &in_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &jn_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &kn_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ln_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &mn_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &nn_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &on_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &pn_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &qn_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &rn_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &sn_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &tn_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &un_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &vn_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &wn_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &xn_emlrtBCI, sp);
          }

          /*  Eq. 3 in Ref.[2] */
          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &yn_emlrtBCI, sp);
          }

          /*  Eq. 3 in Ref.[2] */
          /*  Eq. 3 in Ref.[2] */
          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ao_emlrtBCI, sp);
          }

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
          d1 = Q_R(x_w->data[g], XL1->data[n_dis], P_II_Re[1] * (-h[15] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_II_Im[1] * (-h[15] -
                     XL2->data[n_dis])));
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
          d2 = P_R(x_w->data[g], XL1->data[n_dis], P_II_Re[1] * (-h[15] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_II_Im[1] * (-h[15] -
                     XL2->data[n_dis])));
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
          d4 = Q_R(x_w->data[g], XL1->data[n_dis], P_SL_Re[1] * (-h[15] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_SL_Im[1] * (-h[15] -
                     XL2->data[n_dis])));
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
          d5 = P_R(x_w->data[g], XL1->data[n_dis], P_SL_Re[1] * (-h[15] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_SL_Im[1] * (-h[15] -
                     XL2->data[n_dis])));
          i2 = CR_H0_R_rho->size[0];
          if (d19 != (int32_T)muDoubleScalarFloor(d19)) {
            emlrtIntegerCheckR2012b(d19, &xb_emlrtDCI, sp);
          }

          i3 = (int32_T)d19;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &bo_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d19 != (int32_T)muDoubleScalarFloor(d19)) {
            emlrtIntegerCheckR2012b(d19, &yb_emlrtDCI, sp);
          }

          i4 = (int32_T)d19;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &co_emlrtBCI, sp);
          }

          CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] =
            (((CR_H0_R_rho->data[(i4 + CR_H0_R_rho->size[0] * t) - 1] - c_im *
               d1) + muDoubleScalarSign(P_II_Im[1] * (-h[15] - XL2->data[n_dis]))
              * -c_re * d2) + beta1 * d4) - muDoubleScalarSign(P_SL_Im[1] * (-h
            [15] - XL2->data[n_dis])) * -re * d5;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
            emlrtIntegerCheckR2012b(d0, &k_emlrtDCI, sp);
          }

          i3 = (int32_T)d0;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &b_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
            emlrtIntegerCheckR2012b(d0, &l_emlrtDCI, sp);
          }

          i4 = (int32_T)d0;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &c_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &d_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &e_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &f_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &g_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &h_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &i_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &j_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &k_emlrtBCI, sp);
          }

          st.site = &emlrtRSI;
          d1 = Re_Xi(&st, 1.0 + (real_T)t, 3.0, 1.0 + (real_T)loop_ub, C_SU,
                     P_SU, A_SU, B_SU);
          st.site = &emlrtRSI;
          d2 = Im_Xi(&st, 1.0 + (real_T)t, 3.0, 1.0 + (real_T)loop_ub, C_SU,
                     P_SU, A_SU, B_SU);
          st.site = &emlrtRSI;
          zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] =
            (zeros_30Napp_3->data[(i4 + zeros_30Napp_3->size[0] * t) - 1] - d1 *
             Q_R(x_w->data[i5 - 1], XL1->data[i6 - 1], -P_SU_Re[2] * XL2->
                 data[i6 - 1], -P_SU_Im[2] * XL2->data[i6 - 1])) + d2 * P_R
            (x_w->data[i5 - 1], XL1->data[i6 - 1], -P_SU_Re[2] * XL2->data[i6 -
             1], -P_SU_Im[2] * XL2->data[i6 - 1]);
          i2 = zeros_30Napp_3->size[0];
          if (d3 != (int32_T)muDoubleScalarFloor(d3)) {
            emlrtIntegerCheckR2012b(d3, &m_emlrtDCI, sp);
          }

          i3 = (int32_T)d3;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &l_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d3 != (int32_T)muDoubleScalarFloor(d3)) {
            emlrtIntegerCheckR2012b(d3, &n_emlrtDCI, sp);
          }

          i4 = (int32_T)d3;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &m_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &n_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &o_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &p_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &q_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &r_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &s_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &t_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &u_emlrtBCI, sp);
          }

          st.site = &b_emlrtRSI;
          d4 = Re_Xi(&st, 1.0 + (real_T)t, 3.0, 1.0 + (real_T)loop_ub, C_SL,
                     P_SL, A_SL, B_SL);
          st.site = &b_emlrtRSI;
          d5 = Im_Xi(&st, 1.0 + (real_T)t, 3.0, 1.0 + (real_T)loop_ub, C_SL,
                     P_SL, A_SL, B_SL);
          st.site = &b_emlrtRSI;
          zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] =
            (zeros_30Napp_3->data[(i4 + zeros_30Napp_3->size[0] * t) - 1] - d4 *
             Q_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_SL_Re[2] * (-h[20] -
               XL2->data[i6 - 1]), -P_SL_Im[2] * (-h[20] - XL2->data[i6 - 1])))
            - d5 * P_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_SL_Re[2] * (-h[20]
            - XL2->data[i6 - 1]), -P_SL_Im[2] * (-h[20] - XL2->data[i6 - 1]));
          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &v_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &w_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &x_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &y_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ab_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &bb_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &cb_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &db_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &eb_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &fb_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &gb_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &hb_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ib_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &jb_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &kb_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &lb_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &mb_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &nb_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d6 != (int32_T)muDoubleScalarFloor(d6)) {
            emlrtIntegerCheckR2012b(d6, &o_emlrtDCI, sp);
          }

          i3 = (int32_T)d6;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ob_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d6 != (int32_T)muDoubleScalarFloor(d6)) {
            emlrtIntegerCheckR2012b(d6, &p_emlrtDCI, sp);
          }

          i4 = (int32_T)d6;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &pb_emlrtBCI, sp);
          }

          st.site = &c_emlrtRSI;
          d7 = Re_Xi(&st, 1.0 + (real_T)t, 3.0, 1.0 + (real_T)loop_ub, C_I, P_I,
                     A_I, B_I);
          st.site = &c_emlrtRSI;
          d8 = Im_Xi(&st, 1.0 + (real_T)t, 3.0, 1.0 + (real_T)loop_ub, C_I, P_I,
                     A_I, B_I);
          st.site = &c_emlrtRSI;
          zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] =
            (((zeros_30Napp_3->data[(i4 + zeros_30Napp_3->size[0] * t) - 1] - d1
               * Q_R(x_w->data[g], XL1->data[n_dis], P_SU_Re[2] * (-h[0] -
                 XL2->data[n_dis]), muDoubleScalarAbs(P_SU_Im[2] * (-h[0] -
                  XL2->data[n_dis])))) + muDoubleScalarSign(P_SU_Im[2] * (-h[0]
                - XL2->data[n_dis])) * d2 * P_R(x_w->data[g], XL1->data[n_dis],
               P_SU_Re[2] * (-h[0] - XL2->data[n_dis]), muDoubleScalarAbs
               (P_SU_Im[2] * (-h[0] - XL2->data[n_dis])))) + d7 * Q_R(x_w->
              data[g], XL1->data[n_dis], P_I_Re[2] * (-h[0] - XL2->data[n_dis]),
              muDoubleScalarAbs(P_I_Im[2] * (-h[0] - XL2->data[n_dis])))) -
            muDoubleScalarSign(P_I_Im[2] * (-h[0] - XL2->data[n_dis])) * d8 *
            P_R(x_w->data[g], XL1->data[n_dis], P_I_Re[2] * (-h[0] - XL2->
                 data[n_dis]), muDoubleScalarAbs(P_I_Im[2] * (-h[0] - XL2->
                  data[n_dis])));

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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &qb_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &rb_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &sb_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &tb_emlrtBCI, sp);
          }

          st.site = &d_emlrtRSI;
          d9 = P_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_SU_Re[2] * (-h[0] -
                    XL2->data[i6 - 1]), P_SU_Im[2] * (-h[0] - XL2->data[i6 - 1]));
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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &ub_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &vb_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &wb_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &xb_emlrtBCI, sp);
          }

          st.site = &d_emlrtRSI;
          d10 = Q_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_SU_Re[2] * (-h[0] -
                     XL2->data[i6 - 1]), P_SU_Im[2] * (-h[0] - XL2->data[i6 - 1]));
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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &yb_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &ac_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &bc_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &cc_emlrtBCI, sp);
          }

          st.site = &d_emlrtRSI;
          d11 = P_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_I_Re[2] * (-h[0] -
                     XL2->data[i6 - 1]), P_I_Im[2] * (-h[0] - XL2->data[i6 - 1]));
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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &dc_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &ec_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &fc_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &gc_emlrtBCI, sp);
          }

          st.site = &d_emlrtRSI;
          d12 = Q_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_I_Re[2] * (-h[0] -
                     XL2->data[i6 - 1]), P_I_Im[2] * (-h[0] - XL2->data[i6 - 1]));
          i2 = zeros_30Napp_3->size[0];
          if (d13 != (int32_T)muDoubleScalarFloor(d13)) {
            emlrtIntegerCheckR2012b(d13, &q_emlrtDCI, sp);
          }

          i3 = (int32_T)d13;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &hc_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d13 != (int32_T)muDoubleScalarFloor(d13)) {
            emlrtIntegerCheckR2012b(d13, &r_emlrtDCI, sp);
          }

          i4 = (int32_T)d13;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &ic_emlrtBCI, sp);
          }

          zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] =
            (((zeros_30Napp_3->data[(i4 + zeros_30Napp_3->size[0] * t) - 1] + im
               * d9) + -re * d10) - b_im * d11) - -b_re * d12;
          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &jc_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &kc_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &lc_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &mc_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &nc_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &oc_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &pc_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &qc_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &rc_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &sc_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &tc_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &uc_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &vc_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &wc_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &xc_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &yc_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ad_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &bd_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d14 != (int32_T)muDoubleScalarFloor(d14)) {
            emlrtIntegerCheckR2012b(d14, &s_emlrtDCI, sp);
          }

          i3 = (int32_T)d14;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &cd_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d14 != (int32_T)muDoubleScalarFloor(d14)) {
            emlrtIntegerCheckR2012b(d14, &t_emlrtDCI, sp);
          }

          i4 = (int32_T)d14;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &dd_emlrtBCI, sp);
          }

          st.site = &e_emlrtRSI;
          d9 = Re_Xi(&st, 1.0 + (real_T)t, 3.0, 1.0 + (real_T)loop_ub, C_GB,
                     P_GB, A_GB, B_GB);
          st.site = &e_emlrtRSI;
          d10 = Im_Xi(&st, 1.0 + (real_T)t, 3.0, 1.0 + (real_T)loop_ub, C_GB,
                      P_GB, A_GB, B_GB);
          st.site = &e_emlrtRSI;
          zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] =
            (((zeros_30Napp_3->data[(i4 + zeros_30Napp_3->size[0] * t) - 1] - d7
               * Q_R(x_w->data[g], XL1->data[n_dis], P_I_Re[2] * (-h[5] -
                 XL2->data[n_dis]), muDoubleScalarAbs(P_I_Im[2] * (-h[5] -
                  XL2->data[n_dis])))) + muDoubleScalarSign(P_I_Im[2] * (-h[5] -
                XL2->data[n_dis])) * d8 * P_R(x_w->data[g], XL1->data[n_dis],
               P_I_Re[2] * (-h[5] - XL2->data[n_dis]), muDoubleScalarAbs(P_I_Im
                [2] * (-h[5] - XL2->data[n_dis])))) + d9 * Q_R(x_w->data[g],
              XL1->data[n_dis], P_GB_Re[2] * (-h[5] - XL2->data[n_dis]),
              muDoubleScalarAbs(P_GB_Im[2] * (-h[5] - XL2->data[n_dis])))) -
            muDoubleScalarSign(P_GB_Im[2] * (-h[5] - XL2->data[n_dis])) * d10 *
            P_R(x_w->data[g], XL1->data[n_dis], P_GB_Re[2] * (-h[5] - XL2->
                 data[n_dis]), muDoubleScalarAbs(P_GB_Im[2] * (-h[5] - XL2->
                  data[n_dis])));

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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &ed_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &fd_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &gd_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &hd_emlrtBCI, sp);
          }

          st.site = &f_emlrtRSI;
          d8 = P_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_I_Re[2] * (-h[5] -
                    XL2->data[i6 - 1]), P_I_Im[2] * (-h[5] - XL2->data[i6 - 1]));
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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &id_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &jd_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &kd_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &ld_emlrtBCI, sp);
          }

          st.site = &f_emlrtRSI;
          d11 = Q_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_I_Re[2] * (-h[5] -
                     XL2->data[i6 - 1]), P_I_Im[2] * (-h[5] - XL2->data[i6 - 1]));
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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &md_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &nd_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &od_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &pd_emlrtBCI, sp);
          }

          st.site = &f_emlrtRSI;
          d12 = P_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_GB_Re[2] * (-h[5] -
                     XL2->data[i6 - 1]), P_GB_Im[2] * (-h[5] - XL2->data[i6 - 1]));
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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &qd_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &rd_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &sd_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &td_emlrtBCI, sp);
          }

          st.site = &f_emlrtRSI;
          beta1 = Q_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_GB_Re[2] * (-h[5]
            - XL2->data[i6 - 1]), P_GB_Im[2] * (-h[5] - XL2->data[i6 - 1]));
          i2 = zeros_30Napp_3->size[0];
          if (d15 != (int32_T)muDoubleScalarFloor(d15)) {
            emlrtIntegerCheckR2012b(d15, &u_emlrtDCI, sp);
          }

          i3 = (int32_T)d15;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ud_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d15 != (int32_T)muDoubleScalarFloor(d15)) {
            emlrtIntegerCheckR2012b(d15, &v_emlrtDCI, sp);
          }

          i4 = (int32_T)d15;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &vd_emlrtBCI, sp);
          }

          zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] =
            (((zeros_30Napp_3->data[(i4 + zeros_30Napp_3->size[0] * t) - 1] +
               c_im * d8) + -re * d11) - im * d12) - -b_re * beta1;
          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &wd_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &xd_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &yd_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ae_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &be_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ce_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &de_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ee_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &fe_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ge_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &he_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ie_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &je_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ke_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &le_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &me_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ne_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &oe_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d16 != (int32_T)muDoubleScalarFloor(d16)) {
            emlrtIntegerCheckR2012b(d16, &w_emlrtDCI, sp);
          }

          i3 = (int32_T)d16;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &pe_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d16 != (int32_T)muDoubleScalarFloor(d16)) {
            emlrtIntegerCheckR2012b(d16, &x_emlrtDCI, sp);
          }

          i4 = (int32_T)d16;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &qe_emlrtBCI, sp);
          }

          st.site = &g_emlrtRSI;
          d8 = Re_Xi(&st, 1.0 + (real_T)t, 3.0, 1.0 + (real_T)loop_ub, C_II,
                     P_II, A_II, B_II);
          st.site = &g_emlrtRSI;
          d11 = Im_Xi(&st, 1.0 + (real_T)t, 3.0, 1.0 + (real_T)loop_ub, C_II,
                      P_II, A_II, B_II);
          st.site = &g_emlrtRSI;
          zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] =
            (((zeros_30Napp_3->data[(i4 + zeros_30Napp_3->size[0] * t) - 1] - d9
               * Q_R(x_w->data[g], XL1->data[n_dis], P_GB_Re[2] * (-h[10] -
                 XL2->data[n_dis]), muDoubleScalarAbs(P_GB_Im[2] * (-h[10] -
                  XL2->data[n_dis])))) + muDoubleScalarSign(P_GB_Im[2] * (-h[10]
                - XL2->data[n_dis])) * d10 * P_R(x_w->data[g], XL1->data[n_dis],
               P_GB_Re[2] * (-h[10] - XL2->data[n_dis]), muDoubleScalarAbs
               (P_GB_Im[2] * (-h[10] - XL2->data[n_dis])))) + d8 * Q_R(x_w->
              data[g], XL1->data[n_dis], P_II_Re[2] * (-h[10] - XL2->data[n_dis]),
              muDoubleScalarAbs(P_II_Im[2] * (-h[10] - XL2->data[n_dis])))) -
            muDoubleScalarSign(P_II_Im[2] * (-h[10] - XL2->data[n_dis])) * d11 *
            P_R(x_w->data[g], XL1->data[n_dis], P_II_Re[2] * (-h[10] - XL2->
                 data[n_dis]), muDoubleScalarAbs(P_II_Im[2] * (-h[10] -
                  XL2->data[n_dis])));

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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &re_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &se_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &te_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &ue_emlrtBCI, sp);
          }

          st.site = &h_emlrtRSI;
          d10 = P_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_GB_Re[2] * (-h[10] -
                     XL2->data[i6 - 1]), P_GB_Im[2] * (-h[10] - XL2->data[i6 - 1]));
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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &ve_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &we_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &xe_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &ye_emlrtBCI, sp);
          }

          st.site = &h_emlrtRSI;
          d12 = Q_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_GB_Re[2] * (-h[10] -
                     XL2->data[i6 - 1]), P_GB_Im[2] * (-h[10] - XL2->data[i6 - 1]));
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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &af_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &bf_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &cf_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &df_emlrtBCI, sp);
          }

          st.site = &h_emlrtRSI;
          beta1 = P_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_II_Re[2] * (-h[10]
            - XL2->data[i6 - 1]), P_II_Im[2] * (-h[10] - XL2->data[i6 - 1]));
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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &ef_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &ff_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &gf_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &hf_emlrtBCI, sp);
          }

          st.site = &h_emlrtRSI;
          alpha1 = Q_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_II_Re[2] * (-h[10]
            - XL2->data[i6 - 1]), P_II_Im[2] * (-h[10] - XL2->data[i6 - 1]));
          i2 = zeros_30Napp_3->size[0];
          if (d17 != (int32_T)muDoubleScalarFloor(d17)) {
            emlrtIntegerCheckR2012b(d17, &y_emlrtDCI, sp);
          }

          i3 = (int32_T)d17;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &if_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d17 != (int32_T)muDoubleScalarFloor(d17)) {
            emlrtIntegerCheckR2012b(d17, &ab_emlrtDCI, sp);
          }

          i4 = (int32_T)d17;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &jf_emlrtBCI, sp);
          }

          zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] =
            (((zeros_30Napp_3->data[(i4 + zeros_30Napp_3->size[0] * t) - 1] +
               c_im * d10) + -re * d12) - im * beta1) - -b_re * alpha1;
          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &kf_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &lf_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &mf_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &nf_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &of_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &pf_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &qf_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &rf_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &sf_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &tf_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &uf_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &vf_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &wf_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &xf_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &yf_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ag_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &bg_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &cg_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d18 != (int32_T)muDoubleScalarFloor(d18)) {
            emlrtIntegerCheckR2012b(d18, &bb_emlrtDCI, sp);
          }

          i3 = (int32_T)d18;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &dg_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d18 != (int32_T)muDoubleScalarFloor(d18)) {
            emlrtIntegerCheckR2012b(d18, &cb_emlrtDCI, sp);
          }

          i4 = (int32_T)d18;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &eg_emlrtBCI, sp);
          }

          st.site = &i_emlrtRSI;
          zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] =
            (((zeros_30Napp_3->data[(i4 + zeros_30Napp_3->size[0] * t) - 1] - d8
               * Q_R(x_w->data[g], XL1->data[n_dis], P_II_Re[2] * (-h[15] -
                 XL2->data[n_dis]), muDoubleScalarAbs(P_II_Im[2] * (-h[15] -
                  XL2->data[n_dis])))) + muDoubleScalarSign(P_II_Im[2] * (-h[15]
                - XL2->data[n_dis])) * d11 * P_R(x_w->data[g], XL1->data[n_dis],
               P_II_Re[2] * (-h[15] - XL2->data[n_dis]), muDoubleScalarAbs
               (P_II_Im[2] * (-h[15] - XL2->data[n_dis])))) + d4 * Q_R(x_w->
              data[g], XL1->data[n_dis], P_SL_Re[2] * (-h[15] - XL2->data[n_dis]),
              muDoubleScalarAbs(P_SL_Im[2] * (-h[15] - XL2->data[n_dis])))) -
            muDoubleScalarSign(P_SL_Im[2] * (-h[15] - XL2->data[n_dis])) * d5 *
            P_R(x_w->data[g], XL1->data[n_dis], P_SL_Re[2] * (-h[15] - XL2->
                 data[n_dis]), muDoubleScalarAbs(P_SL_Im[2] * (-h[15] -
                  XL2->data[n_dis])));

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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &fg_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &gg_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &hg_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &ig_emlrtBCI, sp);
          }

          st.site = &j_emlrtRSI;
          d10 = P_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_II_Re[2] * (-h[15] -
                     XL2->data[i6 - 1]), P_II_Im[2] * (-h[15] - XL2->data[i6 - 1]));
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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &jg_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &kg_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &lg_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &mg_emlrtBCI, sp);
          }

          st.site = &j_emlrtRSI;
          d11 = Q_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_II_Re[2] * (-h[15] -
                     XL2->data[i6 - 1]), P_II_Im[2] * (-h[15] - XL2->data[i6 - 1]));
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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &ng_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &og_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &pg_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &qg_emlrtBCI, sp);
          }

          st.site = &j_emlrtRSI;
          d12 = P_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_SL_Re[2] * (-h[15] -
                     XL2->data[i6 - 1]), P_SL_Im[2] * (-h[15] - XL2->data[i6 - 1]));
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

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &rg_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &sg_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &tg_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &ug_emlrtBCI, sp);
          }

          st.site = &j_emlrtRSI;
          beta1 = Q_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_SL_Re[2] * (-h[15]
            - XL2->data[i6 - 1]), P_SL_Im[2] * (-h[15] - XL2->data[i6 - 1]));
          i2 = zeros_30Napp_3->size[0];
          if (d19 != (int32_T)muDoubleScalarFloor(d19)) {
            emlrtIntegerCheckR2012b(d19, &db_emlrtDCI, sp);
          }

          i3 = (int32_T)d19;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &vg_emlrtBCI, sp);
          }

          i2 = zeros_30Napp_3->size[0];
          if (d19 != (int32_T)muDoubleScalarFloor(d19)) {
            emlrtIntegerCheckR2012b(d19, &eb_emlrtDCI, sp);
          }

          i4 = (int32_T)d19;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &wg_emlrtBCI, sp);
          }

          zeros_30Napp_3->data[(i3 + zeros_30Napp_3->size[0] * t) - 1] =
            (((zeros_30Napp_3->data[(i4 + zeros_30Napp_3->size[0] * t) - 1] +
               c_im * d10) + -c_re * d11) - im * d12) - -re * beta1;
          i2 = CR_H0_R_rho->size[0];
          if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
            emlrtIntegerCheckR2012b(d0, &fb_emlrtDCI, sp);
          }

          i3 = (int32_T)d0;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &xg_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
            emlrtIntegerCheckR2012b(d0, &gb_emlrtDCI, sp);
          }

          i4 = (int32_T)d0;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &yg_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &ah_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &bh_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &ch_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &dh_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &eh_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &fh_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &gh_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &hh_emlrtBCI, sp);
          }

          st.site = &k_emlrtRSI;
          CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] =
            (CR_H0_R_rho->data[(i4 + CR_H0_R_rho->size[0] * t) - 1] - d1 * P_R
             (x_w->data[i5 - 1], XL1->data[i6 - 1], -P_SU_Re[2] * XL2->data[i6 -
              1], -P_SU_Im[2] * XL2->data[i6 - 1])) - d2 * Q_R(x_w->data[i5 - 1],
            XL1->data[i6 - 1], -P_SU_Re[2] * XL2->data[i6 - 1], -P_SU_Im[2] *
            XL2->data[i6 - 1]);
          i2 = CR_H0_R_rho->size[0];
          if (d3 != (int32_T)muDoubleScalarFloor(d3)) {
            emlrtIntegerCheckR2012b(d3, &hb_emlrtDCI, sp);
          }

          i3 = (int32_T)d3;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ih_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d3 != (int32_T)muDoubleScalarFloor(d3)) {
            emlrtIntegerCheckR2012b(d3, &ib_emlrtDCI, sp);
          }

          i4 = (int32_T)d3;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &jh_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &kh_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &lh_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &mh_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &nh_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          if ((i5 < 1) || (i5 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i2, &oh_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &ph_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &qh_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          if ((i6 < 1) || (i6 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i2, &rh_emlrtBCI, sp);
          }

          st.site = &l_emlrtRSI;
          CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] =
            (CR_H0_R_rho->data[(i4 + CR_H0_R_rho->size[0] * t) - 1] - d4 * P_R
             (x_w->data[i5 - 1], XL1->data[i6 - 1], P_SL_Re[2] * (-h[20] -
               XL2->data[i6 - 1]), -P_SL_Im[2] * (-h[20] - XL2->data[i6 - 1])))
            + d5 * Q_R(x_w->data[i5 - 1], XL1->data[i6 - 1], P_SL_Re[2] * (-h[20]
            - XL2->data[i6 - 1]), -P_SL_Im[2] * (-h[20] - XL2->data[i6 - 1]));
          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &sh_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &th_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &uh_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &vh_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &wh_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &xh_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &yh_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ai_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &bi_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ci_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &di_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ei_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &fi_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &gi_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &hi_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ii_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ji_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ki_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d6 != (int32_T)muDoubleScalarFloor(d6)) {
            emlrtIntegerCheckR2012b(d6, &jb_emlrtDCI, sp);
          }

          i3 = (int32_T)d6;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &li_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d6 != (int32_T)muDoubleScalarFloor(d6)) {
            emlrtIntegerCheckR2012b(d6, &kb_emlrtDCI, sp);
          }

          i4 = (int32_T)d6;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &mi_emlrtBCI, sp);
          }

          st.site = &m_emlrtRSI;
          CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] =
            (((CR_H0_R_rho->data[(i4 + CR_H0_R_rho->size[0] * t) - 1] - d1 * P_R
               (x_w->data[g], XL1->data[n_dis], P_SU_Re[2] * (-h[0] - XL2->
                 data[n_dis]), muDoubleScalarAbs(P_SU_Im[2] * (-h[0] - XL2->
                  data[n_dis])))) - muDoubleScalarSign(P_SU_Im[2] * (-h[0] -
                XL2->data[n_dis])) * Im_Xi(&st, 1.0 + (real_T)t, 3.0, 1.0 +
               (real_T)loop_ub, C_SU, P_SU, A_SU, B_SU) * Q_R(x_w->data[g],
               XL1->data[n_dis], P_SU_Re[2] * (-h[0] - XL2->data[n_dis]),
               muDoubleScalarAbs(P_SU_Im[2] * (-h[0] - XL2->data[n_dis])))) + d7
             * P_R(x_w->data[g], XL1->data[n_dis], P_I_Re[2] * (-h[0] -
               XL2->data[n_dis]), muDoubleScalarAbs(P_I_Im[2] * (-h[0] -
                XL2->data[n_dis])))) + muDoubleScalarSign(P_I_Im[2] * (-h[0] -
            XL2->data[n_dis])) * Im_Xi(&st, 1.0 + (real_T)t, 3.0, 1.0 + (real_T)
            loop_ub, C_I, P_I, A_I, B_I) * Q_R(x_w->data[g], XL1->data[n_dis],
            P_I_Re[2] * (-h[0] - XL2->data[n_dis]), muDoubleScalarAbs(P_I_Im[2] *
            (-h[0] - XL2->data[n_dis])));
          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ni_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &oi_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &pi_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &qi_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ri_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &si_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ti_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ui_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &vi_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &wi_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &xi_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &yi_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &aj_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &bj_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &cj_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &dj_emlrtBCI, sp);
          }

          /*  Eq. 3 in Ref.[2] */
          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ej_emlrtBCI, sp);
          }

          /*  Eq. 3 in Ref.[2] */
          /*  Eq. 3 in Ref.[2] */
          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &fj_emlrtBCI, sp);
          }

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
          d1 = Q_R(x_w->data[g], XL1->data[n_dis], P_SU_Re[2] * (-h[0] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_SU_Im[2] * (-h[0] -
                     XL2->data[n_dis])));
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
          d2 = P_R(x_w->data[g], XL1->data[n_dis], P_SU_Re[2] * (-h[0] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_SU_Im[2] * (-h[0] -
                     XL2->data[n_dis])));
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
          d5 = Q_R(x_w->data[g], XL1->data[n_dis], P_I_Re[2] * (-h[0] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_I_Im[2] * (-h[0] -
                     XL2->data[n_dis])));
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
          d10 = P_R(x_w->data[g], XL1->data[n_dis], P_I_Re[2] * (-h[0] -
                     XL2->data[n_dis]), muDoubleScalarAbs(P_I_Im[2] * (-h[0] -
                      XL2->data[n_dis])));
          i2 = CR_H0_R_rho->size[0];
          if (d13 != (int32_T)muDoubleScalarFloor(d13)) {
            emlrtIntegerCheckR2012b(d13, &lb_emlrtDCI, sp);
          }

          i3 = (int32_T)d13;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &gj_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d13 != (int32_T)muDoubleScalarFloor(d13)) {
            emlrtIntegerCheckR2012b(d13, &mb_emlrtDCI, sp);
          }

          i4 = (int32_T)d13;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &hj_emlrtBCI, sp);
          }

          CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] =
            (((CR_H0_R_rho->data[(i4 + CR_H0_R_rho->size[0] * t) - 1] - c_im *
               d1) + muDoubleScalarSign(P_SU_Im[2] * (-h[0] - XL2->data[n_dis]))
              * -re * d2) + im * d5) - muDoubleScalarSign(P_I_Im[2] * (-h[0] -
            XL2->data[n_dis])) * -b_re * d10;
          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ij_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &jj_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &kj_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &lj_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &mj_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &nj_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &oj_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &pj_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &qj_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &rj_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &sj_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &tj_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &uj_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &vj_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &wj_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &xj_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &yj_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ak_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d14 != (int32_T)muDoubleScalarFloor(d14)) {
            emlrtIntegerCheckR2012b(d14, &nb_emlrtDCI, sp);
          }

          i3 = (int32_T)d14;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &bk_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d14 != (int32_T)muDoubleScalarFloor(d14)) {
            emlrtIntegerCheckR2012b(d14, &ob_emlrtDCI, sp);
          }

          i4 = (int32_T)d14;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &ck_emlrtBCI, sp);
          }

          st.site = &o_emlrtRSI;
          CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] =
            (((CR_H0_R_rho->data[(i4 + CR_H0_R_rho->size[0] * t) - 1] - d7 * P_R
               (x_w->data[g], XL1->data[n_dis], P_I_Re[2] * (-h[5] - XL2->
                 data[n_dis]), muDoubleScalarAbs(P_I_Im[2] * (-h[5] - XL2->
                  data[n_dis])))) - muDoubleScalarSign(P_I_Im[2] * (-h[5] -
                XL2->data[n_dis])) * Im_Xi(&st, 1.0 + (real_T)t, 3.0, 1.0 +
               (real_T)loop_ub, C_I, P_I, A_I, B_I) * Q_R(x_w->data[g],
               XL1->data[n_dis], P_I_Re[2] * (-h[5] - XL2->data[n_dis]),
               muDoubleScalarAbs(P_I_Im[2] * (-h[5] - XL2->data[n_dis])))) + d9 *
             P_R(x_w->data[g], XL1->data[n_dis], P_GB_Re[2] * (-h[5] - XL2->
               data[n_dis]), muDoubleScalarAbs(P_GB_Im[2] * (-h[5] - XL2->
                data[n_dis])))) + muDoubleScalarSign(P_GB_Im[2] * (-h[5] -
            XL2->data[n_dis])) * Im_Xi(&st, 1.0 + (real_T)t, 3.0, 1.0 + (real_T)
            loop_ub, C_GB, P_GB, A_GB, B_GB) * Q_R(x_w->data[g], XL1->data[n_dis],
            P_GB_Re[2] * (-h[5] - XL2->data[n_dis]), muDoubleScalarAbs(P_GB_Im[2]
            * (-h[5] - XL2->data[n_dis])));
          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &dk_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ek_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &fk_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &gk_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &hk_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ik_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &jk_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &kk_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &lk_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &mk_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &nk_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ok_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &pk_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &qk_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &rk_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &sk_emlrtBCI, sp);
          }

          /*  Eq. 3 in Ref.[2] */
          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &tk_emlrtBCI, sp);
          }

          /*  Eq. 3 in Ref.[2] */
          /*  Eq. 3 in Ref.[2] */
          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &uk_emlrtBCI, sp);
          }

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
          d1 = Q_R(x_w->data[g], XL1->data[n_dis], P_I_Re[2] * (-h[5] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_I_Im[2] * (-h[5] -
                     XL2->data[n_dis])));
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
          d2 = P_R(x_w->data[g], XL1->data[n_dis], P_I_Re[2] * (-h[5] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_I_Im[2] * (-h[5] -
                     XL2->data[n_dis])));
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
          d5 = Q_R(x_w->data[g], XL1->data[n_dis], P_GB_Re[2] * (-h[5] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_GB_Im[2] * (-h[5] -
                     XL2->data[n_dis])));
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
          d7 = P_R(x_w->data[g], XL1->data[n_dis], P_GB_Re[2] * (-h[5] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_GB_Im[2] * (-h[5] -
                     XL2->data[n_dis])));
          i2 = CR_H0_R_rho->size[0];
          if (d15 != (int32_T)muDoubleScalarFloor(d15)) {
            emlrtIntegerCheckR2012b(d15, &pb_emlrtDCI, sp);
          }

          i3 = (int32_T)d15;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &vk_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d15 != (int32_T)muDoubleScalarFloor(d15)) {
            emlrtIntegerCheckR2012b(d15, &qb_emlrtDCI, sp);
          }

          i4 = (int32_T)d15;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &wk_emlrtBCI, sp);
          }

          CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] =
            (((CR_H0_R_rho->data[(i4 + CR_H0_R_rho->size[0] * t) - 1] - c_im *
               d1) + muDoubleScalarSign(P_I_Im[2] * (-h[5] - XL2->data[n_dis])) *
              -re * d2) + im * d5) - muDoubleScalarSign(P_GB_Im[2] * (-h[5] -
            XL2->data[n_dis])) * -b_re * d7;
          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &xk_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &yk_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &al_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &bl_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &cl_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &dl_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &el_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &fl_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &gl_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &hl_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &il_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &jl_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &kl_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ll_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ml_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &nl_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ol_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &pl_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d16 != (int32_T)muDoubleScalarFloor(d16)) {
            emlrtIntegerCheckR2012b(d16, &rb_emlrtDCI, sp);
          }

          i3 = (int32_T)d16;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ql_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d16 != (int32_T)muDoubleScalarFloor(d16)) {
            emlrtIntegerCheckR2012b(d16, &sb_emlrtDCI, sp);
          }

          i4 = (int32_T)d16;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &rl_emlrtBCI, sp);
          }

          st.site = &q_emlrtRSI;
          CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] =
            (((CR_H0_R_rho->data[(i4 + CR_H0_R_rho->size[0] * t) - 1] - d9 * P_R
               (x_w->data[g], XL1->data[n_dis], P_GB_Re[2] * (-h[10] - XL2->
                 data[n_dis]), muDoubleScalarAbs(P_GB_Im[2] * (-h[10] -
                  XL2->data[n_dis])))) - muDoubleScalarSign(P_GB_Im[2] * (-h[10]
                - XL2->data[n_dis])) * Im_Xi(&st, 1.0 + (real_T)t, 3.0, 1.0 +
               (real_T)loop_ub, C_GB, P_GB, A_GB, B_GB) * Q_R(x_w->data[g],
               XL1->data[n_dis], P_GB_Re[2] * (-h[10] - XL2->data[n_dis]),
               muDoubleScalarAbs(P_GB_Im[2] * (-h[10] - XL2->data[n_dis])))) +
             d8 * P_R(x_w->data[g], XL1->data[n_dis], P_II_Re[2] * (-h[10] -
               XL2->data[n_dis]), muDoubleScalarAbs(P_II_Im[2] * (-h[10] -
                XL2->data[n_dis])))) + muDoubleScalarSign(P_II_Im[2] * (-h[10] -
            XL2->data[n_dis])) * Im_Xi(&st, 1.0 + (real_T)t, 3.0, 1.0 + (real_T)
            loop_ub, C_II, P_II, A_II, B_II) * Q_R(x_w->data[g], XL1->data[n_dis],
            P_II_Re[2] * (-h[10] - XL2->data[n_dis]), muDoubleScalarAbs(P_II_Im
            [2] * (-h[10] - XL2->data[n_dis])));
          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &sl_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &tl_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ul_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &vl_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &wl_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &xl_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &yl_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &am_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &bm_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &cm_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &dm_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &em_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &fm_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &gm_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &hm_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &im_emlrtBCI, sp);
          }

          /*  Eq. 3 in Ref.[2] */
          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &jm_emlrtBCI, sp);
          }

          /*  Eq. 3 in Ref.[2] */
          /*  Eq. 3 in Ref.[2] */
          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &km_emlrtBCI, sp);
          }

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
          d1 = Q_R(x_w->data[g], XL1->data[n_dis], P_GB_Re[2] * (-h[10] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_GB_Im[2] * (-h[10] -
                     XL2->data[n_dis])));
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
          d2 = P_R(x_w->data[g], XL1->data[n_dis], P_GB_Re[2] * (-h[10] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_GB_Im[2] * (-h[10] -
                     XL2->data[n_dis])));
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
          d5 = Q_R(x_w->data[g], XL1->data[n_dis], P_II_Re[2] * (-h[10] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_II_Im[2] * (-h[10] -
                     XL2->data[n_dis])));
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
          d7 = P_R(x_w->data[g], XL1->data[n_dis], P_II_Re[2] * (-h[10] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_II_Im[2] * (-h[10] -
                     XL2->data[n_dis])));
          i2 = CR_H0_R_rho->size[0];
          if (d17 != (int32_T)muDoubleScalarFloor(d17)) {
            emlrtIntegerCheckR2012b(d17, &tb_emlrtDCI, sp);
          }

          i3 = (int32_T)d17;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &lm_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d17 != (int32_T)muDoubleScalarFloor(d17)) {
            emlrtIntegerCheckR2012b(d17, &ub_emlrtDCI, sp);
          }

          i4 = (int32_T)d17;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &mm_emlrtBCI, sp);
          }

          CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] =
            (((CR_H0_R_rho->data[(i4 + CR_H0_R_rho->size[0] * t) - 1] - c_im *
               d1) + muDoubleScalarSign(P_GB_Im[2] * (-h[10] - XL2->data[n_dis]))
              * -re * d2) + im * d5) - muDoubleScalarSign(P_II_Im[2] * (-h[10] -
            XL2->data[n_dis])) * -b_re * d7;
          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &nm_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &om_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &pm_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &qm_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &rm_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &sm_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &tm_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &um_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &vm_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &wm_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &xm_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ym_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &an_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &bn_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &cn_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &dn_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &en_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &fn_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d18 != (int32_T)muDoubleScalarFloor(d18)) {
            emlrtIntegerCheckR2012b(d18, &vb_emlrtDCI, sp);
          }

          i3 = (int32_T)d18;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &gn_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d18 != (int32_T)muDoubleScalarFloor(d18)) {
            emlrtIntegerCheckR2012b(d18, &wb_emlrtDCI, sp);
          }

          i4 = (int32_T)d18;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &hn_emlrtBCI, sp);
          }

          st.site = &s_emlrtRSI;
          CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] =
            (((CR_H0_R_rho->data[(i4 + CR_H0_R_rho->size[0] * t) - 1] - d8 * P_R
               (x_w->data[g], XL1->data[n_dis], P_II_Re[2] * (-h[15] - XL2->
                 data[n_dis]), muDoubleScalarAbs(P_II_Im[2] * (-h[15] -
                  XL2->data[n_dis])))) - muDoubleScalarSign(P_II_Im[2] * (-h[15]
                - XL2->data[n_dis])) * Im_Xi(&st, 1.0 + (real_T)t, 3.0, 1.0 +
               (real_T)loop_ub, C_II, P_II, A_II, B_II) * Q_R(x_w->data[g],
               XL1->data[n_dis], P_II_Re[2] * (-h[15] - XL2->data[n_dis]),
               muDoubleScalarAbs(P_II_Im[2] * (-h[15] - XL2->data[n_dis])))) +
             d4 * P_R(x_w->data[g], XL1->data[n_dis], P_SL_Re[2] * (-h[15] -
               XL2->data[n_dis]), muDoubleScalarAbs(P_SL_Im[2] * (-h[15] -
                XL2->data[n_dis])))) + muDoubleScalarSign(P_SL_Im[2] * (-h[15] -
            XL2->data[n_dis])) * Im_Xi(&st, 1.0 + (real_T)t, 3.0, 1.0 + (real_T)
            loop_ub, C_SL, P_SL, A_SL, B_SL) * Q_R(x_w->data[g], XL1->data[n_dis],
            P_SL_Re[2] * (-h[15] - XL2->data[n_dis]), muDoubleScalarAbs(P_SL_Im
            [2] * (-h[15] - XL2->data[n_dis])));
          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &in_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &jn_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &kn_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ln_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &mn_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &nn_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &on_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &pn_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &qn_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &rn_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &sn_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &tn_emlrtBCI, sp);
          }

          i2 = x_w->size[0];
          i3 = 1 + g;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &un_emlrtBCI, sp);
          }

          i2 = XL1->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &vn_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &wn_emlrtBCI, sp);
          }

          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &xn_emlrtBCI, sp);
          }

          /*  Eq. 3 in Ref.[2] */
          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &yn_emlrtBCI, sp);
          }

          /*  Eq. 3 in Ref.[2] */
          /*  Eq. 3 in Ref.[2] */
          i2 = XL2->size[1];
          i3 = 1 + n_dis;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ao_emlrtBCI, sp);
          }

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
          d1 = Q_R(x_w->data[g], XL1->data[n_dis], P_II_Re[2] * (-h[15] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_II_Im[2] * (-h[15] -
                     XL2->data[n_dis])));
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
          d2 = P_R(x_w->data[g], XL1->data[n_dis], P_II_Re[2] * (-h[15] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_II_Im[2] * (-h[15] -
                     XL2->data[n_dis])));
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
          d4 = Q_R(x_w->data[g], XL1->data[n_dis], P_SL_Re[2] * (-h[15] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_SL_Im[2] * (-h[15] -
                     XL2->data[n_dis])));
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
          d5 = P_R(x_w->data[g], XL1->data[n_dis], P_SL_Re[2] * (-h[15] -
                    XL2->data[n_dis]), muDoubleScalarAbs(P_SL_Im[2] * (-h[15] -
                     XL2->data[n_dis])));
          i2 = CR_H0_R_rho->size[0];
          if (d19 != (int32_T)muDoubleScalarFloor(d19)) {
            emlrtIntegerCheckR2012b(d19, &xb_emlrtDCI, sp);
          }

          i3 = (int32_T)d19;
          if ((i3 < 1) || (i3 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &bo_emlrtBCI, sp);
          }

          i2 = CR_H0_R_rho->size[0];
          if (d19 != (int32_T)muDoubleScalarFloor(d19)) {
            emlrtIntegerCheckR2012b(d19, &yb_emlrtDCI, sp);
          }

          i4 = (int32_T)d19;
          if ((i4 < 1) || (i4 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &co_emlrtBCI, sp);
          }

          CR_H0_R_rho->data[(i3 + CR_H0_R_rho->size[0] * t) - 1] =
            (((CR_H0_R_rho->data[(i4 + CR_H0_R_rho->size[0] * t) - 1] - c_im *
               d1) + muDoubleScalarSign(P_II_Im[2] * (-h[15] - XL2->data[n_dis]))
              * -c_re * d2) + beta1 * d4) - muDoubleScalarSign(P_SL_Im[2] * (-h
            [15] - XL2->data[n_dis])) * -re * d5;
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

    i1 = zeros_30Napp_3->size[0] * zeros_30Napp_3->size[1];
    i2 = zeros_30Napp_3->size[0] * zeros_30Napp_3->size[1];
    zeros_30Napp_3->size[1] = 3;
    emxEnsureCapacity_real_T(sp, zeros_30Napp_3, i2, &d_emlrtRTEI);
    loop_ub = i1 - 1;
    for (i1 = 0; i1 <= loop_ub; i1++) {
      zeros_30Napp_3->data[i1] *= 2.0;
    }

    i1 = CR_H0_R_rho->size[0] * CR_H0_R_rho->size[1];
    i2 = CR_H0_R_rho->size[0] * CR_H0_R_rho->size[1];
    CR_H0_R_rho->size[1] = 3;
    emxEnsureCapacity_real_T(sp, CR_H0_R_rho, i2, &e_emlrtRTEI);
    loop_ub = i1 - 1;
    for (i1 = 0; i1 <= loop_ub; i1++) {
      CR_H0_R_rho->data[i1] *= 2.0;
    }

    c_C_rho[0] = C_rho->size[0];
    b_C0_Cinv_C0_rho[0] = C0_Cinv_C0_rho->size[0];
    c_C_rho[1] = C_rho->size[1];
    b_C0_Cinv_C0_rho[1] = C0_Cinv_C0_rho->size[1];
    if ((c_C_rho[0] != b_C0_Cinv_C0_rho[0]) || (c_C_rho[1] != b_C0_Cinv_C0_rho[1]))
    {
      emlrtSizeEqCheckNDR2012b(&c_C_rho[0], &b_C0_Cinv_C0_rho[0], &c_emlrtECI,
        sp);
    }

    c_C_rho[0] = CH_H_rho->size[0];
    b_C0_Cinv_C0_rho[0] = CI_I_rho->size[0];
    c_C_rho[1] = CH_H_rho->size[1];
    b_C0_Cinv_C0_rho[1] = CI_I_rho->size[1];
    if ((c_C_rho[0] != b_C0_Cinv_C0_rho[0]) || (c_C_rho[1] != b_C0_Cinv_C0_rho[1]))
    {
      emlrtSizeEqCheckNDR2012b(&c_C_rho[0], &b_C0_Cinv_C0_rho[0], &d_emlrtECI,
        sp);
    }

    st.site = &u_emlrtRSI;
    b_st.site = &bb_emlrtRSI;
    if (C0_Cinv_rho->size[1] != CH_H0_H_rho->size[0]) {
      if (((C0_Cinv_rho->size[0] == 1) && (C0_Cinv_rho->size[1] == 1)) ||
          ((CH_H0_H_rho->size[0] == 1) && (CH_H0_H_rho->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(&b_st, &jb_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &kb_emlrtRTEI, "MATLAB:innerdim",
          "MATLAB:innerdim", 0);
      }
    }

    if ((C0_Cinv_rho->size[1] == 1) || (CH_H0_H_rho->size[0] == 1)) {
      i1 = a->size[0] * a->size[1];
      a->size[0] = C0_Cinv_rho->size[0];
      a->size[1] = CH_H0_H_rho->size[1];
      emxEnsureCapacity_real_T(&st, a, i1, &f_emlrtRTEI);
      loop_ub = C0_Cinv_rho->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        t = CH_H0_H_rho->size[1];
        for (i2 = 0; i2 < t; i2++) {
          a->data[i1 + a->size[0] * i2] = 0.0;
          g = C0_Cinv_rho->size[1];
          for (i3 = 0; i3 < g; i3++) {
            a->data[i1 + a->size[0] * i2] += C0_Cinv_rho->data[i1 +
              C0_Cinv_rho->size[0] * i3] * CH_H0_H_rho->data[i3 +
              CH_H0_H_rho->size[0] * i2];
          }
        }
      }
    } else {
      b_st.site = &ab_emlrtRSI;
      if ((C0_Cinv_rho->size[0] == 0) || (C0_Cinv_rho->size[1] == 0) ||
          (CH_H0_H_rho->size[0] == 0) || (CH_H0_H_rho->size[1] == 0)) {
        i1 = a->size[0] * a->size[1];
        a->size[0] = C0_Cinv_rho->size[0];
        a->size[1] = CH_H0_H_rho->size[1];
        emxEnsureCapacity_real_T(&b_st, a, i1, &f_emlrtRTEI);
        loop_ub = C0_Cinv_rho->size[0] * CH_H0_H_rho->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          a->data[i1] = 0.0;
        }
      } else {
        c_st.site = &db_emlrtRSI;
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)C0_Cinv_rho->size[0];
        n_t = (ptrdiff_t)CH_H0_H_rho->size[1];
        k_t = (ptrdiff_t)C0_Cinv_rho->size[1];
        lda_t = (ptrdiff_t)C0_Cinv_rho->size[0];
        ldb_t = (ptrdiff_t)C0_Cinv_rho->size[1];
        ldc_t = (ptrdiff_t)C0_Cinv_rho->size[0];
        i1 = a->size[0] * a->size[1];
        a->size[0] = C0_Cinv_rho->size[0];
        a->size[1] = CH_H0_H_rho->size[1];
        emxEnsureCapacity_real_T(&c_st, a, i1, &g_emlrtRTEI);
        TRANSA = 'N';
        TRANSB = 'N';
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &C0_Cinv_rho->data[0],
              &lda_t, &CH_H0_H_rho->data[0], &ldb_t, &beta1, &a->data[0], &ldc_t);
      }
    }

    c_C_rho[0] = CH_H_rho->size[0];
    c_C_rho[1] = CH_H_rho->size[1];
    b_C0_Cinv_C0_rho[0] = a->size[0];
    b_C0_Cinv_C0_rho[1] = a->size[1];
    if ((c_C_rho[0] != b_C0_Cinv_C0_rho[0]) || (c_C_rho[1] != b_C0_Cinv_C0_rho[1]))
    {
      emlrtSizeEqCheckNDR2012b(&c_C_rho[0], &b_C0_Cinv_C0_rho[0], &d_emlrtECI,
        sp);
    }

    st.site = &u_emlrtRSI;
    b_st.site = &bb_emlrtRSI;
    if (C0_Cinv_rho->size[1] != CI_H0_I_rho->size[0]) {
      if (((C0_Cinv_rho->size[0] == 1) && (C0_Cinv_rho->size[1] == 1)) ||
          ((CI_H0_I_rho->size[0] == 1) && (CI_H0_I_rho->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(&b_st, &jb_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &kb_emlrtRTEI, "MATLAB:innerdim",
          "MATLAB:innerdim", 0);
      }
    }

    if ((C0_Cinv_rho->size[1] == 1) || (CI_H0_I_rho->size[0] == 1)) {
      i1 = r0->size[0] * r0->size[1];
      r0->size[0] = C0_Cinv_rho->size[0];
      r0->size[1] = CI_H0_I_rho->size[1];
      emxEnsureCapacity_real_T(&st, r0, i1, &h_emlrtRTEI);
      loop_ub = C0_Cinv_rho->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        t = CI_H0_I_rho->size[1];
        for (i2 = 0; i2 < t; i2++) {
          r0->data[i1 + r0->size[0] * i2] = 0.0;
          g = C0_Cinv_rho->size[1];
          for (i3 = 0; i3 < g; i3++) {
            r0->data[i1 + r0->size[0] * i2] += C0_Cinv_rho->data[i1 +
              C0_Cinv_rho->size[0] * i3] * CI_H0_I_rho->data[i3 +
              CI_H0_I_rho->size[0] * i2];
          }
        }
      }
    } else {
      b_st.site = &ab_emlrtRSI;
      if ((C0_Cinv_rho->size[0] == 0) || (C0_Cinv_rho->size[1] == 0) ||
          (CI_H0_I_rho->size[0] == 0) || (CI_H0_I_rho->size[1] == 0)) {
        i1 = r0->size[0] * r0->size[1];
        r0->size[0] = C0_Cinv_rho->size[0];
        r0->size[1] = CI_H0_I_rho->size[1];
        emxEnsureCapacity_real_T(&b_st, r0, i1, &h_emlrtRTEI);
        loop_ub = C0_Cinv_rho->size[0] * CI_H0_I_rho->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          r0->data[i1] = 0.0;
        }
      } else {
        c_st.site = &db_emlrtRSI;
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)C0_Cinv_rho->size[0];
        n_t = (ptrdiff_t)CI_H0_I_rho->size[1];
        k_t = (ptrdiff_t)C0_Cinv_rho->size[1];
        lda_t = (ptrdiff_t)C0_Cinv_rho->size[0];
        ldb_t = (ptrdiff_t)C0_Cinv_rho->size[1];
        ldc_t = (ptrdiff_t)C0_Cinv_rho->size[0];
        i1 = r0->size[0] * r0->size[1];
        r0->size[0] = C0_Cinv_rho->size[0];
        r0->size[1] = CI_H0_I_rho->size[1];
        emxEnsureCapacity_real_T(&c_st, r0, i1, &g_emlrtRTEI);
        TRANSA = 'N';
        TRANSB = 'N';
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &C0_Cinv_rho->data[0],
              &lda_t, &CI_H0_I_rho->data[0], &ldb_t, &beta1, &r0->data[0],
              &ldc_t);
      }
    }

    c_C_rho[0] = CH_H_rho->size[0];
    c_C_rho[1] = CH_H_rho->size[1];
    iv0[0] = r0->size[0];
    iv0[1] = r0->size[1];
    if ((c_C_rho[0] != iv0[0]) || (c_C_rho[1] != iv0[1])) {
      emlrtSizeEqCheckNDR2012b(&c_C_rho[0], &iv0[0], &d_emlrtECI, sp);
    }

    st.site = &u_emlrtRSI;
    i1 = CH_H_rho->size[0] * CH_H_rho->size[1];
    i2 = a->size[0] * a->size[1];
    a->size[0] = CH_H_rho->size[0];
    a->size[1] = CH_H_rho->size[1];
    emxEnsureCapacity_real_T(&st, a, i2, &i_emlrtRTEI);
    loop_ub = i1 - 1;
    for (i1 = 0; i1 <= loop_ub; i1++) {
      a->data[i1] = ((CH_H_rho->data[i1] + CI_I_rho->data[i1]) - a->data[i1]) -
        r0->data[i1];
    }

    b_st.site = &bb_emlrtRSI;
    if (a->size[1] != weights->size[0]) {
      if (((a->size[0] == 1) && (a->size[1] == 1)) || ((weights->size[0] == 1) &&
           (weights->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(&b_st, &jb_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &kb_emlrtRTEI, "MATLAB:innerdim",
          "MATLAB:innerdim", 0);
      }
    }

    if ((a->size[1] == 1) || (weights->size[0] == 1)) {
      i1 = r0->size[0] * r0->size[1];
      r0->size[0] = a->size[0];
      r0->size[1] = weights->size[1];
      emxEnsureCapacity_real_T(&st, r0, i1, &j_emlrtRTEI);
      loop_ub = a->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        t = weights->size[1];
        for (i2 = 0; i2 < t; i2++) {
          r0->data[i1 + r0->size[0] * i2] = 0.0;
          g = a->size[1];
          for (i3 = 0; i3 < g; i3++) {
            r0->data[i1 + r0->size[0] * i2] += a->data[i1 + a->size[0] * i3] *
              weights->data[i3 + weights->size[0] * i2];
          }
        }
      }
    } else {
      b_st.site = &ab_emlrtRSI;
      if ((a->size[0] == 0) || (a->size[1] == 0) || (weights->size[0] == 0) ||
          (weights->size[1] == 0)) {
        i1 = r0->size[0] * r0->size[1];
        r0->size[0] = a->size[0];
        r0->size[1] = weights->size[1];
        emxEnsureCapacity_real_T(&b_st, r0, i1, &j_emlrtRTEI);
        loop_ub = a->size[0] * weights->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          r0->data[i1] = 0.0;
        }
      } else {
        c_st.site = &db_emlrtRSI;
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)a->size[0];
        n_t = (ptrdiff_t)weights->size[1];
        k_t = (ptrdiff_t)a->size[1];
        lda_t = (ptrdiff_t)a->size[0];
        ldb_t = (ptrdiff_t)a->size[1];
        ldc_t = (ptrdiff_t)a->size[0];
        i1 = r0->size[0] * r0->size[1];
        r0->size[0] = a->size[0];
        r0->size[1] = weights->size[1];
        emxEnsureCapacity_real_T(&c_st, r0, i1, &g_emlrtRTEI);
        TRANSA = 'N';
        TRANSB = 'N';
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a->data[0], &lda_t,
              &weights->data[0], &ldb_t, &beta1, &r0->data[0], &ldc_t);
      }
    }

    c_C_rho[0] = C_rho->size[0];
    c_C_rho[1] = C_rho->size[1];
    iv0[0] = r0->size[0];
    iv0[1] = r0->size[1];
    if ((c_C_rho[0] != iv0[0]) || (c_C_rho[1] != iv0[1])) {
      emlrtSizeEqCheckNDR2012b(&c_C_rho[0], &iv0[0], &c_emlrtECI, sp);
    }

    i1 = zeros_30Napp_3->size[0] * zeros_30Napp_3->size[1];
    i2 = zeros_30Napp_3->size[0] * zeros_30Napp_3->size[1];
    zeros_30Napp_3->size[1] = 3;
    emxEnsureCapacity_real_T(sp, zeros_30Napp_3, i2, &k_emlrtRTEI);
    loop_ub = i1 - 1;
    for (i1 = 0; i1 <= loop_ub; i1++) {
      zeros_30Napp_3->data[i1] = -zeros_30Napp_3->data[i1];
    }

    st.site = &u_emlrtRSI;
    b_st.site = &bb_emlrtRSI;
    if (C0_Cinv_rho->size[1] != CR_H0_R_rho->size[0]) {
      if ((C0_Cinv_rho->size[0] == 1) && (C0_Cinv_rho->size[1] == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &jb_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &kb_emlrtRTEI, "MATLAB:innerdim",
          "MATLAB:innerdim", 0);
      }
    }

    if ((C0_Cinv_rho->size[1] == 1) || (CR_H0_R_rho->size[0] == 1)) {
      i1 = r1->size[0] * r1->size[1];
      r1->size[0] = C0_Cinv_rho->size[0];
      r1->size[1] = 3;
      emxEnsureCapacity_real_T(&st, r1, i1, &l_emlrtRTEI);
      loop_ub = C0_Cinv_rho->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          r1->data[i1 + r1->size[0] * i2] = 0.0;
          t = C0_Cinv_rho->size[1];
          for (i3 = 0; i3 < t; i3++) {
            r1->data[i1 + r1->size[0] * i2] += C0_Cinv_rho->data[i1 +
              C0_Cinv_rho->size[0] * i3] * CR_H0_R_rho->data[i3 +
              CR_H0_R_rho->size[0] * i2];
          }
        }
      }
    } else {
      b_st.site = &ab_emlrtRSI;
      if ((C0_Cinv_rho->size[0] == 0) || (C0_Cinv_rho->size[1] == 0) ||
          (CR_H0_R_rho->size[0] == 0)) {
        i1 = r1->size[0] * r1->size[1];
        r1->size[0] = C0_Cinv_rho->size[0];
        r1->size[1] = 3;
        emxEnsureCapacity_real_T(&b_st, r1, i1, &l_emlrtRTEI);
        loop_ub = C0_Cinv_rho->size[0] * 3;
        for (i1 = 0; i1 < loop_ub; i1++) {
          r1->data[i1] = 0.0;
        }
      } else {
        c_st.site = &db_emlrtRSI;
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)C0_Cinv_rho->size[0];
        n_t = (ptrdiff_t)3;
        k_t = (ptrdiff_t)C0_Cinv_rho->size[1];
        lda_t = (ptrdiff_t)C0_Cinv_rho->size[0];
        ldb_t = (ptrdiff_t)C0_Cinv_rho->size[1];
        ldc_t = (ptrdiff_t)C0_Cinv_rho->size[0];
        i1 = r1->size[0] * r1->size[1];
        r1->size[0] = C0_Cinv_rho->size[0];
        r1->size[1] = 3;
        emxEnsureCapacity_real_T(&c_st, r1, i1, &g_emlrtRTEI);
        TRANSA = 'N';
        TRANSB = 'N';
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &C0_Cinv_rho->data[0],
              &lda_t, &CR_H0_R_rho->data[0], &ldb_t, &beta1, &r1->data[0],
              &ldc_t);
      }
    }

    b_C0_Cinv_C0_rho[0] = zeros_30Napp_3->size[0];
    b_C0_Cinv_C0_rho[1] = zeros_30Napp_3->size[1];
    iv0[0] = r1->size[0];
    iv0[1] = r1->size[1];
    if ((b_C0_Cinv_C0_rho[0] != iv0[0]) || (b_C0_Cinv_C0_rho[1] != iv0[1])) {
      emlrtSizeEqCheckNDR2012b(&b_C0_Cinv_C0_rho[0], &iv0[0], &b_emlrtECI, sp);
    }

    loop_ub = rho_t_Napp->size[0];
    i1 = r2->size[0];
    r2->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(sp, r2, i1, &m_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      r2->data[i1] = i1;
    }

    i1 = rho_t_Napp->size[1];
    i2 = 1 + n_dis;
    if ((i2 < 1) || (i2 > i1)) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &emlrtBCI, sp);
    }

    i1 = b_C_rho->size[0] * b_C_rho->size[1];
    b_C_rho->size[0] = C_rho->size[0];
    b_C_rho->size[1] = C_rho->size[1];
    emxEnsureCapacity_real_T(sp, b_C_rho, i1, &n_emlrtRTEI);
    loop_ub = C_rho->size[0] * C_rho->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_C_rho->data[i1] = (C_rho->data[i1] + C0_Cinv_C0_rho->data[i1]) +
        r0->data[i1];
    }

    i1 = b_zeros_30Napp_3->size[0] * b_zeros_30Napp_3->size[1];
    b_zeros_30Napp_3->size[0] = zeros_30Napp_3->size[0];
    b_zeros_30Napp_3->size[1] = 3;
    emxEnsureCapacity_real_T(sp, b_zeros_30Napp_3, i1, &k_emlrtRTEI);
    loop_ub = zeros_30Napp_3->size[0] * zeros_30Napp_3->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_zeros_30Napp_3->data[i1] = zeros_30Napp_3->data[i1] + r1->data[i1];
    }

    st.site = &u_emlrtRSI;
    mldivide(&st, b_C_rho, b_zeros_30Napp_3, zeros_30Napp_3);
    st.site = &u_emlrtRSI;
    b_st.site = &ab_emlrtRSI;
    if (zeros_30Napp_3->size[0] == 0) {
      r3->size[0] = 0;
    } else {
      c_st.site = &db_emlrtRSI;
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)zeros_30Napp_3->size[0];
      n_t = (ptrdiff_t)1;
      k_t = (ptrdiff_t)3;
      lda_t = (ptrdiff_t)zeros_30Napp_3->size[0];
      ldb_t = (ptrdiff_t)3;
      ldc_t = (ptrdiff_t)zeros_30Napp_3->size[0];
      i1 = r3->size[0];
      r3->size[0] = zeros_30Napp_3->size[0];
      emxEnsureCapacity_real_T(&c_st, r3, i1, &g_emlrtRTEI);
      TRANSA = 'N';
      TRANSB = 'N';
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &zeros_30Napp_3->data[0],
            &lda_t, &b[0], &ldb_t, &beta1, &r3->data[0], &ldc_t);
    }

    iv1[0] = r2->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv1[0], 1, &(*(int32_T (*)[1])r3->size)[0], 1,
      &emlrtECI, sp);
    loop_ub = r3->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      rho_t_Napp->data[r2->data[i1] + rho_t_Napp->size[0] * n_dis] = r3->data[i1];
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&b_zeros_30Napp_3);
  emxFree_real_T(&b_C_rho);
  emxFree_real_T(&a);
  emxFree_real_T(&r3);
  emxFree_int32_T(&r2);
  emxFree_real_T(&r1);
  emxFree_real_T(&r0);
  emxFree_real_T(&CR_H0_R_rho);
  emxFree_real_T(&zeros_30Napp_3);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (Rho_density.c) */
