/*
 * Rho_density_types.h
 *
 * Code generation for function 'Rho_density'
 *
 */

#ifndef RHO_DENSITY_TYPES_H
#define RHO_DENSITY_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T

struct emxArray_int32_T
{
  int32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_int32_T*/

#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T

typedef struct emxArray_int32_T emxArray_int32_T;

#endif                                 /*typedef_emxArray_int32_T*/

#include <stdlib.h>
#ifndef struct_emxArray_ptrdiff_t
#define struct_emxArray_ptrdiff_t

struct emxArray_ptrdiff_t
{
  ptrdiff_t *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_ptrdiff_t*/

#ifndef typedef_emxArray_ptrdiff_t
#define typedef_emxArray_ptrdiff_t

typedef struct emxArray_ptrdiff_t emxArray_ptrdiff_t;

#endif                                 /*typedef_emxArray_ptrdiff_t*/

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T

typedef struct emxArray_real_T emxArray_real_T;

#endif                                 /*typedef_emxArray_real_T*/
#endif

/* End of code generation (Rho_density_types.h) */
