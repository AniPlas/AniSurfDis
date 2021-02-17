/*
 * sigma_homo.c
 *
 * Code generation for function 'sigma_homo'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "stress.h"
#include "sigma_homo.h"
#include "stress_data.h"

/* Variable Definitions */
static emlrtRSInfo jac_emlrtRSI = { 7, /* lineNo */
  "sigma_homo",                        /* fcnName */
  "/home/xiaolei/Documents/ImageStress/sigma_homo.m"/* pathName */
};

static emlrtRSInfo kac_emlrtRSI = { 11,/* lineNo */
  "sigma_homo",                        /* fcnName */
  "/home/xiaolei/Documents/ImageStress/sigma_homo.m"/* pathName */
};

static emlrtRSInfo lac_emlrtRSI = { 15,/* lineNo */
  "sigma_homo",                        /* fcnName */
  "/home/xiaolei/Documents/ImageStress/sigma_homo.m"/* pathName */
};

static emlrtRSInfo mac_emlrtRSI = { 19,/* lineNo */
  "sigma_homo",                        /* fcnName */
  "/home/xiaolei/Documents/ImageStress/sigma_homo.m"/* pathName */
};

static emlrtRSInfo nac_emlrtRSI = { 23,/* lineNo */
  "sigma_homo",                        /* fcnName */
  "/home/xiaolei/Documents/ImageStress/sigma_homo.m"/* pathName */
};

static emlrtRTEInfo qg_emlrtRTEI = { 5,/* lineNo */
  7,                                   /* colNo */
  "f0_sigma",                          /* fName */
  "/home/xiaolei/Documents/ImageStress/f0_sigma.m"/* pName */
};

