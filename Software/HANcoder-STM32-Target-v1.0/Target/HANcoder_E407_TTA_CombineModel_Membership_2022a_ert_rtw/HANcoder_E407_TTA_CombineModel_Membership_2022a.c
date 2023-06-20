/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_CombineModel_Membership_2022a.c
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_CombineModel_Membership_2022a'.
 *
 * Model version                  : 18.9
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Fri Jun  9 15:35:56 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HANcoder_E407_TTA_CombineModel_Membership_2022a.h"
#include "rtwtypes.h"
#include "HANcoder_E407_TTA_CombineModel_Membership_2022a_types.h"
#include "HANcoder_E407_TTA_CombineModel_Membership_2022a_private.h"
#include <math.h>
#include "zero_crossing_types.h"

/* map ByteSwap function */
#define ByteSwap(x)                    (ByteSwap_x((uint8_t *) &x, sizeof(x)))

void PwmoutIRQ_PWMOUT_MODULE_TIM14(void);
void TimeoutEventIRQ_TIMEOUT_TIM4_PIN_PD12(void);
void TimeoutOverflowIRQ_TIMEOUT_MODULE_TIM4(void);

/* Exported block signals */
real_T reqAngle;                       /* '<S29>/Data Store Read' */
real_T Gamma1;                         /* '<S63>/Sum1' */
real_T steering;                       /* '<S62>/Gain2' */
real_T position;                       /* '<S62>/Gain1' */
real_T control;                        /* '<S62>/Sum' */
uint32_T SI_FreeHeap;                  /* '<S181>/Level-2 M-file S-Function' */
uint32_T SI_FreeStack;                 /* '<S182>/Level-2 M-file S-Function' */
real32_T delta12K;                     /* '<S118>/tan 1' */
uint16_T t2Angle;                      /* '<S29>/Data Store Read2' */
uint16_T t1Angle;                      /* '<S29>/Data Store Read1' */
uint16_T Gamma2;                       /* '<S63>/Sum2' */
uint16_T mospeed;                      /* '<S62>/Add' */
uint16_T analogPot1;                   /* '<S54>/Level-2 M-file S-Function' */
uint16_T pot1;                         /* '<S50>/Cast1' */
uint16_T analogPot2;                   /* '<S55>/Level-2 M-file S-Function' */
uint16_T pot2;                         /* '<S50>/Cast2' */
uint16_T testCounter;                  /* '<S27>/Data Store Read1' */
uint8_T masterID;                      /* '<S1>/Cast' */
uint8_T SI_CPUload;                    /* '<S180>/Level-2 M-file S-Function' */
uint8_T buttonpress2;                  /* '<S164>/In6' */
uint8_T buttonpress1;                  /* '<S152>/In6' */
uint8_T amounttrailers;                /* '<S16>/Add' */
uint8_T positionID5;                   /* '<S16>/Cast3' */
uint8_T positionID4;                   /* '<S16>/Cast2' */
uint8_T local_ticks_interrupt;         /* '<S7>/Switch' */
uint8_T setSlotTime;                   /* '<S7>/Data Store Read3' */
uint8_T slotSelected;                  /* '<S19>/Switch' */
boolean_T boolCan;                     /* '<S8>/AND' */
boolean_T cw;                          /* '<S62>/Cast1' */
boolean_T ccw;                         /* '<S62>/NOT' */
boolean_T canActive;                   /* '<S7>/Clock_State' */

/* Exported block parameters */
real_T ClockOn = 0.0;                  /* Variable: ClockOn
                                        * Referenced by: '<S10>/Constant'
                                        */
real_T ErrorBoard1 = 0.0;              /* Variable: ErrorBoard1
                                        * Referenced by: '<S1>/Constant1'
                                        */
real_T ErrorBoard2 = 0.0;              /* Variable: ErrorBoard2
                                        * Referenced by: '<S1>/Constant2'
                                        */
real_T ErrorBoard3 = 0.0;              /* Variable: ErrorBoard3
                                        * Referenced by: '<S1>/Constant3'
                                        */
real_T ErrorBoard4 = 0.0;              /* Variable: ErrorBoard4
                                        * Referenced by: '<S1>/Constant4'
                                        */
real_T ErrorBoard5 = 0.0;              /* Variable: ErrorBoard5
                                        * Referenced by: '<S1>/Constant5'
                                        */
real_T ResetPosition = 0.0;            /* Variable: ResetPosition
                                        * Referenced by: '<S184>/Constant'
                                        */
real_T controlWidth = 3.0;             /* Variable: controlWidth
                                        * Referenced by: '<S62>/Constant'
                                        */
real_T desiredAngle = 0.0;             /* Variable: desiredAngle
                                        * Referenced by: '<S50>/Constant2'
                                        */
real_T intVal = 0.15;                  /* Variable: intVal
                                        * Referenced by: '<S95>/Integral Gain'
                                        */
real_T matrixRows = 10.0;              /* Variable: matrixRows
                                        * Referenced by: '<S19>/Constant1'
                                        */
real_T propVal = 1.0;                  /* Variable: propVal
                                        * Referenced by: '<S103>/Proportional Gain'
                                        */
uint32_T MMBS1_ID = 12U;               /* Variable: MMBS1_ID
                                        * Referenced by: '<S8>/Constant12'
                                        */
uint32_T SSTM1_ID = 13U;               /* Variable: SSTM1_ID
                                        * Referenced by: '<S8>/Constant14'
                                        */
uint32_T SYNC1_ID = 11U;               /* Variable: SYNC1_ID
                                        * Referenced by:
                                        *   '<S8>/Constant10'
                                        *   '<S173>/Constant10'
                                        */
uint32_T TRCK1_ID1 = 14U;              /* Variable: TRCK1_ID1
                                        * Referenced by: '<S8>/Constant3'
                                        */
uint32_T TRCK1_ID2 = 26U;              /* Variable: TRCK1_ID2
                                        * Referenced by: '<S8>/Constant5'
                                        */
uint32_T TRCK1_ID3 = 37U;              /* Variable: TRCK1_ID3
                                        * Referenced by: '<S8>/Constant26'
                                        */
uint32_T TRLS1_ID4 = 48U;              /* Variable: TRLS1_ID4
                                        * Referenced by: '<S8>/Constant8'
                                        */
uint32_T TRLS1_ID5 = 59U;              /* Variable: TRLS1_ID5
                                        * Referenced by: '<S8>/Constant18'
                                        */
uint8_T slotTime = 50U;                /* Variable: slotTime
                                        * Referenced by: '<S172>/Constant3'
                                        */

/* Block signals (default storage) */
BlockIO rtB;

/* Block states (default storage) */
D_Work rtDWork;

/* Previous zero-crossings (trigger) states */
PrevZCSigStates rtPrevZCSigState;

/* Forward declaration for local functions */
static void SystemCore_setup(dsp_simulink_MovingAverage *obj);
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

    /* SignalConversion generated from: '<S7>/Clock_State' */
    canActive = rtB.OR;

    /* Switch: '<S7>/Switch' */
    if (canActive) {
      /* Switch: '<S7>/Switch' incorporates:
       *  Constant: '<S7>/Constant2'
       *  DataStoreRead: '<S7>/Data Store Read'
       *  Sum: '<S7>/Sum1'
       */
      local_ticks_interrupt = (uint8_T)((uint32_T)rtDWork.Local_Ticks +
        ((uint8_T)1U));
    } else {
      /* Switch: '<S7>/Switch' incorporates:
       *  DataStoreRead: '<S7>/Data Store Read1'
       */
      local_ticks_interrupt = rtDWork.Local_Ticks;
    }

    /* End of Switch: '<S7>/Switch' */

    /* DataStoreWrite: '<S7>/Data Store Write' */
    rtDWork.Local_Ticks = local_ticks_interrupt;

    /* DataStoreRead: '<S7>/Data Store Read3' */
    setSlotTime = rtDWork.SlotTime;

    /* M-S-Function: '<S20>/Level-2 M-file S-Function' incorporates:
     *  DataTypeConversion: '<S7>/Cast'
     */
    rtb_Level2MfileSFunction = setSlotTime;

    /* RelationalOperator: '<S7>/Equal' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read2'
     */
    rtb_Equal = (rtDWork.Local_Ticks >= rtb_Level2MfileSFunction);

    /* Outputs for Triggered SubSystem: '<S7>/Enabled Subsystem' incorporates:
     *  TriggerPort: '<S19>/Trigger'
     */
    if (rtb_Equal && (rtPrevZCSigState.EnabledSubsystem_Trig_ZCE != POS_ZCSIG))
    {
      /* Switch: '<S19>/Switch' incorporates:
       *  Constant: '<S19>/Constant1'
       *  DataStoreRead: '<S19>/Data Store Read1'
       *  DataTypeConversion: '<S19>/Cast'
       *  RelationalOperator: '<S19>/Equal'
       */
      if (rtDWork.slot < (uint8_T)matrixRows) {
        /* Switch: '<S19>/Switch' incorporates:
         *  Constant: '<S19>/Constant'
         *  DataStoreRead: '<S19>/Data Store Read'
         *  Sum: '<S19>/Plus'
         */
        slotSelected = (uint8_T)((uint32_T)rtDWork.slot + ((uint8_T)1U));
      } else {
        /* Switch: '<S19>/Switch' incorporates:
         *  Constant: '<S19>/Constant2'
         */
        slotSelected = (uint8_T)1.0;
      }

      /* End of Switch: '<S19>/Switch' */

      /* DataStoreWrite: '<S19>/Data Store Write' */
      rtDWork.slot = slotSelected;

      /* DataStoreWrite: '<S19>/Data Store Write1' incorporates:
       *  Constant: '<S19>/Constant3'
       */
      rtDWork.Local_Ticks = ((uint8_T)0U);
    }

    rtPrevZCSigState.EnabledSubsystem_Trig_ZCE = rtb_Equal;

    /* End of Outputs for SubSystem: '<S7>/Enabled Subsystem' */
    /* M-S-Function: '<S20>/Level-2 M-file S-Function' */
    /* read 16-bit free running counter timestamp of the last output compare event */
    rtb_Level2MfileSFunction = TimeoutGetLastEventCounter(TIMEOUT_TIM4_PIN_PD12);

    /* Sum: '<S7>/Sum' incorporates:
     *  Constant: '<S7>/Constant'
     */
    rtB.Sum = (uint16_T)((uint32_T)rtb_Level2MfileSFunction + ((uint16_T)1000U));

    /* Update for M-S-Function: '<S21>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S7>/Constant1'
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
 *    '<S40>/Enabled Subsystem'
 *    '<S43>/Enabled Subsystem'
 *    '<S46>/Enabled Subsystem'
 *    '<S121>/Enabled Subsystem'
 *    '<S137>/Enabled Subsystem'
 *    '<S146>/Enabled Subsystem'
 *    '<S174>/Enabled Subsystem'
 */
void EnabledSubsystem(int8_T rtu_Enable, uint8_T rtu_In1, rtB_EnabledSubsystem
                      *localB)
{
  /* Outputs for Enabled SubSystem: '<S40>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S41>/Enable'
   */
  if (rtu_Enable > 0) {
    /* SignalConversion generated from: '<S41>/In1' */
    localB->In1 = rtu_In1;
  }

  /* End of Outputs for SubSystem: '<S40>/Enabled Subsystem' */
}

/*
 * Disable for enable system:
 *    '<S8>/MMBS1_RX'
 *    '<S8>/SSTM1_RX'
 *    '<S8>/TRCK1_ID2_RX'
 *    '<S8>/TRCK1_RX'
 */
void MMBS1_RX_Disable(rtDW_MMBS1_RX *localDW)
{
  localDW->MMBS1_RX_MODE = false;
}

