/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_CombineModel_private.h
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_CombineModel'.
 *
 * Model version                  : 17.33
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Mon Jun 19 10:01:47 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_HANcoder_E407_TTA_CombineModel_private_h_
#define RTW_HEADER_HANcoder_E407_TTA_CombineModel_private_h_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "HANcoder_E407_TTA_CombineModel.h"
#include "HANcoder_E407_TTA_CombineModel_types.h"
#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

void CanDrvByteSwap_x(uint8_t *b, size_t n);
extern void MovingAverage_Init(rtDW_MovingAverage *localDW);
extern void MovingAverage_Start(rtDW_MovingAverage *localDW);
extern void MovingAverage(real32_T rtu_0, rtB_MovingAverage *localB,
  rtDW_MovingAverage *localDW);
extern void EnabledSubsystem(int8_T rtu_Enable, uint8_T rtu_In1, uint8_T rtu_In2,
  uint8_T rtu_In3, uint8_T rtu_In4, uint8_T rtu_In5, uint8_T rtu_In6, uint8_T
  rtu_In7, uint8_T rtu_In8, rtB_EnabledSubsystem *localB);
extern void MMBS1_TX(boolean_T rtu_Trigger, uint32_T rtu_In1, rtZCE_MMBS1_TX
                     *localZCE);
extern void BitShift(uint16_T rtu_u, rtB_BitShift *localB);
extern void BitShift_g(uint8_T rtu_u, rtB_BitShift_l *localB);
extern void BitShift1(uint8_T rtu_u, rtB_BitShift1 *localB);
extern void BitShift2(uint8_T rtu_u, rtB_BitShift2 *localB);
extern void BitShift3(uint8_T rtu_u, rtB_BitShift3 *localB);
extern void BitShift4(uint8_T rtu_u, rtB_BitShift4 *localB);
extern void BitShift5(uint8_T rtu_u, rtB_BitShift5 *localB);
extern void BitShift6(uint8_T rtu_u, rtB_BitShift6 *localB);
extern void BitShift_gy(uint8_T rtu_u, rtB_BitShift_o *localB);
extern void BitShift1_b(uint8_T rtu_u, rtB_BitShift1_j *localB);
extern void BitShift2_p(uint8_T rtu_u, rtB_BitShift2_e *localB);
extern void BitShift3_l(uint8_T rtu_u, rtB_BitShift3_g *localB);
extern void BitShift4_g(uint8_T rtu_u, rtB_BitShift4_g *localB);
extern void BitShift5_n(uint8_T rtu_u, rtB_BitShift5_e *localB);
extern void BitShift6_d(uint8_T rtu_u, rtB_BitShift6_b *localB);
extern void BitShift_o(uint16_T rtu_u, rtB_BitShift_c *localB);
extern void TRCK1_ID2_TX(boolean_T rtu_Trigger, uint32_T rtu_In1, const uint8_T *
  rtd_Local_Ticks, const boolean_T *rtd_motorFailed, const boolean_T
  *rtd_potFault, const uint16_T *rtd_potentiometer1, const uint16_T
  *rtd_potentiometer2, rtB_TRCK1_ID2_TX *localB, const rtC_TRCK1_ID2_TX *localC,
  rtZCE_TRCK1_ID2_TX *localZCE);

#endif                /* RTW_HEADER_HANcoder_E407_TTA_CombineModel_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