static emlrtBCInfo rpl_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  6,                                   /* lineNo */
  37,                                  /* colNo */
  "S",                                 /* aName */
  "f0_sigma",                          /* fName */
  "/home/xiaolei/Documents/ImageStress/f0_sigma.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void sigma_homo(const emlrtStack *sp, const creal_T Z[3], const
                emxArray_cell_wrap_0 *S, const creal_T Q0[3], real_T N_pileup,
                real_T x2, const creal_T M_P_I[9], const creal_T A_I[9], const
                creal_T M_P_II[9], const creal_T A_II[9], const creal_T M_P_GB[9],
                const creal_T A_GB[9], const creal_T M_P_SU[9], const creal_T
                A_SU[9], const creal_T M_P_SL[9], const creal_T A_SL[9], real_T
                x22, real_T x23, real_T x24, real_T x25, real_T x26, real_T Ug[6])
{
  real_T u_g[9];
  creal_T sigma_total[3];
  int32_T i96;
  int32_T i;
  int32_T i97;
  creal_T d[9];
  real_T br;
  real_T bi;
  real_T re;
  real_T brm;
  real_T im;
  creal_T b_M_P_SL[3];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  memset(&u_g[0], 0, 9U * sizeof(real_T));

  /*  Eqs. 5, 10, 11 in Chen et al., IJSS,2019        */
  if (x2 >= x22) {
    st.site = &jac_emlrtRSI;

    /*  Eqs. 10 and 11 in Chen et al., IJSS,2019 */
    /*  The derivation of f0 with x1 */
    sigma_total[0].re = 0.0;
    sigma_total[0].im = 0.0;
    sigma_total[1].re = 0.0;
    sigma_total[1].im = 0.0;
    sigma_total[2].re = 0.0;
    sigma_total[2].im = 0.0;
    i96 = (int32_T)N_pileup;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, N_pileup, mxDOUBLE_CLASS, (int32_T)
      N_pileup, &qg_emlrtRTEI, &st);
    for (i = 0; i < i96; i++) {
      i97 = S->size[1] - 1;
      if (i > i97) {
        emlrtDynamicBoundsCheckR2012b(i, 0, i97, &rpl_emlrtBCI, &st);
      }

      br = Z[0].re - S->data[i].f1[0].re;
      bi = Z[0].im - S->data[i].f1[0].im;
      if (bi == 0.0) {
        re = 1.0 / br;
        im = 0.0;
      } else if (br == 0.0) {
        re = 0.0;
        im = -(1.0 / bi);
      } else {
        brm = muDoubleScalarAbs(br);
        im = muDoubleScalarAbs(bi);
        if (brm > im) {
          brm = bi / br;
          im = br + brm * bi;
          re = (1.0 + brm * 0.0) / im;
          im = (0.0 - brm) / im;
        } else if (im == brm) {
          if (br > 0.0) {
            br = 0.5;
          } else {
            br = -0.5;
          }

          if (bi > 0.0) {
            im = 0.5;
          } else {
            im = -0.5;
          }

          re = (br + 0.0 * im) / brm;
          im = (0.0 * br - im) / brm;
        } else {
          brm = br / bi;
          im = bi + brm * br;
          re = brm / im;
          im = (brm * 0.0 - 1.0) / im;
        }
      }

      sigma_total[0].re += re;
      sigma_total[0].im += im;
      br = Z[1].re - S->data[i].f1[1].re;
      bi = Z[1].im - S->data[i].f1[1].im;
      if (bi == 0.0) {
        re = 1.0 / br;
        im = 0.0;
      } else if (br == 0.0) {
        re = 0.0;
        im = -(1.0 / bi);
      } else {
        brm = muDoubleScalarAbs(br);
        im = muDoubleScalarAbs(bi);
        if (brm > im) {
          brm = bi / br;
          im = br + brm * bi;
          re = (1.0 + brm * 0.0) / im;
          im = (0.0 - brm) / im;
        } else if (im == brm) {
          if (br > 0.0) {
            br = 0.5;
          } else {
            br = -0.5;
          }

          if (bi > 0.0) {
            im = 0.5;
          } else {
            im = -0.5;
          }

          re = (br + 0.0 * im) / brm;
          im = (0.0 * br - im) / brm;
        } else {
          brm = br / bi;
          im = bi + brm * br;
          re = brm / im;
          im = (brm * 0.0 - 1.0) / im;
        }
      }

      sigma_total[1].re += re;
      sigma_total[1].im += im;
      br = Z[2].re - S->data[i].f1[2].re;
      bi = Z[2].im - S->data[i].f1[2].im;
      if (bi == 0.0) {
        re = 1.0 / br;
        im = 0.0;
      } else if (br == 0.0) {
        re = 0.0;
        im = -(1.0 / bi);
      } else {
        brm = muDoubleScalarAbs(br);
        im = muDoubleScalarAbs(bi);
        if (brm > im) {
          brm = bi / br;
          im = br + brm * bi;
          re = (1.0 + brm * 0.0) / im;
          im = (0.0 - brm) / im;
        } else if (im == brm) {
          if (br > 0.0) {
            br = 0.5;
          } else {
            br = -0.5;
          }

          if (bi > 0.0) {
            im = 0.5;
          } else {
            im = -0.5;
          }

          re = (br + 0.0 * im) / brm;
          im = (0.0 * br - im) / brm;
        } else {
          brm = br / bi;
          im = bi + brm * br;
          re = brm / im;
          im = (brm * 0.0 - 1.0) / im;
        }
      }

      sigma_total[2].re += re;
      sigma_total[2].im += im;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }

    for (i96 = 0; i96 < 9; i96++) {
      d[i96].re = 0.0;
      d[i96].im = 0.0;
    }

    d[0] = sigma_total[0];
    d[4] = sigma_total[1];
    d[8] = sigma_total[2];
    for (i96 = 0; i96 < 3; i96++) {
      sigma_total[i96].re = 0.0;
      sigma_total[i96].im = 0.0;
      sigma_total[i96].re = ((d[i96].re * Q0[0].re - d[i96].im * Q0[0].im) +
        (d[i96 + 3].re * Q0[1].re - d[i96 + 3].im * Q0[1].im)) + (d[i96 + 6].re *
        Q0[2].re - d[i96 + 6].im * Q0[2].im);
      sigma_total[i96].im = ((d[i96].re * Q0[0].im + d[i96].im * Q0[0].re) +
        (d[i96 + 3].re * Q0[1].im + d[i96 + 3].im * Q0[1].re)) + (d[i96 + 6].re *
        Q0[2].im + d[i96 + 6].im * Q0[2].re);
    }

    for (i96 = 0; i96 < 3; i96++) {
      u_g[i96] = ((A_SU[i96].re * sigma_total[0].re - A_SU[i96].im *
                   sigma_total[0].im) + (A_SU[i96 + 3].re * sigma_total[1].re -
        A_SU[i96 + 3].im * sigma_total[1].im)) + (A_SU[i96 + 6].re *
        sigma_total[2].re - A_SU[i96 + 6].im * sigma_total[2].im);
      b_M_P_SL[i96].re = 0.0;
      b_M_P_SL[i96].im = 0.0;
      b_M_P_SL[i96].re = ((M_P_SU[i96].re * sigma_total[0].re - M_P_SU[i96].im *
                           sigma_total[0].im) + (M_P_SU[i96 + 3].re *
        sigma_total[1].re - M_P_SU[i96 + 3].im * sigma_total[1].im)) +
        (M_P_SU[i96 + 6].re * sigma_total[2].re - M_P_SU[i96 + 6].im *
         sigma_total[2].im);
      b_M_P_SL[i96].im = ((M_P_SU[i96].re * sigma_total[0].im + M_P_SU[i96].im *
                           sigma_total[0].re) + (M_P_SU[i96 + 3].re *
        sigma_total[1].im + M_P_SU[i96 + 3].im * sigma_total[1].re)) +
        (M_P_SU[i96 + 6].re * sigma_total[2].im + M_P_SU[i96 + 6].im *
         sigma_total[2].re);
    }

    for (i96 = 0; i96 < 3; i96++) {
      u_g[3 + i96] = ((A_SU[i96].re * b_M_P_SL[0].re - A_SU[i96].im * b_M_P_SL[0]
                       .im) + (A_SU[i96 + 3].re * b_M_P_SL[1].re - A_SU[i96 + 3]
        .im * b_M_P_SL[1].im)) + (A_SU[i96 + 6].re * b_M_P_SL[2].re - A_SU[i96 +
        6].im * b_M_P_SL[2].im);
    }
  } else if (x2 > x23) {
    st.site = &kac_emlrtRSI;

    /*  Eqs. 10 and 11 in Chen et al., IJSS,2019 */
    /*  The derivation of f0 with x1 */
    sigma_total[0].re = 0.0;
    sigma_total[0].im = 0.0;
    sigma_total[1].re = 0.0;
    sigma_total[1].im = 0.0;
    sigma_total[2].re = 0.0;
    sigma_total[2].im = 0.0;
    i96 = (int32_T)N_pileup;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, N_pileup, mxDOUBLE_CLASS, (int32_T)
      N_pileup, &qg_emlrtRTEI, &st);
    for (i = 0; i < i96; i++) {
      i97 = S->size[1] - 1;
      if (i > i97) {
        emlrtDynamicBoundsCheckR2012b(i, 0, i97, &rpl_emlrtBCI, &st);
      }

      br = Z[0].re - S->data[i].f1[0].re;
      bi = Z[0].im - S->data[i].f1[0].im;
      if (bi == 0.0) {
        re = 1.0 / br;
        im = 0.0;
      } else if (br == 0.0) {
        re = 0.0;
        im = -(1.0 / bi);
      } else {
        brm = muDoubleScalarAbs(br);
        im = muDoubleScalarAbs(bi);
        if (brm > im) {
          brm = bi / br;
          im = br + brm * bi;
          re = (1.0 + brm * 0.0) / im;
          im = (0.0 - brm) / im;
        } else if (im == brm) {
          if (br > 0.0) {
            br = 0.5;
          } else {
            br = -0.5;
          }

          if (bi > 0.0) {
            im = 0.5;
          } else {
            im = -0.5;
          }

          re = (br + 0.0 * im) / brm;
          im = (0.0 * br - im) / brm;
        } else {
          brm = br / bi;
          im = bi + brm * br;
          re = brm / im;
          im = (brm * 0.0 - 1.0) / im;
        }
      }

      sigma_total[0].re += re;
      sigma_total[0].im += im;
      br = Z[1].re - S->data[i].f1[1].re;
      bi = Z[1].im - S->data[i].f1[1].im;
      if (bi == 0.0) {
        re = 1.0 / br;
        im = 0.0;
      } else if (br == 0.0) {
        re = 0.0;
        im = -(1.0 / bi);
      } else {
        brm = muDoubleScalarAbs(br);
        im = muDoubleScalarAbs(bi);
        if (brm > im) {
          brm = bi / br;
          im = br + brm * bi;
          re = (1.0 + brm * 0.0) / im;
          im = (0.0 - brm) / im;
        } else if (im == brm) {
          if (br > 0.0) {
            br = 0.5;
          } else {
            br = -0.5;
          }

          if (bi > 0.0) {
            im = 0.5;
          } else {
            im = -0.5;
          }

          re = (br + 0.0 * im) / brm;
          im = (0.0 * br - im) / brm;
        } else {
          brm = br / bi;
          im = bi + brm * br;
          re = brm / im;
          im = (brm * 0.0 - 1.0) / im;
        }
      }

      sigma_total[1].re += re;
      sigma_total[1].im += im;
      br = Z[2].re - S->data[i].f1[2].re;
      bi = Z[2].im - S->data[i].f1[2].im;
      if (bi == 0.0) {
        re = 1.0 / br;
        im = 0.0;
      } else if (br == 0.0) {
        re = 0.0;
        im = -(1.0 / bi);
      } else {
        brm = muDoubleScalarAbs(br);
        im = muDoubleScalarAbs(bi);
        if (brm > im) {
          brm = bi / br;
          im = br + brm * bi;
          re = (1.0 + brm * 0.0) / im;
          im = (0.0 - brm) / im;
        } else if (im == brm) {
          if (br > 0.0) {
            br = 0.5;
          } else {
            br = -0.5;
          }

          if (bi > 0.0) {
            im = 0.5;
          } else {
            im = -0.5;
          }

          re = (br + 0.0 * im) / brm;
          im = (0.0 * br - im) / brm;
        } else {
          brm = br / bi;
          im = bi + brm * br;
          re = brm / im;
          im = (brm * 0.0 - 1.0) / im;
        }
      }

      sigma_total[2].re += re;
      sigma_total[2].im += im;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }

    for (i96 = 0; i96 < 9; i96++) {
      d[i96].re = 0.0;
      d[i96].im = 0.0;
    }

    d[0] = sigma_total[0];
    d[4] = sigma_total[1];
    d[8] = sigma_total[2];
    for (i96 = 0; i96 < 3; i96++) {
      sigma_total[i96].re = 0.0;
      sigma_total[i96].im = 0.0;
      sigma_total[i96].re = ((d[i96].re * Q0[0].re - d[i96].im * Q0[0].im) +
        (d[i96 + 3].re * Q0[1].re - d[i96 + 3].im * Q0[1].im)) + (d[i96 + 6].re *
        Q0[2].re - d[i96 + 6].im * Q0[2].im);
      sigma_total[i96].im = ((d[i96].re * Q0[0].im + d[i96].im * Q0[0].re) +
        (d[i96 + 3].re * Q0[1].im + d[i96 + 3].im * Q0[1].re)) + (d[i96 + 6].re *
        Q0[2].im + d[i96 + 6].im * Q0[2].re);
    }

    for (i96 = 0; i96 < 3; i96++) {
      u_g[i96] = ((A_I[i96].re * sigma_total[0].re - A_I[i96].im * sigma_total[0]
                   .im) + (A_I[i96 + 3].re * sigma_total[1].re - A_I[i96 + 3].im
                           * sigma_total[1].im)) + (A_I[i96 + 6].re *
        sigma_total[2].re - A_I[i96 + 6].im * sigma_total[2].im);
      b_M_P_SL[i96].re = 0.0;
      b_M_P_SL[i96].im = 0.0;
      b_M_P_SL[i96].re = ((M_P_I[i96].re * sigma_total[0].re - M_P_I[i96].im *
                           sigma_total[0].im) + (M_P_I[i96 + 3].re *
        sigma_total[1].re - M_P_I[i96 + 3].im * sigma_total[1].im)) + (M_P_I[i96
        + 6].re * sigma_total[2].re - M_P_I[i96 + 6].im * sigma_total[2].im);
      b_M_P_SL[i96].im = ((M_P_I[i96].re * sigma_total[0].im + M_P_I[i96].im *
                           sigma_total[0].re) + (M_P_I[i96 + 3].re *
        sigma_total[1].im + M_P_I[i96 + 3].im * sigma_total[1].re)) + (M_P_I[i96
        + 6].re * sigma_total[2].im + M_P_I[i96 + 6].im * sigma_total[2].re);
    }

    for (i96 = 0; i96 < 3; i96++) {
      u_g[3 + i96] = ((A_I[i96].re * b_M_P_SL[0].re - A_I[i96].im * b_M_P_SL[0].
                       im) + (A_I[i96 + 3].re * b_M_P_SL[1].re - A_I[i96 + 3].im
        * b_M_P_SL[1].im)) + (A_I[i96 + 6].re * b_M_P_SL[2].re - A_I[i96 + 6].im
        * b_M_P_SL[2].im);
    }
  } else if (x2 >= x24) {
    st.site = &lac_emlrtRSI;

    /*  Eqs. 10 and 11 in Chen et al., IJSS,2019 */
    /*  The derivation of f0 with x1 */
    sigma_total[0].re = 0.0;
    sigma_total[0].im = 0.0;
    sigma_total[1].re = 0.0;
    sigma_total[1].im = 0.0;
    sigma_total[2].re = 0.0;
    sigma_total[2].im = 0.0;
    i96 = (int32_T)N_pileup;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, N_pileup, mxDOUBLE_CLASS, (int32_T)
      N_pileup, &qg_emlrtRTEI, &st);
    for (i = 0; i < i96; i++) {
      i97 = S->size[1] - 1;
      if (i > i97) {
        emlrtDynamicBoundsCheckR2012b(i, 0, i97, &rpl_emlrtBCI, &st);
      }

      br = Z[0].re - S->data[i].f1[0].re;
      bi = Z[0].im - S->data[i].f1[0].im;
      if (bi == 0.0) {
        re = 1.0 / br;
        im = 0.0;
      } else if (br == 0.0) {
        re = 0.0;
        im = -(1.0 / bi);
      } else {
        brm = muDoubleScalarAbs(br);
        im = muDoubleScalarAbs(bi);
        if (brm > im) {
          brm = bi / br;
          im = br + brm * bi;
          re = (1.0 + brm * 0.0) / im;
          im = (0.0 - brm) / im;
        } else if (im == brm) {
          if (br > 0.0) {
            br = 0.5;
          } else {
            br = -0.5;
          }

          if (bi > 0.0) {
            im = 0.5;
          } else {
            im = -0.5;
          }

          re = (br + 0.0 * im) / brm;
          im = (0.0 * br - im) / brm;
        } else {
          brm = br / bi;
          im = bi + brm * br;
          re = brm / im;
          im = (brm * 0.0 - 1.0) / im;
        }
      }

      sigma_total[0].re += re;
      sigma_total[0].im += im;
      br = Z[1].re - S->data[i].f1[1].re;
      bi = Z[1].im - S->data[i].f1[1].im;
      if (bi == 0.0) {
        re = 1.0 / br;
        im = 0.0;
      } else if (br == 0.0) {
        re = 0.0;
        im = -(1.0 / bi);
      } else {
        brm = muDoubleScalarAbs(br);
        im = muDoubleScalarAbs(bi);
        if (brm > im) {
          brm = bi / br;
          im = br + brm * bi;
          re = (1.0 + brm * 0.0) / im;
          im = (0.0 - brm) / im;
        } else if (im == brm) {
          if (br > 0.0) {
            br = 0.5;
          } else {
            br = -0.5;
          }

          if (bi > 0.0) {
            im = 0.5;
          } else {
            im = -0.5;
          }

          re = (br + 0.0 * im) / brm;
          im = (0.0 * br - im) / brm;
        } else {
          brm = br / bi;
          im = bi + brm * br;
          re = brm / im;
          im = (brm * 0.0 - 1.0) / im;
        }
      }

      sigma_total[1].re += re;
      sigma_total[1].im += im;
      br = Z[2].re - S->data[i].f1[2].re;
      bi = Z[2].im - S->data[i].f1[2].im;
      if (bi == 0.0) {
        re = 1.0 / br;
        im = 0.0;
      } else if (br == 0.0) {
        re = 0.0;
        im = -(1.0 / bi);
      } else {
        brm = muDoubleScalarAbs(br);
        im = muDoubleScalarAbs(bi);
        if (brm > im) {
          brm = bi / br;
          im = br + brm * bi;
          re = (1.0 + brm * 0.0) / im;
          im = (0.0 - brm) / im;
        } else if (im == brm) {
          if (br > 0.0) {
            br = 0.5;
          } else {
            br = -0.5;
          }

          if (bi > 0.0) {
            im = 0.5;
          } else {
            im = -0.5;
          }

          re = (br + 0.0 * im) / brm;
          im = (0.0 * br - im) / brm;
        } else {
          brm = br / bi;
          im = bi + brm * br;
          re = brm / im;
          im = (brm * 0.0 - 1.0) / im;
        }
      }

      sigma_total[2].re += re;
      sigma_total[2].im += im;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }

    for (i96 = 0; i96 < 9; i96++) {
      d[i96].re = 0.0;
      d[i96].im = 0.0;
    }

    d[0] = sigma_total[0];
    d[4] = sigma_total[1];
    d[8] = sigma_total[2];
    for (i96 = 0; i96 < 3; i96++) {
      sigma_total[i96].re = 0.0;
      sigma_total[i96].im = 0.0;
      sigma_total[i96].re = ((d[i96].re * Q0[0].re - d[i96].im * Q0[0].im) +
        (d[i96 + 3].re * Q0[1].re - d[i96 + 3].im * Q0[1].im)) + (d[i96 + 6].re *
        Q0[2].re - d[i96 + 6].im * Q0[2].im);
      sigma_total[i96].im = ((d[i96].re * Q0[0].im + d[i96].im * Q0[0].re) +
        (d[i96 + 3].re * Q0[1].im + d[i96 + 3].im * Q0[1].re)) + (d[i96 + 6].re *
        Q0[2].im + d[i96 + 6].im * Q0[2].re);
    }

    for (i96 = 0; i96 < 3; i96++) {
      u_g[i96] = ((A_GB[i96].re * sigma_total[0].re - A_GB[i96].im *
                   sigma_total[0].im) + (A_GB[i96 + 3].re * sigma_total[1].re -
        A_GB[i96 + 3].im * sigma_total[1].im)) + (A_GB[i96 + 6].re *
        sigma_total[2].re - A_GB[i96 + 6].im * sigma_total[2].im);
      b_M_P_SL[i96].re = 0.0;
      b_M_P_SL[i96].im = 0.0;
      b_M_P_SL[i96].re = ((M_P_GB[i96].re * sigma_total[0].re - M_P_GB[i96].im *
                           sigma_total[0].im) + (M_P_GB[i96 + 3].re *
        sigma_total[1].re - M_P_GB[i96 + 3].im * sigma_total[1].im)) +
        (M_P_GB[i96 + 6].re * sigma_total[2].re - M_P_GB[i96 + 6].im *
         sigma_total[2].im);
      b_M_P_SL[i96].im = ((M_P_GB[i96].re * sigma_total[0].im + M_P_GB[i96].im *
                           sigma_total[0].re) + (M_P_GB[i96 + 3].re *
        sigma_total[1].im + M_P_GB[i96 + 3].im * sigma_total[1].re)) +
        (M_P_GB[i96 + 6].re * sigma_total[2].im + M_P_GB[i96 + 6].im *
         sigma_total[2].re);
    }

    for (i96 = 0; i96 < 3; i96++) {
      u_g[3 + i96] = ((A_GB[i96].re * b_M_P_SL[0].re - A_GB[i96].im * b_M_P_SL[0]
                       .im) + (A_GB[i96 + 3].re * b_M_P_SL[1].re - A_GB[i96 + 3]
        .im * b_M_P_SL[1].im)) + (A_GB[i96 + 6].re * b_M_P_SL[2].re - A_GB[i96 +
        6].im * b_M_P_SL[2].im);
    }
  } else if (x2 >= x25) {
    st.site = &mac_emlrtRSI;

    /*  Eqs. 10 and 11 in Chen et al., IJSS,2019 */
    /*  The derivation of f0 with x1 */
    sigma_total[0].re = 0.0;
    sigma_total[0].im = 0.0;
    sigma_total[1].re = 0.0;
    sigma_total[1].im = 0.0;
    sigma_total[2].re = 0.0;
    sigma_total[2].im = 0.0;
    i96 = (int32_T)N_pileup;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, N_pileup, mxDOUBLE_CLASS, (int32_T)
      N_pileup, &qg_emlrtRTEI, &st);
    for (i = 0; i < i96; i++) {
      i97 = S->size[1] - 1;
      if (i > i97) {
        emlrtDynamicBoundsCheckR2012b(i, 0, i97, &rpl_emlrtBCI, &st);
      }

      br = Z[0].re - S->data[i].f1[0].re;
      bi = Z[0].im - S->data[i].f1[0].im;
      if (bi == 0.0) {
        re = 1.0 / br;
        im = 0.0;
      } else if (br == 0.0) {
        re = 0.0;
        im = -(1.0 / bi);
      } else {
        brm = muDoubleScalarAbs(br);
        im = muDoubleScalarAbs(bi);
        if (brm > im) {
          brm = bi / br;
          im = br + brm * bi;
          re = (1.0 + brm * 0.0) / im;
          im = (0.0 - brm) / im;
        } else if (im == brm) {
          if (br > 0.0) {
            br = 0.5;
          } else {
            br = -0.5;
          }

          if (bi > 0.0) {
            im = 0.5;
          } else {
            im = -0.5;
          }

          re = (br + 0.0 * im) / brm;
          im = (0.0 * br - im) / brm;
        } else {
          brm = br / bi;
          im = bi + brm * br;
          re = brm / im;
          im = (brm * 0.0 - 1.0) / im;
        }
      }

      sigma_total[0].re += re;
      sigma_total[0].im += im;
      br = Z[1].re - S->data[i].f1[1].re;
      bi = Z[1].im - S->data[i].f1[1].im;
      if (bi == 0.0) {
        re = 1.0 / br;
        im = 0.0;
      } else if (br == 0.0) {
        re = 0.0;
        im = -(1.0 / bi);
      } else {
        brm = muDoubleScalarAbs(br);
        im = muDoubleScalarAbs(bi);
        if (brm > im) {
          brm = bi / br;
          im = br + brm * bi;
          re = (1.0 + brm * 0.0) / im;
          im = (0.0 - brm) / im;
        } else if (im == brm) {
          if (br > 0.0) {
            br = 0.5;
          } else {
            br = -0.5;
          }

          if (bi > 0.0) {
            im = 0.5;
          } else {
            im = -0.5;
          }

          re = (br + 0.0 * im) / brm;
          im = (0.0 * br - im) / brm;
        } else {
          brm = br / bi;
          im = bi + brm * br;
          re = brm / im;
          im = (brm * 0.0 - 1.0) / im;
        }
      }

      sigma_total[1].re += re;
      sigma_total[1].im += im;
      br = Z[2].re - S->data[i].f1[2].re;
      bi = Z[2].im - S->data[i].f1[2].im;
      if (bi == 0.0) {
        re = 1.0 / br;
        im = 0.0;
      } else if (br == 0.0) {
        re = 0.0;
        im = -(1.0 / bi);
      } else {
        brm = muDoubleScalarAbs(br);
        im = muDoubleScalarAbs(bi);
        if (brm > im) {
          brm = bi / br;
          im = br + brm * bi;
          re = (1.0 + brm * 0.0) / im;
          im = (0.0 - brm) / im;
        } else if (im == brm) {
          if (br > 0.0) {
            br = 0.5;
          } else {
            br = -0.5;
          }

          if (bi > 0.0) {
            im = 0.5;
          } else {
            im = -0.5;
          }

          re = (br + 0.0 * im) / brm;
          im = (0.0 * br - im) / brm;
        } else {
          brm = br / bi;
          im = bi + brm * br;
          re = brm / im;
          im = (brm * 0.0 - 1.0) / im;
        }
      }

      sigma_total[2].re += re;
      sigma_total[2].im += im;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }

    for (i96 = 0; i96 < 9; i96++) {
      d[i96].re = 0.0;
      d[i96].im = 0.0;
    }

    d[0] = sigma_total[0];
    d[4] = sigma_total[1];
    d[8] = sigma_total[2];
    for (i96 = 0; i96 < 3; i96++) {
      sigma_total[i96].re = 0.0;
      sigma_total[i96].im = 0.0;
      sigma_total[i96].re = ((d[i96].re * Q0[0].re - d[i96].im * Q0[0].im) +
        (d[i96 + 3].re * Q0[1].re - d[i96 + 3].im * Q0[1].im)) + (d[i96 + 6].re *
        Q0[2].re - d[i96 + 6].im * Q0[2].im);
      sigma_total[i96].im = ((d[i96].re * Q0[0].im + d[i96].im * Q0[0].re) +
        (d[i96 + 3].re * Q0[1].im + d[i96 + 3].im * Q0[1].re)) + (d[i96 + 6].re *
        Q0[2].im + d[i96 + 6].im * Q0[2].re);
    }

    for (i96 = 0; i96 < 3; i96++) {
      u_g[i96] = ((A_II[i96].re * sigma_total[0].re - A_II[i96].im *
                   sigma_total[0].im) + (A_II[i96 + 3].re * sigma_total[1].re -
        A_II[i96 + 3].im * sigma_total[1].im)) + (A_II[i96 + 6].re *
        sigma_total[2].re - A_II[i96 + 6].im * sigma_total[2].im);
      b_M_P_SL[i96].re = 0.0;
      b_M_P_SL[i96].im = 0.0;
      b_M_P_SL[i96].re = ((M_P_II[i96].re * sigma_total[0].re - M_P_II[i96].im *
                           sigma_total[0].im) + (M_P_II[i96 + 3].re *
        sigma_total[1].re - M_P_II[i96 + 3].im * sigma_total[1].im)) +
        (M_P_II[i96 + 6].re * sigma_total[2].re - M_P_II[i96 + 6].im *
         sigma_total[2].im);
      b_M_P_SL[i96].im = ((M_P_II[i96].re * sigma_total[0].im + M_P_II[i96].im *
                           sigma_total[0].re) + (M_P_II[i96 + 3].re *
        sigma_total[1].im + M_P_II[i96 + 3].im * sigma_total[1].re)) +
        (M_P_II[i96 + 6].re * sigma_total[2].im + M_P_II[i96 + 6].im *
         sigma_total[2].re);
    }

    for (i96 = 0; i96 < 3; i96++) {
      u_g[3 + i96] = ((A_II[i96].re * b_M_P_SL[0].re - A_II[i96].im * b_M_P_SL[0]
                       .im) + (A_II[i96 + 3].re * b_M_P_SL[1].re - A_II[i96 + 3]
        .im * b_M_P_SL[1].im)) + (A_II[i96 + 6].re * b_M_P_SL[2].re - A_II[i96 +
        6].im * b_M_P_SL[2].im);
    }
  } else {
    if (x2 >= x26) {
      st.site = &nac_emlrtRSI;

      /*  Eqs. 10 and 11 in Chen et al., IJSS,2019 */
      /*  The derivation of f0 with x1 */
      sigma_total[0].re = 0.0;
      sigma_total[0].im = 0.0;
      sigma_total[1].re = 0.0;
      sigma_total[1].im = 0.0;
      sigma_total[2].re = 0.0;
      sigma_total[2].im = 0.0;
      i96 = (int32_T)N_pileup;
      emlrtForLoopVectorCheckR2012b(1.0, 1.0, N_pileup, mxDOUBLE_CLASS, (int32_T)
        N_pileup, &qg_emlrtRTEI, &st);
      for (i = 0; i < i96; i++) {
        i97 = S->size[1] - 1;
        if (i > i97) {
          emlrtDynamicBoundsCheckR2012b(i, 0, i97, &rpl_emlrtBCI, &st);
        }

        br = Z[0].re - S->data[i].f1[0].re;
        bi = Z[0].im - S->data[i].f1[0].im;
        if (bi == 0.0) {
          re = 1.0 / br;
          im = 0.0;
        } else if (br == 0.0) {
          re = 0.0;
          im = -(1.0 / bi);
        } else {
          brm = muDoubleScalarAbs(br);
          im = muDoubleScalarAbs(bi);
          if (brm > im) {
            brm = bi / br;
            im = br + brm * bi;
            re = (1.0 + brm * 0.0) / im;
            im = (0.0 - brm) / im;
          } else if (im == brm) {
            if (br > 0.0) {
              br = 0.5;
            } else {
              br = -0.5;
            }

            if (bi > 0.0) {
              im = 0.5;
            } else {
              im = -0.5;
            }

            re = (br + 0.0 * im) / brm;
            im = (0.0 * br - im) / brm;
          } else {
            brm = br / bi;
            im = bi + brm * br;
            re = brm / im;
            im = (brm * 0.0 - 1.0) / im;
          }
        }

        sigma_total[0].re += re;
        sigma_total[0].im += im;
        br = Z[1].re - S->data[i].f1[1].re;
        bi = Z[1].im - S->data[i].f1[1].im;
        if (bi == 0.0) {
          re = 1.0 / br;
          im = 0.0;
        } else if (br == 0.0) {
          re = 0.0;
          im = -(1.0 / bi);
        } else {
          brm = muDoubleScalarAbs(br);
          im = muDoubleScalarAbs(bi);
          if (brm > im) {
            brm = bi / br;
            im = br + brm * bi;
            re = (1.0 + brm * 0.0) / im;
            im = (0.0 - brm) / im;
          } else if (im == brm) {
            if (br > 0.0) {
              br = 0.5;
            } else {
              br = -0.5;
            }

            if (bi > 0.0) {
              im = 0.5;
            } else {
              im = -0.5;
            }

            re = (br + 0.0 * im) / brm;
            im = (0.0 * br - im) / brm;
          } else {
            brm = br / bi;
            im = bi + brm * br;
            re = brm / im;
            im = (brm * 0.0 - 1.0) / im;
          }
        }

        sigma_total[1].re += re;
        sigma_total[1].im += im;
        br = Z[2].re - S->data[i].f1[2].re;
        bi = Z[2].im - S->data[i].f1[2].im;
        if (bi == 0.0) {
          re = 1.0 / br;
          im = 0.0;
        } else if (br == 0.0) {
          re = 0.0;
          im = -(1.0 / bi);
        } else {
          brm = muDoubleScalarAbs(br);
          im = muDoubleScalarAbs(bi);
          if (brm > im) {
            brm = bi / br;
            im = br + brm * bi;
            re = (1.0 + brm * 0.0) / im;
            im = (0.0 - brm) / im;
          } else if (im == brm) {
            if (br > 0.0) {
              br = 0.5;
            } else {
              br = -0.5;
            }

            if (bi > 0.0) {
              im = 0.5;
            } else {
              im = -0.5;
            }

            re = (br + 0.0 * im) / brm;
            im = (0.0 * br - im) / brm;
          } else {
            brm = br / bi;
            im = bi + brm * br;
            re = brm / im;
            im = (brm * 0.0 - 1.0) / im;
          }
        }

        sigma_total[2].re += re;
        sigma_total[2].im += im;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }

      for (i96 = 0; i96 < 9; i96++) {
        d[i96].re = 0.0;
        d[i96].im = 0.0;
      }

      d[0] = sigma_total[0];
      d[4] = sigma_total[1];
      d[8] = sigma_total[2];
      for (i96 = 0; i96 < 3; i96++) {
        sigma_total[i96].re = 0.0;
        sigma_total[i96].im = 0.0;
        sigma_total[i96].re = ((d[i96].re * Q0[0].re - d[i96].im * Q0[0].im) +
          (d[i96 + 3].re * Q0[1].re - d[i96 + 3].im * Q0[1].im)) + (d[i96 + 6].
          re * Q0[2].re - d[i96 + 6].im * Q0[2].im);
        sigma_total[i96].im = ((d[i96].re * Q0[0].im + d[i96].im * Q0[0].re) +
          (d[i96 + 3].re * Q0[1].im + d[i96 + 3].im * Q0[1].re)) + (d[i96 + 6].
          re * Q0[2].im + d[i96 + 6].im * Q0[2].re);
      }

      for (i96 = 0; i96 < 3; i96++) {
        u_g[i96] = ((A_SL[i96].re * sigma_total[0].re - A_SL[i96].im *
                     sigma_total[0].im) + (A_SL[i96 + 3].re * sigma_total[1].re
          - A_SL[i96 + 3].im * sigma_total[1].im)) + (A_SL[i96 + 6].re *
          sigma_total[2].re - A_SL[i96 + 6].im * sigma_total[2].im);
        b_M_P_SL[i96].re = 0.0;
        b_M_P_SL[i96].im = 0.0;
        b_M_P_SL[i96].re = ((M_P_SL[i96].re * sigma_total[0].re - M_P_SL[i96].im
                             * sigma_total[0].im) + (M_P_SL[i96 + 3].re *
          sigma_total[1].re - M_P_SL[i96 + 3].im * sigma_total[1].im)) +
          (M_P_SL[i96 + 6].re * sigma_total[2].re - M_P_SL[i96 + 6].im *
           sigma_total[2].im);
        b_M_P_SL[i96].im = ((M_P_SL[i96].re * sigma_total[0].im + M_P_SL[i96].im
                             * sigma_total[0].re) + (M_P_SL[i96 + 3].re *
          sigma_total[1].im + M_P_SL[i96 + 3].im * sigma_total[1].re)) +
          (M_P_SL[i96 + 6].re * sigma_total[2].im + M_P_SL[i96 + 6].im *
           sigma_total[2].re);
      }

      for (i96 = 0; i96 < 3; i96++) {
        u_g[3 + i96] = ((A_SL[i96].re * b_M_P_SL[0].re - A_SL[i96].im *
                         b_M_P_SL[0].im) + (A_SL[i96 + 3].re * b_M_P_SL[1].re -
          A_SL[i96 + 3].im * b_M_P_SL[1].im)) + (A_SL[i96 + 6].re * b_M_P_SL[2].
          re - A_SL[i96 + 6].im * b_M_P_SL[2].im);
      }
    }
  }

  Ug[0] = 2.0 * u_g[0];
  Ug[3] = 2.0 * u_g[3];
  Ug[1] = 2.0 * u_g[1];
  Ug[4] = 2.0 * u_g[4];
  Ug[2] = 2.0 * u_g[2];
  Ug[5] = 2.0 * u_g[5];
}

/* End of code generation (sigma_homo.c) */
