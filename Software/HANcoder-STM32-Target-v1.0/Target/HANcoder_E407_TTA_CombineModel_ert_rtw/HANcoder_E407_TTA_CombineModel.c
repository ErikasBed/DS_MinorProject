/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_CombineModel.c
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_CombineModel'.
 *
 * Model version                  : 17.22
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Mon Jun  5 17:23:15 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HANcoder_E407_TTA_CombineModel.h"
#include "rtwtypes.h"
#include "HANcoder_E407_TTA_CombineModel_private.h"
#include <math.h>
#include "zero_crossing_types.h"

/* map ByteSwap function */
#define ByteSwap(x)                    (ByteSwap_x((uint8_t *) &x, sizeof(x)))

void PwmoutIRQ_PWMOUT_MODULE_TIM14(void);
void TimeoutEventIRQ_TIMEOUT_TIM4_PIN_PD12(void);
void TimeoutOverflowIRQ_TIMEOUT_MODULE_TIM4(void);

/* Exported block signals */
real_T reqAngle;                       /* '<S27>/Data Store Read' */
real_T t2Angle;                        /* '<S27>/Constant3' */
real_T t1Angle;                        /* '<S27>/Constant2' */
real_T Gamma2;                         /* '<S59>/Sum2' */
real_T Gamma1;                         /* '<S59>/Sum1' */
real_T steering;                       /* '<S58>/Gain2' */
real_T position;                       /* '<S58>/Gain1' */
real_T control;                        /* '<S58>/Sum' */
uint32_T SI_FreeHeap;                  /* '<S174>/Level-2 M-file S-Function' */
uint32_T SI_FreeStack;                 /* '<S175>/Level-2 M-file S-Function' */
real32_T delta12K;                     /* '<S114>/tan 1' */
uint16_T mospeed;                      /* '<S58>/Add' */
uint16_T analogPot1;                   /* '<S51>/Level-2 M-file S-Function' */
uint16_T analogPot2;                   /* '<S52>/Level-2 M-file S-Function' */
uint16_T testCounter;                  /* '<S25>/Data Store Read1' */
uint8_T SI_CPUload;                    /* '<S173>/Level-2 M-file S-Function' */
uint8_T local_ticks_interrupt;         /* '<S10>/Switch' */
uint8_T setSlotTime;                   /* '<S10>/Data Store Read3' */
uint8_T slotSelected;                  /* '<S17>/Switch' */
boolean_T boolCan;                     /* '<S11>/AND' */
boolean_T cw;                          /* '<S58>/Cast1' */
boolean_T ccw;                         /* '<S58>/NOT' */
boolean_T canActive;                   /* '<S10>/Clock_State' */

/* Exported block parameters */
real_T ClockOn = 0.0;                  /* Variable: ClockOn
                                        * Referenced by: '<S13>/Constant'
                                        */
real_T controlWidth = 3.0;             /* Variable: controlWidth
                                        * Referenced by: '<S58>/Constant'
                                        */
real_T desiredAngle = 0.0;             /* Variable: desiredAngle
                                        * Referenced by: '<S48>/Constant2'
                                        */
real_T intVal = 0.15;                  /* Variable: intVal
                                        * Referenced by: '<S91>/Integral Gain'
                                        */
real_T matrixRows = 10.0;              /* Variable: matrixRows
                                        * Referenced by: '<S17>/Constant1'
                                        */
real_T propVal = 1.0;                  /* Variable: propVal
                                        * Referenced by: '<S99>/Proportional Gain'
                                        */
real_T trailer1TestAngle = 0.0;        /* Variable: trailer1TestAngle
                                        * Referenced by: '<S27>/Constant2'
                                        */
real_T trailer2TestAngle = 0.0;        /* Variable: trailer2TestAngle
                                        * Referenced by: '<S27>/Constant3'
                                        */
uint32_T MMBS1_ID = 12U;               /* Variable: MMBS1_ID
                                        * Referenced by: '<S11>/Constant12'
                                        */
uint32_T SSTM1_ID = 13U;               /* Variable: SSTM1_ID
                                        * Referenced by: '<S11>/Constant14'
                                        */
uint32_T SYNC1_ID = 11U;               /* Variable: SYNC1_ID
                                        * Referenced by:
                                        *   '<S11>/Constant10'
                                        *   '<S169>/Constant10'
                                        */
uint32_T TRCK1_ID1 = 14U;              /* Variable: TRCK1_ID1
                                        * Referenced by: '<S11>/Constant3'
                                        */
uint32_T TRCK1_ID2 = 26U;              /* Variable: TRCK1_ID2
                                        * Referenced by: '<S11>/Constant5'
                                        */
uint32_T TRCK1_ID3 = 37U;              /* Variable: TRCK1_ID3
                                        * Referenced by: '<S11>/Constant26'
                                        */
uint32_T TRLS1_ID4 = 48U;              /* Variable: TRLS1_ID4
                                        * Referenced by: '<S11>/Constant8'
                                        */
uint32_T TRLS1_ID5 = 59U;              /* Variable: TRLS1_ID5
                                        * Referenced by: '<S11>/Constant18'
                                        */
uint8_T slotTime = 50U;                /* Variable: slotTime
                                        * Referenced by: '<S168>/Constant3'
                                        */

/* Block signals (default storage) */
BlockIO rtB;

/* Block states (default storage) */
D_Work rtDWork;

/* Previous zero-crossings (trigger) states */
PrevZCSigStates rtPrevZCSigState;
static tCanDataTypes canRxData_0_rtu_In1;
static tCanDataTypes canTxData;
static tCanDataTypes canRxData_0_SYNC1_ID;
static tCanDataTypes canRxData_0_TRCK1_ID3;
static tCanDataTypes canRxData_0_TRLS1_ID4;
static tCanDataTypes canRxData_0_TRLS1_ID5;
static tCanDataTypes canRxData_0_SYNC1_ID;

/*
 * Swaps the values of two bytes.
 * a, b pointers to data values that need swapping
 */
static void swap(unsigned char *a, unsigned char *b)
{
  register char i = *a;
  *a = *b;
  *b = i;
}                                      /*** end of swap ***/

/*
 * Swaps all bytes in b. Typically used to fix endianes.
 * b pointer to data with bytes to swap
 * n number of bytes to swap
 */
void ByteSwap_x(uint8_t *b, size_t n)
{
  int i = 0;
  int j = n-1;
  while (i<j) {
    swap(&b[i], &b[j]);
    i++, j--;
  }
}

void TimeoutEventIRQ_TIMEOUT_TIM4_PIN_PD12(void)
{
  /* Output and update for function-call system: '<S1>/Local Time generation' */
  {
    /* local block i/o variables */
    uint16_T rtb_Level2MfileSFunction;
    boolean_T rtb_Equal;

    /* SignalConversion generated from: '<S10>/Clock_State' */
    canActive = rtB.OR;

    /* Switch: '<S10>/Switch' */
    if (canActive) {
      /* Switch: '<S10>/Switch' incorporates:
       *  Constant: '<S10>/Constant2'
       *  DataStoreRead: '<S10>/Data Store Read'
       *  Sum: '<S10>/Sum1'
       */
      local_ticks_interrupt = (uint8_T)((uint32_T)rtDWork.Local_Ticks +
        ((uint8_T)1U));
    } else {
      /* Switch: '<S10>/Switch' incorporates:
       *  DataStoreRead: '<S10>/Data Store Read1'
       */
      local_ticks_interrupt = rtDWork.Local_Ticks;
    }

    /* End of Switch: '<S10>/Switch' */

    /* DataStoreWrite: '<S10>/Data Store Write' */
    rtDWork.Local_Ticks = local_ticks_interrupt;

    /* DataStoreRead: '<S10>/Data Store Read3' */
    setSlotTime = rtDWork.SlotTime;

    /* M-S-Function: '<S18>/Level-2 M-file S-Function' incorporates:
     *  DataTypeConversion: '<S10>/Cast'
     */
    rtb_Level2MfileSFunction = setSlotTime;

    /* RelationalOperator: '<S10>/Equal' incorporates:
     *  DataStoreRead: '<S10>/Data Store Read2'
     */
    rtb_Equal = (rtDWork.Local_Ticks >= rtb_Level2MfileSFunction);

    /* Outputs for Triggered SubSystem: '<S10>/Enabled Subsystem' incorporates:
     *  TriggerPort: '<S17>/Trigger'
     */
    if (rtb_Equal && (rtPrevZCSigState.EnabledSubsystem_Trig_ZCE != POS_ZCSIG))
    {
      /* Switch: '<S17>/Switch' incorporates:
       *  Constant: '<S17>/Constant1'
       *  DataStoreRead: '<S17>/Data Store Read1'
       *  DataTypeConversion: '<S17>/Cast'
       *  RelationalOperator: '<S17>/Equal'
       */
      if (rtDWork.slot < (uint8_T)matrixRows) {
        /* Switch: '<S17>/Switch' incorporates:
         *  Constant: '<S17>/Constant'
         *  DataStoreRead: '<S17>/Data Store Read'
         *  Sum: '<S17>/Plus'
         */
        slotSelected = (uint8_T)((uint32_T)rtDWork.slot + ((uint8_T)1U));
      } else {
        /* Switch: '<S17>/Switch' incorporates:
         *  Constant: '<S17>/Constant2'
         */
        slotSelected = (uint8_T)1.0;
      }

      /* End of Switch: '<S17>/Switch' */

      /* DataStoreWrite: '<S17>/Data Store Write' */
      rtDWork.slot = slotSelected;

      /* DataStoreWrite: '<S17>/Data Store Write1' incorporates:
       *  Constant: '<S17>/Constant3'
       */
      rtDWork.Local_Ticks = ((uint8_T)0U);
    }

    rtPrevZCSigState.EnabledSubsystem_Trig_ZCE = rtb_Equal;

    /* End of Outputs for SubSystem: '<S10>/Enabled Subsystem' */
    /* M-S-Function: '<S18>/Level-2 M-file S-Function' */
    /* read 16-bit free running counter timestamp of the last output compare event */
    rtb_Level2MfileSFunction = TimeoutGetLastEventCounter(TIMEOUT_TIM4_PIN_PD12);

    /* Sum: '<S10>/Sum' incorporates:
     *  Constant: '<S10>/Constant'
     */
    rtB.Sum = (uint16_T)((uint32_T)rtb_Level2MfileSFunction + ((uint16_T)1000U));

    /* Update for M-S-Function: '<S19>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S10>/Constant1'
     */
    /* schedule the next output compare event */
    TimeoutScheduleCompareEvent(TIMEOUT_TIM4_PIN_PD12, rtB.Sum, (tTimeoutAction)
      ((uint8_T)3U));
  }
}

void PwmoutIRQ_PWMOUT_MODULE_TIM14(void)
{
}

void TimeoutOverflowIRQ_TIMEOUT_MODULE_TIM4(void)
{
}

