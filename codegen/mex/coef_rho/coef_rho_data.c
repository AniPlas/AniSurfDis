/*
 * coef_rho_data.c
 *
 * Code generation for function 'coef_rho_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "coef_rho.h"
#include "coef_rho_data.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131467U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "coef_rho",                          /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

emlrtRSInfo i_emlrtRSI = { 71,         /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo k_emlrtRSI = { 73,         /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo m_emlrtRSI = { 75,         /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo n_emlrtRSI = { 76,         /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo o_emlrtRSI = { 77,         /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo p_emlrtRSI = { 78,         /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo q_emlrtRSI = { 80,         /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo r_emlrtRSI = { 81,         /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo s_emlrtRSI = { 82,         /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo t_emlrtRSI = { 83,         /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo u_emlrtRSI = { 84,         /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo v_emlrtRSI = { 85,         /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo w_emlrtRSI = { 86,         /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo x_emlrtRSI = { 87,         /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo y_emlrtRSI = { 88,         /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo ab_emlrtRSI = { 89,        /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo bb_emlrtRSI = { 91,        /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo cb_emlrtRSI = { 92,        /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo db_emlrtRSI = { 93,        /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo eb_emlrtRSI = { 94,        /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo fb_emlrtRSI = { 95,        /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo gb_emlrtRSI = { 96,        /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo hb_emlrtRSI = { 97,        /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo ib_emlrtRSI = { 98,        /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo jb_emlrtRSI = { 99,        /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo kb_emlrtRSI = { 100,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo lb_emlrtRSI = { 102,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo mb_emlrtRSI = { 103,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo nb_emlrtRSI = { 104,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo ob_emlrtRSI = { 105,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo pb_emlrtRSI = { 106,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo qb_emlrtRSI = { 107,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo rb_emlrtRSI = { 108,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo sb_emlrtRSI = { 109,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo tb_emlrtRSI = { 110,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo ub_emlrtRSI = { 111,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo vb_emlrtRSI = { 113,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo wb_emlrtRSI = { 114,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo xb_emlrtRSI = { 115,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo yb_emlrtRSI = { 116,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo ac_emlrtRSI = { 117,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo bc_emlrtRSI = { 118,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo cc_emlrtRSI = { 119,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo dc_emlrtRSI = { 120,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo ec_emlrtRSI = { 121,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo fc_emlrtRSI = { 122,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo ic_emlrtRSI = { 127,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo kc_emlrtRSI = { 129,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo mc_emlrtRSI = { 131,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo nc_emlrtRSI = { 132,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo oc_emlrtRSI = { 133,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo pc_emlrtRSI = { 134,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo qc_emlrtRSI = { 136,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo rc_emlrtRSI = { 137,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo sc_emlrtRSI = { 138,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo tc_emlrtRSI = { 139,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo uc_emlrtRSI = { 140,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo vc_emlrtRSI = { 141,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo wc_emlrtRSI = { 142,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo xc_emlrtRSI = { 143,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo yc_emlrtRSI = { 144,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo ad_emlrtRSI = { 145,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo bd_emlrtRSI = { 147,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo cd_emlrtRSI = { 148,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo dd_emlrtRSI = { 149,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo ed_emlrtRSI = { 150,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo fd_emlrtRSI = { 151,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo gd_emlrtRSI = { 152,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo hd_emlrtRSI = { 153,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo id_emlrtRSI = { 154,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo jd_emlrtRSI = { 155,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo kd_emlrtRSI = { 156,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo ld_emlrtRSI = { 158,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo md_emlrtRSI = { 159,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo nd_emlrtRSI = { 160,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo od_emlrtRSI = { 161,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo pd_emlrtRSI = { 162,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo qd_emlrtRSI = { 163,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo rd_emlrtRSI = { 164,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo sd_emlrtRSI = { 165,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo td_emlrtRSI = { 166,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo ud_emlrtRSI = { 167,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo vd_emlrtRSI = { 169,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo wd_emlrtRSI = { 170,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo xd_emlrtRSI = { 171,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo yd_emlrtRSI = { 172,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo ae_emlrtRSI = { 173,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo be_emlrtRSI = { 174,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo ce_emlrtRSI = { 175,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo de_emlrtRSI = { 176,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo ee_emlrtRSI = { 177,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo fe_emlrtRSI = { 178,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo ge_emlrtRSI = { 181,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo he_emlrtRSI = { 182,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo ie_emlrtRSI = { 183,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo je_emlrtRSI = { 184,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo ke_emlrtRSI = { 185,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo le_emlrtRSI = { 186,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo me_emlrtRSI = { 187,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo ne_emlrtRSI = { 188,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo oe_emlrtRSI = { 189,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo pe_emlrtRSI = { 190,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo qe_emlrtRSI = { 192,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo re_emlrtRSI = { 193,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo se_emlrtRSI = { 194,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo te_emlrtRSI = { 195,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo ue_emlrtRSI = { 196,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo ve_emlrtRSI = { 197,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo we_emlrtRSI = { 198,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo xe_emlrtRSI = { 199,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo ye_emlrtRSI = { 200,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo af_emlrtRSI = { 201,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo bf_emlrtRSI = { 203,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo cf_emlrtRSI = { 204,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo df_emlrtRSI = { 205,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo ef_emlrtRSI = { 206,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo ff_emlrtRSI = { 207,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo gf_emlrtRSI = { 208,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo hf_emlrtRSI = { 209,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo if_emlrtRSI = { 210,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo jf_emlrtRSI = { 211,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo kf_emlrtRSI = { 212,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo lf_emlrtRSI = { 214,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo mf_emlrtRSI = { 215,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo nf_emlrtRSI = { 216,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo of_emlrtRSI = { 217,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo pf_emlrtRSI = { 218,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo qf_emlrtRSI = { 219,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo rf_emlrtRSI = { 220,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo sf_emlrtRSI = { 221,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo tf_emlrtRSI = { 222,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo uf_emlrtRSI = { 223,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo vf_emlrtRSI = { 225,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo wf_emlrtRSI = { 226,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo xf_emlrtRSI = { 227,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo yf_emlrtRSI = { 228,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo ag_emlrtRSI = { 229,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo bg_emlrtRSI = { 230,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo cg_emlrtRSI = { 231,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo dg_emlrtRSI = { 232,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo eg_emlrtRSI = { 233,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo fg_emlrtRSI = { 234,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo gg_emlrtRSI = { 237,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo hg_emlrtRSI = { 238,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo ig_emlrtRSI = { 239,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo jg_emlrtRSI = { 240,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo kg_emlrtRSI = { 241,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo lg_emlrtRSI = { 242,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo mg_emlrtRSI = { 243,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo ng_emlrtRSI = { 244,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo og_emlrtRSI = { 245,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo pg_emlrtRSI = { 246,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo qg_emlrtRSI = { 248,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo rg_emlrtRSI = { 249,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo sg_emlrtRSI = { 250,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo tg_emlrtRSI = { 251,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo ug_emlrtRSI = { 252,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo vg_emlrtRSI = { 253,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo wg_emlrtRSI = { 254,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo xg_emlrtRSI = { 255,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo yg_emlrtRSI = { 256,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo ah_emlrtRSI = { 257,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo bh_emlrtRSI = { 259,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo ch_emlrtRSI = { 260,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo dh_emlrtRSI = { 261,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo eh_emlrtRSI = { 262,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo fh_emlrtRSI = { 263,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo gh_emlrtRSI = { 264,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo hh_emlrtRSI = { 265,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo ih_emlrtRSI = { 266,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo jh_emlrtRSI = { 267,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo kh_emlrtRSI = { 268,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo lh_emlrtRSI = { 270,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo mh_emlrtRSI = { 271,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo nh_emlrtRSI = { 272,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo oh_emlrtRSI = { 273,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo ph_emlrtRSI = { 274,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo qh_emlrtRSI = { 275,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo rh_emlrtRSI = { 276,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo sh_emlrtRSI = { 277,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo th_emlrtRSI = { 278,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo uh_emlrtRSI = { 279,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo vh_emlrtRSI = { 281,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo wh_emlrtRSI = { 282,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo xh_emlrtRSI = { 283,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo yh_emlrtRSI = { 284,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo ai_emlrtRSI = { 285,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo bi_emlrtRSI = { 286,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo ci_emlrtRSI = { 287,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo di_emlrtRSI = { 288,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo ei_emlrtRSI = { 289,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo fi_emlrtRSI = { 290,       /* lineNo */
  "coef_rho",                          /* fcnName */
  "/home/xiaolei/Documents/ImageStress/coef_rho.m"/* pathName */
};

