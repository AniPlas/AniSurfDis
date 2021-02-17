/*
 * qrsolve.h
 *
 * Code generation for function 'qrsolve'
 *
 */

#ifndef QRSOLVE_H
#define QRSOLVE_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "rho_distri_types.h"

/* Function Declarations */
extern void qrsolve(const emlrtStack *sp, const emxArray_real_T *A, const
                    emxArray_real_T *B, emxArray_real_T *Y);

#endif

/* End of code generation (qrsolve.h) */