/*
 * Start for enable system:
 *    '<S8>/MMBS1_RX'
 *    '<S8>/SSTM1_RX'
 *    '<S8>/TRCK1_ID2_RX'
 *    '<S8>/TRCK1_RX'
 */
void MMBS1_RX_Start(uint32_T rtu_In1)
{
  /* Start for M-S-Function: '<S40>/S-Function' */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, rtu_In1);
}

/*
 * Outputs for enable system:
 *    '<S8>/MMBS1_RX'
 *    '<S8>/SSTM1_RX'
 *    '<S8>/TRCK1_ID2_RX'
 *    '<S8>/TRCK1_RX'
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

  /* Outputs for Enabled SubSystem: '<S8>/MMBS1_RX' incorporates:
   *  EnablePort: '<S22>/Enable'
   */
  if (rtu_Enable) {
    localDW->MMBS1_RX_MODE = true;

    /* M-S-Function: '<S40>/S-Function' */

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

    /* Outputs for Enabled SubSystem: '<S40>/Enabled Subsystem' */
    EnabledSubsystem(rtb_SFunction_o1_g, rtb_SFunction_o2_n,
                     &localB->EnabledSubsystem_k);

    /* End of Outputs for SubSystem: '<S40>/Enabled Subsystem' */
  } else if (localDW->MMBS1_RX_MODE) {
    MMBS1_RX_Disable(localDW);
  }

  /* End of Outputs for SubSystem: '<S8>/MMBS1_RX' */
}

/*
 * Output and update for trigger system:
 *    '<S8>/MMBS1_TX'
 *    '<S8>/SSTM1_TX'
 */
void MMBS1_TX(boolean_T rtu_Trigger, uint32_T rtu_In1, rtZCE_MMBS1_TX *localZCE)
{
  /* Outputs for Triggered SubSystem: '<S8>/MMBS1_TX' incorporates:
   *  TriggerPort: '<S23>/Trigger'
   */
  if (rtu_Trigger && (localZCE->MMBS1_TX_Trig_ZCE != POS_ZCSIG)) {
    /* Update for M-S-Function: '<S42>/S-Function' */
    {
      /* prepare the data */
      canTxData.uint8_T_info[0] = 0U;

      /* send the data */
      CanTransmit(0, rtu_In1, 1, &canTxData.uint8_T_info[0]);
    }
  }

  localZCE->MMBS1_TX_Trig_ZCE = rtu_Trigger;

  /* End of Outputs for SubSystem: '<S8>/MMBS1_TX' */
}

static void SystemCore_setup(dsp_simulink_MovingAverage *obj)
{
  obj->isSetupComplete = false;
  obj->isInitialized = 1;
  obj->NumChannels = 1;
  obj->FrameLength = 1;
  obj->_pobj0.isInitialized = 0;
  obj->_pobj0.isInitialized = 0;
  obj->pStatistic = &obj->_pobj0;
  obj->isSetupComplete = true;
  obj->TunablePropsChanged = false;
}

/* System initialize for atomic system: */
void MovingAverage_Init(rtDW_MovingAverage *localDW)
{
  g_dsp_internal_SlidingWindowAve *obj;
  int32_T i;

  /* InitializeConditions for MATLABSystem: '<S50>/Moving Average' */
  obj = localDW->obj.pStatistic;
  if (obj->isInitialized == 1) {
    obj->pCumSum = 0.0F;
    for (i = 0; i < 59; i++) {
      obj->pCumSumRev[i] = 0.0F;
    }

    obj->pCumRevIndex = 1.0F;
    obj->pModValueRev = 0.0F;
  }

  /* End of InitializeConditions for MATLABSystem: '<S50>/Moving Average' */
}

/* Start for atomic system: */
void MovingAverage_Start(rtDW_MovingAverage *localDW)
{
  /* Start for MATLABSystem: '<S50>/Moving Average' */
  localDW->obj.isInitialized = 0;
  localDW->obj.NumChannels = -1;
  localDW->obj.FrameLength = -1;
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  SystemCore_setup(&localDW->obj);
}

/* Output and update for atomic system: */
void MovingAverage(real32_T rtu_0, rtB_MovingAverage *localB, rtDW_MovingAverage
                   *localDW)
{
  g_dsp_internal_SlidingWindowAve *obj;
  int32_T i;
  real32_T csumrev[59];
  real32_T csum;
  real32_T cumRevIndex;
  real32_T modValueRev;
  real32_T z;

  /* MATLABSystem: '<S50>/Moving Average' */
  if (localDW->obj.TunablePropsChanged) {
    localDW->obj.TunablePropsChanged = false;
  }

  obj = localDW->obj.pStatistic;
  if (obj->isInitialized != 1) {
    obj->isSetupComplete = false;
    obj->isInitialized = 1;
    obj->pCumSum = 0.0F;
    for (i = 0; i < 59; i++) {
      obj->pCumSumRev[i] = 0.0F;
    }

    obj->pCumRevIndex = 1.0F;
    obj->pModValueRev = 0.0F;
    obj->isSetupComplete = true;
    obj->pCumSum = 0.0F;
    for (i = 0; i < 59; i++) {
      obj->pCumSumRev[i] = 0.0F;
    }

    obj->pCumRevIndex = 1.0F;
    obj->pModValueRev = 0.0F;
  }

  cumRevIndex = obj->pCumRevIndex;
  csum = obj->pCumSum;
  for (i = 0; i < 59; i++) {
    csumrev[i] = obj->pCumSumRev[i];
  }

  modValueRev = obj->pModValueRev;
  z = 0.0F;

  /* MATLABSystem: '<S50>/Moving Average' */
  localB->MovingAverage_n = 0.0F;

  /* MATLABSystem: '<S50>/Moving Average' */
  csum += rtu_0;
  if (modValueRev == 0.0F) {
    z = csumrev[(int32_T)cumRevIndex - 1] + csum;
  }

  csumrev[(int32_T)cumRevIndex - 1] = rtu_0;
  if (cumRevIndex != 59.0F) {
    cumRevIndex++;
  } else {
    cumRevIndex = 1.0F;
    csum = 0.0F;
    for (i = 57; i >= 0; i--) {
      csumrev[i] += csumrev[i + 1];
    }
  }

  if (modValueRev == 0.0F) {
    /* MATLABSystem: '<S50>/Moving Average' */
    localB->MovingAverage_n = z / 60.0F;
  }

  obj->pCumSum = csum;
  for (i = 0; i < 59; i++) {
    obj->pCumSumRev[i] = csumrev[i];
  }

  obj->pCumRevIndex = cumRevIndex;
  if (modValueRev > 0.0F) {
    obj->pModValueRev = modValueRev - 1.0F;
  } else {
    obj->pModValueRev = 0.0F;
  }
}

/*
 * Output and update for atomic system:
 *    '<S124>/Bit Shift'
 *    '<S125>/Bit Shift'
 *    '<S131>/Bit Shift'
 *    '<S132>/Bit Shift'
 *    '<S140>/Bit Shift'
 *    '<S141>/Bit Shift'
 *    '<S154>/Bit Shift'
 *    '<S155>/Bit Shift'
 *    '<S166>/Bit Shift'
 *    '<S167>/Bit Shift'
 */
void BitShift(uint16_T rtu_u, rtB_BitShift *localB)
{
  /* MATLAB Function: '<S126>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S127>:1' */
  /* '<S127>:1:8' */
  localB->y = (uint16_T)((uint32_T)rtu_u >> 8);
}

/*
 * Output and update for trigger system:
 *    '<S8>/TRCK1_ID2_TX'
 *    '<S8>/TRCK1_ID3_TX'
 *    '<S8>/TRCK1_TX'
 */