/*
 * Output and update for enable system:
 *    '<S38>/Enabled Subsystem'
 *    '<S41>/Enabled Subsystem'
 *    '<S44>/Enabled Subsystem'
 *    '<S117>/Enabled Subsystem'
 *    '<S133>/Enabled Subsystem'
 *    '<S142>/Enabled Subsystem'
 *    '<S145>/Enabled Subsystem'
 *    '<S157>/Enabled Subsystem'
 *    '<S170>/Enabled Subsystem'
 */
void EnabledSubsystem(int8_T rtu_Enable, uint8_T rtu_In1, uint8_T rtu_In2,
                      uint8_T rtu_In3, uint8_T rtu_In4, uint8_T rtu_In5, uint8_T
                      rtu_In6, uint8_T rtu_In7, uint8_T rtu_In8,
                      rtB_EnabledSubsystem *localB)
{
  uint8_T rtb_In3;
  uint8_T rtb_In4;
  uint8_T rtb_In5;
  uint8_T rtb_In6;
  uint8_T rtb_In7;
  uint8_T rtb_In8;

  /* Outputs for Enabled SubSystem: '<S38>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S39>/Enable'
   */
  if (rtu_Enable > 0) {
    /* SignalConversion generated from: '<S39>/In1' */
    localB->In1 = rtu_In1;

    /* SignalConversion generated from: '<S39>/In2' */
    localB->In2 = rtu_In2;

    /* SignalConversion generated from: '<S39>/In3' */
    rtb_In3 = rtu_In3;

    /* SignalConversion generated from: '<S39>/In4' */
    rtb_In4 = rtu_In4;

    /* SignalConversion generated from: '<S39>/In5' */
    rtb_In5 = rtu_In5;

    /* SignalConversion generated from: '<S39>/In6' */
    rtb_In6 = rtu_In6;

    /* SignalConversion generated from: '<S39>/In7' */
    rtb_In7 = rtu_In7;

    /* SignalConversion generated from: '<S39>/In8' */
    rtb_In8 = rtu_In8;
  }

  /* End of Outputs for SubSystem: '<S38>/Enabled Subsystem' */
}

/*
 * Disable for enable system:
 *    '<S11>/MMBS1_RX'
 *    '<S11>/SSTM1_RX'
 *    '<S11>/TRCK1_ID2_RX'
 *    '<S11>/TRCK1_RX'
 */
void MMBS1_RX_Disable(rtDW_MMBS1_RX *localDW)
{
  localDW->MMBS1_RX_MODE = false;
}

/*
 * Start for enable system:
 *    '<S11>/MMBS1_RX'
 *    '<S11>/SSTM1_RX'
 *    '<S11>/TRCK1_ID2_RX'
 *    '<S11>/TRCK1_RX'
 */
void MMBS1_RX_Start(uint32_T rtu_In1)
{
  /* Start for M-S-Function: '<S38>/S-Function' */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, rtu_In1);
}

/*
 * Outputs for enable system:
 *    '<S11>/MMBS1_RX'
 *    '<S11>/SSTM1_RX'
 *    '<S11>/TRCK1_ID2_RX'
 *    '<S11>/TRCK1_RX'
 */
