/*
 * stress_data.c
 *
 * Code generation for function 'stress_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "stress.h"
#include "stress_data.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131467U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "stress",                            /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

emlrtRSInfo emlrtRSI = { 29,           /* lineNo */
  "stress",                            /* fcnName */
  "/home/xiaolei/Documents/ImageStress/stress.m"/* pathName */
};

emlrtRSInfo b_emlrtRSI = { 32,         /* lineNo */
  "stress",                            /* fcnName */
  "/home/xiaolei/Documents/ImageStress/stress.m"/* pathName */
};

emlrtRSInfo c_emlrtRSI = { 35,         /* lineNo */
  "stress",                            /* fcnName */
  "/home/xiaolei/Documents/ImageStress/stress.m"/* pathName */
};

emlrtRSInfo d_emlrtRSI = { 38,         /* lineNo */
  "stress",                            /* fcnName */
  "/home/xiaolei/Documents/ImageStress/stress.m"/* pathName */
};

emlrtRSInfo e_emlrtRSI = { 41,         /* lineNo */
  "stress",                            /* fcnName */
  "/home/xiaolei/Documents/ImageStress/stress.m"/* pathName */
};

emlrtRSInfo l_emlrtRSI = { 30,         /* lineNo */
  "integrale_num_inf",                 /* fcnName */
  "/home/xiaolei/Documents/ImageStress/integrale_num_inf.m"/* pathName */
};

emlrtRSInfo m_emlrtRSI = { 6,          /* lineNo */
  "ref",                               /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/ref.m"/* pathName */
};

emlrtRSInfo n_emlrtRSI = { 14,         /* lineNo */
  "anonymous_function",                /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/anonymous_function.m"/* pathName */
};

emlrtRSInfo lb_emlrtRSI = { 21,        /* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"/* pathName */
};

emlrtRSInfo qb_emlrtRSI = { 41,        /* lineNo */
  "find",                              /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

emlrtRSInfo rb_emlrtRSI = { 153,       /* lineNo */
  "find",                              /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

emlrtRSInfo sb_emlrtRSI = { 377,       /* lineNo */
  "find",                              /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

emlrtRSInfo tb_emlrtRSI = { 12,        /* lineNo */
  "nullAssignment",                    /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pathName */
};

emlrtRSInfo ub_emlrtRSI = { 16,        /* lineNo */
  "nullAssignment",                    /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pathName */
};

emlrtRSInfo vb_emlrtRSI = { 168,       /* lineNo */
  "nullAssignment",                    /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pathName */
};

emlrtRSInfo wb_emlrtRSI = { 171,       /* lineNo */
  "nullAssignment",                    /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pathName */
};

emlrtRSInfo xb_emlrtRSI = { 131,       /* lineNo */
  "nullAssignment",                    /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pathName */
};

emlrtRSInfo ic_emlrtRSI = { 37,        /* lineNo */
  "function_handle",                   /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/function_handle.m"/* pathName */
};

emlrtRSInfo qc_emlrtRSI = { 189,       /* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/applyBinaryScalarFunction.m"/* pathName */
};

emlrtRSInfo xl_emlrtRSI = { 3,         /* lineNo */
  "P_R",                               /* fcnName */
  "/home/xiaolei/Documents/ImageStress/P_R.m"/* pathName */
};

emlrtRSInfo yl_emlrtRSI = { 40,        /* lineNo */
  "mpower",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/mpower.m"/* pathName */
};

emlrtRSInfo am_emlrtRSI = { 3,         /* lineNo */
  "Q_R",                               /* fcnName */
  "/home/xiaolei/Documents/ImageStress/Q_R.m"/* pathName */
};

emlrtRSInfo fm_emlrtRSI = { 150,       /* lineNo */
  "lusolve",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

emlrtRSInfo gm_emlrtRSI = { 152,       /* lineNo */
  "lusolve",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

emlrtRSInfo hm_emlrtRSI = { 7,         /* lineNo */
  "int",                               /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/int.m"/* pathName */
};

emlrtRSInfo pm_emlrtRSI = { 8,         /* lineNo */
  "majority",                          /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/majority.m"/* pathName */
};

emlrtRSInfo qm_emlrtRSI = { 31,        /* lineNo */
  "infocheck",                         /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/infocheck.m"/* pathName */
};

emlrtRSInfo um_emlrtRSI = { 76,        /* lineNo */
  "xtrsm",                             /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+blas/xtrsm.m"/* pathName */
};

emlrtRSInfo vm_emlrtRSI = { 77,        /* lineNo */
  "xtrsm",                             /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+blas/xtrsm.m"/* pathName */
};

emlrtRSInfo wm_emlrtRSI = { 52,        /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

emlrtRSInfo ym_emlrtRSI = { 118,       /* lineNo */
  "mtimes",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+blas/mtimes.m"/* pathName */
};

emlrtRSInfo an_emlrtRSI = { 21,        /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

emlrtRSInfo dn_emlrtRSI = { 13,        /* lineNo */
  "max",                               /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/datafun/max.m"/* pathName */
};

emlrtRSInfo en_emlrtRSI = { 19,        /* lineNo */
  "minOrMax",                          /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/minOrMax.m"/* pathName */
};

emlrtRSInfo in_emlrtRSI = { 203,       /* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/applyBinaryScalarFunction.m"/* pathName */
};

emlrtRTEInfo x_emlrtRTEI = { 118,      /* lineNo */
  13,                                  /* colNo */
  "mtimes",                            /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+blas/mtimes.m"/* pName */
};

emlrtRTEInfo y_emlrtRTEI = { 153,      /* lineNo */
  13,                                  /* colNo */
  "find",                              /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

emlrtRTEInfo ab_emlrtRTEI = { 41,      /* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

emlrtRTEInfo rb_emlrtRTEI = { 33,      /* lineNo */
  6,                                   /* colNo */
  "find",                              /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

emlrtRTEInfo tb_emlrtRTEI = { 50,      /* lineNo */
  5,                                   /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

emlrtRTEInfo tf_emlrtRTEI = { 387,     /* lineNo */
  1,                                   /* colNo */
  "find",                              /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

emlrtRTEInfo uf_emlrtRTEI = { 183,     /* lineNo */
  9,                                   /* colNo */
  "nullAssignment",                    /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pName */
};

emlrtRTEInfo vf_emlrtRTEI = { 84,      /* lineNo */
  27,                                  /* colNo */
  "nullAssignment",                    /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pName */
};

emlrtRTEInfo cg_emlrtRTEI = { 83,      /* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

emlrtRTEInfo dg_emlrtRTEI = { 88,      /* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

const int8_T iv0[900] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 };

/* End of code generation (stress_data.c) */
