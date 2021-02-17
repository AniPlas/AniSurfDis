/*
 * f0_sigma.c
 *
 * Code generation for function 'f0_sigma'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "stress.h"
#include "f0_sigma.h"
#include "stress_data.h"

/* Variable Definitions */
static emlrtRTEInfo sh_emlrtRTEI = { 5,/* lineNo */
  7,                                   /* colNo */
  "f0_sigma",                          /* fName */
  "/Users/macbook/SynologyDrive/CHEN_Xiaolei/thesis/Paper/IJP_Template/MatlabCode/ImageStress/f0_sigma.m"/* pName */
};

static emlrtBCInfo upl_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  6,                                   /* lineNo */
  37,                                  /* colNo */
  "S",                                 /* aName */
  "f0_sigma",                          /* fName */
  "/Users/macbook/SynologyDrive/CHEN_Xiaolei/thesis/Paper/IJP_Template/MatlabCode/ImageStress/f0_sigma.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void f0_sigma(const emlrtStack *sp, const creal_T Z[3], const
              emxArray_cell_wrap_0 *S, const creal_T Q0[3], real_T N_singularity,
              creal_T b_f0_sigma[3])
{
  int32_T i;
  creal_T sigma_total[3];
  int32_T i44;
  creal_T d[9];
  real_T br;
  real_T bi;
  real_T re;
  real_T brm;
  real_T im;

  /*  Eqs. 10 and 11 in Chen et al., IJSS,2019 */
  /*  The derivation of f0 with x1 */
  for (i = 0; i < 3; i++) {
    sigma_total[i].re = 0.0;
    sigma_total[i].im = 0.0;
  }

  emlrtForLoopVectorCheckR2012b(1.0, 1.0, N_singularity, mxDOUBLE_CLASS,
    (int32_T)N_singularity, &sh_emlrtRTEI, sp);
  i = 0;
  while (i <= (int32_T)N_singularity - 1) {
    i44 = S->size[1] - 1;
    if (!((i >= 0) && (i <= i44))) {
      emlrtDynamicBoundsCheckR2012b(i, 0, i44, &upl_emlrtBCI, sp);
    }

    for (i44 = 0; i44 < 3; i44++) {
      br = Z[i44].re - S->data[S->size[0] * i].f1[i44].re;
      bi = Z[i44].im - S->data[S->size[0] * i].f1[i44].im;
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

      sigma_total[i44].re += re;
      sigma_total[i44].im += im;
    }

    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  for (i44 = 0; i44 < 9; i44++) {
    d[i44].re = 0.0;
    d[i44].im = 0.0;
  }

  for (i = 0; i < 3; i++) {
    d[i + 3 * i] = sigma_total[i];
  }

  for (i44 = 0; i44 < 3; i44++) {
    b_f0_sigma[i44].re = 0.0;
    b_f0_sigma[i44].im = 0.0;
    for (i = 0; i < 3; i++) {
      b_f0_sigma[i44].re += d[i44 + 3 * i].re * Q0[i].re - d[i44 + 3 * i].im *
        Q0[i].im;
      b_f0_sigma[i44].im += d[i44 + 3 * i].re * Q0[i].im + d[i44 + 3 * i].im *
        Q0[i].re;
    }
  }
}

/* End of code generation (f0_sigma.c) */