void MMBS1_RX(boolean_T rtu_Enable, uint32_T rtu_In1, rtB_MMBS1_RX *localB,
              rtDW_MMBS1_RX *localDW)
{
  /* local block i/o variables */
  uint8_T rtb_SFunction_o2_n;
  uint8_T rtb_SFunction_o3_b;
  uint8_T rtb_SFunction_o4_l;
  uint8_T rtb_SFunction_o5_e;
  uint8_T rtb_SFunction_o6_k;
  uint8_T rtb_SFunction_o7_dj;
  uint8_T rtb_SFunction_o8_n1;
  uint8_T rtb_SFunction_o9_o;
  int8_T rtb_SFunction_o1_g;

  /* Outputs for Enabled SubSystem: '<S11>/MMBS1_RX' incorporates:
   *  EnablePort: '<S20>/Enable'
   */
  if (rtu_Enable) {
    localDW->MMBS1_RX_MODE = true;

    /* M-S-Function: '<S38>/S-Function' */

    /* read the message data and store the new parameter */
    rtb_SFunction_o1_g = CanIoGetMessage(0, rtu_In1, NULL,
      &canRxData_0_rtu_In1.uint8_T_info[0], NULL);

    /* process the message data */
    if (rtb_SFunction_o1_g > 0) {
      /* read the data */
      rtb_SFunction_o2_n = canRxData_0_rtu_In1.uint8_T_info[0];
      rtb_SFunction_o3_b = canRxData_0_rtu_In1.uint8_T_info[1];
      rtb_SFunction_o4_l = canRxData_0_rtu_In1.uint8_T_info[2];
      rtb_SFunction_o5_e = canRxData_0_rtu_In1.uint8_T_info[3];
      rtb_SFunction_o6_k = canRxData_0_rtu_In1.uint8_T_info[4];
      rtb_SFunction_o7_dj = canRxData_0_rtu_In1.uint8_T_info[5];
      rtb_SFunction_o8_n1 = canRxData_0_rtu_In1.uint8_T_info[6];
      rtb_SFunction_o9_o = canRxData_0_rtu_In1.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S38>/Enabled Subsystem' */
    EnabledSubsystem(rtb_SFunction_o1_g, rtb_SFunction_o2_n, rtb_SFunction_o3_b,
                     rtb_SFunction_o4_l, rtb_SFunction_o5_e, rtb_SFunction_o6_k,
                     rtb_SFunction_o7_dj, rtb_SFunction_o8_n1,
                     rtb_SFunction_o9_o, &localB->EnabledSubsystem_k);

    /* End of Outputs for SubSystem: '<S38>/Enabled Subsystem' */
  } else if (localDW->MMBS1_RX_MODE) {
    MMBS1_RX_Disable(localDW);
  }

  /* End of Outputs for SubSystem: '<S11>/MMBS1_RX' */
}

/*
 * Output and update for trigger system:
 *    '<S11>/MMBS1_TX'
 *    '<S11>/SSTM1_TX'
 */
void MMBS1_TX(boolean_T rtu_Trigger, uint32_T rtu_In1, rtZCE_MMBS1_TX *localZCE)
{
  /* Outputs for Triggered SubSystem: '<S11>/MMBS1_TX' incorporates:
   *  TriggerPort: '<S21>/Trigger'
   */
  if (rtu_Trigger && (localZCE->MMBS1_TX_Trig_ZCE != POS_ZCSIG)) {
    /* Update for M-S-Function: '<S40>/S-Function' */
    {
      /* prepare the data */
      canTxData.uint8_T_info[0] = 0U;

      /* send the data */
      CanTransmit(0, rtu_In1, 1, &canTxData.uint8_T_info[0]);
    }
  }

  localZCE->MMBS1_TX_Trig_ZCE = rtu_Trigger;

  /* End of Outputs for SubSystem: '<S11>/MMBS1_TX' */
}

/*
 * Output and update for atomic system:
 *    '<S120>/Bit Shift'
 *    '<S121>/Bit Shift'
 *    '<S127>/Bit Shift'
 *    '<S128>/Bit Shift'
 *    '<S136>/Bit Shift'
 *    '<S137>/Bit Shift'
 *    '<S150>/Bit Shift'
 *    '<S151>/Bit Shift'
 *    '<S162>/Bit Shift'
 *    '<S163>/Bit Shift'
 */
void BitShift(uint16_T rtu_u, rtB_BitShift *localB)
{
  /* MATLAB Function: '<S122>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S123>:1' */
  /* '<S123>:1:8' */
  localB->y = (uint16_T)((uint32_T)rtu_u >> 8);
}

/*
 * Output and update for trigger system:
 *    '<S11>/TRCK1_ID2_TX'
 *    '<S11>/TRCK1_ID3_TX'
 *    '<S11>/TRCK1_TX'
 *    '<S11>/TRLS_ID4_TX'
 */
void TRCK1_ID2_TX(boolean_T rtu_Trigger, uint32_T rtu_In1, const uint8_T
                  *rtd_Local_Ticks, const uint16_T *rtd_potentiometer1, const
                  uint16_T *rtd_potentiometer2, rtB_TRCK1_ID2_TX *localB,
                  rtZCE_TRCK1_ID2_TX *localZCE)
{
  /* Outputs for Triggered SubSystem: '<S11>/TRCK1_ID2_TX' incorporates:
   *  TriggerPort: '<S29>/Trigger'
   */
  if (rtu_Trigger && (localZCE->TRCK1_ID2_TX_Trig_ZCE != POS_ZCSIG)) {
    /* DataStoreRead: '<S29>/Data Store Read2' */
    localB->DataStoreRead2 = *rtd_Local_Ticks;

    /* Outputs for Atomic SubSystem: '<S120>/Bit Shift' */
    /* DataStoreRead: '<S29>/Data Store Read1' */
    BitShift(*rtd_potentiometer2, &localB->BitShift_o);

    /* End of Outputs for SubSystem: '<S120>/Bit Shift' */

    /* DataTypeConversion: '<S120>/Cast' */
    localB->Cast = (uint8_T)localB->BitShift_o.y;

    /* DataTypeConversion: '<S120>/Cast1' incorporates:
     *  DataStoreRead: '<S29>/Data Store Read1'
     */
    localB->Cast1 = (uint8_T)*rtd_potentiometer2;

    /* Outputs for Atomic SubSystem: '<S121>/Bit Shift' */
    /* DataStoreRead: '<S29>/Data Store Read' */
    BitShift(*rtd_potentiometer1, &localB->BitShift_h);

    /* End of Outputs for SubSystem: '<S121>/Bit Shift' */

    /* DataTypeConversion: '<S121>/Cast' */
    localB->Cast_k = (uint8_T)localB->BitShift_h.y;

    /* DataTypeConversion: '<S121>/Cast1' incorporates:
     *  DataStoreRead: '<S29>/Data Store Read'
     */
    localB->Cast1_i = (uint8_T)*rtd_potentiometer1;

    /* Update for M-S-Function: '<S119>/S-Function' */
    {
      /* prepare the data */
      canTxData.uint8_T_info[0] = localB->Cast_k;
      canTxData.uint8_T_info[1] = localB->Cast1_i;
      canTxData.uint8_T_info[2] = localB->Cast;
      canTxData.uint8_T_info[3] = localB->Cast1;
      canTxData.uint8_T_info[4] = localB->DataStoreRead2;

      /* send the data */
      CanTransmit(0, rtu_In1, 5, &canTxData.uint8_T_info[0]);
    }
  }

  localZCE->TRCK1_ID2_TX_Trig_ZCE = rtu_Trigger;

  /* End of Outputs for SubSystem: '<S11>/TRCK1_ID2_TX' */
}

/*
 * Output and update for atomic system:
 *    '<S144>/Bit Shift'
 *    '<S156>/Bit Shift'
 */
void BitShift_j(uint16_T rtu_u, rtB_BitShift_i *localB)
{
  /* MATLAB Function: '<S146>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S147>:1' */
  /* '<S147>:1:6' */
  localB->y = (uint16_T)(rtu_u << 8);
}

/* Model step function */
void HANcoder_E407_TTA_CombineModel_step(void)
{
  /* local block i/o variables */
  int32_T rtb_Level2MfileSFunction_o;
  uint8_T rtb_SFunction_o2;
  uint8_T rtb_SFunction_o3;
  uint8_T rtb_SFunction_o4;
  uint8_T rtb_SFunction_o5;
  uint8_T rtb_SFunction_o6;
  uint8_T rtb_SFunction_o7;
  uint8_T rtb_SFunction_o8;
  uint8_T rtb_SFunction_o9;
  uint8_T rtb_SFunction_o2_l;
  uint8_T rtb_SFunction_o3_m;
  uint8_T rtb_SFunction_o4_b;
  uint8_T rtb_SFunction_o5_o;
  uint8_T rtb_SFunction_o6_i;
  uint8_T rtb_SFunction_o7_f;
  uint8_T rtb_SFunction_o8_p;
  uint8_T rtb_SFunction_o9_l;
  uint8_T rtb_SFunction_o2_e;
  uint8_T rtb_SFunction_o3_p;
  uint8_T rtb_SFunction_o4_c;
  uint8_T rtb_SFunction_o5_c;
  uint8_T rtb_SFunction_o6_e;
  uint8_T rtb_SFunction_o7_l;
  uint8_T rtb_SFunction_o8_f;
  uint8_T rtb_SFunction_o9_h;
  uint8_T rtb_SFunction_o2_j;
  uint8_T rtb_SFunction_o3_a;
  uint8_T rtb_SFunction_o4_i;
  uint8_T rtb_SFunction_o5_k;
  uint8_T rtb_SFunction_o6_c;
  uint8_T rtb_SFunction_o7_d;
  uint8_T rtb_SFunction_o8_h;
  uint8_T rtb_SFunction_o9_b;
  uint8_T rtb_SFunction_o2_i;
  uint8_T rtb_SFunction_o3_g;
  uint8_T rtb_SFunction_o4_j;
  uint8_T rtb_SFunction_o5_f;
  uint8_T rtb_SFunction_o6_g;
  uint8_T rtb_SFunction_o7_k;
  uint8_T rtb_SFunction_o8_n;
  uint8_T rtb_SFunction_o9_b1;
  int8_T rtb_SFunction_o1;
  int8_T rtb_SFunction_o1_n;
  int8_T rtb_SFunction_o1_k;
  int8_T rtb_SFunction_o1_k1;
  int8_T rtb_SFunction_o1_h;
  boolean_T rtb_Level2MfileSFunction_j;
  real_T rtb_DeadZone;
  real_T rtb_IntegralGain;
  real_T rtb_Integrator;
  real_T rtb_Integrator_tmp;
  real_T tmp;
  uint16_T rtb_Cast_bt;
  uint16_T rtb_Cast_g1;
  int8_T tmp_0;
  int8_T tmp_1;
  uint8_T rtb_Multiply;
  uint8_T rtb_Multiply1;
  boolean_T AND3;
  boolean_T AND5;
  boolean_T AND7;
  boolean_T AND9;
  boolean_T rtb_AND;
  boolean_T rtb_AND10;
  boolean_T rtb_AND12;
  boolean_T rtb_AND13;
  boolean_T rtb_AND15;
  boolean_T rtb_AND1_k;
  boolean_T rtb_AND2;
  boolean_T rtb_AND4;
  boolean_T rtb_AND6;
  boolean_T rtb_AND8;
  boolean_T rtb_Equal14;
  boolean_T rtb_Equal16;
  boolean_T rtb_OR1;
  ZCEventType zcEvent;

  /* Outputs for Enabled SubSystem: '<S1>/Initialize Clock Schedule' incorporates:
   *  EnablePort: '<S9>/Enable'
   */
  /* Logic: '<S1>/NOT' incorporates:
   *  DataStoreRead: '<S1>/If 1 -> Clock initialized '
   */
  if (rtDWork.init_clock == 0.0) {
    rtDWork.InitializeClockSchedule_MODE = true;

    /* DataStoreWrite: '<S9>/Data Store Write' incorporates:
     *  Constant: '<S9>/Constant2'
     */
    rtDWork.init_clock = 1.0;

    /* Update for M-S-Function: '<S16>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S9>/Constant'
     *  Constant: '<S9>/Constant1'
     */
    /* schedule the next output compare event */
    TimeoutScheduleCompareEvent(TIMEOUT_TIM4_PIN_PD12, ((uint16_T)1U),
      (tTimeoutAction)((uint8_T)3U));
  } else if (rtDWork.InitializeClockSchedule_MODE) {
    rtDWork.InitializeClockSchedule_MODE = false;
  }

  /* End of Logic: '<S1>/NOT' */
  /* End of Outputs for SubSystem: '<S1>/Initialize Clock Schedule' */

  /* Logic: '<S13>/AND' incorporates:
   *  Constant: '<S13>/Constant'
   *  Constant: '<S13>/Constant4'
   *  DataStoreRead: '<S13>/Data Store Read1'
   *  RelationalOperator: '<S13>/Less Than'
   */
  rtb_AND = ((ClockOn != 0.0) && (rtDWork.nodeRole < ((uint8_T)4U)));

  /* Logic: '<S13>/OR' incorporates:
   *  DataStoreRead: '<S13>/Data Store Read2'
   */
  rtB.OR = (rtb_AND || rtDWork.slaveClockOn);

  /* End of Outputs for S-Function (sfcn_timeout_event_irq): '<S4>/S-Function' */

  /* Outputs for Enabled SubSystem: '<S1>/Message selector' incorporates:
   *  EnablePort: '<S11>/Enable'
   *
   * Block description for '<S1>/Message selector':
   *  Truck 1
   */
  if (canActive) {
    rtDWork.Messageselector_MODE = true;

    /* M-S-Function: '<S8>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S11>/Constant1'
     *  RelationalOperator: '<S11>/Equal1'
     */
    rtb_Level2MfileSFunction_j = (slotSelected == 2.0);

    /* RelationalOperator: '<S11>/Equal11' incorporates:
     *  Constant: '<S11>/Constant13'
     *  DataStoreRead: '<S1>/Data Store Read'
     */
    rtb_Equal14 = (rtDWork.nodeRole == 1.0);

    /* Logic: '<S11>/AND3' incorporates:
     *  Logic: '<S11>/NOT1'
     */
    AND3 = (rtb_Level2MfileSFunction_j && (!rtb_Equal14));

    /* Outputs for Enabled SubSystem: '<S11>/MMBS1_RX' */
    /* Constant: '<S11>/Constant12' */
    MMBS1_RX(AND3, MMBS1_ID, &rtB.MMBS1_RX_j, &rtDWork.MMBS1_RX_j);

    /* End of Outputs for SubSystem: '<S11>/MMBS1_RX' */

    /* Logic: '<S11>/AND2' */
    rtb_AND2 = (rtb_Level2MfileSFunction_j && rtb_Equal14);

    /* Outputs for Triggered SubSystem: '<S11>/MMBS1_TX' */
    /* Constant: '<S11>/Constant12' */
    MMBS1_TX(rtb_AND2, MMBS1_ID, &rtPrevZCSigState.MMBS1_TX_a);

    /* End of Outputs for SubSystem: '<S11>/MMBS1_TX' */

    /* RelationalOperator: '<S11>/Equal2' incorporates:
     *  Constant: '<S11>/Constant2'
     */
    rtb_Equal14 = (slotSelected == 3.0);

    /* M-S-Function: '<S8>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S11>/Constant15'
     *  DataStoreRead: '<S1>/Data Store Read'
     *  RelationalOperator: '<S11>/Equal12'
     */
    rtb_Level2MfileSFunction_j = (rtDWork.nodeRole == 1.0);

    /* Logic: '<S11>/AND5' incorporates:
     *  Logic: '<S11>/NOT2'
     */
    AND5 = (rtb_Equal14 && (!rtb_Level2MfileSFunction_j));

    /* Outputs for Enabled SubSystem: '<S11>/SSTM1_RX' */
    /* Constant: '<S11>/Constant14' */
    MMBS1_RX(AND5, SSTM1_ID, &rtB.SSTM1_RX, &rtDWork.SSTM1_RX);

    /* End of Outputs for SubSystem: '<S11>/SSTM1_RX' */

    /* Logic: '<S11>/AND4' */
    rtb_AND4 = (rtb_Equal14 && rtb_Level2MfileSFunction_j);

    /* Outputs for Triggered SubSystem: '<S11>/SSTM1_TX' */
    /* Constant: '<S11>/Constant14' */
    MMBS1_TX(rtb_AND4, SSTM1_ID, &rtPrevZCSigState.SSTM1_TX);

    /* End of Outputs for SubSystem: '<S11>/SSTM1_TX' */

    /* RelationalOperator: '<S11>/Equal' incorporates:
     *  Constant: '<S11>/Constant'
     */
    rtb_Equal14 = (slotSelected == ((uint8_T)1U));

    /* M-S-Function: '<S8>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S11>/Constant11'
     *  DataStoreRead: '<S1>/Data Store Read'
     *  RelationalOperator: '<S11>/Equal10'
     */
    rtb_Level2MfileSFunction_j = (rtDWork.nodeRole == ((uint8_T)1U));

    /* Logic: '<S11>/AND1' incorporates:
     *  Logic: '<S11>/NOT'
     */
    rtb_AND1_k = (rtb_Equal14 && (!rtb_Level2MfileSFunction_j));

    /* Outputs for Enabled SubSystem: '<S11>/SYNC1_RX' incorporates:
     *  EnablePort: '<S24>/Enable'
     */
    if (rtb_AND1_k) {
      rtDWork.SYNC1_RX_MODE = true;

      /* M-S-Function: '<S44>/S-Function' incorporates:
       *  Constant: '<S11>/Constant10'
       */

      /* read the message data and store the new parameter */
      rtb_SFunction_o1_h = CanIoGetMessage(0, SYNC1_ID, NULL,
        &canRxData_0_SYNC1_ID.uint8_T_info[0], NULL);

      /* process the message data */
      if (rtb_SFunction_o1_h > 0) {
        /* read the data */
        rtb_SFunction_o2_i = canRxData_0_SYNC1_ID.uint8_T_info[0];
        rtb_SFunction_o3_g = canRxData_0_SYNC1_ID.uint8_T_info[1];
        rtb_SFunction_o4_j = canRxData_0_SYNC1_ID.uint8_T_info[2];
        rtb_SFunction_o5_f = canRxData_0_SYNC1_ID.uint8_T_info[3];
        rtb_SFunction_o6_g = canRxData_0_SYNC1_ID.uint8_T_info[4];
        rtb_SFunction_o7_k = canRxData_0_SYNC1_ID.uint8_T_info[5];
        rtb_SFunction_o8_n = canRxData_0_SYNC1_ID.uint8_T_info[6];
        rtb_SFunction_o9_b1 = canRxData_0_SYNC1_ID.uint8_T_info[7];
      }

      /* Outputs for Enabled SubSystem: '<S44>/Enabled Subsystem' */
      EnabledSubsystem(rtb_SFunction_o1_h, rtb_SFunction_o2_i,
                       rtb_SFunction_o3_g, rtb_SFunction_o4_j,
                       rtb_SFunction_o5_f, rtb_SFunction_o6_g,
                       rtb_SFunction_o7_k, rtb_SFunction_o8_n,
                       rtb_SFunction_o9_b1, &rtB.EnabledSubsystem_c);

      /* End of Outputs for SubSystem: '<S44>/Enabled Subsystem' */

      /* Outputs for Triggered SubSystem: '<S24>/Subsystem' incorporates:
       *  TriggerPort: '<S45>/Trigger'
       */
      zcEvent = rt_I32ZCFcn(RISING_ZERO_CROSSING,
                            &rtPrevZCSigState.Subsystem_Trig_ZCE_h,
                            (rtb_SFunction_o1_h));
      if (zcEvent != NO_ZCEVENT) {
        /* DataStoreWrite: '<S45>/Data Store Write' */
        rtDWork.SlotTime = rtB.EnabledSubsystem_c.In1;

        /* DataStoreWrite: '<S45>/Data Store Write1' incorporates:
         *  Constant: '<S45>/Constant'
         */
        rtDWork.Local_Ticks = ((uint8_T)2U);

        /* DataStoreWrite: '<S45>/Data Store Write2' incorporates:
         *  Constant: '<S45>/Constant1'
         */
        rtDWork.slot = ((uint8_T)1U);
      }

      /* End of Outputs for SubSystem: '<S24>/Subsystem' */
    } else if (rtDWork.SYNC1_RX_MODE) {
      rtDWork.SYNC1_RX_MODE = false;
    }

    /* End of Outputs for SubSystem: '<S11>/SYNC1_RX' */

    /* Logic: '<S11>/AND' */
    boolCan = (rtb_Equal14 && rtb_Level2MfileSFunction_j);

    /* Outputs for Triggered SubSystem: '<S11>/SYNC1_TX' incorporates:
     *  TriggerPort: '<S25>/Trigger'
     */
    if (boolCan && (rtPrevZCSigState.SYNC1_TX_Trig_ZCE != POS_ZCSIG)) {
      /* DataStoreRead: '<S25>/Data Store Read1' */
      testCounter = rtDWork.testCount;

      /* Sum: '<S25>/Add' incorporates:
       *  Constant: '<S25>/Constant7'
       *  DataStoreWrite: '<S25>/Data Store Write'
       */
      rtDWork.testCount = (uint16_T)((uint32_T)testCounter + ((uint16_T)1U));

      /* DataStoreRead: '<S25>/Data Store Read' */
      rtB.DataStoreRead_n = rtDWork.SlotTime;

      /* Update for M-S-Function: '<S47>/S-Function' incorporates:
       *  Constant: '<S11>/Constant10'
       *  Constant: '<S25>/Constant'
       *  Constant: '<S25>/Constant1'
       *  Constant: '<S25>/Constant2'
       *  Constant: '<S25>/Constant3'
       *  Constant: '<S25>/Constant4'
       *  Constant: '<S25>/Constant5'
       *  Constant: '<S25>/Constant6'
       */
      {
        /* prepare the data */
        canTxData.uint8_T_info[0] = rtB.DataStoreRead_n;
        canTxData.uint8_T_info[1] = ((uint8_T)1U);
        canTxData.uint8_T_info[2] = ((uint8_T)0U);
        canTxData.uint8_T_info[3] = ((uint8_T)0U);
        canTxData.uint8_T_info[4] = ((uint8_T)0U);
        canTxData.uint8_T_info[5] = ((uint8_T)0U);
        canTxData.uint8_T_info[6] = ((uint8_T)0U);
        canTxData.uint8_T_info[7] = ((uint8_T)1U);

        /* send the data */
        CanTransmit(0, SYNC1_ID, 8, &canTxData.uint8_T_info[0]);
      }
    }

    rtPrevZCSigState.SYNC1_TX_Trig_ZCE = boolCan;

    /* End of Outputs for SubSystem: '<S11>/SYNC1_TX' */

    /* M-S-Function: '<S8>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S11>/Constant27'
     *  RelationalOperator: '<S11>/Equal19'
     */
    rtb_Level2MfileSFunction_j = (slotSelected == 10.0);

    /* Logic: '<S11>/OR1' incorporates:
     *  Constant: '<S11>/Constant4'
     *  RelationalOperator: '<S11>/Equal4'
     */
    rtb_OR1 = ((slotSelected == 5.0) || rtb_Level2MfileSFunction_j);

    /* Outputs for Triggered SubSystem: '<S11>/Slot 5 execution' incorporates:
     *  TriggerPort: '<S26>/Trigger'
     */
    if (rtb_OR1 && (rtPrevZCSigState.Slot5execution_Trig_ZCE != POS_ZCSIG)) {
      /* Gain: '<S48>/Gain' incorporates:
       *  Constant: '<S48>/Constant2'
       *  DataStoreWrite: '<S48>/Data Store Write2'
       */
      rtDWork.requestedAngle = 0.015001500150015003 * desiredAngle;

      /* M-S-Function: '<S50>/Level-2 M-file S-Function' */
      /* determine if the counter needs a reset  */
      if (rtB.DataTypeConversion > 0) {
        QuadEncResetCounter(QUADENC_TIM3_PA6_PB5);
      }

      /* read counter from the quadrature encoder module */
      rtb_Level2MfileSFunction_o = QuadEncGetCounter(QUADENC_TIM3_PA6_PB5);

      /* DataStoreWrite: '<S48>/Data Store Write' */
      rtDWork.encoderPosition = rtb_Level2MfileSFunction_o;

      /* M-S-Function: '<S51>/Level-2 M-file S-Function' */
      /* read from analog input for filtered inputs*/
      analogPot1 = AninGet(ANIN_PORTF_PIN7,0);

      /* DataStoreWrite: '<S48>/Data Store Write1' */
      rtDWork.potentiometer1 = analogPot1;

      /* M-S-Function: '<S52>/Level-2 M-file S-Function' */
      /* read from analog input for filtered inputs*/
      analogPot2 = AninGet(ANIN_PORTF_PIN8,0);

      /* DataStoreWrite: '<S48>/Data Store Write3' */
      rtDWork.potentiometer2 = analogPot2;

      /* DataTypeConversion: '<S50>/Data Type Conversion' incorporates:
       *  RelationalOperator: '<S53>/FixPt Relational Operator'
       *  UnitDelay: '<S53>/Delay Input1'
       *
       * Block description for '<S53>/Delay Input1':
       *
       *  Store in Global RAM
       */
      rtB.DataTypeConversion = (rtDWork.DelayInput1_DSTATE < 0.0);

      /* DataStoreRead: '<S26>/Data Store Read' */
      rtB.DataStoreRead = rtDWork.pwmMotor;

      /* DataStoreRead: '<S26>/Data Store Read1' */
      rtB.DataStoreRead1 = rtDWork.cwMotor;

      /* DataStoreRead: '<S26>/Data Store Read3' */
      rtB.DataStoreRead3_n = rtDWork.ccwMotor;

      /* Update for UnitDelay: '<S53>/Delay Input1'
       *
       * Block description for '<S53>/Delay Input1':
       *
       *  Store in Global RAM
       */
      rtDWork.DelayInput1_DSTATE = 0.0;

      /* Update for M-S-Function: '<S56>/Level-2 M-file S-Function' */
      /* set the new duty cycle */
      PwmoutSet(PWMOUT_TIM14_PIN_PF9, rtB.DataStoreRead);

      /* Update for M-S-Function: '<S54>/Level-2 M-file S-Function' */
      /* update digital output */
      if (rtB.DataStoreRead1 == 0) {
        DigoutSet(DIGOUT_PORTE_PIN5, DIGOUT_LOW);
      } else {
        DigoutSet(DIGOUT_PORTE_PIN5, DIGOUT_HIGH);
      }

      /* Update for M-S-Function: '<S55>/Level-2 M-file S-Function' */
      /* update digital output */
      if (rtB.DataStoreRead3_n == 0) {
        DigoutSet(DIGOUT_PORTE_PIN6, DIGOUT_LOW);
      } else {
        DigoutSet(DIGOUT_PORTE_PIN6, DIGOUT_HIGH);
      }
    }

    rtPrevZCSigState.Slot5execution_Trig_ZCE = rtb_OR1;

    /* End of Outputs for SubSystem: '<S11>/Slot 5 execution' */

    /* M-S-Function: '<S8>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S11>/Constant9'
     *  RelationalOperator: '<S11>/Equal9'
     */
    rtb_Level2MfileSFunction_j = (slotSelected == 10.0);

    /* Logic: '<S11>/OR' incorporates:
     *  Constant: '<S11>/Constant23'
     *  RelationalOperator: '<S11>/Equal18'
     */
    rtb_Equal14 = ((5.0 == slotSelected) || rtb_Level2MfileSFunction_j);

    /* Outputs for Triggered SubSystem: '<S11>/Subsystem' incorporates:
     *  TriggerPort: '<S27>/Trigger'
     */
    if (rtb_Equal14 && (rtPrevZCSigState.Subsystem_Trig_ZCE_g != POS_ZCSIG)) {
      /* DataStoreRead: '<S27>/Data Store Read' */
      reqAngle = rtDWork.requestedAngle;

      /* Product: '<S113>/Product' incorporates:
       *  Constant: '<S59>/TrailUnitWheelbase'
       *  Trigonometry: '<S113>/tan '
       */
      rtb_DeadZone = tan(reqAngle) * rtConstB.Abs / 4.0;

      /* Constant: '<S27>/Constant3' */
      t2Angle = trailer2TestAngle;

      /* Constant: '<S27>/Constant2' */
      t1Angle = trailer1TestAngle;

      /* Sum: '<S59>/Sum2' */
      Gamma2 = t1Angle - t2Angle;

      /* Trigonometry: '<S111>/tan 1' incorporates:
       *  DataTypeConversion: '<S111>/Cast'
       *  Trigonometry: '<S112>/tan '
       */
      rtb_IntegralGain = sin(Gamma2);

      /* Trigonometry: '<S111>/tan 2' incorporates:
       *  DataTypeConversion: '<S111>/Cast'
       *  Trigonometry: '<S112>/tan 1'
       */
      rtb_Integrator_tmp = cos(Gamma2);

      /* Sum: '<S111>/Add' incorporates:
       *  Constant: '<S27>/Constant'
       *  Constant: '<S59>/TrailUnitWheelbase'
       *  Product: '<S111>/Product1'
       *  Product: '<S111>/Product2'
       *  Trigonometry: '<S111>/tan 1'
       *  Trigonometry: '<S111>/tan 2'
       */
      rtb_Integrator = rtb_DeadZone * 4.0 * rtb_IntegralGain +
        rtb_Integrator_tmp * 1.3;

      /* Sum: '<S59>/Sum1' incorporates:
       *  Constant: '<S27>/Constant1'
       */
      Gamma1 = 0.0 - t1Angle;

      /* Product: '<S112>/Product' incorporates:
       *  Constant: '<S27>/Constant'
       *  Constant: '<S59>/RearAxleToHitch'
       *  Constant: '<S59>/TrailUnitWheelbase'
       *  Gain: '<S112>/Gain'
       *  Product: '<S112>/Product1'
       *  Product: '<S112>/Product3'
       *  Sum: '<S112>/Add'
       */
      rtb_IntegralGain = (1.3 / 1.0 * rtb_IntegralGain * (-1.0) +
                          rtb_Integrator_tmp / 1.0 * 4.0 * rtb_DeadZone) *
        (rtConstB.signV2 * rtConstB.signL0b);

      /* Trigonometry: '<S116>/tan ' incorporates:
       *  DataTypeConversion: '<S116>/Cast'
       *  Trigonometry: '<S115>/tan 1'
       */
      rtb_DeadZone = sin(Gamma1);

      /* Trigonometry: '<S116>/tan 1' incorporates:
       *  DataTypeConversion: '<S116>/Cast'
       *  Trigonometry: '<S115>/tan 2'
       */
      rtb_Integrator_tmp = cos(Gamma1);

      /* Signum: '<S116>/Sign' */
      if (rtb_Integrator < 0.0) {
        tmp = -1.0;
      } else {
        tmp = (rtb_Integrator > 0.0);
      }

      /* Trigonometry: '<S114>/tan 1' incorporates:
       *  Constant: '<S59>/RearAxleToHitch'
       *  Constant: '<S59>/TractorWheelbase'
       *  Constant: '<S59>/TrailUnitWheelbase'
       *  DataTypeConversion: '<S114>/Cast'
       *  Gain: '<S116>/Gain'
       *  Product: '<S114>/Product1'
       *  Product: '<S115>/Product1'
       *  Product: '<S115>/Product2'
       *  Product: '<S116>/Product'
       *  Product: '<S116>/Product1'
       *  Product: '<S116>/Product3'
       *  Signum: '<S116>/Sign'
       *  Sum: '<S115>/Add'
       *  Sum: '<S116>/Add'
       *  Trigonometry: '<S116>/tan '
       *  Trigonometry: '<S116>/tan 1'
       */
      delta12K = (real32_T)atan((real32_T)((rtb_Integrator / 1.0 * rtb_DeadZone *
        (-1.0) + rtb_Integrator_tmp / 1.0 * 4.0 * rtb_IntegralGain) * (tmp *
        rtConstB.signL0b_o) * 3.0 / (rtb_IntegralGain * 4.0 * rtb_DeadZone +
        rtb_Integrator_tmp * rtb_Integrator)));

      /* Gain: '<S58>/Gain2' incorporates:
       *  DataTypeConversion: '<S58>/Cast3'
       */
      steering = 45.6 * delta12K;

      /* Gain: '<S58>/Gain1' incorporates:
       *  DataStoreRead: '<S58>/Data Store Read'
       */
      position = (real_T)1474666883 * 1.4551915228366852E-11 * (real_T)
        rtDWork.encoderPosition;

      /* Sum: '<S58>/Sum' incorporates:
       *  Rounding: '<S58>/Round'
       *  Rounding: '<S58>/Round1'
       */
      control = floor(steering) - floor(position);

      /* Abs: '<S58>/Abs' */
      rtb_IntegralGain = fabs(control);

      /* Sum: '<S103>/Sum' incorporates:
       *  DiscreteIntegrator: '<S94>/Integrator'
       *  Gain: '<S99>/Proportional Gain'
       */
      rtb_DeadZone = propVal * rtb_IntegralGain + rtDWork.Integrator_DSTATE;

      /* Saturate: '<S101>/Saturation' */
      if (rtb_DeadZone > 300.0) {
        tmp = 300.0;
      } else if (rtb_DeadZone < 0.0) {
        tmp = 0.0;
      } else {
        tmp = rtb_DeadZone;
      }

      /* Sum: '<S58>/Add' incorporates:
       *  Constant: '<S58>/Motor dead zone'
       *  DataTypeConversion: '<S58>/Cast'
       *  Saturate: '<S101>/Saturation'
       */
      mospeed = (uint16_T)((uint32_T)((uint16_T)500U) + (uint16_T)tmp);

      /* DataStoreWrite: '<S27>/Data Store Write' */
      rtDWork.pwmMotor = mospeed;

      /* RelationalOperator: '<S58>/GreaterThan1' incorporates:
       *  Constant: '<S58>/Constant'
       */
      rtb_OR1 = (rtb_IntegralGain > controlWidth);

      /* DataTypeConversion: '<S58>/Cast1' incorporates:
       *  Constant: '<S58>/Constant1'
       *  RelationalOperator: '<S58>/GreaterThan'
       */
      cw = (control > 0.0);

      /* Logic: '<S58>/AND' incorporates:
       *  DataStoreWrite: '<S27>/Data Store Write1'
       */
      rtDWork.cwMotor = (rtb_OR1 && cw);

      /* Logic: '<S58>/NOT' */
      ccw = !cw;

      /* Logic: '<S58>/AND1' incorporates:
       *  DataStoreWrite: '<S27>/Data Store Write8'
       */
      rtDWork.ccwMotor = (rtb_OR1 && ccw);

      /* DeadZone: '<S87>/DeadZone' */
      if (rtb_DeadZone > 300.0) {
        rtb_DeadZone -= 300.0;
      } else if (rtb_DeadZone >= 0.0) {
        rtb_DeadZone = 0.0;
      } else {
        rtb_DeadZone -= 0.0;
      }

      /* End of DeadZone: '<S87>/DeadZone' */

      /* Gain: '<S91>/Integral Gain' */
      rtb_IntegralGain *= intVal;

      /* Switch: '<S85>/Switch1' incorporates:
       *  Constant: '<S85>/Clamping_zero'
       *  Constant: '<S85>/Constant'
       *  Constant: '<S85>/Constant2'
       *  RelationalOperator: '<S85>/fix for DT propagation issue'
       */
      if (rtb_DeadZone > 0.0) {
        tmp_0 = 1;
      } else {
        tmp_0 = (-1);
      }

      /* Switch: '<S85>/Switch2' incorporates:
       *  Constant: '<S85>/Clamping_zero'
       *  Constant: '<S85>/Constant3'
       *  Constant: '<S85>/Constant4'
       *  RelationalOperator: '<S85>/fix for DT propagation issue1'
       */
      if (rtb_IntegralGain > 0.0) {
        tmp_1 = 1;
      } else {
        tmp_1 = (-1);
      }

      /* Switch: '<S85>/Switch' incorporates:
       *  Constant: '<S85>/Clamping_zero'
       *  Constant: '<S85>/Constant1'
       *  Logic: '<S85>/AND3'
       *  RelationalOperator: '<S85>/Equal1'
       *  RelationalOperator: '<S85>/Relational Operator'
       *  Switch: '<S85>/Switch1'
       *  Switch: '<S85>/Switch2'
       */
      if ((0.0 != rtb_DeadZone) && (tmp_0 == tmp_1)) {
        rtb_IntegralGain = 0.0;
      }

      /* Update for DiscreteIntegrator: '<S94>/Integrator' incorporates:
       *  Switch: '<S85>/Switch'
       */
      rtDWork.Integrator_DSTATE += 1.0 * rtb_IntegralGain;
      if (rtDWork.Integrator_DSTATE >= 100.0) {
        rtDWork.Integrator_DSTATE = 100.0;
      } else if (rtDWork.Integrator_DSTATE <= 0.0) {
        rtDWork.Integrator_DSTATE = 0.0;
      }

      /* End of Update for DiscreteIntegrator: '<S94>/Integrator' */
    }

    rtPrevZCSigState.Subsystem_Trig_ZCE_g = rtb_Equal14;

    /* End of Outputs for SubSystem: '<S11>/Subsystem' */

    /* RelationalOperator: '<S11>/Equal6' incorporates:
     *  Constant: '<S11>/Constant7'
     */
    rtb_Equal14 = (slotSelected == 6.0);

    /* M-S-Function: '<S8>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S11>/Constant6'
     *  DataStoreRead: '<S1>/Data Store Read'
     *  RelationalOperator: '<S11>/Equal5'
     */
    rtb_Level2MfileSFunction_j = (rtDWork.nodeRole == 2.0);

    /* Logic: '<S11>/AND9' incorporates:
     *  Logic: '<S11>/NOT4'
     */
    AND9 = (rtb_Equal14 && (!rtb_Level2MfileSFunction_j));

    /* Outputs for Enabled SubSystem: '<S11>/TRCK1_ID2_RX' */
    /* Constant: '<S11>/Constant5' */
    MMBS1_RX(AND9, TRCK1_ID2, &rtB.TRCK1_ID2_RX, &rtDWork.TRCK1_ID2_RX);

    /* End of Outputs for SubSystem: '<S11>/TRCK1_ID2_RX' */

    /* Logic: '<S11>/AND8' */
    rtb_AND8 = (rtb_Equal14 && rtb_Level2MfileSFunction_j);

    /* Outputs for Triggered SubSystem: '<S11>/TRCK1_ID2_TX' */
    /* Constant: '<S11>/Constant5' */
    TRCK1_ID2_TX(rtb_AND8, TRCK1_ID2, &rtDWork.Local_Ticks,
                 &rtDWork.potentiometer1, &rtDWork.potentiometer2,
                 &rtB.TRCK1_ID2_TX_f, &rtPrevZCSigState.TRCK1_ID2_TX_f);

    /* End of Outputs for SubSystem: '<S11>/TRCK1_ID2_TX' */

    /* RelationalOperator: '<S11>/Equal14' incorporates:
     *  Constant: '<S11>/Constant20'
     */
    rtb_Equal14 = (slotSelected == 7.0);

    /* M-S-Function: '<S8>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S11>/Constant19'
     *  DataStoreRead: '<S1>/Data Store Read'
     *  RelationalOperator: '<S11>/Equal7'
     */
    rtb_Level2MfileSFunction_j = (rtDWork.nodeRole == 3.0);

    /* Logic: '<S11>/AND10' */
    rtb_AND10 = (rtb_Equal14 && rtb_Level2MfileSFunction_j);

    /* Outputs for Triggered SubSystem: '<S11>/TRCK1_ID3_TX' */
    /* Constant: '<S11>/Constant26' */
    TRCK1_ID2_TX(rtb_AND10, TRCK1_ID3, &rtDWork.Local_Ticks,
                 &rtDWork.potentiometer1, &rtDWork.potentiometer2,
                 &rtB.TRCK1_ID3_TX, &rtPrevZCSigState.TRCK1_ID3_TX);

    /* End of Outputs for SubSystem: '<S11>/TRCK1_ID3_TX' */

    /* RelationalOperator: '<S11>/Equal13' incorporates:
     *  Constant: '<S11>/Constant17'
     */
    rtb_Equal16 = (slotSelected == 4.0);

    /* RelationalOperator: '<S11>/Equal3' incorporates:
     *  Constant: '<S11>/Constant16'
     *  DataStoreRead: '<S1>/Data Store Read'
     */
    rtb_OR1 = (rtDWork.nodeRole == 1.0);

    /* Logic: '<S11>/AND7' incorporates:
     *  Logic: '<S11>/NOT3'
     */
    AND7 = (rtb_Equal16 && (!rtb_OR1));

    /* Outputs for Enabled SubSystem: '<S11>/TRCK1_RX' */
    /* Constant: '<S11>/Constant3' */
    MMBS1_RX(AND7, TRCK1_ID1, &rtB.TRCK1_RX, &rtDWork.TRCK1_RX);

    /* End of Outputs for SubSystem: '<S11>/TRCK1_RX' */

    /* Logic: '<S11>/AND6' */
    rtb_AND6 = (rtb_Equal16 && rtb_OR1);

    /* Outputs for Triggered SubSystem: '<S11>/TRCK1_TX' */
    /* Constant: '<S11>/Constant3' */
    TRCK1_ID2_TX(rtb_AND6, TRCK1_ID1, &rtDWork.Local_Ticks,
                 &rtDWork.potentiometer1, &rtDWork.potentiometer2, &rtB.TRCK1_TX,
                 &rtPrevZCSigState.TRCK1_TX);

    /* End of Outputs for SubSystem: '<S11>/TRCK1_TX' */

    /* Outputs for Enabled SubSystem: '<S11>/TRCK_ID3_RX' incorporates:
     *  EnablePort: '<S33>/Enable'
     */
    /* Logic: '<S11>/AND11' incorporates:
     *  Logic: '<S11>/NOT5'
     */
    if (rtb_Equal14 && (!rtb_Level2MfileSFunction_j)) {
      rtDWork.TRCK_ID3_RX_MODE = true;

      /* M-S-Function: '<S142>/S-Function' incorporates:
       *  Constant: '<S11>/Constant26'
       */

      /* read the message data and store the new parameter */
      rtb_SFunction_o1_k1 = CanIoGetMessage(0, TRCK1_ID3, NULL,
        &canRxData_0_TRCK1_ID3.uint8_T_info[0], NULL);

      /* process the message data */
      if (rtb_SFunction_o1_k1 > 0) {
        /* read the data */
        rtb_SFunction_o2_j = canRxData_0_TRCK1_ID3.uint8_T_info[0];
        rtb_SFunction_o3_a = canRxData_0_TRCK1_ID3.uint8_T_info[1];
        rtb_SFunction_o4_i = canRxData_0_TRCK1_ID3.uint8_T_info[2];
        rtb_SFunction_o5_k = canRxData_0_TRCK1_ID3.uint8_T_info[3];
        rtb_SFunction_o6_c = canRxData_0_TRCK1_ID3.uint8_T_info[4];
        rtb_SFunction_o7_d = canRxData_0_TRCK1_ID3.uint8_T_info[5];
        rtb_SFunction_o8_h = canRxData_0_TRCK1_ID3.uint8_T_info[6];
        rtb_SFunction_o9_b = canRxData_0_TRCK1_ID3.uint8_T_info[7];
      }

      /* Outputs for Enabled SubSystem: '<S142>/Enabled Subsystem' */
      EnabledSubsystem(rtb_SFunction_o1_k1, rtb_SFunction_o2_j,
                       rtb_SFunction_o3_a, rtb_SFunction_o4_i,
                       rtb_SFunction_o5_k, rtb_SFunction_o6_c,
                       rtb_SFunction_o7_d, rtb_SFunction_o8_h,
                       rtb_SFunction_o9_b, &rtB.EnabledSubsystem_b);

      /* End of Outputs for SubSystem: '<S142>/Enabled Subsystem' */
    } else if (rtDWork.TRCK_ID3_RX_MODE) {
      rtDWork.TRCK_ID3_RX_MODE = false;
    }

    /* End of Logic: '<S11>/AND11' */
    /* End of Outputs for SubSystem: '<S11>/TRCK_ID3_RX' */

    /* RelationalOperator: '<S11>/Equal15' incorporates:
     *  Constant: '<S11>/Constant22'
     */
    rtb_OR1 = (slotSelected == 8.0);

    /* RelationalOperator: '<S11>/Equal8' incorporates:
     *  Constant: '<S11>/Constant21'
     *  DataStoreRead: '<S1>/Data Store Read'
     */
    rtb_Equal16 = (rtDWork.nodeRole == 4.0);

    /* Logic: '<S11>/AND13' incorporates:
     *  Logic: '<S11>/NOT6'
     */
    rtb_AND13 = (rtb_OR1 && (!rtb_Equal16));

    /* Outputs for Enabled SubSystem: '<S11>/TRLS_ID4_RX' incorporates:
     *  EnablePort: '<S34>/Enable'
     */
    if (rtb_AND13) {
      rtDWork.TRLS_ID4_RX_MODE = true;

      /* M-S-Function: '<S145>/S-Function' incorporates:
       *  Constant: '<S11>/Constant8'
       */

      /* read the message data and store the new parameter */
      rtb_SFunction_o1_k = CanIoGetMessage(0, TRLS1_ID4, NULL,
        &canRxData_0_TRLS1_ID4.uint8_T_info[0], NULL);

      /* process the message data */
      if (rtb_SFunction_o1_k > 0) {
        /* read the data */
        rtb_SFunction_o2_e = canRxData_0_TRLS1_ID4.uint8_T_info[0];
        rtb_SFunction_o3_p = canRxData_0_TRLS1_ID4.uint8_T_info[1];
        rtb_SFunction_o4_c = canRxData_0_TRLS1_ID4.uint8_T_info[2];
        rtb_SFunction_o5_c = canRxData_0_TRLS1_ID4.uint8_T_info[3];
        rtb_SFunction_o6_e = canRxData_0_TRLS1_ID4.uint8_T_info[4];
        rtb_SFunction_o7_l = canRxData_0_TRLS1_ID4.uint8_T_info[5];
        rtb_SFunction_o8_f = canRxData_0_TRLS1_ID4.uint8_T_info[6];
        rtb_SFunction_o9_h = canRxData_0_TRLS1_ID4.uint8_T_info[7];
      }

      /* Outputs for Enabled SubSystem: '<S145>/Enabled Subsystem' */
      EnabledSubsystem(rtb_SFunction_o1_k, rtb_SFunction_o2_e,
                       rtb_SFunction_o3_p, rtb_SFunction_o4_c,
                       rtb_SFunction_o5_c, rtb_SFunction_o6_e,
                       rtb_SFunction_o7_l, rtb_SFunction_o8_f,
                       rtb_SFunction_o9_h, &rtB.EnabledSubsystem_g);

      /* End of Outputs for SubSystem: '<S145>/Enabled Subsystem' */

      /* DataTypeConversion: '<S144>/Cast' */
      rtb_Cast_bt = rtB.EnabledSubsystem_g.In1;

      /* Outputs for Atomic SubSystem: '<S144>/Bit Shift' */
      BitShift_j(rtb_Cast_bt, &rtB.BitShift_jm);

      /* End of Outputs for SubSystem: '<S144>/Bit Shift' */
    } else if (rtDWork.TRLS_ID4_RX_MODE) {
      rtDWork.TRLS_ID4_RX_MODE = false;
    }

    /* End of Outputs for SubSystem: '<S11>/TRLS_ID4_RX' */

    /* Logic: '<S11>/AND12' */
    rtb_AND12 = (rtb_OR1 && rtb_Equal16);

    /* Outputs for Triggered SubSystem: '<S11>/TRLS_ID4_TX' */
    /* Constant: '<S11>/Constant8' */
    TRCK1_ID2_TX(rtb_AND12, TRLS1_ID4, &rtDWork.Local_Ticks,
                 &rtDWork.potentiometer1, &rtDWork.potentiometer2,
                 &rtB.TRLS_ID4_TX, &rtPrevZCSigState.TRLS_ID4_TX);

    /* End of Outputs for SubSystem: '<S11>/TRLS_ID4_TX' */

    /* RelationalOperator: '<S11>/Equal17' incorporates:
     *  Constant: '<S11>/Constant25'
     */
    rtb_OR1 = (slotSelected == 9.0);

    /* RelationalOperator: '<S11>/Equal16' incorporates:
     *  Constant: '<S11>/Constant24'
     *  DataStoreRead: '<S1>/Data Store Read'
     */
    rtb_Equal16 = (rtDWork.nodeRole == 5.0);

    /* Logic: '<S11>/AND15' incorporates:
     *  Logic: '<S11>/NOT7'
     */
    rtb_AND15 = (rtb_OR1 && (!rtb_Equal16));

    /* Outputs for Enabled SubSystem: '<S11>/TRLS_ID5_RX' incorporates:
     *  EnablePort: '<S36>/Enable'
     */
    if (rtb_AND15) {
      rtDWork.TRLS_ID5_RX_MODE = true;

      /* M-S-Function: '<S157>/S-Function' incorporates:
       *  Constant: '<S11>/Constant18'
       */

      /* read the message data and store the new parameter */
      rtb_SFunction_o1_n = CanIoGetMessage(0, TRLS1_ID5, NULL,
        &canRxData_0_TRLS1_ID5.uint8_T_info[0], NULL);

      /* process the message data */
      if (rtb_SFunction_o1_n > 0) {
        /* read the data */
        rtb_SFunction_o2_l = canRxData_0_TRLS1_ID5.uint8_T_info[0];
        rtb_SFunction_o3_m = canRxData_0_TRLS1_ID5.uint8_T_info[1];
        rtb_SFunction_o4_b = canRxData_0_TRLS1_ID5.uint8_T_info[2];
        rtb_SFunction_o5_o = canRxData_0_TRLS1_ID5.uint8_T_info[3];
        rtb_SFunction_o6_i = canRxData_0_TRLS1_ID5.uint8_T_info[4];
        rtb_SFunction_o7_f = canRxData_0_TRLS1_ID5.uint8_T_info[5];
        rtb_SFunction_o8_p = canRxData_0_TRLS1_ID5.uint8_T_info[6];
        rtb_SFunction_o9_l = canRxData_0_TRLS1_ID5.uint8_T_info[7];
      }

      /* Outputs for Enabled SubSystem: '<S157>/Enabled Subsystem' */
      EnabledSubsystem(rtb_SFunction_o1_n, rtb_SFunction_o2_l,
                       rtb_SFunction_o3_m, rtb_SFunction_o4_b,
                       rtb_SFunction_o5_o, rtb_SFunction_o6_i,
                       rtb_SFunction_o7_f, rtb_SFunction_o8_p,
                       rtb_SFunction_o9_l, &rtB.EnabledSubsystem_e);

      /* End of Outputs for SubSystem: '<S157>/Enabled Subsystem' */

      /* DataTypeConversion: '<S156>/Cast' */
      rtb_Cast_g1 = rtB.EnabledSubsystem_e.In1;

      /* Outputs for Atomic SubSystem: '<S156>/Bit Shift' */
      BitShift_j(rtb_Cast_g1, &rtB.BitShift_c);

      /* End of Outputs for SubSystem: '<S156>/Bit Shift' */
    } else if (rtDWork.TRLS_ID5_RX_MODE) {
      rtDWork.TRLS_ID5_RX_MODE = false;
    }

    /* End of Outputs for SubSystem: '<S11>/TRLS_ID5_RX' */

    /* Logic: '<S11>/AND14' */
    rtb_OR1 = (rtb_OR1 && rtb_Equal16);

    /* Outputs for Triggered SubSystem: '<S11>/TRLS_ID5_TX' incorporates:
     *  TriggerPort: '<S37>/Trigger'
     */
    if (rtb_OR1 && (rtPrevZCSigState.TRLS_ID5_TX_Trig_ZCE != POS_ZCSIG)) {
      /* DataStoreRead: '<S37>/Data Store Read3' */
      rtB.DataStoreRead3 = rtDWork.Local_Ticks;

      /* Outputs for Atomic SubSystem: '<S162>/Bit Shift' */
      /* DataStoreRead: '<S37>/Data Store Read2' */
      BitShift(rtDWork.potentiometer2, &rtB.BitShift_g);

      /* End of Outputs for SubSystem: '<S162>/Bit Shift' */

      /* DataTypeConversion: '<S162>/Cast' */
      rtB.Cast = (uint8_T)rtB.BitShift_g.y;

      /* DataTypeConversion: '<S162>/Cast1' incorporates:
       *  DataStoreRead: '<S37>/Data Store Read2'
       */
      rtB.Cast1 = (uint8_T)rtDWork.potentiometer2;

      /* Outputs for Atomic SubSystem: '<S163>/Bit Shift' */
      /* DataStoreRead: '<S37>/Data Store Read1' */
      BitShift(rtDWork.potentiometer1, &rtB.BitShift_gu);

      /* End of Outputs for SubSystem: '<S163>/Bit Shift' */

      /* DataTypeConversion: '<S163>/Cast' */
      rtB.Cast_f = (uint8_T)rtB.BitShift_gu.y;

      /* DataTypeConversion: '<S163>/Cast1' incorporates:
       *  DataStoreRead: '<S37>/Data Store Read1'
       */
      rtB.Cast1_m = (uint8_T)rtDWork.potentiometer1;

      /* Update for M-S-Function: '<S161>/S-Function' incorporates:
       *  Constant: '<S11>/Constant18'
       */
      {
        /* prepare the data */
        canTxData.uint8_T_info[0] = rtB.Cast_f;
        canTxData.uint8_T_info[1] = rtB.Cast1_m;
        canTxData.uint8_T_info[2] = rtB.Cast;
        canTxData.uint8_T_info[3] = rtB.Cast1;
        canTxData.uint8_T_info[4] = rtB.DataStoreRead3;

        /* send the data */
        CanTransmit(0, TRLS1_ID5, 5, &canTxData.uint8_T_info[0]);
      }
    }

    rtPrevZCSigState.TRLS_ID5_TX_Trig_ZCE = rtb_OR1;

    /* End of Outputs for SubSystem: '<S11>/TRLS_ID5_TX' */
  } else if (rtDWork.Messageselector_MODE) {
    /* Disable for Enabled SubSystem: '<S11>/MMBS1_RX' */
    if (rtDWork.MMBS1_RX_j.MMBS1_RX_MODE) {
      /* Constant: '<S11>/Constant12' */
      MMBS1_RX_Disable(&rtDWork.MMBS1_RX_j);
    }

    /* End of Disable for SubSystem: '<S11>/MMBS1_RX' */

    /* Disable for Triggered SubSystem: '<S11>/MMBS1_TX' */
    /* Constant: '<S11>/Constant12' */
    /* Disable for Enabled SubSystem: '<S11>/SSTM1_RX' */
    if (rtDWork.SSTM1_RX.MMBS1_RX_MODE) {
      /* Constant: '<S11>/Constant14' */
      MMBS1_RX_Disable(&rtDWork.SSTM1_RX);
    }

    /* End of Disable for SubSystem: '<S11>/SSTM1_RX' */

    /* Disable for Triggered SubSystem: '<S11>/SSTM1_TX' */
    /* Constant: '<S11>/Constant14' */
    /* Disable for Enabled SubSystem: '<S11>/SYNC1_RX' */
    if (rtDWork.SYNC1_RX_MODE) {
      rtDWork.SYNC1_RX_MODE = false;
    }

    /* End of Disable for SubSystem: '<S11>/SYNC1_RX' */
    /* Disable for Enabled SubSystem: '<S11>/TRCK1_ID2_RX' */
    if (rtDWork.TRCK1_ID2_RX.MMBS1_RX_MODE) {
      /* Constant: '<S11>/Constant5' */
      MMBS1_RX_Disable(&rtDWork.TRCK1_ID2_RX);
    }

    /* End of Disable for SubSystem: '<S11>/TRCK1_ID2_RX' */

    /* Disable for Triggered SubSystem: '<S11>/TRCK1_ID2_TX' */
    /* Constant: '<S11>/Constant5' */
    /* Disable for Triggered SubSystem: '<S11>/TRCK1_ID3_TX' */
    /* Constant: '<S11>/Constant26' */
    /* Disable for Enabled SubSystem: '<S11>/TRCK1_RX' */
    if (rtDWork.TRCK1_RX.MMBS1_RX_MODE) {
      /* Constant: '<S11>/Constant3' */
      MMBS1_RX_Disable(&rtDWork.TRCK1_RX);
    }

    /* End of Disable for SubSystem: '<S11>/TRCK1_RX' */

    /* Disable for Triggered SubSystem: '<S11>/TRCK1_TX' */
    /* Constant: '<S11>/Constant3' */
    /* Disable for Enabled SubSystem: '<S11>/TRCK_ID3_RX' */
    if (rtDWork.TRCK_ID3_RX_MODE) {
      rtDWork.TRCK_ID3_RX_MODE = false;
    }

    /* End of Disable for SubSystem: '<S11>/TRCK_ID3_RX' */

    /* Disable for Enabled SubSystem: '<S11>/TRLS_ID4_RX' */
    if (rtDWork.TRLS_ID4_RX_MODE) {
      rtDWork.TRLS_ID4_RX_MODE = false;
    }

    /* End of Disable for SubSystem: '<S11>/TRLS_ID4_RX' */

    /* Disable for Triggered SubSystem: '<S11>/TRLS_ID4_TX' */
    /* Constant: '<S11>/Constant8' */
    /* Disable for Enabled SubSystem: '<S11>/TRLS_ID5_RX' */
    if (rtDWork.TRLS_ID5_RX_MODE) {
      rtDWork.TRLS_ID5_RX_MODE = false;
    }

    /* End of Disable for SubSystem: '<S11>/TRLS_ID5_RX' */
    rtDWork.Messageselector_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S1>/Message selector' */

  /* Outputs for Triggered SubSystem: '<S13>/Subsystem' incorporates:
   *  TriggerPort: '<S168>/Trigger'
   */
  if (rtb_AND && (rtPrevZCSigState.Subsystem_Trig_ZCE != POS_ZCSIG)) {
    /* DataStoreWrite: '<S168>/Data Store Write1' incorporates:
     *  Constant: '<S168>/Constant1'
     */
    rtDWork.Local_Ticks = ((uint8_T)0U);

    /* DataStoreWrite: '<S168>/Data Store Write' incorporates:
     *  Constant: '<S168>/Constant3'
     */
    rtDWork.SlotTime = slotTime;
  }

  rtPrevZCSigState.Subsystem_Trig_ZCE = rtb_AND;

  /* End of Outputs for SubSystem: '<S13>/Subsystem' */

  /* Outputs for Enabled SubSystem: '<S13>/Subsystem2' incorporates:
   *  EnablePort: '<S169>/Enable'
   */
  /* Logic: '<S13>/AND1' incorporates:
   *  Constant: '<S13>/Constant1'
   *  DataStoreRead: '<S13>/Data Store Read'
   *  DataStoreRead: '<S13>/Data Store Read1'
   *  Logic: '<S13>/NOT'
   *  RelationalOperator: '<S13>/GreaterThan'
   */
  if ((rtDWork.nodeRole > ((uint8_T)3U)) && (!rtDWork.slaveClockOn)) {
    rtDWork.Subsystem2_MODE = true;

    /* M-S-Function: '<S170>/S-Function' incorporates:
     *  Constant: '<S169>/Constant10'
     */

    /* read the message data and store the new parameter */
    rtb_SFunction_o1 = CanIoGetMessage(0, SYNC1_ID, NULL,
      &canRxData_0_SYNC1_ID.uint8_T_info[0], NULL);

    /* process the message data */
    if (rtb_SFunction_o1 > 0) {
      /* read the data */
      rtb_SFunction_o2 = canRxData_0_SYNC1_ID.uint8_T_info[0];
      rtb_SFunction_o3 = canRxData_0_SYNC1_ID.uint8_T_info[1];
      rtb_SFunction_o4 = canRxData_0_SYNC1_ID.uint8_T_info[2];
      rtb_SFunction_o5 = canRxData_0_SYNC1_ID.uint8_T_info[3];
      rtb_SFunction_o6 = canRxData_0_SYNC1_ID.uint8_T_info[4];
      rtb_SFunction_o7 = canRxData_0_SYNC1_ID.uint8_T_info[5];
      rtb_SFunction_o8 = canRxData_0_SYNC1_ID.uint8_T_info[6];
      rtb_SFunction_o9 = canRxData_0_SYNC1_ID.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S170>/Enabled Subsystem' */
    EnabledSubsystem(rtb_SFunction_o1, rtb_SFunction_o2, rtb_SFunction_o3,
                     rtb_SFunction_o4, rtb_SFunction_o5, rtb_SFunction_o6,
                     rtb_SFunction_o7, rtb_SFunction_o8, rtb_SFunction_o9,
                     &rtB.EnabledSubsystem_i);

    /* End of Outputs for SubSystem: '<S170>/Enabled Subsystem' */

    /* Outputs for Triggered SubSystem: '<S169>/Subsystem1' incorporates:
     *  TriggerPort: '<S171>/Trigger'
     */
    zcEvent = rt_I32ZCFcn(RISING_ZERO_CROSSING,
                          &rtPrevZCSigState.Subsystem1_Trig_ZCE,
                          (rtb_SFunction_o1));
    if (zcEvent != NO_ZCEVENT) {
      /* DataStoreWrite: '<S171>/Data Store Write' */
      rtDWork.SlotTime = rtB.EnabledSubsystem_i.In1;

      /* DataStoreWrite: '<S171>/Data Store Write1' incorporates:
       *  Constant: '<S171>/Constant'
       */
      rtDWork.Local_Ticks = ((uint8_T)0U);

      /* DataStoreWrite: '<S171>/Data Store Write2' incorporates:
       *  Constant: '<S171>/Constant1'
       */
      rtDWork.slaveClockOn = true;

      /* DataStoreWrite: '<S171>/Data Store Write3' incorporates:
       *  Constant: '<S171>/Constant2'
       */
      rtDWork.slot = ((uint8_T)1U);
    }

    /* End of Outputs for SubSystem: '<S169>/Subsystem1' */
  } else if (rtDWork.Subsystem2_MODE) {
    rtDWork.Subsystem2_MODE = false;
  }

  /* End of Logic: '<S13>/AND1' */
  /* End of Outputs for SubSystem: '<S13>/Subsystem2' */

  /* M-S-Function: '<S6>/Level-2 M-file S-Function' */
  /* read from digital input */
  rtb_Level2MfileSFunction_j = DiginGet(DIGIN_PORTG_PIN12);

  /* Gain: '<S1>/Multiply' */
  rtb_Multiply = (uint8_T)(rtb_Level2MfileSFunction_j ? (int32_T)((uint32_T)
    ((uint8_T)128U) >> 7) : 0);

  /* M-S-Function: '<S7>/Level-2 M-file S-Function' */
  /* read from digital input */
  rtb_Level2MfileSFunction_j = DiginGet(DIGIN_PORTG_PIN15);

  /* Gain: '<S1>/Multiply1' */
  rtb_Multiply1 = (uint8_T)(rtb_Level2MfileSFunction_j ? (int32_T)((uint32_T)
    ((uint8_T)128U) >> 6) : 0);

  /* M-S-Function: '<S8>/Level-2 M-file S-Function' */
  /* read from digital input */
  rtb_Level2MfileSFunction_j = DiginGet(DIGIN_PORTA_PIN4);

  /* Sum: '<S1>/Add' incorporates:
   *  DataStoreWrite: '<S1>/Data Store Write'
   *  Gain: '<S1>/Multiply2'
   */
  rtDWork.nodeRole = (uint8_T)(((uint32_T)rtb_Multiply + rtb_Multiply1) +
    (uint32_T)(rtb_Level2MfileSFunction_j ? (int32_T)((uint32_T)((uint8_T)128U) >>
    5) : 0));

  /* M-S-Function: '<S173>/Level-2 M-file S-Function' */
  /* read the current CPU load */
  SI_CPUload = OsGetCpuLoad();

  /* M-S-Function: '<S174>/Level-2 M-file S-Function' */
  /* read the free heap size */
  SI_FreeHeap = OsGetFreeHeapSize();

  /* M-S-Function: '<S175>/Level-2 M-file S-Function' */
  /* read the task's free stack size */
  SI_FreeStack = OsGetTaskFreeStackSize("AppCtrlTask");
}

/* Model initialize function */
void HANcoder_E407_TTA_CombineModel_initialize(void)
{
  {
    /* user code (Start function Header) */
    uint8_t canResult1;
    tCanFilter canFilter1;

    /* user code (Start function Body) */

    /* initialize the CAN driver. */
    CanInit(64, 8);

    /* initialize the CAN I/O module for channel 1 */
    CanIoInit(0);

    /* initialize the timer module for output compare. */
    TimeoutInitModule(TIMEOUT_MODULE_TIM4, 1000000);

    /* register the callback handler */
    TimeoutRegisterCompareEventCallback(TIMEOUT_TIM4_PIN_PD12,
      TimeoutEventIRQ_TIMEOUT_TIM4_PIN_PD12);

    /* End of Start for S-Function (sfcn_timeout_event_irq): '<S4>/S-Function' */

    /* Start for Enabled SubSystem: '<S1>/Message selector'
     *
     * Block description for '<S1>/Message selector':
     *  Truck 1
     */
    /* Start for Enabled SubSystem: '<S11>/MMBS1_RX' */
    /* Constant: '<S11>/Constant12' */
    MMBS1_RX_Start(MMBS1_ID);

    /* End of Start for SubSystem: '<S11>/MMBS1_RX' */

    /* Start for Enabled SubSystem: '<S11>/SSTM1_RX' */
    /* Constant: '<S11>/Constant14' */
    MMBS1_RX_Start(SSTM1_ID);

    /* End of Start for SubSystem: '<S11>/SSTM1_RX' */

    /* Start for Enabled SubSystem: '<S11>/SYNC1_RX' */
    /* Start for M-S-Function: '<S44>/S-Function' incorporates:
     *  Constant: '<S11>/Constant10'
     */

    /* register a CAN storage buffer for the message with this ID */
    CanIoCreateMessageReceivedStorage(0, SYNC1_ID);

    /* End of Start for SubSystem: '<S11>/SYNC1_RX' */

    /* Start for Triggered SubSystem: '<S11>/Slot 5 execution' */
    /* Start for M-S-Function: '<S50>/Level-2 M-file S-Function' */

    /* configure the quadrature encoder module */
    QuadEncConfigure(QUADENC_TIM3_PA6_PB5, QUADENC_CFG_FLOATING);

    /* Start for M-S-Function: '<S51>/Level-2 M-file S-Function' */

    /* configure the analog input for filtered inputs */
    AninConfigure(ANIN_PORTF_PIN7,0);

    /* Start for M-S-Function: '<S52>/Level-2 M-file S-Function' */

    /* configure the analog input for filtered inputs */
    AninConfigure(ANIN_PORTF_PIN8,0);

    /* Start for M-S-Function: '<S54>/Level-2 M-file S-Function' */

    /* configure the digital output */
    DigoutConfigure(DIGOUT_PORTE_PIN5, DIGOUT_CFG_PUSHPULL);

    /* Start for M-S-Function: '<S55>/Level-2 M-file S-Function' */

    /* configure the digital output */
    DigoutConfigure(DIGOUT_PORTE_PIN6, DIGOUT_CFG_PUSHPULL);

    /* Start for S-Function (sfcn_pwmout_init): '<S57>/S-Function' */

    /* initialize the PWM module and register the callback handler */
    PwmoutInit(PWMOUT_MODULE_TIM14, 10253, PWMOUT_EDGE_ALIGNMENT);
    PwmoutRegisterPeriodCompleteCallback(PWMOUT_MODULE_TIM14,
      PwmoutIRQ_PWMOUT_MODULE_TIM14);

    /* configures channel 1 */
    PwmoutConfigure(PWMOUT_TIM14_PIN_PF9, PWMOUT_ACTIVE_HIGH,
                    PWMOUT_INVERTED_OUTPUT_OFF);

    /* End of Start for SubSystem: '<S11>/Slot 5 execution' */

    /* Start for Enabled SubSystem: '<S11>/TRCK1_ID2_RX' */
    /* Constant: '<S11>/Constant5' */
    MMBS1_RX_Start(TRCK1_ID2);

    /* End of Start for SubSystem: '<S11>/TRCK1_ID2_RX' */

    /* Start for Enabled SubSystem: '<S11>/TRCK1_RX' */
    /* Constant: '<S11>/Constant3' */
    MMBS1_RX_Start(TRCK1_ID1);

    /* End of Start for SubSystem: '<S11>/TRCK1_RX' */

    /* Start for Enabled SubSystem: '<S11>/TRCK_ID3_RX' */
    /* Start for M-S-Function: '<S142>/S-Function' incorporates:
     *  Constant: '<S11>/Constant26'
     */

    /* register a CAN storage buffer for the message with this ID */
    CanIoCreateMessageReceivedStorage(0, TRCK1_ID3);

    /* End of Start for SubSystem: '<S11>/TRCK_ID3_RX' */

    /* Start for Enabled SubSystem: '<S11>/TRLS_ID4_RX' */
    /* Start for M-S-Function: '<S145>/S-Function' incorporates:
     *  Constant: '<S11>/Constant8'
     */

    /* register a CAN storage buffer for the message with this ID */
    CanIoCreateMessageReceivedStorage(0, TRLS1_ID4);

    /* End of Start for SubSystem: '<S11>/TRLS_ID4_RX' */

    /* Start for Enabled SubSystem: '<S11>/TRLS_ID5_RX' */
    /* Start for M-S-Function: '<S157>/S-Function' incorporates:
     *  Constant: '<S11>/Constant18'
     */

    /* register a CAN storage buffer for the message with this ID */
    CanIoCreateMessageReceivedStorage(0, TRLS1_ID5);

    /* End of Start for SubSystem: '<S11>/TRLS_ID5_RX' */
    /* End of Start for SubSystem: '<S1>/Message selector' */

    /* Start for Enabled SubSystem: '<S13>/Subsystem2' */
    /* Start for M-S-Function: '<S170>/S-Function' incorporates:
     *  Constant: '<S169>/Constant10'
     */

    /* register a CAN storage buffer for the message with this ID */
    CanIoCreateMessageReceivedStorage(0, SYNC1_ID);

    /* End of Start for SubSystem: '<S13>/Subsystem2' */

    /* Start for M-S-Function: '<S6>/Level-2 M-file S-Function' */

    /* configure the digital input */
    DiginConfigure(DIGIN_PORTG_PIN12, DIGIN_CFG_PULLDOWN);

    /* Start for M-S-Function: '<S7>/Level-2 M-file S-Function' */

    /* configure the digital input */
    DiginConfigure(DIGIN_PORTG_PIN15, DIGIN_CFG_PULLDOWN);

    /* Start for M-S-Function: '<S8>/Level-2 M-file S-Function' */

    /* configure the digital input */
    DiginConfigure(DIGIN_PORTA_PIN4, DIGIN_CFG_PULLDOWN);

    /* Start for M-S-Function: '<S2>/Level-2 M-file S-Function' */

    /* configure the stack size for the task that executes the model */
    AppCtrlTaskSetStackSize((configMINIMAL_STACK_SIZE*sizeof(portBASE_TYPE)) +
      100);

    /* configure the sample time of the model in microseconds */
    AppCtrlTaskSetPeriod(1000);

    /* Run the ADC conversions ten times faster than the Simulink model */
    ADCconversionTaskSetPeriod(1000/10);

    /* Start for M-S-Function: '<S3>/Level-2 M-file S-Function' */

    /* store the CAN controller's filter configuration */
    canFilter1.mask = 0x00000000;
    canFilter1.code = 0x00000000;
    canFilter1.mode = CAN_FILTER_MODE_STDID_ONLY;

    /* connect and synchronize the CAN bus */
    canResult1 = CanConnect(0, 1000000, &canFilter1);
    configASSERT(canResult1 == TRUE);

    /* Start for S-Function (sfcn_timeout_init): '<S12>/S-Function' */

    /* register the free running counter overflow callback handler */
    TimeoutRegisterOverflowCallback(TIMEOUT_MODULE_TIM4,
      TimeoutOverflowIRQ_TIMEOUT_MODULE_TIM4);

    /* Start for M-S-Function: '<S15>/Level-2 M-file S-Function' */

    /* initialize the measurement and calibration interface */
    MacUsbComInit();
    MacInit();
  }

  rtPrevZCSigState.EnabledSubsystem_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.Subsystem_Trig_ZCE_h = UNINITIALIZED_ZCSIG;
  rtPrevZCSigState.SYNC1_TX_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.Slot5execution_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.Subsystem_Trig_ZCE_g = POS_ZCSIG;
  rtPrevZCSigState.TRLS_ID5_TX_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.Subsystem_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.Subsystem1_Trig_ZCE = UNINITIALIZED_ZCSIG;
  rtPrevZCSigState.TRLS_ID4_TX.TRCK1_ID2_TX_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.TRCK1_TX.TRCK1_ID2_TX_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.TRCK1_ID3_TX.TRCK1_ID2_TX_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.TRCK1_ID2_TX_f.TRCK1_ID2_TX_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.SSTM1_TX.MMBS1_TX_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.MMBS1_TX_a.MMBS1_TX_Trig_ZCE = POS_ZCSIG;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
