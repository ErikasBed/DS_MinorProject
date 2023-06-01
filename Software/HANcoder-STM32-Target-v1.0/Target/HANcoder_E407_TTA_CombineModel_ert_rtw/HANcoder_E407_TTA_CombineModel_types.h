/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_CombineModel_types.h
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_CombineModel'.
 *
 * Model version                  : 17.16
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Thu Jun  1 20:05:03 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_HANcoder_E407_TTA_CombineModel_types_h_
#define RTW_HEADER_HANcoder_E407_TTA_CombineModel_types_h_
#include "rtwtypes.h"
#ifndef struct_tag_MpLobwgvX1LsLuxnL1ZqZH
#define struct_tag_MpLobwgvX1LsLuxnL1ZqZH

struct tag_MpLobwgvX1LsLuxnL1ZqZH
{
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T pCumSum;
  real_T pCumSumRev[3];
  real_T pCumRevIndex;
  real_T pModValueRev;
};

#endif                                 /* struct_tag_MpLobwgvX1LsLuxnL1ZqZH */

#ifndef typedef_g_dsp_internal_SlidingWindowAve
#define typedef_g_dsp_internal_SlidingWindowAve

typedef struct tag_MpLobwgvX1LsLuxnL1ZqZH g_dsp_internal_SlidingWindowAve;

#endif                             /* typedef_g_dsp_internal_SlidingWindowAve */

#ifndef struct_tag_BlgwLpgj2bjudmbmVKWwDE
#define struct_tag_BlgwLpgj2bjudmbmVKWwDE

struct tag_BlgwLpgj2bjudmbmVKWwDE
{
  uint32_T f1[8];
};

#endif                                 /* struct_tag_BlgwLpgj2bjudmbmVKWwDE */

#ifndef typedef_cell_wrap
#define typedef_cell_wrap

typedef struct tag_BlgwLpgj2bjudmbmVKWwDE cell_wrap;

#endif                                 /* typedef_cell_wrap */

#ifndef struct_tag_J1iBdW5I4fqaW9fhmMvNgC
#define struct_tag_J1iBdW5I4fqaW9fhmMvNgC

struct tag_J1iBdW5I4fqaW9fhmMvNgC
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  cell_wrap inputVarSize;
  g_dsp_internal_SlidingWindowAve *pStatistic;
  int32_T NumChannels;
  int32_T FrameLength;
  g_dsp_internal_SlidingWindowAve _pobj0;
};

#endif                                 /* struct_tag_J1iBdW5I4fqaW9fhmMvNgC */

#ifndef typedef_dsp_simulink_MovingAverage
#define typedef_dsp_simulink_MovingAverage

typedef struct tag_J1iBdW5I4fqaW9fhmMvNgC dsp_simulink_MovingAverage;

#endif                                 /* typedef_dsp_simulink_MovingAverage */

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

#endif                  /* RTW_HEADER_HANcoder_E407_TTA_CombineModel_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