void TRCK1_ID2_TX(boolean_T rtu_Trigger, uint32_T rtu_In1, const uint8_T
                  *rtd_Local_Ticks, const uint16_T *rtd_potentiometer1, const
                  uint16_T *rtd_potentiometer2, rtB_TRCK1_ID2_TX *localB,
                  rtZCE_TRCK1_ID2_TX *localZCE)
{
  /* Outputs for Triggered SubSystem: '<S8>/TRCK1_ID2_TX' incorporates:
   *  TriggerPort: '<S31>/Trigger'
   */
  if (rtu_Trigger && (localZCE->TRCK1_ID2_TX_Trig_ZCE != POS_ZCSIG)) {
    /* DataStoreRead: '<S31>/Data Store Read2' */
    localB->DataStoreRead2 = *rtd_Local_Ticks;

    /* Outputs for Atomic SubSystem: '<S124>/Bit Shift' */
    /* DataStoreRead: '<S31>/Data Store Read1' */
    BitShift(*rtd_potentiometer2, &localB->BitShift_o);

    /* End of Outputs for SubSystem: '<S124>/Bit Shift' */

    /* DataTypeConversion: '<S124>/Cast' */
    localB->Cast = (uint8_T)localB->BitShift_o.y;

    /* DataTypeConversion: '<S124>/Cast1' incorporates:
     *  DataStoreRead: '<S31>/Data Store Read1'
     */
    localB->Cast1 = (uint8_T)*rtd_potentiometer2;

    /* Outputs for Atomic SubSystem: '<S125>/Bit Shift' */
    /* DataStoreRead: '<S31>/Data Store Read' */
    BitShift(*rtd_potentiometer1, &localB->BitShift_h);

    /* End of Outputs for SubSystem: '<S125>/Bit Shift' */

    /* DataTypeConversion: '<S125>/Cast' */
    localB->Cast_k = (uint8_T)localB->BitShift_h.y;

    /* DataTypeConversion: '<S125>/Cast1' incorporates:
     *  DataStoreRead: '<S31>/Data Store Read'
     */
    localB->Cast1_i = (uint8_T)*rtd_potentiometer1;

    /* Update for M-S-Function: '<S123>/S-Function' */
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

  /* End of Outputs for SubSystem: '<S8>/TRCK1_ID2_TX' */
}

/*
 * Output and update for atomic system:
 *    '<S148>/Bit Shift'
 *    '<S160>/Bit Shift'
 */
void BitShift_j(uint16_T rtu_u, rtB_BitShift_i *localB)
{
  /* MATLAB Function: '<S150>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S151>:1' */
  /* '<S151>:1:6' */
  localB->y = (uint16_T)(rtu_u << 8);
}

/* Model step function */
void HANcoder_E407_TTA_CombineModel_Membership_2022a_step(void)
{
  /* local block i/o variables */
  real32_T rtb_Cast_m;
  real32_T rtb_Cast3;
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
  boolean_T rtb_Level2MfileSFunction_a;
  boolean_T rtb_Level2MfileSFunction_j;
  boolean_T rtb_Equal17;
  real_T rtb_IntegralGain;
  real_T rtb_Integrator_tmp;
  real_T rtb_Multiply;
  real_T rtb_Multiply1;
  real_T tmp_0;
  uint32_T tmp;
  uint16_T rtb_Cast_bt;
  uint16_T rtb_Cast_g1;
  int8_T rtAction;
  int8_T rtPrevAction;
  uint8_T Master_ID;
  uint8_T u1;
  boolean_T AND3;
  boolean_T AND5;
  boolean_T AND7;
  boolean_T AND9;
  boolean_T rtb_AND;
  boolean_T rtb_AND10;
  boolean_T rtb_AND13_b;
  boolean_T rtb_AND15;
  boolean_T rtb_AND1_k;
  boolean_T rtb_AND2;
  boolean_T rtb_AND4;
  boolean_T rtb_AND6;
  boolean_T rtb_AND8;
  boolean_T rtb_Equal14;
  boolean_T rtb_Equal16;
  boolean_T rtb_NotEqual;
  ZCEventType zcEvent;

  /* Outputs for Enabled SubSystem: '<S1>/Initialize Clock Schedule' incorporates:
   *  EnablePort: '<S6>/Enable'
   */
  /* Logic: '<S1>/NOT' incorporates:
   *  DataStoreRead: '<S1>/If 1 -> Clock initialized '
   */
  if (rtDWork.init_clock == 0.0) {
    rtDWork.InitializeClockSchedule_MODE = true;

    /* DataStoreWrite: '<S6>/Data Store Write' incorporates:
     *  Constant: '<S6>/Constant2'
     */
    rtDWork.init_clock = 1.0;

    /* Update for M-S-Function: '<S18>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S6>/Constant'
     *  Constant: '<S6>/Constant1'
     */
    /* schedule the next output compare event */
    TimeoutScheduleCompareEvent(TIMEOUT_TIM4_PIN_PD12, ((uint16_T)1U),
      (tTimeoutAction)((uint8_T)3U));
  } else if (rtDWork.InitializeClockSchedule_MODE) {
    rtDWork.InitializeClockSchedule_MODE = false;
  }

  /* End of Logic: '<S1>/NOT' */
  /* End of Outputs for SubSystem: '<S1>/Initialize Clock Schedule' */

  /* If: '<S1>/If1' incorporates:
   *  DataStoreRead: '<S1>/Data Store Read2'
   */
  rtPrevAction = rtDWork.If1_ActiveSubsystem;
  rtAction = -1;
  if (rtDWork.Board_ID == 0.0) {
    rtAction = 0;
  }

  rtDWork.If1_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
  }

  if (rtAction == 0) {
    /* Outputs for IfAction SubSystem: '<S1>/Setting ID' incorporates:
     *  ActionPort: '<S11>/Action Port'
     */
    /* M-S-Function: '<S177>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction_j = DiginGet(DIGIN_PORTG_PIN12);

    /* Product: '<S11>/Multiply' incorporates:
     *  Constant: '<S11>/Constant1'
     */
    rtb_Multiply = rtb_Level2MfileSFunction_j ? 1.0 : 0.0;

    /* M-S-Function: '<S178>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction_j = DiginGet(DIGIN_PORTG_PIN15);

    /* Product: '<S11>/Multiply1' incorporates:
     *  Constant: '<S11>/Constant4'
     */
    rtb_Multiply1 = rtb_Level2MfileSFunction_j ? 2.0 : 0.0;

    /* M-S-Function: '<S179>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction_j = DiginGet(DIGIN_PORTA_PIN4);

    /* Sum: '<S11>/Add' incorporates:
     *  Constant: '<S11>/Constant6'
     *  Product: '<S11>/Multiply2'
     */
    rtB.Add = (rtb_Multiply + rtb_Multiply1) + (rtb_Level2MfileSFunction_j ? 4.0
      : 0.0);

    /* End of Outputs for SubSystem: '<S1>/Setting ID' */
  }

  /* End of If: '<S1>/If1' */

  /* DataStoreWrite: '<S1>/Data Store Write1' */
  rtDWork.Board_ID = rtB.Add;

  /* Outputs for Enabled SubSystem: '<S1>/Subsystem' incorporates:
   *  EnablePort: '<S12>/Enable'
   */
  /* Logic: '<S1>/NOT7' incorporates:
   *  Constant: '<S12>/Constant'
   *  DataStoreRead: '<S1>/Data Store Read39'
   */
  if (rtDWork.Board1_Error == 0.0) {
    rtB.Constant_p = 1.0;
  }

  /* End of Logic: '<S1>/NOT7' */
  /* End of Outputs for SubSystem: '<S1>/Subsystem' */

  /* Outputs for Enabled SubSystem: '<S1>/Subsystem1' incorporates:
   *  EnablePort: '<S13>/Enable'
   */
  /* Logic: '<S1>/AND13' incorporates:
   *  Constant: '<S13>/Constant'
   *  DataStoreRead: '<S1>/Data Store Read40'
   *  DataStoreRead: '<S1>/Data Store Read42'
   *  Logic: '<S1>/NOT8'
   */
  if ((rtDWork.Board1_Error != 0.0) && (rtDWork.Board2_Error == 0.0)) {
    rtB.Constant_c = 2.0;
  }

  /* End of Logic: '<S1>/AND13' */
  /* End of Outputs for SubSystem: '<S1>/Subsystem1' */

  /* Outputs for Enabled SubSystem: '<S1>/Subsystem2' incorporates:
   *  EnablePort: '<S14>/Enable'
   */
  /* Logic: '<S1>/AND14' incorporates:
   *  Constant: '<S14>/Constant'
   *  DataStoreRead: '<S1>/Data Store Read43'
   *  DataStoreRead: '<S1>/Data Store Read44'
   *  Logic: '<S1>/NOT9'
   */
  if ((rtDWork.Board2_Error != 0.0) && (rtDWork.Board3_Error == 0.0)) {
    rtB.Constant = 3.0;
  }

  /* End of Logic: '<S1>/AND14' */
  /* End of Outputs for SubSystem: '<S1>/Subsystem2' */

  /* DataTypeConversion: '<S1>/Cast' incorporates:
   *  Sum: '<S1>/Add'
   */
  masterID = (uint8_T)((rtB.Constant_p + rtB.Constant_c) + rtB.Constant);

  /* DataStoreWrite: '<S1>/Data Store Write8' */
  Master_ID = masterID;

  /* Logic: '<S10>/AND' incorporates:
   *  Constant: '<S10>/Constant'
   *  DataStoreRead: '<S10>/Data Store Read1'
   *  DataStoreWrite: '<S1>/Data Store Write8'
   *  RelationalOperator: '<S10>/Less Than'
   */
  rtb_AND = ((ClockOn != 0.0) && (rtDWork.Board_ID == masterID));

  /* Logic: '<S10>/OR' incorporates:
   *  DataStoreRead: '<S10>/Data Store Read2'
   */
  rtB.OR = (rtb_AND || rtDWork.slaveClockOn);

  /* End of Outputs for S-Function (sfcn_timeout_event_irq): '<S4>/S-Function' */

  /* Outputs for Enabled SubSystem: '<S1>/Message selector' incorporates:
   *  EnablePort: '<S8>/Enable'
   *
   * Block description for '<S1>/Message selector':
   *  Truck 1
   */
  if (canActive) {
    rtDWork.Messageselector_MODE = true;

    /* RelationalOperator: '<S8>/Equal1' incorporates:
     *  Constant: '<S8>/Constant1'
     */
    rtb_NotEqual = (slotSelected == 2.0);

    /* RelationalOperator: '<S8>/Equal11' incorporates:
     *  Constant: '<S8>/Constant13'
     *  DataStoreRead: '<S1>/Data Store Read'
     */
    rtb_Equal14 = (rtDWork.Board_ID == 1.0);

    /* Logic: '<S8>/AND3' incorporates:
     *  Logic: '<S8>/NOT1'
     */
    AND3 = (rtb_NotEqual && (!rtb_Equal14));

    /* Outputs for Enabled SubSystem: '<S8>/MMBS1_RX' */
    /* Constant: '<S8>/Constant12' */
    MMBS1_RX(AND3, MMBS1_ID, &rtB.MMBS1_RX_j, &rtDWork.MMBS1_RX_j);

    /* End of Outputs for SubSystem: '<S8>/MMBS1_RX' */

    /* Logic: '<S8>/AND2' */
    rtb_AND2 = (rtb_NotEqual && rtb_Equal14);

    /* Outputs for Triggered SubSystem: '<S8>/MMBS1_TX' */
    /* Constant: '<S8>/Constant12' */
    MMBS1_TX(rtb_AND2, MMBS1_ID, &rtPrevZCSigState.MMBS1_TX_a);

    /* End of Outputs for SubSystem: '<S8>/MMBS1_TX' */

    /* RelationalOperator: '<S8>/Equal2' incorporates:
     *  Constant: '<S8>/Constant2'
     */
    rtb_Equal14 = (slotSelected == 3.0);

    /* RelationalOperator: '<S8>/Equal12' incorporates:
     *  Constant: '<S8>/Constant15'
     *  DataStoreRead: '<S1>/Data Store Read'
     */
    rtb_NotEqual = (rtDWork.Board_ID == 1.0);

    /* Logic: '<S8>/AND5' incorporates:
     *  Logic: '<S8>/NOT2'
     */
    AND5 = (rtb_Equal14 && (!rtb_NotEqual));

    /* Outputs for Enabled SubSystem: '<S8>/SSTM1_RX' */
    /* Constant: '<S8>/Constant14' */
    MMBS1_RX(AND5, SSTM1_ID, &rtB.SSTM1_RX, &rtDWork.SSTM1_RX);

    /* End of Outputs for SubSystem: '<S8>/SSTM1_RX' */

    /* Logic: '<S8>/AND4' */
    rtb_AND4 = (rtb_Equal14 && rtb_NotEqual);

    /* Outputs for Triggered SubSystem: '<S8>/SSTM1_TX' */
    /* Constant: '<S8>/Constant14' */
    MMBS1_TX(rtb_AND4, SSTM1_ID, &rtPrevZCSigState.SSTM1_TX);

    /* End of Outputs for SubSystem: '<S8>/SSTM1_TX' */

    /* RelationalOperator: '<S8>/Equal' incorporates:
     *  Constant: '<S8>/Constant'
     */
    rtb_Equal14 = (slotSelected == ((uint8_T)1U));

    /* RelationalOperator: '<S8>/Equal10' incorporates:
     *  Constant: '<S8>/Constant11'
     *  DataStoreRead: '<S1>/Data Store Read'
     */
    rtb_NotEqual = (rtDWork.Board_ID == ((uint8_T)1U));

    /* Logic: '<S8>/AND1' incorporates:
     *  Logic: '<S8>/NOT'
     */
    rtb_AND1_k = (rtb_Equal14 && (!rtb_NotEqual));

    /* Outputs for Enabled SubSystem: '<S8>/SYNC1_RX' incorporates:
     *  EnablePort: '<S26>/Enable'
     */
    if (rtb_AND1_k) {
      rtDWork.SYNC1_RX_MODE = true;

      /* M-S-Function: '<S46>/S-Function' incorporates:
       *  Constant: '<S8>/Constant10'
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

      /* Outputs for Enabled SubSystem: '<S46>/Enabled Subsystem' */
      EnabledSubsystem(rtb_SFunction_o1_h, rtb_SFunction_o2_i,
                       &rtB.EnabledSubsystem_c);

      /* End of Outputs for SubSystem: '<S46>/Enabled Subsystem' */

      /* Outputs for Triggered SubSystem: '<S26>/Subsystem' incorporates:
       *  TriggerPort: '<S47>/Trigger'
       */
      zcEvent = rt_I32ZCFcn(RISING_ZERO_CROSSING,
                            &rtPrevZCSigState.Subsystem_Trig_ZCE_h,
                            (rtb_SFunction_o1_h));
      if (zcEvent != NO_ZCEVENT) {
        /* DataStoreWrite: '<S47>/Data Store Write' */
        rtDWork.SlotTime = rtB.EnabledSubsystem_c.In1;

        /* DataStoreWrite: '<S47>/Data Store Write1' incorporates:
         *  Constant: '<S47>/Constant'
         */
        rtDWork.Local_Ticks = ((uint8_T)2U);

        /* DataStoreWrite: '<S47>/Data Store Write2' incorporates:
         *  Constant: '<S47>/Constant1'
         */
        rtDWork.slot = ((uint8_T)1U);
      }

      /* End of Outputs for SubSystem: '<S26>/Subsystem' */
    } else if (rtDWork.SYNC1_RX_MODE) {
      rtDWork.SYNC1_RX_MODE = false;
    }

    /* End of Outputs for SubSystem: '<S8>/SYNC1_RX' */

    /* Logic: '<S8>/AND' */
    boolCan = (rtb_Equal14 && rtb_NotEqual);

    /* Outputs for Triggered SubSystem: '<S8>/SYNC1_TX' incorporates:
     *  TriggerPort: '<S27>/Trigger'
     */
    if (boolCan && (rtPrevZCSigState.SYNC1_TX_Trig_ZCE != POS_ZCSIG)) {
      /* DataStoreRead: '<S27>/Data Store Read1' */
      testCounter = rtDWork.testCount;

      /* Sum: '<S27>/Add' incorporates:
       *  Constant: '<S27>/Constant7'
       *  DataStoreWrite: '<S27>/Data Store Write'
       */
      rtDWork.testCount = (uint16_T)((uint32_T)testCounter + ((uint16_T)1U));

      /* DataStoreRead: '<S27>/Data Store Read' */
      rtB.DataStoreRead_n = rtDWork.SlotTime;

      /* Update for M-S-Function: '<S49>/S-Function' incorporates:
       *  Constant: '<S27>/Constant'
       *  Constant: '<S27>/Constant1'
       *  Constant: '<S27>/Constant2'
       *  Constant: '<S27>/Constant3'
       *  Constant: '<S27>/Constant4'
       *  Constant: '<S27>/Constant5'
       *  Constant: '<S27>/Constant6'
       *  Constant: '<S8>/Constant10'
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

    /* End of Outputs for SubSystem: '<S8>/SYNC1_TX' */

    /* Logic: '<S8>/OR1' incorporates:
     *  Constant: '<S8>/Constant27'
     *  Constant: '<S8>/Constant4'
     *  RelationalOperator: '<S8>/Equal19'
     *  RelationalOperator: '<S8>/Equal4'
     */
    rtb_NotEqual = ((slotSelected == 5.0) || (slotSelected == 10.0));

    /* Outputs for Triggered SubSystem: '<S8>/Slot 5 execution' incorporates:
     *  TriggerPort: '<S28>/Trigger'
     */
    if (rtb_NotEqual && (rtPrevZCSigState.Slot5execution_Trig_ZCE != POS_ZCSIG))
    {
      /* M-S-Function: '<S54>/Level-2 M-file S-Function' */
      /* read from analog input for filtered inputs*/
      analogPot1 = AninGet(ANIN_PORTF_PIN7,0);

      /* DataTypeConversion: '<S50>/Cast' */
      rtb_Cast_m = analogPot1;
      MovingAverage(rtb_Cast_m, &rtB.MovingAverage_p, &rtDWork.MovingAverage_p);

      /* DataTypeConversion: '<S50>/Cast1' */
      pot1 = (uint16_T)rtB.MovingAverage_p.MovingAverage_n;

      /* DataStoreWrite: '<S50>/Data Store Write1' */
      rtDWork.potentiometer1 = pot1;

      /* M-S-Function: '<S55>/Level-2 M-file S-Function' */
      /* read from analog input for filtered inputs*/
      analogPot2 = AninGet(ANIN_PORTF_PIN8,0);

      /* DataTypeConversion: '<S50>/Cast3' */
      rtb_Cast3 = analogPot2;
      MovingAverage(rtb_Cast3, &rtB.MovingAverage1, &rtDWork.MovingAverage1);

      /* DataTypeConversion: '<S50>/Cast2' */
      pot2 = (uint16_T)rtB.MovingAverage1.MovingAverage_n;

      /* DataStoreWrite: '<S50>/Data Store Write3' */
      rtDWork.potentiometer2 = pot2;

      /* M-S-Function: '<S52>/Level-2 M-file S-Function' */
      /* read from digital input */
      rtb_Equal17 = DiginGet(DIGIN_PORTA_PIN0);

      /* DataTypeConversion: '<S50>/Cast4' incorporates:
       *  DataStoreWrite: '<S50>/Data Store Write4'
       */
      rtDWork.buttonPress = rtb_Equal17;

      /* Gain: '<S50>/Gain' incorporates:
       *  Constant: '<S50>/Constant2'
       *  DataStoreWrite: '<S50>/Data Store Write2'
       */
      rtDWork.requestedAngle = 0.015001500150015003 * desiredAngle;

      /* M-S-Function: '<S53>/Level-2 M-file S-Function' */
      /* determine if the counter needs a reset  */
      if (rtB.DataTypeConversion > 0) {
        QuadEncResetCounter(QUADENC_TIM3_PA6_PB5);
      }

      /* read counter from the quadrature encoder module */
      rtb_Level2MfileSFunction_o = QuadEncGetCounter(QUADENC_TIM3_PA6_PB5);

      /* DataStoreWrite: '<S50>/Data Store Write' */
      rtDWork.encoderPosition = rtb_Level2MfileSFunction_o;

      /* DataTypeConversion: '<S53>/Data Type Conversion' incorporates:
       *  RelationalOperator: '<S56>/FixPt Relational Operator'
       *  UnitDelay: '<S56>/Delay Input1'
       *
       * Block description for '<S56>/Delay Input1':
       *
       *  Store in Global RAM
       */
      rtB.DataTypeConversion = (rtDWork.DelayInput1_DSTATE < 0.0);

      /* RelationalOperator: '<S51>/Equal' incorporates:
       *  DataStoreRead: '<S51>/Data Store Read'
       */
      rtB.Equal = (Master_ID == 0);

      /* DataStoreRead: '<S28>/Data Store Read' */
      rtB.DataStoreRead = rtDWork.pwmMotor;

      /* DataStoreRead: '<S28>/Data Store Read1' */
      rtB.DataStoreRead1 = rtDWork.cwMotor;

      /* DataStoreRead: '<S28>/Data Store Read3' */
      rtB.DataStoreRead3_n = rtDWork.ccwMotor;

      /* Update for UnitDelay: '<S56>/Delay Input1'
       *
       * Block description for '<S56>/Delay Input1':
       *
       *  Store in Global RAM
       */
      rtDWork.DelayInput1_DSTATE = 0.0;

      /* Update for M-S-Function: '<S60>/Level-2 M-file S-Function' */
      /* set the new duty cycle */
      PwmoutSet(PWMOUT_TIM14_PIN_PF9, rtB.DataStoreRead);

      /* Update for M-S-Function: '<S57>/Level-2 M-file S-Function' */
      /* update digital output */
      if (rtB.DataStoreRead1 == 0) {
        DigoutSet(DIGOUT_PORTE_PIN5, DIGOUT_LOW);
      } else {
        DigoutSet(DIGOUT_PORTE_PIN5, DIGOUT_HIGH);
      }

      /* Update for M-S-Function: '<S58>/Level-2 M-file S-Function' */
      /* update digital output */
      if (rtB.DataStoreRead3_n == 0) {
        DigoutSet(DIGOUT_PORTE_PIN6, DIGOUT_LOW);
      } else {
        DigoutSet(DIGOUT_PORTE_PIN6, DIGOUT_HIGH);
      }

      /* Update for M-S-Function: '<S59>/Level-2 M-file S-Function' */
      /* update digital output */
      if (rtB.Equal == 0) {
        DigoutSet(DIGOUT_PORTC_PIN13, DIGOUT_LOW);
      } else {
        DigoutSet(DIGOUT_PORTC_PIN13, DIGOUT_HIGH);
      }
    }

    rtPrevZCSigState.Slot5execution_Trig_ZCE = rtb_NotEqual;

    /* End of Outputs for SubSystem: '<S8>/Slot 5 execution' */

    /* Logic: '<S8>/OR' incorporates:
     *  Constant: '<S8>/Constant23'
     *  Constant: '<S8>/Constant9'
     *  RelationalOperator: '<S8>/Equal18'
     *  RelationalOperator: '<S8>/Equal9'
     */
    rtb_NotEqual = ((5.0 == slotSelected) || (slotSelected == 10.0));

    /* Outputs for Triggered SubSystem: '<S8>/Subsystem' incorporates:
     *  TriggerPort: '<S29>/Trigger'
     */
    if (rtb_NotEqual && (rtPrevZCSigState.Subsystem_Trig_ZCE_g != POS_ZCSIG)) {
      /* DataStoreRead: '<S29>/Data Store Read' */
      reqAngle = rtDWork.requestedAngle;

      /* Product: '<S117>/Product' incorporates:
       *  Constant: '<S63>/TrailUnitWheelbase'
       *  Trigonometry: '<S117>/tan '
       */
      rtb_Multiply1 = tan(reqAngle) * rtConstB.Abs / 4.0;

      /* DataStoreRead: '<S29>/Data Store Read2' */
      t2Angle = rtDWork.trailerTwoAngle;

      /* DataStoreRead: '<S29>/Data Store Read1' */
      t1Angle = rtDWork.trailerOneAngle;

      /* Sum: '<S63>/Sum2' */
      Gamma2 = (uint16_T)(t1Angle - t2Angle);

      /* Trigonometry: '<S115>/tan 1' incorporates:
       *  DataTypeConversion: '<S115>/Cast'
       *  Trigonometry: '<S116>/tan '
       */
      rtb_IntegralGain = sin(Gamma2);

      /* Trigonometry: '<S115>/tan 2' incorporates:
       *  DataTypeConversion: '<S115>/Cast'
       *  Trigonometry: '<S116>/tan 1'
       */
      rtb_Integrator_tmp = cos(Gamma2);

      /* Sum: '<S115>/Add' incorporates:
       *  Constant: '<S29>/Constant'
       *  Constant: '<S63>/TrailUnitWheelbase'
       *  Product: '<S115>/Product1'
       *  Product: '<S115>/Product2'
       *  Trigonometry: '<S115>/tan 1'
       *  Trigonometry: '<S115>/tan 2'
       */
      rtb_Multiply = rtb_Multiply1 * 4.0 * rtb_IntegralGain + rtb_Integrator_tmp
        * 1.3;

      /* Sum: '<S63>/Sum1' incorporates:
       *  Constant: '<S29>/Constant1'
       */
      Gamma1 = 0.0 - (real_T)t1Angle;

      /* Product: '<S116>/Product' incorporates:
       *  Constant: '<S29>/Constant'
       *  Constant: '<S63>/RearAxleToHitch'
       *  Constant: '<S63>/TrailUnitWheelbase'
       *  Gain: '<S116>/Gain'
       *  Product: '<S116>/Product1'
       *  Product: '<S116>/Product3'
       *  Sum: '<S116>/Add'
       */
      rtb_IntegralGain = (1.3 / 1.0 * rtb_IntegralGain * (-1.0) +
                          rtb_Integrator_tmp / 1.0 * 4.0 * rtb_Multiply1) *
        (rtConstB.signV2 * rtConstB.signL0b);

      /* Trigonometry: '<S120>/tan ' incorporates:
       *  DataTypeConversion: '<S120>/Cast'
       *  Trigonometry: '<S119>/tan 1'
       */
      rtb_Multiply1 = sin(Gamma1);

      /* Trigonometry: '<S120>/tan 1' incorporates:
       *  DataTypeConversion: '<S120>/Cast'
       *  Trigonometry: '<S119>/tan 2'
       */
      rtb_Integrator_tmp = cos(Gamma1);

      /* Signum: '<S120>/Sign' */
      if (rtb_Multiply < 0.0) {
        tmp_0 = -1.0;
      } else {
        tmp_0 = (rtb_Multiply > 0.0);
      }

      /* Trigonometry: '<S118>/tan 1' incorporates:
       *  Constant: '<S63>/RearAxleToHitch'
       *  Constant: '<S63>/TractorWheelbase'
       *  Constant: '<S63>/TrailUnitWheelbase'
       *  DataTypeConversion: '<S118>/Cast'
       *  Gain: '<S120>/Gain'
       *  Product: '<S118>/Product1'
       *  Product: '<S119>/Product1'
       *  Product: '<S119>/Product2'
       *  Product: '<S120>/Product'
       *  Product: '<S120>/Product1'
       *  Product: '<S120>/Product3'
       *  Signum: '<S120>/Sign'
       *  Sum: '<S119>/Add'
       *  Sum: '<S120>/Add'
       *  Trigonometry: '<S120>/tan '
       *  Trigonometry: '<S120>/tan 1'
       */
      delta12K = (real32_T)atan((real32_T)((rtb_Multiply / 1.0 * rtb_Multiply1 *
        (-1.0) + rtb_Integrator_tmp / 1.0 * 4.0 * rtb_IntegralGain) * (tmp_0 *
        rtConstB.signL0b_o) * 3.0 / (rtb_IntegralGain * 4.0 * rtb_Multiply1 +
        rtb_Integrator_tmp * rtb_Multiply)));

      /* Gain: '<S62>/Gain2' incorporates:
       *  DataTypeConversion: '<S62>/Cast3'
       */
      steering = 45.6 * delta12K;

      /* Gain: '<S62>/Gain1' incorporates:
       *  DataStoreRead: '<S62>/Data Store Read'
       */
      position = (real_T)1717986918 * 5.8207660913467407E-11 * (real_T)
        rtDWork.encoderPosition;

      /* Sum: '<S62>/Sum' incorporates:
       *  Rounding: '<S62>/Round'
       *  Rounding: '<S62>/Round1'
       */
      control = floor(steering) - floor(position);

      /* Abs: '<S62>/Abs' */
      rtb_IntegralGain = fabs(control);

      /* Sum: '<S107>/Sum' incorporates:
       *  DiscreteIntegrator: '<S98>/Integrator'
       *  Gain: '<S103>/Proportional Gain'
       */
      rtb_Multiply1 = propVal * rtb_IntegralGain + rtDWork.Integrator_DSTATE;

      /* Saturate: '<S105>/Saturation' */
      if (rtb_Multiply1 > 300.0) {
        tmp_0 = 300.0;
      } else if (rtb_Multiply1 < 0.0) {
        tmp_0 = 0.0;
      } else {
        tmp_0 = rtb_Multiply1;
      }

      /* Sum: '<S62>/Add' incorporates:
       *  Constant: '<S62>/Motor dead zone'
       *  DataTypeConversion: '<S62>/Cast'
       *  Saturate: '<S105>/Saturation'
       */
      mospeed = (uint16_T)((uint32_T)((uint16_T)500U) + (uint16_T)tmp_0);

      /* DataStoreWrite: '<S29>/Data Store Write' */
      rtDWork.pwmMotor = mospeed;

      /* RelationalOperator: '<S8>/Equal17' incorporates:
       *  Constant: '<S62>/Constant'
       *  RelationalOperator: '<S62>/GreaterThan1'
       */
      rtb_Equal17 = (rtb_IntegralGain > controlWidth);

      /* DataTypeConversion: '<S62>/Cast1' incorporates:
       *  Constant: '<S62>/Constant1'
       *  RelationalOperator: '<S62>/GreaterThan'
       */
      cw = (control > 0.0);

      /* Logic: '<S62>/AND' incorporates:
       *  DataStoreWrite: '<S29>/Data Store Write1'
       */
      rtDWork.cwMotor = (rtb_Equal17 && cw);

      /* Logic: '<S62>/NOT' */
      ccw = !cw;

      /* Logic: '<S62>/AND1' incorporates:
       *  DataStoreWrite: '<S29>/Data Store Write8'
       */
      rtDWork.ccwMotor = (rtb_Equal17 && ccw);

      /* DeadZone: '<S91>/DeadZone' */
      if (rtb_Multiply1 > 300.0) {
        rtb_Multiply1 -= 300.0;
      } else if (rtb_Multiply1 >= 0.0) {
        rtb_Multiply1 = 0.0;
      } else {
        rtb_Multiply1 -= 0.0;
      }

      /* End of DeadZone: '<S91>/DeadZone' */

      /* Gain: '<S95>/Integral Gain' */
      rtb_IntegralGain *= intVal;

      /* Switch: '<S89>/Switch1' incorporates:
       *  Constant: '<S89>/Clamping_zero'
       *  Constant: '<S89>/Constant'
       *  Constant: '<S89>/Constant2'
       *  RelationalOperator: '<S89>/fix for DT propagation issue'
       */
      if (rtb_Multiply1 > 0.0) {
        rtPrevAction = 1;
      } else {
        rtPrevAction = (-1);
      }

      /* Switch: '<S89>/Switch2' incorporates:
       *  Constant: '<S89>/Clamping_zero'
       *  Constant: '<S89>/Constant3'
       *  Constant: '<S89>/Constant4'
       *  RelationalOperator: '<S89>/fix for DT propagation issue1'
       */
      if (rtb_IntegralGain > 0.0) {
        rtAction = 1;
      } else {
        rtAction = (-1);
      }

      /* Switch: '<S89>/Switch' incorporates:
       *  Constant: '<S89>/Clamping_zero'
       *  Constant: '<S89>/Constant1'
       *  Logic: '<S89>/AND3'
       *  RelationalOperator: '<S89>/Equal1'
       *  RelationalOperator: '<S89>/Relational Operator'
       *  Switch: '<S89>/Switch1'
       *  Switch: '<S89>/Switch2'
       */
      if ((0.0 != rtb_Multiply1) && (rtPrevAction == rtAction)) {
        rtb_IntegralGain = 0.0;
      }

      /* Update for DiscreteIntegrator: '<S98>/Integrator' incorporates:
       *  Switch: '<S89>/Switch'
       */
      rtDWork.Integrator_DSTATE += 1.0 * rtb_IntegralGain;
    }

    rtPrevZCSigState.Subsystem_Trig_ZCE_g = rtb_NotEqual;

    /* End of Outputs for SubSystem: '<S8>/Subsystem' */

    /* RelationalOperator: '<S8>/Equal6' incorporates:
     *  Constant: '<S8>/Constant7'
     */
    rtb_Equal14 = (slotSelected == 6.0);

    /* RelationalOperator: '<S8>/Equal5' incorporates:
     *  Constant: '<S8>/Constant6'
     *  DataStoreRead: '<S1>/Data Store Read'
     */
    rtb_NotEqual = (rtDWork.Board_ID == 2.0);

    /* Logic: '<S8>/AND9' incorporates:
     *  Logic: '<S8>/NOT4'
     */
    AND9 = (rtb_Equal14 && (!rtb_NotEqual));

    /* Outputs for Enabled SubSystem: '<S8>/TRCK1_ID2_RX' */
    /* Constant: '<S8>/Constant5' */
    MMBS1_RX(AND9, TRCK1_ID2, &rtB.TRCK1_ID2_RX, &rtDWork.TRCK1_ID2_RX);

    /* End of Outputs for SubSystem: '<S8>/TRCK1_ID2_RX' */

    /* Logic: '<S8>/AND8' */
    rtb_AND8 = (rtb_Equal14 && rtb_NotEqual);

    /* Outputs for Triggered SubSystem: '<S8>/TRCK1_ID2_TX' */
    /* Constant: '<S8>/Constant5' */
    TRCK1_ID2_TX(rtb_AND8, TRCK1_ID2, &rtDWork.Local_Ticks,
                 &rtDWork.potentiometer1, &rtDWork.potentiometer2,
                 &rtB.TRCK1_ID2_TX_f, &rtPrevZCSigState.TRCK1_ID2_TX_f);

    /* End of Outputs for SubSystem: '<S8>/TRCK1_ID2_TX' */

    /* RelationalOperator: '<S8>/Equal14' incorporates:
     *  Constant: '<S8>/Constant20'
     */
    rtb_Equal14 = (slotSelected == 7.0);

    /* RelationalOperator: '<S8>/Equal7' incorporates:
     *  Constant: '<S8>/Constant19'
     *  DataStoreRead: '<S1>/Data Store Read'
     */
    rtb_NotEqual = (rtDWork.Board_ID == 3.0);

    /* Logic: '<S8>/AND10' */
    rtb_AND10 = (rtb_Equal14 && rtb_NotEqual);

    /* Outputs for Triggered SubSystem: '<S8>/TRCK1_ID3_TX' */
    /* Constant: '<S8>/Constant26' */
    TRCK1_ID2_TX(rtb_AND10, TRCK1_ID3, &rtDWork.Local_Ticks,
                 &rtDWork.potentiometer1, &rtDWork.potentiometer2,
                 &rtB.TRCK1_ID3_TX, &rtPrevZCSigState.TRCK1_ID3_TX);

    /* End of Outputs for SubSystem: '<S8>/TRCK1_ID3_TX' */

    /* RelationalOperator: '<S8>/Equal13' incorporates:
     *  Constant: '<S8>/Constant17'
     */
    rtb_Equal16 = (slotSelected == 4.0);

    /* RelationalOperator: '<S8>/Equal17' incorporates:
     *  Constant: '<S8>/Constant16'
     *  DataStoreRead: '<S1>/Data Store Read'
     *  RelationalOperator: '<S8>/Equal3'
     */
    rtb_Equal17 = (rtDWork.Board_ID == 1.0);

    /* Logic: '<S8>/AND7' incorporates:
     *  Logic: '<S8>/NOT3'
     */
    AND7 = (rtb_Equal16 && (!rtb_Equal17));

    /* Outputs for Enabled SubSystem: '<S8>/TRCK1_RX' */
    /* Constant: '<S8>/Constant3' */
    MMBS1_RX(AND7, TRCK1_ID1, &rtB.TRCK1_RX, &rtDWork.TRCK1_RX);

    /* End of Outputs for SubSystem: '<S8>/TRCK1_RX' */

    /* Logic: '<S8>/AND6' */
    rtb_AND6 = (rtb_Equal16 && rtb_Equal17);

    /* Outputs for Triggered SubSystem: '<S8>/TRCK1_TX' */
    /* Constant: '<S8>/Constant3' */
    TRCK1_ID2_TX(rtb_AND6, TRCK1_ID1, &rtDWork.Local_Ticks,
                 &rtDWork.potentiometer1, &rtDWork.potentiometer2, &rtB.TRCK1_TX,
                 &rtPrevZCSigState.TRCK1_TX);

    /* End of Outputs for SubSystem: '<S8>/TRCK1_TX' */

    /* Outputs for Enabled SubSystem: '<S8>/TRCK_ID3_RX' incorporates:
     *  EnablePort: '<S35>/Enable'
     */
    /* Logic: '<S8>/AND11' incorporates:
     *  Logic: '<S8>/NOT5'
     */
    if (rtb_Equal14 && (!rtb_NotEqual)) {
      rtDWork.TRCK_ID3_RX_MODE = true;

      /* M-S-Function: '<S146>/S-Function' incorporates:
       *  Constant: '<S8>/Constant26'
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

      /* Outputs for Enabled SubSystem: '<S146>/Enabled Subsystem' */
      EnabledSubsystem(rtb_SFunction_o1_k1, rtb_SFunction_o2_j,
                       &rtB.EnabledSubsystem_b);

      /* End of Outputs for SubSystem: '<S146>/Enabled Subsystem' */
    } else if (rtDWork.TRCK_ID3_RX_MODE) {
      rtDWork.TRCK_ID3_RX_MODE = false;
    }

    /* End of Logic: '<S8>/AND11' */
    /* End of Outputs for SubSystem: '<S8>/TRCK_ID3_RX' */

    /* RelationalOperator: '<S8>/Equal17' incorporates:
     *  Constant: '<S8>/Constant22'
     *  RelationalOperator: '<S8>/Equal15'
     */
    rtb_Equal17 = (slotSelected == 8.0);

    /* RelationalOperator: '<S8>/Equal8' incorporates:
     *  Constant: '<S8>/Constant21'
     *  DataStoreRead: '<S1>/Data Store Read'
     */
    rtb_Equal16 = (rtDWork.Board_ID == 4.0);

    /* Logic: '<S8>/AND13' incorporates:
     *  Logic: '<S8>/NOT6'
     */
    rtb_AND13_b = (rtb_Equal17 && (!rtb_Equal16));

    /* Outputs for Enabled SubSystem: '<S8>/TRLS_ID4_RX' incorporates:
     *  EnablePort: '<S36>/Enable'
     */
    if (rtb_AND13_b) {
      rtDWork.TRLS_ID4_RX_MODE = true;

      /* M-S-Function: '<S149>/S-Function' incorporates:
       *  Constant: '<S8>/Constant8'
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

      /* Outputs for Enabled SubSystem: '<S149>/Enabled Subsystem' incorporates:
       *  EnablePort: '<S152>/Enable'
       */
      if (rtb_SFunction_o1_k > 0) {
        /* SignalConversion generated from: '<S152>/In1' */
        rtB.In1_e = rtb_SFunction_o2_e;

        /* SignalConversion generated from: '<S152>/In2' */
        rtB.In2_e = rtb_SFunction_o3_p;

        /* SignalConversion generated from: '<S152>/In6' */
        buttonpress1 = rtb_SFunction_o7_l;
      }

      /* End of Outputs for SubSystem: '<S149>/Enabled Subsystem' */

      /* DataTypeConversion: '<S148>/Cast' */
      rtb_Cast_bt = rtB.In1_e;

      /* Outputs for Atomic SubSystem: '<S148>/Bit Shift' */
      BitShift_j(rtb_Cast_bt, &rtB.BitShift_jm);

      /* End of Outputs for SubSystem: '<S148>/Bit Shift' */

      /* Gain: '<S36>/Gain' incorporates:
       *  DataStoreWrite: '<S36>/Data Store Write'
       *  DataTypeConversion: '<S148>/Cast1'
       *  Sum: '<S148>/Add'
       */
      tmp = (uint32_T)(uint16_T)((uint32_T)rtB.BitShift_jm.y + rtB.In2_e) *
        ((uint16_T)62921U);
      rtDWork.trailerOneAngle = (uint16_T)((uint32_T)((tmp & 2097152U) != 0U) +
        (tmp >> 22));

      /* DataStoreWrite: '<S36>/Data Store Write1' */
      rtDWork.trailer1buttonPress = buttonpress1;
    } else if (rtDWork.TRLS_ID4_RX_MODE) {
      rtDWork.TRLS_ID4_RX_MODE = false;
    }

    /* End of Outputs for SubSystem: '<S8>/TRLS_ID4_RX' */

    /* Logic: '<S8>/AND12' */
    rtb_NotEqual = (rtb_Equal17 && rtb_Equal16);

    /* Outputs for Triggered SubSystem: '<S8>/TRLS_ID4_TX' incorporates:
     *  TriggerPort: '<S37>/Trigger'
     */
    if (rtb_NotEqual && (rtPrevZCSigState.TRLS_ID4_TX_Trig_ZCE != POS_ZCSIG)) {
      /* DataStoreRead: '<S37>/Data Store Read2' */
      rtB.DataStoreRead2 = rtDWork.Local_Ticks;

      /* DataStoreRead: '<S37>/Data Store Read3' */
      rtB.DataStoreRead3_h = rtDWork.buttonPress;

      /* Outputs for Atomic SubSystem: '<S154>/Bit Shift' */
      /* DataStoreRead: '<S37>/Data Store Read1' */
      BitShift(rtDWork.potentiometer2, &rtB.BitShift_h);

      /* End of Outputs for SubSystem: '<S154>/Bit Shift' */

      /* DataTypeConversion: '<S154>/Cast' */
      rtB.Cast_d = (uint8_T)rtB.BitShift_h.y;

      /* DataTypeConversion: '<S154>/Cast1' incorporates:
       *  DataStoreRead: '<S37>/Data Store Read1'
       */
      rtB.Cast1_c = (uint8_T)rtDWork.potentiometer2;

      /* Outputs for Atomic SubSystem: '<S155>/Bit Shift' */
      /* DataStoreRead: '<S37>/Data Store Read' */
      BitShift(rtDWork.potentiometer1, &rtB.BitShift_d);

      /* End of Outputs for SubSystem: '<S155>/Bit Shift' */

      /* DataTypeConversion: '<S155>/Cast' */
      rtB.Cast_n = (uint8_T)rtB.BitShift_d.y;

      /* DataTypeConversion: '<S155>/Cast1' incorporates:
       *  DataStoreRead: '<S37>/Data Store Read'
       */
      rtB.Cast1_i = (uint8_T)rtDWork.potentiometer1;

      /* Update for M-S-Function: '<S153>/S-Function' incorporates:
       *  Constant: '<S8>/Constant8'
       */
      {
        /* prepare the data */
        canTxData.uint8_T_info[0] = rtB.Cast_n;
        canTxData.uint8_T_info[1] = rtB.Cast1_i;
        canTxData.uint8_T_info[2] = rtB.Cast_d;
        canTxData.uint8_T_info[3] = rtB.Cast1_c;
        canTxData.uint8_T_info[4] = rtB.DataStoreRead2;
        canTxData.uint8_T_info[5] = rtB.DataStoreRead3_h;

        /* send the data */
        CanTransmit(0, TRLS1_ID4, 6, &canTxData.uint8_T_info[0]);
      }
    }

    rtPrevZCSigState.TRLS_ID4_TX_Trig_ZCE = rtb_NotEqual;

    /* End of Outputs for SubSystem: '<S8>/TRLS_ID4_TX' */

    /* RelationalOperator: '<S8>/Equal17' incorporates:
     *  Constant: '<S8>/Constant25'
     */
    rtb_Equal17 = (slotSelected == 9.0);

    /* RelationalOperator: '<S8>/Equal16' incorporates:
     *  Constant: '<S8>/Constant24'
     *  DataStoreRead: '<S1>/Data Store Read'
     */
    rtb_Equal16 = (rtDWork.Board_ID == 5.0);

    /* Logic: '<S8>/AND15' incorporates:
     *  Logic: '<S8>/NOT7'
     */
    rtb_AND15 = (rtb_Equal17 && (!rtb_Equal16));

    /* Outputs for Enabled SubSystem: '<S8>/TRLS_ID5_RX' incorporates:
     *  EnablePort: '<S38>/Enable'
     */
    if (rtb_AND15) {
      rtDWork.TRLS_ID5_RX_MODE = true;

      /* M-S-Function: '<S161>/S-Function' incorporates:
       *  Constant: '<S8>/Constant18'
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

      /* Outputs for Enabled SubSystem: '<S161>/Enabled Subsystem' incorporates:
       *  EnablePort: '<S164>/Enable'
       */
      if (rtb_SFunction_o1_n > 0) {
        /* SignalConversion generated from: '<S164>/In1' */
        rtB.In1 = rtb_SFunction_o2_l;

        /* SignalConversion generated from: '<S164>/In2' */
        rtB.In2 = rtb_SFunction_o3_m;

        /* SignalConversion generated from: '<S164>/In6' */
        buttonpress2 = rtb_SFunction_o7_f;
      }

      /* End of Outputs for SubSystem: '<S161>/Enabled Subsystem' */

      /* DataStoreWrite: '<S38>/Data Store Write' */
      rtDWork.trailer2buttonPress = buttonpress2;

      /* DataTypeConversion: '<S160>/Cast' */
      rtb_Cast_g1 = rtB.In1;

      /* Outputs for Atomic SubSystem: '<S160>/Bit Shift' */
      BitShift_j(rtb_Cast_g1, &rtB.BitShift_c);

      /* End of Outputs for SubSystem: '<S160>/Bit Shift' */

      /* Gain: '<S38>/Gain' incorporates:
       *  DataStoreWrite: '<S38>/Data Store Write1'
       *  DataTypeConversion: '<S160>/Cast1'
       *  Sum: '<S160>/Add'
       */
      tmp = (uint32_T)(uint16_T)((uint32_T)rtB.BitShift_c.y + rtB.In2) *
        ((uint16_T)62921U);
      rtDWork.trailerTwoAngle = (uint16_T)((uint32_T)((tmp & 2097152U) != 0U) +
        (tmp >> 22));
    } else if (rtDWork.TRLS_ID5_RX_MODE) {
      rtDWork.TRLS_ID5_RX_MODE = false;
    }

    /* End of Outputs for SubSystem: '<S8>/TRLS_ID5_RX' */

    /* Logic: '<S8>/AND14' */
    rtb_NotEqual = (rtb_Equal17 && rtb_Equal16);

    /* Outputs for Triggered SubSystem: '<S8>/TRLS_ID5_TX' incorporates:
     *  TriggerPort: '<S39>/Trigger'
     */
    if (rtb_NotEqual && (rtPrevZCSigState.TRLS_ID5_TX_Trig_ZCE != POS_ZCSIG)) {
      /* DataStoreRead: '<S39>/Data Store Read3' */
      rtB.DataStoreRead3 = rtDWork.Local_Ticks;

      /* DataStoreRead: '<S39>/Data Store Read4' */
      rtB.DataStoreRead4 = rtDWork.buttonPress;

      /* Outputs for Atomic SubSystem: '<S166>/Bit Shift' */
      /* DataStoreRead: '<S39>/Data Store Read2' */
      BitShift(rtDWork.potentiometer2, &rtB.BitShift_g);

      /* End of Outputs for SubSystem: '<S166>/Bit Shift' */

      /* DataTypeConversion: '<S166>/Cast' */
      rtB.Cast = (uint8_T)rtB.BitShift_g.y;

      /* DataTypeConversion: '<S166>/Cast1' incorporates:
       *  DataStoreRead: '<S39>/Data Store Read2'
       */
      rtB.Cast1 = (uint8_T)rtDWork.potentiometer2;

      /* Outputs for Atomic SubSystem: '<S167>/Bit Shift' */
      /* DataStoreRead: '<S39>/Data Store Read1' */
      BitShift(rtDWork.potentiometer1, &rtB.BitShift_gu);

      /* End of Outputs for SubSystem: '<S167>/Bit Shift' */

      /* DataTypeConversion: '<S167>/Cast' */
      rtB.Cast_f = (uint8_T)rtB.BitShift_gu.y;

      /* DataTypeConversion: '<S167>/Cast1' incorporates:
       *  DataStoreRead: '<S39>/Data Store Read1'
       */
      rtB.Cast1_m = (uint8_T)rtDWork.potentiometer1;

      /* Update for M-S-Function: '<S165>/S-Function' incorporates:
       *  Constant: '<S8>/Constant18'
       */
      {
        /* prepare the data */
        canTxData.uint8_T_info[0] = rtB.Cast_f;
        canTxData.uint8_T_info[1] = rtB.Cast1_m;
        canTxData.uint8_T_info[2] = rtB.Cast;
        canTxData.uint8_T_info[3] = rtB.Cast1;
        canTxData.uint8_T_info[4] = rtB.DataStoreRead3;
        canTxData.uint8_T_info[5] = rtB.DataStoreRead4;

        /* send the data */
        CanTransmit(0, TRLS1_ID5, 6, &canTxData.uint8_T_info[0]);
      }
    }

    rtPrevZCSigState.TRLS_ID5_TX_Trig_ZCE = rtb_NotEqual;

    /* End of Outputs for SubSystem: '<S8>/TRLS_ID5_TX' */
  } else if (rtDWork.Messageselector_MODE) {
    /* Disable for Enabled SubSystem: '<S8>/MMBS1_RX' */
    if (rtDWork.MMBS1_RX_j.MMBS1_RX_MODE) {
      /* Constant: '<S8>/Constant12' */
      MMBS1_RX_Disable(&rtDWork.MMBS1_RX_j);
    }

    /* End of Disable for SubSystem: '<S8>/MMBS1_RX' */

    /* Disable for Triggered SubSystem: '<S8>/MMBS1_TX' */
    /* Constant: '<S8>/Constant12' */
    /* Disable for Enabled SubSystem: '<S8>/SSTM1_RX' */
    if (rtDWork.SSTM1_RX.MMBS1_RX_MODE) {
      /* Constant: '<S8>/Constant14' */
      MMBS1_RX_Disable(&rtDWork.SSTM1_RX);
    }

    /* End of Disable for SubSystem: '<S8>/SSTM1_RX' */

    /* Disable for Triggered SubSystem: '<S8>/SSTM1_TX' */
    /* Constant: '<S8>/Constant14' */
    /* Disable for Enabled SubSystem: '<S8>/SYNC1_RX' */
    if (rtDWork.SYNC1_RX_MODE) {
      rtDWork.SYNC1_RX_MODE = false;
    }

    /* End of Disable for SubSystem: '<S8>/SYNC1_RX' */
    /* Disable for Enabled SubSystem: '<S8>/TRCK1_ID2_RX' */
    if (rtDWork.TRCK1_ID2_RX.MMBS1_RX_MODE) {
      /* Constant: '<S8>/Constant5' */
      MMBS1_RX_Disable(&rtDWork.TRCK1_ID2_RX);
    }

    /* End of Disable for SubSystem: '<S8>/TRCK1_ID2_RX' */

    /* Disable for Triggered SubSystem: '<S8>/TRCK1_ID2_TX' */
    /* Constant: '<S8>/Constant5' */
    /* Disable for Triggered SubSystem: '<S8>/TRCK1_ID3_TX' */
    /* Constant: '<S8>/Constant26' */
    /* Disable for Enabled SubSystem: '<S8>/TRCK1_RX' */
    if (rtDWork.TRCK1_RX.MMBS1_RX_MODE) {
      /* Constant: '<S8>/Constant3' */
      MMBS1_RX_Disable(&rtDWork.TRCK1_RX);
    }

    /* End of Disable for SubSystem: '<S8>/TRCK1_RX' */

    /* Disable for Triggered SubSystem: '<S8>/TRCK1_TX' */
    /* Constant: '<S8>/Constant3' */
    /* Disable for Enabled SubSystem: '<S8>/TRCK_ID3_RX' */
    if (rtDWork.TRCK_ID3_RX_MODE) {
      rtDWork.TRCK_ID3_RX_MODE = false;
    }

    /* End of Disable for SubSystem: '<S8>/TRCK_ID3_RX' */

    /* Disable for Enabled SubSystem: '<S8>/TRLS_ID4_RX' */
    if (rtDWork.TRLS_ID4_RX_MODE) {
      rtDWork.TRLS_ID4_RX_MODE = false;
    }

    /* End of Disable for SubSystem: '<S8>/TRLS_ID4_RX' */
    /* Disable for Enabled SubSystem: '<S8>/TRLS_ID5_RX' */
    if (rtDWork.TRLS_ID5_RX_MODE) {
      rtDWork.TRLS_ID5_RX_MODE = false;
    }

    /* End of Disable for SubSystem: '<S8>/TRLS_ID5_RX' */
    rtDWork.Messageselector_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S1>/Message selector' */

  /* Outputs for Triggered SubSystem: '<S10>/Subsystem' incorporates:
   *  TriggerPort: '<S172>/Trigger'
   */
  if (rtb_AND && (rtPrevZCSigState.Subsystem_Trig_ZCE != POS_ZCSIG)) {
    /* DataStoreWrite: '<S172>/Data Store Write1' incorporates:
     *  Constant: '<S172>/Constant1'
     */
    rtDWork.Local_Ticks = ((uint8_T)0U);

    /* DataStoreWrite: '<S172>/Data Store Write' incorporates:
     *  Constant: '<S172>/Constant3'
     */
    rtDWork.SlotTime = slotTime;
  }

  rtPrevZCSigState.Subsystem_Trig_ZCE = rtb_AND;

  /* End of Outputs for SubSystem: '<S10>/Subsystem' */

  /* Outputs for Enabled SubSystem: '<S10>/Subsystem2' incorporates:
   *  EnablePort: '<S173>/Enable'
   */
  /* Logic: '<S10>/AND1' incorporates:
   *  DataStoreRead: '<S10>/Data Store Read'
   *  DataStoreRead: '<S10>/Data Store Read4'
   *  DataStoreRead: '<S10>/Data Store Read5'
   *  Logic: '<S10>/NOT'
   *  RelationalOperator: '<S10>/NotEqual'
   */
  if ((rtDWork.Board_ID != Master_ID) && (!rtDWork.slaveClockOn)) {
    rtDWork.Subsystem2_MODE = true;

    /* M-S-Function: '<S174>/S-Function' incorporates:
     *  Constant: '<S173>/Constant10'
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

    /* Outputs for Enabled SubSystem: '<S174>/Enabled Subsystem' */
    EnabledSubsystem(rtb_SFunction_o1, rtb_SFunction_o2, &rtB.EnabledSubsystem_i);

    /* End of Outputs for SubSystem: '<S174>/Enabled Subsystem' */

    /* Outputs for Triggered SubSystem: '<S173>/Subsystem1' incorporates:
     *  TriggerPort: '<S175>/Trigger'
     */
    zcEvent = rt_I32ZCFcn(RISING_ZERO_CROSSING,
                          &rtPrevZCSigState.Subsystem1_Trig_ZCE,
                          (rtb_SFunction_o1));
    if (zcEvent != NO_ZCEVENT) {
      /* DataStoreWrite: '<S175>/Data Store Write' */
      rtDWork.SlotTime = rtB.EnabledSubsystem_i.In1;

      /* DataStoreWrite: '<S175>/Data Store Write1' incorporates:
       *  Constant: '<S175>/Constant'
       */
      rtDWork.Local_Ticks = ((uint8_T)0U);

      /* DataStoreWrite: '<S175>/Data Store Write2' incorporates:
       *  Constant: '<S175>/Constant1'
       */
      rtDWork.slaveClockOn = true;

      /* DataStoreWrite: '<S175>/Data Store Write3' incorporates:
       *  Constant: '<S175>/Constant2'
       */
      rtDWork.slot = ((uint8_T)1U);
    }

    /* End of Outputs for SubSystem: '<S173>/Subsystem1' */
  } else if (rtDWork.Subsystem2_MODE) {
    rtDWork.Subsystem2_MODE = false;
  }

  /* End of Logic: '<S10>/AND1' */
  /* End of Outputs for SubSystem: '<S10>/Subsystem2' */

  /* DataStoreWrite: '<S1>/Data Store Write' incorporates:
   *  Constant: '<S1>/Constant1'
   */
  rtDWork.Board1_Error = ErrorBoard1;

  /* DataStoreWrite: '<S1>/Data Store Write2' incorporates:
   *  Constant: '<S1>/Constant2'
   */
  rtDWork.Board2_Error = ErrorBoard2;

  /* DataStoreWrite: '<S1>/Data Store Write3' incorporates:
   *  Constant: '<S1>/Constant3'
   */
  rtDWork.Board3_Error = ErrorBoard3;

  /* If: '<S1>/If' incorporates:
   *  DataStoreRead: '<S1>/Data Store Read38'
   */
  rtPrevAction = rtDWork.If_ActiveSubsystem;
  rtAction = -1;
  if (rtDWork.Board_ID <= 3.0) {
    rtAction = 0;
  }

  rtDWork.If_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
  }

  if (rtAction == 0) {
    /* Outputs for IfAction SubSystem: '<S1>/Triggered Subsystem' incorporates:
     *  ActionPort: '<S16>/Action Port'
     */
    /* Saturate: '<S16>/Saturation' */
    Master_ID = ((uint8_T)1U);

    /* Saturate: '<S16>/Saturation1' */
    u1 = ((uint8_T)1U);

    /* Saturate: '<S16>/Saturation' incorporates:
     *  DataStoreRead: '<S16>/Data Store Read46'
     */
    if (rtDWork.PositionID4 <= Master_ID) {
      Master_ID = rtDWork.PositionID4;
    }

    /* Saturate: '<S16>/Saturation1' incorporates:
     *  DataStoreRead: '<S16>/Data Store Read45'
     */
    if (rtDWork.PositionID5 <= u1) {
      u1 = rtDWork.PositionID5;
    }

    /* Sum: '<S16>/Add' incorporates:
     *  Saturate: '<S16>/Saturation'
     *  Saturate: '<S16>/Saturation1'
     */
    amounttrailers = (uint8_T)((uint32_T)Master_ID + u1);

    /* M-S-Function: '<S183>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction_a = DiginGet(DIGIN_PORTA_PIN0);

    /* Outputs for Enabled SubSystem: '<S16>/Subsystem' incorporates:
     *  EnablePort: '<S184>/Enable'
     */
    if (rtb_Level2MfileSFunction_a) {
      /* CombinatorialLogic: '<S190>/Logic' incorporates:
       *  Constant: '<S184>/Constant'
       *  DataStoreRead: '<S16>/Data Store Read1'
       *  DataTypeConversion: '<S16>/Cast'
       *  DataTypeConversion: '<S184>/Cast2'
       *  Memory: '<S190>/Memory'
       */
      rtb_AND = rtConstP.pooled17[((((uint32_T)(rtDWork.trailer2buttonPress != 0)
        << 1) + (uint32_T)(ResetPosition != 0.0)) << 1) +
        rtDWork.Memory_PreviousInput];

      /* If: '<S184>/If1' incorporates:
       *  DataStoreRead: '<S184>/Data Store Read3'
       */
      if (rtDWork.PositionID4 == 1) {
        /* Outputs for IfAction SubSystem: '<S184>/If Action Subsystem' incorporates:
         *  ActionPort: '<S185>/Action Port'
         */
        /* Gain: '<S185>/Gain' */
        rtB.Gain_i = (uint8_T)(rtb_AND ? (int32_T)((uint8_T)128U) : 0);

        /* End of Outputs for SubSystem: '<S184>/If Action Subsystem' */
      } else {
        /* Outputs for IfAction SubSystem: '<S184>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S186>/Action Port'
         */
        /* Gain: '<S186>/Gain' */
        rtB.Gain = (uint8_T)(rtb_AND ? (int32_T)((uint8_T)128U) : 0);

        /* End of Outputs for SubSystem: '<S184>/If Action Subsystem1' */
      }

      /* End of If: '<S184>/If1' */

      /* Sum: '<S184>/Add1' incorporates:
       *  Gain: '<S185>/Gain'
       *  Gain: '<S186>/Gain'
       */
      rtB.Add1 = (uint8_T)((((uint32_T)rtB.Gain_i << 1) + rtB.Gain) >> 1);

      /* CombinatorialLogic: '<S189>/Logic' incorporates:
       *  Constant: '<S184>/Constant'
       *  DataStoreRead: '<S16>/Data Store Read'
       *  DataTypeConversion: '<S16>/Cast1'
       *  DataTypeConversion: '<S184>/Cast2'
       *  Memory: '<S189>/Memory'
       */
      rtb_NotEqual = rtConstP.pooled17[((((uint32_T)(rtDWork.trailer1buttonPress
        != 0) << 1) + (uint32_T)(ResetPosition != 0.0)) << 1) +
        rtDWork.Memory_PreviousInput_d];

      /* If: '<S184>/If' incorporates:
       *  DataStoreRead: '<S184>/Data Store Read2'
       */
      if (rtDWork.PositionID5 == 1) {
        /* Outputs for IfAction SubSystem: '<S184>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S187>/Action Port'
         */
        /* Gain: '<S187>/Gain' */
        rtB.Gain_f = (uint8_T)(rtb_NotEqual ? (int32_T)((uint8_T)128U) : 0);

        /* End of Outputs for SubSystem: '<S184>/If Action Subsystem2' */
      } else {
        /* Outputs for IfAction SubSystem: '<S184>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S188>/Action Port'
         */
        /* Gain: '<S188>/Gain' */
        rtB.Gain_c = (uint8_T)(rtb_NotEqual ? (int32_T)((uint8_T)128U) : 0);

        /* End of Outputs for SubSystem: '<S184>/If Action Subsystem3' */
      }

      /* End of If: '<S184>/If' */

      /* Sum: '<S184>/Add2' incorporates:
       *  Gain: '<S187>/Gain'
       *  Gain: '<S188>/Gain'
       */
      rtB.Add2 = (uint8_T)((((uint32_T)rtB.Gain_f << 1) + rtB.Gain_c) >> 1);

      /* Update for Memory: '<S190>/Memory' */
      rtDWork.Memory_PreviousInput = rtb_AND;

      /* Update for Memory: '<S189>/Memory' */
      rtDWork.Memory_PreviousInput_d = rtb_NotEqual;
    }

    /* End of Outputs for SubSystem: '<S16>/Subsystem' */

    /* DataTypeConversion: '<S16>/Cast3' incorporates:
     *  Sum: '<S184>/Add1'
     */
    positionID5 = (uint8_T)((uint32_T)rtB.Add1 >> 6);

    /* DataStoreWrite: '<S16>/Data Store Write12' */
    rtDWork.PositionID5 = positionID5;

    /* DataTypeConversion: '<S16>/Cast2' incorporates:
     *  Sum: '<S184>/Add2'
     */
    positionID4 = (uint8_T)((uint32_T)rtB.Add2 >> 6);

    /* DataStoreWrite: '<S16>/Data Store Write6' */
    rtDWork.PositionID4 = positionID4;

    /* End of Outputs for SubSystem: '<S1>/Triggered Subsystem' */
  }

  /* End of If: '<S1>/If' */
  /* M-S-Function: '<S180>/Level-2 M-file S-Function' */
  /* read the current CPU load */
  SI_CPUload = OsGetCpuLoad();

  /* M-S-Function: '<S181>/Level-2 M-file S-Function' */
  /* read the free heap size */
  SI_FreeHeap = OsGetFreeHeapSize();

  /* M-S-Function: '<S182>/Level-2 M-file S-Function' */
  /* read the task's free stack size */
  SI_FreeStack = OsGetTaskFreeStackSize("AppCtrlTask");
}

/* Model initialize function */
void HANcoder_E407_TTA_CombineModel_Membership_2022a_initialize(void)
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

    /* Start for If: '<S1>/If1' */
    rtDWork.If1_ActiveSubsystem = -1;

    /* Start for IfAction SubSystem: '<S1>/Setting ID' */
    /* Start for M-S-Function: '<S177>/Level-2 M-file S-Function' */

    /* configure the digital input */
    DiginConfigure(DIGIN_PORTG_PIN12, DIGIN_CFG_PULLDOWN);

    /* Start for M-S-Function: '<S178>/Level-2 M-file S-Function' */

    /* configure the digital input */
    DiginConfigure(DIGIN_PORTG_PIN15, DIGIN_CFG_PULLDOWN);

    /* Start for M-S-Function: '<S179>/Level-2 M-file S-Function' */

    /* configure the digital input */
    DiginConfigure(DIGIN_PORTA_PIN4, DIGIN_CFG_PULLDOWN);

    /* End of Start for SubSystem: '<S1>/Setting ID' */

    /* register the callback handler */
    TimeoutRegisterCompareEventCallback(TIMEOUT_TIM4_PIN_PD12,
      TimeoutEventIRQ_TIMEOUT_TIM4_PIN_PD12);

    /* End of Start for S-Function (sfcn_timeout_event_irq): '<S4>/S-Function' */

    /* Start for Enabled SubSystem: '<S1>/Message selector'
     *
     * Block description for '<S1>/Message selector':
     *  Truck 1
     */
    /* Start for Enabled SubSystem: '<S8>/MMBS1_RX' */
    /* Constant: '<S8>/Constant12' */
    MMBS1_RX_Start(MMBS1_ID);

    /* End of Start for SubSystem: '<S8>/MMBS1_RX' */

    /* Start for Enabled SubSystem: '<S8>/SSTM1_RX' */
    /* Constant: '<S8>/Constant14' */
    MMBS1_RX_Start(SSTM1_ID);

    /* End of Start for SubSystem: '<S8>/SSTM1_RX' */

    /* Start for Enabled SubSystem: '<S8>/SYNC1_RX' */
    /* Start for M-S-Function: '<S46>/S-Function' incorporates:
     *  Constant: '<S8>/Constant10'
     */

    /* register a CAN storage buffer for the message with this ID */
    CanIoCreateMessageReceivedStorage(0, SYNC1_ID);

    /* End of Start for SubSystem: '<S8>/SYNC1_RX' */

    /* Start for Triggered SubSystem: '<S8>/Slot 5 execution' */
    /* Start for M-S-Function: '<S54>/Level-2 M-file S-Function' */

    /* configure the analog input for filtered inputs */
    AninConfigure(ANIN_PORTF_PIN7,0);
    MovingAverage_Start(&rtDWork.MovingAverage_p);

    /* Start for M-S-Function: '<S55>/Level-2 M-file S-Function' */

    /* configure the analog input for filtered inputs */
    AninConfigure(ANIN_PORTF_PIN8,0);
    MovingAverage_Start(&rtDWork.MovingAverage1);

    /* Start for M-S-Function: '<S52>/Level-2 M-file S-Function' */

    /* configure the digital input */
    DiginConfigure(DIGIN_PORTA_PIN0, DIGIN_CFG_PULLDOWN);

    /* Start for M-S-Function: '<S53>/Level-2 M-file S-Function' */

    /* configure the quadrature encoder module */
    QuadEncConfigure(QUADENC_TIM3_PA6_PB5, QUADENC_CFG_FLOATING);

    /* Start for M-S-Function: '<S57>/Level-2 M-file S-Function' */

    /* configure the digital output */
    DigoutConfigure(DIGOUT_PORTE_PIN5, DIGOUT_CFG_PUSHPULL);

    /* Start for M-S-Function: '<S58>/Level-2 M-file S-Function' */

    /* configure the digital output */
    DigoutConfigure(DIGOUT_PORTE_PIN6, DIGOUT_CFG_PUSHPULL);

    /* Start for M-S-Function: '<S59>/Level-2 M-file S-Function' */

    /* configure the digital output */
    DigoutConfigure(DIGOUT_PORTC_PIN13, DIGOUT_CFG_PUSHPULL);

    /* Start for S-Function (sfcn_pwmout_init): '<S61>/S-Function' */

    /* initialize the PWM module and register the callback handler */
    PwmoutInit(PWMOUT_MODULE_TIM14, 10253, PWMOUT_EDGE_ALIGNMENT);
    PwmoutRegisterPeriodCompleteCallback(PWMOUT_MODULE_TIM14,
      PwmoutIRQ_PWMOUT_MODULE_TIM14);

    /* configures channel 1 */
    PwmoutConfigure(PWMOUT_TIM14_PIN_PF9, PWMOUT_ACTIVE_HIGH,
                    PWMOUT_INVERTED_OUTPUT_OFF);

    /* End of Start for SubSystem: '<S8>/Slot 5 execution' */

    /* Start for Enabled SubSystem: '<S8>/TRCK1_ID2_RX' */
    /* Constant: '<S8>/Constant5' */
    MMBS1_RX_Start(TRCK1_ID2);

    /* End of Start for SubSystem: '<S8>/TRCK1_ID2_RX' */

    /* Start for Enabled SubSystem: '<S8>/TRCK1_RX' */
    /* Constant: '<S8>/Constant3' */
    MMBS1_RX_Start(TRCK1_ID1);

    /* End of Start for SubSystem: '<S8>/TRCK1_RX' */

    /* Start for Enabled SubSystem: '<S8>/TRCK_ID3_RX' */
    /* Start for M-S-Function: '<S146>/S-Function' incorporates:
     *  Constant: '<S8>/Constant26'
     */

    /* register a CAN storage buffer for the message with this ID */
    CanIoCreateMessageReceivedStorage(0, TRCK1_ID3);

    /* End of Start for SubSystem: '<S8>/TRCK_ID3_RX' */

    /* Start for Enabled SubSystem: '<S8>/TRLS_ID4_RX' */
    /* Start for M-S-Function: '<S149>/S-Function' incorporates:
     *  Constant: '<S8>/Constant8'
     */

    /* register a CAN storage buffer for the message with this ID */
    CanIoCreateMessageReceivedStorage(0, TRLS1_ID4);

    /* End of Start for SubSystem: '<S8>/TRLS_ID4_RX' */

    /* Start for Enabled SubSystem: '<S8>/TRLS_ID5_RX' */
    /* Start for M-S-Function: '<S161>/S-Function' incorporates:
     *  Constant: '<S8>/Constant18'
     */

    /* register a CAN storage buffer for the message with this ID */
    CanIoCreateMessageReceivedStorage(0, TRLS1_ID5);

    /* End of Start for SubSystem: '<S8>/TRLS_ID5_RX' */
    /* End of Start for SubSystem: '<S1>/Message selector' */

    /* Start for Enabled SubSystem: '<S10>/Subsystem2' */
    /* Start for M-S-Function: '<S174>/S-Function' incorporates:
     *  Constant: '<S173>/Constant10'
     */

    /* register a CAN storage buffer for the message with this ID */
    CanIoCreateMessageReceivedStorage(0, SYNC1_ID);

    /* End of Start for SubSystem: '<S10>/Subsystem2' */

    /* Start for If: '<S1>/If' */
    rtDWork.If_ActiveSubsystem = -1;

    /* Start for IfAction SubSystem: '<S1>/Triggered Subsystem' */
    /* Start for M-S-Function: '<S183>/Level-2 M-file S-Function' */

    /* configure the digital input */
    DiginConfigure(DIGIN_PORTA_PIN0, DIGIN_CFG_PULLDOWN);

    /* End of Start for SubSystem: '<S1>/Triggered Subsystem' */

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

    /* Start for S-Function (sfcn_timeout_init): '<S9>/S-Function' */

    /* register the free running counter overflow callback handler */
    TimeoutRegisterOverflowCallback(TIMEOUT_MODULE_TIM4,
      TimeoutOverflowIRQ_TIMEOUT_MODULE_TIM4);

    /* Start for M-S-Function: '<S17>/Level-2 M-file S-Function' */

    /* initialize the measurement and calibration interface */
    MacUsbComInit();
    MacInit();
  }

  rtPrevZCSigState.EnabledSubsystem_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.Subsystem_Trig_ZCE_h = UNINITIALIZED_ZCSIG;
  rtPrevZCSigState.SYNC1_TX_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.Slot5execution_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.Subsystem_Trig_ZCE_g = POS_ZCSIG;
  rtPrevZCSigState.TRLS_ID4_TX_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.TRLS_ID5_TX_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.Subsystem_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.Subsystem1_Trig_ZCE = UNINITIALIZED_ZCSIG;
  rtPrevZCSigState.TRCK1_TX.TRCK1_ID2_TX_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.TRCK1_ID3_TX.TRCK1_ID2_TX_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.TRCK1_ID2_TX_f.TRCK1_ID2_TX_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.SSTM1_TX.MMBS1_TX_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.MMBS1_TX_a.MMBS1_TX_Trig_ZCE = POS_ZCSIG;

  /* SystemInitialize for Enabled SubSystem: '<S1>/Message selector'
   *
   * Block description for '<S1>/Message selector':
   *  Truck 1
   */
  /* SystemInitialize for Triggered SubSystem: '<S8>/Slot 5 execution' */
  MovingAverage_Init(&rtDWork.MovingAverage_p);
  MovingAverage_Init(&rtDWork.MovingAverage1);

  /* End of SystemInitialize for SubSystem: '<S8>/Slot 5 execution' */
  /* End of SystemInitialize for SubSystem: '<S1>/Message selector' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