emlrtRSInfo ki_emlrtRSI = { 119,       /* lineNo */
  "lusolve",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

emlrtRSInfo li_emlrtRSI = { 121,       /* lineNo */
  "lusolve",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

emlrtRSInfo mi_emlrtRSI = { 7,         /* lineNo */
  "int",                               /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/int.m"/* pathName */
};

emlrtRSInfo ui_emlrtRSI = { 8,         /* lineNo */
  "majority",                          /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/majority.m"/* pathName */
};

emlrtRSInfo vi_emlrtRSI = { 31,        /* lineNo */
  "infocheck",                         /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/infocheck.m"/* pathName */
};

emlrtRSInfo bj_emlrtRSI = { 76,        /* lineNo */
  "xtrsm",                             /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+blas/xtrsm.m"/* pathName */
};

emlrtRSInfo cj_emlrtRSI = { 77,        /* lineNo */
  "xtrsm",                             /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+blas/xtrsm.m"/* pathName */
};

emlrtRSInfo dj_emlrtRSI = { 52,        /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

emlrtRSInfo ej_emlrtRSI = { 114,       /* lineNo */
  "mtimes",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+blas/mtimes.m"/* pathName */
};

emlrtRSInfo fj_emlrtRSI = { 118,       /* lineNo */
  "mtimes",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+blas/mtimes.m"/* pathName */
};

emlrtRSInfo hj_emlrtRSI = { 3,         /* lineNo */
  "P_R",                               /* fcnName */
  "/home/xiaolei/Documents/ImageStress/P_R.m"/* pathName */
};

emlrtRSInfo ij_emlrtRSI = { 40,        /* lineNo */
  "mpower",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/mpower.m"/* pathName */
};

emlrtRSInfo jj_emlrtRSI = { 49,        /* lineNo */
  "power",                             /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/power.m"/* pathName */
};

emlrtRSInfo kj_emlrtRSI = { 3,         /* lineNo */
  "Q_R",                               /* fcnName */
  "/home/xiaolei/Documents/ImageStress/Q_R.m"/* pathName */
};

/* End of code generation (coef_rho_data.c) */
