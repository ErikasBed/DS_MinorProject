<<<<<<< HEAD
/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_CombineModel.h
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_CombineModel'.
 *
 * Model version                  : 17.23
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Mon Jun  5 20:39:27 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_HANcoder_E407_TTA_CombineModel_h_
#define RTW_HEADER_HANcoder_E407_TTA_CombineModel_h_
#ifndef HANcoder_E407_TTA_CombineModel_COMMON_INCLUDES_
#define HANcoder_E407_TTA_CombineModel_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "timeout.h"
#include "canio.h"
#include "can.h"
#include "anin.h"
#include "quadencoder.h"
#include "pwmout.h"
#include "digout.h"
#include "timein.h"
#include "digin.h"
#include "app.h"
#include "SYS_config.h"
#include "os.h"
#include "mac.h"
#endif                     /* HANcoder_E407_TTA_CombineModel_COMMON_INCLUDES_ */

#include "HANcoder_E407_TTA_CombineModel_types.h"
#include "rt_i32zcfcn.h"
#include "zero_crossing_types.h"

typedef union t_can_data_types
{
  /* simulink types (for quick reference) */
  uint8_t uint8_T_info[CAN_MAX_DATA_LEN/sizeof(uint8_t)];
  int8_t int8_T_info[CAN_MAX_DATA_LEN/sizeof(int8_t)];
  uint16_t uint16_T_info[CAN_MAX_DATA_LEN/sizeof(uint16_t)];
  int16_t int16_T_info[CAN_MAX_DATA_LEN/sizeof(uint16_t)];
  uint32_t uint32_T_info[CAN_MAX_DATA_LEN/sizeof(uint32_t)];
  int32_t int32_T_info[CAN_MAX_DATA_LEN/sizeof(int32_t)];
  uint8_t boolean_T_info[CAN_MAX_DATA_LEN/sizeof(uint8_t)];
} __attribute__((packed)) tCanDataTypes;

/* Block signals for system '<S38>/Enabled Subsystem' */
typedef struct {
  uint8_T In1;                         /* '<S39>/In1' */
  uint8_T In2;                         /* '<S39>/In2' */
} rtB_EnabledSubsystem;

/* Block signals for system '<S11>/MMBS1_RX' */
typedef struct {
  rtB_EnabledSubsystem EnabledSubsystem_k;/* '<S38>/Enabled Subsystem' */
} rtB_MMBS1_RX;

/* Block states (default storage) for system '<S11>/MMBS1_RX' */
typedef struct {
  boolean_T MMBS1_RX_MODE;             /* '<S11>/MMBS1_RX' */
} rtDW_MMBS1_RX;

/* Zero-crossing (trigger) state for system '<S11>/MMBS1_TX' */
typedef struct {
  ZCSigState MMBS1_TX_Trig_ZCE;        /* '<S11>/MMBS1_TX' */
} rtZCE_MMBS1_TX;

/* Block signals for system '<S48>/Moving Average' */
typedef struct {
  real32_T MovingAverage_n;            /* '<S48>/Moving Average' */
} rtB_MovingAverage;

/* Block states (default storage) for system '<S48>/Moving Average' */
typedef struct {
  dsp_simulink_MovingAverage obj;      /* '<S48>/Moving Average' */
  boolean_T objisempty;                /* '<S48>/Moving Average' */
} rtDW_MovingAverage;

/* Block signals for system '<S120>/Bit Shift' */
typedef struct {
  uint16_T y;                          /* '<S122>/bit_shift' */
} rtB_BitShift;

/* Block signals for system '<S11>/TRCK1_ID2_TX' */
typedef struct {
  uint8_T DataStoreRead2;              /* '<S29>/Data Store Read2' */
  uint8_T Cast;                        /* '<S120>/Cast' */
  uint8_T Cast1;                       /* '<S120>/Cast1' */
  uint8_T Cast_k;                      /* '<S121>/Cast' */
  uint8_T Cast1_i;                     /* '<S121>/Cast1' */
  rtB_BitShift BitShift_h;             /* '<S121>/Bit Shift' */
  rtB_BitShift BitShift_o;             /* '<S120>/Bit Shift' */
} rtB_TRCK1_ID2_TX;

/* Zero-crossing (trigger) state for system '<S11>/TRCK1_ID2_TX' */
typedef struct {
  ZCSigState TRCK1_ID2_TX_Trig_ZCE;    /* '<S11>/TRCK1_ID2_TX' */
} rtZCE_TRCK1_ID2_TX;

/* Block signals for system '<S144>/Bit Shift' */
typedef struct {
  uint16_T y;                          /* '<S146>/bit_shift' */
} rtB_BitShift_i;

/* Block signals (default storage) */
typedef struct {
  uint16_T DataStoreRead;              /* '<S26>/Data Store Read' */
  uint16_T Sum;                        /* '<S10>/Sum' */
  uint8_T DataStoreRead3;              /* '<S37>/Data Store Read3' */
  uint8_T Cast;                        /* '<S162>/Cast' */
  uint8_T Cast1;                       /* '<S162>/Cast1' */
  uint8_T Cast_f;                      /* '<S163>/Cast' */
  uint8_T Cast1_m;                     /* '<S163>/Cast1' */
  uint8_T DataStoreRead_n;             /* '<S25>/Data Store Read' */
  boolean_T OR;                        /* '<S13>/OR' */
  boolean_T DataTypeConversion;        /* '<S50>/Data Type Conversion' */
  boolean_T DataStoreRead1;            /* '<S26>/Data Store Read1' */
  boolean_T DataStoreRead3_n;          /* '<S26>/Data Store Read3' */
  rtB_EnabledSubsystem EnabledSubsystem_i;/* '<S170>/Enabled Subsystem' */
  rtB_BitShift BitShift_gu;            /* '<S163>/Bit Shift' */
  rtB_BitShift BitShift_g;             /* '<S162>/Bit Shift' */
  rtB_EnabledSubsystem EnabledSubsystem_e;/* '<S157>/Enabled Subsystem' */
  rtB_BitShift_i BitShift_c;           /* '<S156>/Bit Shift' */
  rtB_TRCK1_ID2_TX TRLS_ID4_TX;        /* '<S11>/TRLS_ID4_TX' */
  rtB_EnabledSubsystem EnabledSubsystem_g;/* '<S145>/Enabled Subsystem' */
  rtB_BitShift_i BitShift_jm;          /* '<S144>/Bit Shift' */
  rtB_EnabledSubsystem EnabledSubsystem_b;/* '<S142>/Enabled Subsystem' */
  rtB_TRCK1_ID2_TX TRCK1_TX;           /* '<S11>/TRCK1_TX' */
  rtB_MMBS1_RX TRCK1_RX;               /* '<S11>/TRCK1_RX' */
  rtB_TRCK1_ID2_TX TRCK1_ID3_TX;       /* '<S11>/TRCK1_ID3_TX' */
  rtB_TRCK1_ID2_TX TRCK1_ID2_TX_f;     /* '<S11>/TRCK1_ID2_TX' */
  rtB_MMBS1_RX TRCK1_ID2_RX;           /* '<S11>/TRCK1_ID2_RX' */
  rtB_MovingAverage MovingAverage1;    /* '<S48>/Moving Average' */
  rtB_MovingAverage MovingAverage_p;   /* '<S48>/Moving Average' */
  rtB_EnabledSubsystem EnabledSubsystem_c;/* '<S44>/Enabled Subsystem' */
  rtB_MMBS1_RX SSTM1_RX;               /* '<S11>/SSTM1_RX' */
  rtB_MMBS1_RX MMBS1_RX_j;             /* '<S11>/MMBS1_RX' */
} BlockIO;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T Integrator_DSTATE;            /* '<S94>/Integrator' */
  real_T DelayInput1_DSTATE;           /* '<S53>/Delay Input1' */
  real_T setAngle;                     /* '<S1>/Data Store Memory2' */
  real_T amountOfTrailers;             /* '<S1>/Data Store Memory5' */
  real_T systemState;                  /* '<S1>/Data Store Memory6' */
  real_T init_clock;                   /* '<S1>/Data Store Memory18' */
  real_T requestedAngle;               /* '<S1>/Data Store Memory7' */
  int32_T encoderPosition;             /* '<S1>/Data Store Memory16' */
  uint16_T potentiometer1;             /* '<S1>/Data Store Memory1' */
  uint16_T pwmMotor;                   /* '<S1>/Data Store Memory12' */
  uint16_T potentiometer2;             /* '<S1>/Data Store Memory4' */
  uint16_T trailerOneAngle;            /* '<S1>/Data Store Memory8' */
  uint16_T trailerTwoAngle;            /* '<S1>/Data Store Memory9' */
  uint16_T testCount;                  /* '<S25>/Data Store Memory' */
  uint8_T velocity;                    /* '<S1>/Data Store Memory11' */
  uint8_T Local_Ticks;                 /* '<S1>/Data Store Memory' */
  uint8_T nodeRole;                    /* '<S1>/Data Store Memory10' */
  uint8_T slot;                        /* '<S1>/Data Store Memory15' */
  uint8_T SlotTime;                    /* '<S1>/Data Store Memory3' */
  boolean_T slaveClockOn;              /* '<S13>/Data Store Memory' */
  boolean_T cwMotor;                   /* '<S1>/Data Store Memory13' */
  boolean_T ccwMotor;                  /* '<S1>/Data Store Memory14' */
  boolean_T Subsystem2_MODE;           /* '<S13>/Subsystem2' */
  boolean_T Messageselector_MODE;      /* '<S1>/Message selector' */
  boolean_T TRLS_ID5_RX_MODE;          /* '<S11>/TRLS_ID5_RX' */
  boolean_T TRLS_ID4_RX_MODE;          /* '<S11>/TRLS_ID4_RX' */
  boolean_T TRCK_ID3_RX_MODE;          /* '<S11>/TRCK_ID3_RX' */
  boolean_T SYNC1_RX_MODE;             /* '<S11>/SYNC1_RX' */
  boolean_T InitializeClockSchedule_MODE;/* '<S1>/Initialize Clock Schedule' */
  rtDW_MMBS1_RX TRCK1_RX;              /* '<S11>/TRCK1_RX' */
  rtDW_MMBS1_RX TRCK1_ID2_RX;          /* '<S11>/TRCK1_ID2_RX' */
  rtDW_MovingAverage MovingAverage1;   /* '<S48>/Moving Average' */
  rtDW_MovingAverage MovingAverage_p;  /* '<S48>/Moving Average' */
  rtDW_MMBS1_RX SSTM1_RX;              /* '<S11>/SSTM1_RX' */
  rtDW_MMBS1_RX MMBS1_RX_j;            /* '<S11>/MMBS1_RX' */
} D_Work;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState Subsystem1_Trig_ZCE;      /* '<S169>/Subsystem1' */
  ZCSigState Subsystem_Trig_ZCE;       /* '<S13>/Subsystem' */
  ZCSigState TRLS_ID5_TX_Trig_ZCE;     /* '<S11>/TRLS_ID5_TX' */
  rtZCE_TRCK1_ID2_TX TRLS_ID4_TX;      /* '<S11>/TRLS_ID4_TX' */
  rtZCE_TRCK1_ID2_TX TRCK1_TX;         /* '<S11>/TRCK1_TX' */
  rtZCE_TRCK1_ID2_TX TRCK1_ID3_TX;     /* '<S11>/TRCK1_ID3_TX' */
  rtZCE_TRCK1_ID2_TX TRCK1_ID2_TX_f;   /* '<S11>/TRCK1_ID2_TX' */
  ZCSigState Subsystem_Trig_ZCE_g;     /* '<S11>/Subsystem' */
  ZCSigState Slot5execution_Trig_ZCE;  /* '<S11>/Slot 5 execution' */
  ZCSigState SYNC1_TX_Trig_ZCE;        /* '<S11>/SYNC1_TX' */
  ZCSigState Subsystem_Trig_ZCE_h;     /* '<S24>/Subsystem' */
  rtZCE_MMBS1_TX SSTM1_TX;             /* '<S11>/SSTM1_TX' */
  rtZCE_MMBS1_TX MMBS1_TX_a;           /* '<S11>/MMBS1_TX' */
  ZCSigState EnabledSubsystem_Trig_ZCE;/* '<S10>/Enabled Subsystem' */
} PrevZCSigStates;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T signV2;                 /* '<S112>/Sign' */
  const real_T signL0b;                /* '<S112>/Sign1' */
  const real_T Abs;                    /* '<S113>/Abs' */
  const real_T signL0b_o;              /* '<S116>/Sign1' */
} ConstBlockIO;

/* Block signals (default storage) */
extern BlockIO rtB;

/* Block states (default storage) */
extern D_Work rtDWork;

/* Zero-crossing (trigger) state */
extern PrevZCSigStates rtPrevZCSigState;
extern const ConstBlockIO rtConstB;    /* constant block i/o */

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern real_T reqAngle;                /* '<S27>/Data Store Read' */
extern real_T Gamma1;                  /* '<S59>/Sum1' */
extern real_T steering;                /* '<S58>/Gain2' */
extern real_T position;                /* '<S58>/Gain1' */
extern real_T control;                 /* '<S58>/Sum' */
extern uint32_T SI_FreeHeap;           /* '<S174>/Level-2 M-file S-Function' */
extern uint32_T SI_FreeStack;          /* '<S175>/Level-2 M-file S-Function' */
extern real32_T delta12K;              /* '<S114>/tan 1' */
extern uint16_T t2Angle;               /* '<S27>/Data Store Read2' */
extern uint16_T t1Angle;               /* '<S27>/Data Store Read1' */
extern uint16_T Gamma2;                /* '<S59>/Sum2' */
extern uint16_T mospeed;               /* '<S58>/Add' */
extern uint16_T analogPot1;            /* '<S51>/Level-2 M-file S-Function' */
extern uint16_T pot1;                  /* '<S48>/Cast1' */
extern uint16_T analogPot2;            /* '<S52>/Level-2 M-file S-Function' */
extern uint16_T pot2;                  /* '<S48>/Cast2' */
extern uint16_T testCounter;           /* '<S25>/Data Store Read1' */
extern uint8_T SI_CPUload;             /* '<S173>/Level-2 M-file S-Function' */
extern uint8_T local_ticks_interrupt;  /* '<S10>/Switch' */
extern uint8_T setSlotTime;            /* '<S10>/Data Store Read3' */
extern uint8_T slotSelected;           /* '<S17>/Switch' */
extern boolean_T boolCan;              /* '<S11>/AND' */
extern boolean_T cw;                   /* '<S58>/Cast1' */
extern boolean_T ccw;                  /* '<S58>/NOT' */
extern boolean_T canActive;            /* '<S10>/Clock_State' */

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern real_T ClockOn;                 /* Variable: ClockOn
                                        * Referenced by: '<S13>/Constant'
                                        */
extern real_T controlWidth;            /* Variable: controlWidth
                                        * Referenced by: '<S58>/Constant'
                                        */
extern real_T desiredAngle;            /* Variable: desiredAngle
                                        * Referenced by: '<S48>/Constant2'
                                        */
extern real_T intVal;                  /* Variable: intVal
                                        * Referenced by: '<S91>/Integral Gain'
                                        */
extern real_T matrixRows;              /* Variable: matrixRows
                                        * Referenced by: '<S17>/Constant1'
                                        */
extern real_T propVal;                 /* Variable: propVal
                                        * Referenced by: '<S99>/Proportional Gain'
                                        */
extern uint32_T MMBS1_ID;              /* Variable: MMBS1_ID
                                        * Referenced by: '<S11>/Constant12'
                                        */
extern uint32_T SSTM1_ID;              /* Variable: SSTM1_ID
                                        * Referenced by: '<S11>/Constant14'
                                        */
extern uint32_T SYNC1_ID;              /* Variable: SYNC1_ID
                                        * Referenced by:
                                        *   '<S11>/Constant10'
                                        *   '<S169>/Constant10'
                                        */
extern uint32_T TRCK1_ID1;             /* Variable: TRCK1_ID1
                                        * Referenced by: '<S11>/Constant3'
                                        */
extern uint32_T TRCK1_ID2;             /* Variable: TRCK1_ID2
                                        * Referenced by: '<S11>/Constant5'
                                        */
extern uint32_T TRCK1_ID3;             /* Variable: TRCK1_ID3
                                        * Referenced by: '<S11>/Constant26'
                                        */
extern uint32_T TRLS1_ID4;             /* Variable: TRLS1_ID4
                                        * Referenced by: '<S11>/Constant8'
                                        */
extern uint32_T TRLS1_ID5;             /* Variable: TRLS1_ID5
                                        * Referenced by: '<S11>/Constant18'
                                        */
extern uint8_T slotTime;               /* Variable: slotTime
                                        * Referenced by: '<S168>/Constant3'
                                        */

/* Model entry point functions */
extern void HANcoder_E407_TTA_CombineModel_initialize(void);
extern void HANcoder_E407_TTA_CombineModel_step(void);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'HANcoder_E407_TTA_CombineModel'
 * '<S1>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm'
 * '<S2>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Base Sample Time config'
 * '<S3>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/CAN config'
 * '<S4>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Compare Event IRQ'
 * '<S5>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Custom ID config'
 * '<S6>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Digital Input'
 * '<S7>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Digital Input1'
 * '<S8>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Digital Input2'
 * '<S9>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Initialize Clock Schedule'
 * '<S10>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Local Time generation'
 * '<S11>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector'
 * '<S12>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Output Compare Init'
 * '<S13>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment'
 * '<S14>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/System information'
 * '<S15>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/XCP on USB config'
 * '<S16>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Initialize Clock Schedule/Schedule Compare Event'
 * '<S17>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Local Time generation/Enabled Subsystem'
 * '<S18>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Local Time generation/Get Last Event Counter'
 * '<S19>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Local Time generation/Schedule Compare Event1'
 * '<S20>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_RX'
 * '<S21>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_TX'
 * '<S22>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SSTM1_RX'
 * '<S23>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SSTM1_TX'
 * '<S24>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX'
 * '<S25>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_TX'
 * '<S26>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Slot 5 execution'
 * '<S27>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem'
 * '<S28>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX'
 * '<S29>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX'
 * '<S30>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX'
 * '<S31>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX'
 * '<S32>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX'
 * '<S33>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX'
 * '<S34>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX'
 * '<S35>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX'
 * '<S36>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX'
 * '<S37>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX'
 * '<S38>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_RX/CAN receive1'
 * '<S39>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_RX/CAN receive1/Enabled Subsystem'
 * '<S40>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_TX/CAN send1'
 * '<S41>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SSTM1_RX/CAN receive1'
 * '<S42>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SSTM1_RX/CAN receive1/Enabled Subsystem'
 * '<S43>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SSTM1_TX/CAN send1'
 * '<S44>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX/CAN receive1'
 * '<S45>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX/Subsystem'
 * '<S46>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX/CAN receive1/Enabled Subsystem'
 * '<S47>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_TX/CAN send1'
 * '<S48>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Slot 5 execution/Inputs'
 * '<S49>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Slot 5 execution/Outputs'
 * '<S50>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Slot 5 execution/Inputs/Quadrature Encoder Get'
 * '<S51>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Slot 5 execution/Inputs/Trailer1 Angle'
 * '<S52>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Slot 5 execution/Inputs/Trailer2 Angle'
 * '<S53>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Slot 5 execution/Inputs/Quadrature Encoder Get/Detect Increase'
 * '<S54>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Slot 5 execution/Outputs/Digital Output'
 * '<S55>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Slot 5 execution/Outputs/Digital Output1'
 * '<S56>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Slot 5 execution/Outputs/PWM Duty Cycle'
 * '<S57>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Slot 5 execution/Outputs/PWM Init'
 * '<S58>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm'
 * '<S59>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Kinematic Algorithm'
 * '<S60>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1'
 * '<S61>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Anti-windup'
 * '<S62>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/D Gain'
 * '<S63>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Filter'
 * '<S64>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Filter ICs'
 * '<S65>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/I Gain'
 * '<S66>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Ideal P Gain'
 * '<S67>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Ideal P Gain Fdbk'
 * '<S68>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Integrator'
 * '<S69>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Integrator ICs'
 * '<S70>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/N Copy'
 * '<S71>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/N Gain'
 * '<S72>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/P Copy'
 * '<S73>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Parallel P Gain'
 * '<S74>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Reset Signal'
 * '<S75>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Saturation'
 * '<S76>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Saturation Fdbk'
 * '<S77>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Sum'
 * '<S78>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Sum Fdbk'
 * '<S79>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Tracking Mode'
 * '<S80>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Tracking Mode Sum'
 * '<S81>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Tsamp - Integral'
 * '<S82>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Tsamp - Ngain'
 * '<S83>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/postSat Signal'
 * '<S84>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/preSat Signal'
 * '<S85>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Anti-windup/Disc. Clamping Parallel'
 * '<S86>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S87>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S88>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/D Gain/Disabled'
 * '<S89>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Filter/Disabled'
 * '<S90>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Filter ICs/Disabled'
 * '<S91>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/I Gain/Internal Parameters'
 * '<S92>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Ideal P Gain/Passthrough'
 * '<S93>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S94>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Integrator/Discrete'
 * '<S95>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Integrator ICs/Internal IC'
 * '<S96>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/N Copy/Disabled wSignal Specification'
 * '<S97>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/N Gain/Disabled'
 * '<S98>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/P Copy/Disabled'
 * '<S99>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S100>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Reset Signal/Disabled'
 * '<S101>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Saturation/Enabled'
 * '<S102>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Saturation Fdbk/Disabled'
 * '<S103>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Sum/Sum_PI'
 * '<S104>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Sum Fdbk/Disabled'
 * '<S105>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Tracking Mode/Disabled'
 * '<S106>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S107>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Tsamp - Integral/Passthrough'
 * '<S108>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Tsamp - Ngain/Passthrough'
 * '<S109>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/postSat Signal/Forward_Path'
 * '<S110>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/preSat Signal/Forward_Path'
 * '<S111>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Kinematic Algorithm/1st trailer local velocity'
 * '<S112>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Kinematic Algorithm/1st trailer yew rate'
 * '<S113>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Kinematic Algorithm/2nd Trailer yaw rate'
 * '<S114>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Kinematic Algorithm/Steer angle at steer axle'
 * '<S115>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Kinematic Algorithm/Tractor local velocity'
 * '<S116>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Kinematic Algorithm/Tractor yaw rate'
 * '<S117>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/CAN receive1'
 * '<S118>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/CAN receive1/Enabled Subsystem'
 * '<S119>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/CAN send1'
 * '<S120>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint1'
 * '<S121>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint8'
 * '<S122>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint1/Bit Shift'
 * '<S123>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint1/Bit Shift/bit_shift'
 * '<S124>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint8/Bit Shift'
 * '<S125>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint8/Bit Shift/bit_shift'
 * '<S126>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/CAN send1'
 * '<S127>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint1'
 * '<S128>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint8'
 * '<S129>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint1/Bit Shift'
 * '<S130>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint1/Bit Shift/bit_shift'
 * '<S131>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint8/Bit Shift'
 * '<S132>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint8/Bit Shift/bit_shift'
 * '<S133>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/CAN receive1'
 * '<S134>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/CAN receive1/Enabled Subsystem'
 * '<S135>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/CAN send1'
 * '<S136>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint1'
 * '<S137>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint8'
 * '<S138>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint1/Bit Shift'
 * '<S139>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint1/Bit Shift/bit_shift'
 * '<S140>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint8/Bit Shift'
 * '<S141>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint8/Bit Shift/bit_shift'
 * '<S142>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/CAN receive1'
 * '<S143>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/CAN receive1/Enabled Subsystem'
 * '<S144>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/2bytes2uint16'
 * '<S145>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/CAN receive1'
 * '<S146>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/2bytes2uint16/Bit Shift'
 * '<S147>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/2bytes2uint16/Bit Shift/bit_shift'
 * '<S148>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/CAN receive1/Enabled Subsystem'
 * '<S149>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/CAN send1'
 * '<S150>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint1'
 * '<S151>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint8'
 * '<S152>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint1/Bit Shift'
 * '<S153>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint1/Bit Shift/bit_shift'
 * '<S154>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint8/Bit Shift'
 * '<S155>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint8/Bit Shift/bit_shift'
 * '<S156>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/2bytes2uint16'
 * '<S157>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/CAN receive1'
 * '<S158>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/2bytes2uint16/Bit Shift'
 * '<S159>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/2bytes2uint16/Bit Shift/bit_shift'
 * '<S160>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/CAN receive1/Enabled Subsystem'
 * '<S161>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/CAN send1'
 * '<S162>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint1'
 * '<S163>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint2'
 * '<S164>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint1/Bit Shift'
 * '<S165>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint1/Bit Shift/bit_shift'
 * '<S166>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint2/Bit Shift'
 * '<S167>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint2/Bit Shift/bit_shift'
 * '<S168>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem'
 * '<S169>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem2'
 * '<S170>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem2/CAN receive1'
 * '<S171>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem2/Subsystem1'
 * '<S172>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem2/CAN receive1/Enabled Subsystem'
 * '<S173>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get CPU load'
 * '<S174>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get free Heap'
 * '<S175>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get free Stack'
 */
#endif                        /* RTW_HEADER_HANcoder_E407_TTA_CombineModel_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
=======
/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_CombineModel.h
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_CombineModel'.
 *
 * Model version                  : 17.34
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Mon Jun 19 11:48:19 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_HANcoder_E407_TTA_CombineModel_h_
#define RTW_HEADER_HANcoder_E407_TTA_CombineModel_h_
#ifndef HANcoder_E407_TTA_CombineModel_COMMON_INCLUDES_
#define HANcoder_E407_TTA_CombineModel_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "timeout.h"
#include "anin.h"
#include "digin.h"
#include "quadencoder.h"
#include "digout.h"
#include "pwmout.h"
#include "canio.h"
#include "can.h"
#include "timein.h"
#include "app.h"
#include "SYS_config.h"
#include "os.h"
#include "mac.h"
#endif                     /* HANcoder_E407_TTA_CombineModel_COMMON_INCLUDES_ */

#include "HANcoder_E407_TTA_CombineModel_types.h"
#include "rt_i32zcfcn.h"
#include "zero_crossing_types.h"
#define HANcoder_E407_TTA_CombineModel_M (rtM)

typedef union t_can_data_types
{
  /* simulink types (for quick reference) */
  uint8_t uint8_T_info[CAN_MAX_DATA_LEN/sizeof(uint8_t)];
  int8_t int8_T_info[CAN_MAX_DATA_LEN/sizeof(int8_t)];
  uint16_t uint16_T_info[CAN_MAX_DATA_LEN/sizeof(uint16_t)];
  int16_t int16_T_info[CAN_MAX_DATA_LEN/sizeof(uint16_t)];
  uint32_t uint32_T_info[CAN_MAX_DATA_LEN/sizeof(uint32_t)];
  int32_t int32_T_info[CAN_MAX_DATA_LEN/sizeof(int32_t)];
  uint8_t boolean_T_info[CAN_MAX_DATA_LEN/sizeof(uint8_t)];
} __attribute__((packed)) tCanDataTypes;

/* Block signals for system '<S77>/Moving Average' */
typedef struct {
  real32_T MovingAverage_n;            /* '<S77>/Moving Average' */
} rtB_MovingAverage;

/* Block states (default storage) for system '<S77>/Moving Average' */
typedef struct {
  dsp_simulink_MovingAverage obj;      /* '<S77>/Moving Average' */
  boolean_T objisempty;                /* '<S77>/Moving Average' */
} rtDW_MovingAverage;

/* Block signals for system '<S114>/Enabled Subsystem' */
typedef struct {
  uint8_T In1;                         /* '<S115>/In1' */
  uint8_T In2;                         /* '<S115>/In2' */
  uint8_T In3;                         /* '<S115>/In3' */
  uint8_T In4;                         /* '<S115>/In4' */
  uint8_T In7;                         /* '<S115>/In7' */
} rtB_EnabledSubsystem;

/* Zero-crossing (trigger) state for system '<S10>/MMBS1_TX' */
typedef struct {
  ZCSigState MMBS1_TX_Trig_ZCE;        /* '<S10>/MMBS1_TX' */
} rtZCE_MMBS1_TX;

/* Block signals for system '<S124>/Bit Shift' */
typedef struct {
  uint16_T y;                          /* '<S128>/bit_shift' */
} rtB_BitShift;

/* Block signals for system '<S127>/Bit Shift' */
typedef struct {
  uint8_T y;                           /* '<S133>/bit_shift' */
} rtB_BitShift_l;

/* Block signals for system '<S127>/Bit Shift1' */
typedef struct {
  uint8_T y;                           /* '<S134>/bit_shift' */
} rtB_BitShift1;

/* Block signals for system '<S127>/Bit Shift2' */
typedef struct {
  uint8_T y;                           /* '<S135>/bit_shift' */
} rtB_BitShift2;

/* Block signals for system '<S127>/Bit Shift3' */
typedef struct {
  uint8_T y;                           /* '<S136>/bit_shift' */
} rtB_BitShift3;

/* Block signals for system '<S127>/Bit Shift4' */
typedef struct {
  uint8_T y;                           /* '<S137>/bit_shift' */
} rtB_BitShift4;

/* Block signals for system '<S127>/Bit Shift5' */
typedef struct {
  uint8_T y;                           /* '<S138>/bit_shift' */
} rtB_BitShift5;

/* Block signals for system '<S127>/Bit Shift6' */
typedef struct {
  uint8_T y;                           /* '<S139>/bit_shift' */
} rtB_BitShift6;

/* Block signals for system '<S150>/Bit Shift' */
typedef struct {
  uint8_T y;                           /* '<S153>/bit_shift' */
} rtB_BitShift_o;

/* Block signals for system '<S150>/Bit Shift1' */
typedef struct {
  uint8_T y;                           /* '<S154>/bit_shift' */
} rtB_BitShift1_j;

/* Block signals for system '<S150>/Bit Shift2' */
typedef struct {
  uint8_T y;                           /* '<S155>/bit_shift' */
} rtB_BitShift2_e;

/* Block signals for system '<S150>/Bit Shift3' */
typedef struct {
  uint8_T y;                           /* '<S156>/bit_shift' */
} rtB_BitShift3_g;

/* Block signals for system '<S150>/Bit Shift4' */
typedef struct {
  uint8_T y;                           /* '<S157>/bit_shift' */
} rtB_BitShift4_g;

/* Block signals for system '<S150>/Bit Shift5' */
typedef struct {
  uint8_T y;                           /* '<S158>/bit_shift' */
} rtB_BitShift5_e;

/* Block signals for system '<S150>/Bit Shift6' */
typedef struct {
  uint8_T y;                           /* '<S159>/bit_shift' */
} rtB_BitShift6_b;

/* Block signals for system '<S151>/Bit Shift' */
typedef struct {
  uint16_T y;                          /* '<S167>/bit_shift' */
} rtB_BitShift_c;

/* Block signals for system '<S10>/TRCK1_ID2_TX' */
typedef struct {
  uint8_T DataStoreRead2;              /* '<S105>/Data Store Read2' */
  uint8_T Add;                         /* '<S150>/Add' */
  uint8_T Cast;                        /* '<S151>/Cast' */
  uint8_T Cast1;                       /* '<S151>/Cast1' */
  uint8_T Cast_k;                      /* '<S152>/Cast' */
  uint8_T Cast1_i;                     /* '<S152>/Cast1' */
  rtB_BitShift_c BitShift_h;           /* '<S152>/Bit Shift' */
  rtB_BitShift_c BitShift_of;          /* '<S151>/Bit Shift' */
  rtB_BitShift6_b BitShift6_dc;        /* '<S150>/Bit Shift6' */
  rtB_BitShift5_e BitShift5_nr;        /* '<S150>/Bit Shift5' */
  rtB_BitShift4_g BitShift4_g2;        /* '<S150>/Bit Shift4' */
  rtB_BitShift3_g BitShift3_lh;        /* '<S150>/Bit Shift3' */
  rtB_BitShift2_e BitShift2_pw;        /* '<S150>/Bit Shift2' */
  rtB_BitShift1_j BitShift1_b0;        /* '<S150>/Bit Shift1' */
  rtB_BitShift_o BitShift_gyk;         /* '<S150>/Bit Shift' */
} rtB_TRCK1_ID2_TX;

/* Zero-crossing (trigger) state for system '<S10>/TRCK1_ID2_TX' */
typedef struct {
  ZCSigState TRCK1_ID2_TX_Trig_ZCE;    /* '<S10>/TRCK1_ID2_TX' */
} rtZCE_TRCK1_ID2_TX;

/* Block signals (default storage) */
typedef struct {
  uint16_T Switch;                     /* '<S78>/Switch' */
  uint16_T Sum;                        /* '<S9>/Sum' */
  uint8_T DataStoreRead3;              /* '<S113>/Data Store Read3' */
  uint8_T DataStoreRead4;              /* '<S113>/Data Store Read4' */
  uint8_T Add;                         /* '<S338>/Add' */
  uint8_T Cast;                        /* '<S339>/Cast' */
  uint8_T Cast1;                       /* '<S339>/Cast1' */
  uint8_T Cast_f;                      /* '<S340>/Cast' */
  uint8_T Cast1_m;                     /* '<S340>/Cast1' */
  uint8_T In1;                         /* '<S320>/In1' */
  uint8_T In2;                         /* '<S320>/In2' */
  uint8_T In3;                         /* '<S320>/In3' */
  uint8_T In7;                         /* '<S320>/In7' */
  uint8_T DataStoreRead2;              /* '<S111>/Data Store Read2' */
  uint8_T DataStoreRead3_c;            /* '<S111>/Data Store Read3' */
  uint8_T Add_f;                       /* '<S291>/Add' */
  uint8_T Cast_d;                      /* '<S292>/Cast' */
  uint8_T Cast1_c;                     /* '<S292>/Cast1' */
  uint8_T Cast_n;                      /* '<S293>/Cast' */
  uint8_T Cast1_i;                     /* '<S293>/Cast1' */
  uint8_T In1_e;                       /* '<S273>/In1' */
  uint8_T In2_e;                       /* '<S273>/In2' */
  uint8_T In3_g;                       /* '<S273>/In3' */
  uint8_T In7_g;                       /* '<S273>/In7' */
  uint8_T DataStoreRead2_h;            /* '<S108>/Data Store Read2' */
  uint8_T Add_j;                       /* '<S219>/Add' */
  uint8_T Cast_p;                      /* '<S220>/Cast' */
  uint8_T Cast1_b;                     /* '<S220>/Cast1' */
  uint8_T Cast_a;                      /* '<S221>/Cast' */
  uint8_T Cast1_n;                     /* '<S221>/Cast1' */
  uint8_T DataStoreRead;               /* '<S103>/Data Store Read' */
  uint8_T Add_i;                       /* '<S13>/Add' */
  uint8_T Gain;                        /* '<S373>/Gain' */
  uint8_T Gain_j;                      /* '<S375>/Gain' */
  uint8_T Add1;                        /* '<S371>/Add1' */
  uint8_T Add2;                        /* '<S371>/Add2' */
  uint8_T Gain_n;                      /* '<S372>/Gain' */
  uint8_T Gain_d;                      /* '<S374>/Gain' */
  boolean_T OR;                        /* '<S12>/OR' */
  boolean_T DataTypeConversion;        /* '<S81>/Data Type Conversion' */
  boolean_T Switch1;                   /* '<S78>/Switch1' */
  boolean_T Switch2;                   /* '<S78>/Switch2' */
  boolean_T NotEqual;                  /* '<S78>/NotEqual' */
  rtB_EnabledSubsystem EnabledSubsystem_i;/* '<S361>/Enabled Subsystem' */
  rtB_BitShift_c BitShift_gul;         /* '<S340>/Bit Shift' */
  rtB_BitShift_c BitShift_g3;          /* '<S339>/Bit Shift' */
  rtB_BitShift6_b BitShift6_ab;        /* '<S338>/Bit Shift6' */
  rtB_BitShift5_e BitShift5_nm;        /* '<S338>/Bit Shift5' */
  rtB_BitShift4_g BitShift4_ew;        /* '<S338>/Bit Shift4' */
  rtB_BitShift3_g BitShift3_a;         /* '<S338>/Bit Shift3' */
  rtB_BitShift2_e BitShift2_f;         /* '<S338>/Bit Shift2' */
  rtB_BitShift1_j BitShift1_n4;        /* '<S338>/Bit Shift1' */
  rtB_BitShift_o BitShift_a0;          /* '<S338>/Bit Shift' */
  rtB_BitShift_l BitShift7_ms;         /* '<S315>/Bit Shift7' */
  rtB_BitShift6 BitShift6_a;           /* '<S315>/Bit Shift6' */
  rtB_BitShift5 BitShift5_ni;          /* '<S315>/Bit Shift5' */
  rtB_BitShift4 BitShift4_o;           /* '<S315>/Bit Shift4' */
  rtB_BitShift3 BitShift3_dx;          /* '<S315>/Bit Shift3' */
  rtB_BitShift2 BitShift2_d;           /* '<S315>/Bit Shift2' */
  rtB_BitShift1 BitShift1_au;          /* '<S315>/Bit Shift1' */
  rtB_BitShift_l BitShift_dp;          /* '<S315>/Bit Shift' */
  rtB_BitShift BitShift_jx;            /* '<S313>/Bit Shift' */
  rtB_BitShift BitShift_a;             /* '<S312>/Bit Shift' */
  rtB_BitShift_c BitShift_d;           /* '<S293>/Bit Shift' */
  rtB_BitShift_c BitShift_h;           /* '<S292>/Bit Shift' */
  rtB_BitShift6_b BitShift6_k;         /* '<S291>/Bit Shift6' */
  rtB_BitShift5_e BitShift5_og;        /* '<S291>/Bit Shift5' */
  rtB_BitShift4_g BitShift4_c;         /* '<S291>/Bit Shift4' */
  rtB_BitShift3_g BitShift3_m;         /* '<S291>/Bit Shift3' */
  rtB_BitShift2_e BitShift2_l4;        /* '<S291>/Bit Shift2' */
  rtB_BitShift1_j BitShift1_c;         /* '<S291>/Bit Shift1' */
  rtB_BitShift_o BitShift_eg;          /* '<S291>/Bit Shift' */
  rtB_BitShift_l BitShift7_m;          /* '<S268>/Bit Shift7' */
  rtB_BitShift6 BitShift6_o5;          /* '<S268>/Bit Shift6' */
  rtB_BitShift5 BitShift5_o;           /* '<S268>/Bit Shift5' */
  rtB_BitShift4 BitShift4_j;           /* '<S268>/Bit Shift4' */
  rtB_BitShift3 BitShift3_f;           /* '<S268>/Bit Shift3' */
  rtB_BitShift2 BitShift2_l;           /* '<S268>/Bit Shift2' */
  rtB_BitShift1 BitShift1_e;           /* '<S268>/Bit Shift1' */
  rtB_BitShift_l BitShift_l;           /* '<S268>/Bit Shift' */
  rtB_BitShift BitShift_n;             /* '<S266>/Bit Shift' */
  rtB_BitShift BitShift_gu;            /* '<S265>/Bit Shift' */
  rtB_BitShift_l BitShift7_j;          /* '<S243>/Bit Shift7' */
  rtB_BitShift6 BitShift6_b;           /* '<S243>/Bit Shift6' */
  rtB_BitShift5 BitShift5_c;           /* '<S243>/Bit Shift5' */
  rtB_BitShift4 BitShift4_d;           /* '<S243>/Bit Shift4' */
  rtB_BitShift3 BitShift3_d;           /* '<S243>/Bit Shift3' */
  rtB_BitShift2 BitShift2_cw;          /* '<S243>/Bit Shift2' */
  rtB_BitShift1 BitShift1_a;           /* '<S243>/Bit Shift1' */
  rtB_BitShift_l BitShift_f;           /* '<S243>/Bit Shift' */
  rtB_EnabledSubsystem EnabledSubsystem_bj;/* '<S242>/Enabled Subsystem' */
  rtB_BitShift BitShift_p;             /* '<S241>/Bit Shift' */
  rtB_BitShift BitShift_e;             /* '<S240>/Bit Shift' */
  rtB_BitShift_c BitShift_b;           /* '<S221>/Bit Shift' */
  rtB_BitShift_c BitShift_jy;          /* '<S220>/Bit Shift' */
  rtB_BitShift6_b BitShift6_e;         /* '<S219>/Bit Shift6' */
  rtB_BitShift5_e BitShift5_i;         /* '<S219>/Bit Shift5' */
  rtB_BitShift4_g BitShift4_f;         /* '<S219>/Bit Shift4' */
  rtB_BitShift3_g BitShift3_b;         /* '<S219>/Bit Shift3' */
  rtB_BitShift2_e BitShift2_b;         /* '<S219>/Bit Shift2' */
  rtB_BitShift1_j BitShift1_n;         /* '<S219>/Bit Shift1' */
  rtB_BitShift_o BitShift_gk;          /* '<S219>/Bit Shift' */
  rtB_BitShift_l BitShift7_e;          /* '<S196>/Bit Shift7' */
  rtB_BitShift6 BitShift6_i;           /* '<S196>/Bit Shift6' */
  rtB_BitShift5 BitShift5_bs;          /* '<S196>/Bit Shift5' */
  rtB_BitShift4 BitShift4_a;           /* '<S196>/Bit Shift4' */
  rtB_BitShift3 BitShift3_lj;          /* '<S196>/Bit Shift3' */
  rtB_BitShift2 BitShift2_c;           /* '<S196>/Bit Shift2' */
  rtB_BitShift1 BitShift1_l;           /* '<S196>/Bit Shift1' */
  rtB_BitShift_l BitShift_c;           /* '<S196>/Bit Shift' */
  rtB_EnabledSubsystem EnabledSubsystem_hn;/* '<S195>/Enabled Subsystem' */
  rtB_BitShift BitShift_j;             /* '<S194>/Bit Shift' */
  rtB_BitShift BitShift_k;             /* '<S193>/Bit Shift' */
  rtB_TRCK1_ID2_TX TRCK1_ID3_TX;       /* '<S10>/TRCK1_ID3_TX' */
  rtB_TRCK1_ID2_TX TRCK1_ID2_TX_f;     /* '<S10>/TRCK1_ID2_TX' */
  rtB_BitShift_l BitShift7;            /* '<S127>/Bit Shift7' */
  rtB_BitShift6 BitShift6_o;           /* '<S127>/Bit Shift6' */
  rtB_BitShift5 BitShift5_b;           /* '<S127>/Bit Shift5' */
  rtB_BitShift4 BitShift4_e;           /* '<S127>/Bit Shift4' */
  rtB_BitShift3 BitShift3_c;           /* '<S127>/Bit Shift3' */
  rtB_BitShift2 BitShift2_i;           /* '<S127>/Bit Shift2' */
  rtB_BitShift1 BitShift1_g;           /* '<S127>/Bit Shift1' */
  rtB_BitShift_l BitShift_gy3;         /* '<S127>/Bit Shift' */
  rtB_EnabledSubsystem EnabledSubsystem_b;/* '<S126>/Enabled Subsystem' */
  rtB_BitShift BitShift_gvk;           /* '<S125>/Bit Shift' */
  rtB_BitShift BitShift_gv;            /* '<S124>/Bit Shift' */
  rtB_EnabledSubsystem EnabledSubsystem_c;/* '<S120>/Enabled Subsystem' */
  rtB_EnabledSubsystem EnabledSubsystem_h;/* '<S117>/Enabled Subsystem' */
  rtB_EnabledSubsystem EnabledSubsystem_k;/* '<S114>/Enabled Subsystem' */
  rtB_MovingAverage MovingAverage1;    /* '<S77>/Moving Average' */
  rtB_MovingAverage MovingAverage_p;   /* '<S77>/Moving Average' */
} BlockIO;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  dsp_simulink_MovingAverage obj;      /* '<S79>/Moving Average' */
  real_T DelayInput1_DSTATE;           /* '<S84>/Delay Input1' */
  real_T Integrator_DSTATE;            /* '<S54>/Integrator' */
  real_T setAngle;                     /* '<S1>/Data Store Memory2' */
  real_T systemState;                  /* '<S1>/Data Store Memory6' */
  real_T init_clock;                   /* '<S1>/Data Store Memory18' */
  real_T requestedAngle;               /* '<S1>/Data Store Memory7' */
  int32_T Delay5_DSTATE[7];            /* '<S79>/Delay5' */
  int32_T encoderPosition;             /* '<S1>/Data Store Memory16' */
  uint32_T IOexecution_PREV_T[2];      /* '<S1>/IO execution' */
  uint16_T Delay7_DSTATE[2];           /* '<S79>/Delay7' */
  uint16_T UD_DSTATE;                  /* '<S90>/UD' */
  uint16_T potentiometer1;             /* '<S1>/Data Store Memory1' */
  uint16_T pwmMotor;                   /* '<S1>/Data Store Memory12' */
  uint16_T pot5_1;                     /* '<S1>/Data Store Memory20' */
  uint16_T pot4_1;                     /* '<S1>/Data Store Memory27' */
  uint16_T lastPot1;                   /* '<S1>/Data Store Memory32' */
  uint16_T potentiometer1Raw;          /* '<S1>/Data Store Memory34' */
  uint16_T potentiometer2;             /* '<S1>/Data Store Memory4' */
  uint16_T trailerOneAngle;            /* '<S1>/Data Store Memory8' */
  uint16_T trailerTwoAngle;            /* '<S1>/Data Store Memory9' */
  uint16_T testCount;                  /* '<S103>/Data Store Memory' */
  boolean_T Delay_DSTATE[2];           /* '<S79>/Delay' */
  boolean_T Delay1_DSTATE[9];          /* '<S79>/Delay1' */
  boolean_T Delay2_DSTATE[16];         /* '<S79>/Delay2' */
  boolean_T Delay4_DSTATE[25];         /* '<S79>/Delay4' */
  boolean_T Delay3_DSTATE[35];         /* '<S79>/Delay3' */
  boolean_T Delay6_DSTATE[10];         /* '<S79>/Delay6' */
  int8_T If1_ActiveSubsystem;          /* '<S1>/If1' */
  int8_T If_ActiveSubsystem;           /* '<S1>/If' */
  uint8_T velocity;                    /* '<S1>/Data Store Memory11' */
  uint8_T Board_ID;                    /* '<S1>/Data Store Memory44' */
  uint8_T Local_Ticks;                 /* '<S1>/Data Store Memory' */
  uint8_T buttonPress;                 /* '<S1>/Data Store Memory10' */
  uint8_T slot;                        /* '<S1>/Data Store Memory15' */
  uint8_T SlotTime;                    /* '<S1>/Data Store Memory3' */
  uint8_T PositionID5;                 /* '<S1>/Data Store Memory42' */
  uint8_T PositionID4;                 /* '<S1>/Data Store Memory43' */
  uint8_T trailer2buttonPress;         /* '<S1>/Data Store Memory45' */
  uint8_T trailer1buttonPress;         /* '<S1>/Data Store Memory46' */
  boolean_T node4Active;               /* '<S1>/Data Store Memory26' */
  boolean_T node5Active;               /* '<S1>/Data Store Memory28' */
  boolean_T slaveClockOn;              /* '<S12>/Data Store Memory' */
  boolean_T cwMotor;                   /* '<S1>/Data Store Memory13' */
  boolean_T ccwMotor;                  /* '<S1>/Data Store Memory14' */
  boolean_T motorFailed;               /* '<S1>/Data Store Memory31' */
  boolean_T potFault;                  /* '<S1>/Data Store Memory33' */
  boolean_T receiveSync;               /* '<S1>/Data Store Memory39' */
  boolean_T node1CanFailed;            /* '<S1>/Data Store Memory40' */
  boolean_T ioInitialized;             /* '<S1>/Data Store Memory41' */
  boolean_T Memory_PreviousInput;      /* '<S377>/Memory' */
  boolean_T Memory_PreviousInput_d;    /* '<S376>/Memory' */
  boolean_T Memory_PreviousInput_d1;   /* '<S91>/Memory' */
  boolean_T Memory_PreviousInput_a;    /* '<S92>/Memory' */
  boolean_T Subsystem2_MODE;           /* '<S12>/Subsystem2' */
  boolean_T Messageselector_MODE;      /* '<S1>/Message selector' */
  boolean_T TRLS_ID5_RX_MODE;          /* '<S10>/TRLS_ID5_RX' */
  boolean_T TRLS_ID4_RX_MODE;          /* '<S10>/TRLS_ID4_RX' */
  boolean_T TRCK_ID3_RX_MODE;          /* '<S10>/TRCK_ID3_RX' */
  boolean_T TRCK1_RX_MODE;             /* '<S10>/TRCK1_RX' */
  boolean_T TRCK1_ID2_RX_MODE;         /* '<S10>/TRCK1_ID2_RX' */
  boolean_T SYNC1_RX_MODE;             /* '<S10>/SYNC1_RX' */
  boolean_T SSTM1_RX_MODE;             /* '<S10>/SSTM1_RX' */
  boolean_T MMBS1_RX_MODE;             /* '<S10>/MMBS1_RX' */
  boolean_T InitializeClockSchedule_MODE;/* '<S1>/Initialize Clock Schedule' */
  rtDW_MovingAverage MovingAverage1;   /* '<S77>/Moving Average' */
  rtDW_MovingAverage MovingAverage_p;  /* '<S77>/Moving Average' */
} D_Work;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState Subsystem1_Trig_ZCE;      /* '<S360>/Subsystem1' */
  ZCSigState Subsystem_Trig_ZCE;       /* '<S12>/Subsystem' */
  ZCSigState TRLS_ID5_TX_Trig_ZCE;     /* '<S10>/TRLS_ID5_TX' */
  ZCSigState TRLS_ID4_TX_Trig_ZCE;     /* '<S10>/TRLS_ID4_TX' */
  ZCSigState TRCK1_TX_Trig_ZCE;        /* '<S10>/TRCK1_TX' */
  rtZCE_TRCK1_ID2_TX TRCK1_ID3_TX;     /* '<S10>/TRCK1_ID3_TX' */
  rtZCE_TRCK1_ID2_TX TRCK1_ID2_TX_f;   /* '<S10>/TRCK1_ID2_TX' */
  ZCSigState SYNC1_TX_Trig_ZCE;        /* '<S10>/SYNC1_TX' */
  ZCSigState Subsystem_Trig_ZCE_h;     /* '<S102>/Subsystem' */
  rtZCE_MMBS1_TX SSTM1_TX;             /* '<S10>/SSTM1_TX' */
  rtZCE_MMBS1_TX MMBS1_TX_a;           /* '<S10>/MMBS1_TX' */
  ZCSigState IOexecution_Trig_ZCE;     /* '<S1>/IO execution' */
  ZCSigState Controlexecution_Trig_ZCE;/* '<S1>/Control execution' */
  ZCSigState EnabledSubsystem_Trig_ZCE;/* '<S9>/Enabled Subsystem' */
} PrevZCSigStates;

/* Invariant block signals for system '<S10>/TRCK1_ID2_TX' */
typedef struct {
  const uint8_T Cast;                  /* '<S150>/Cast' */
  const uint8_T Cast2;                 /* '<S150>/Cast2' */
  const uint8_T Cast3;                 /* '<S150>/Cast3' */
  const uint8_T Cast4;                 /* '<S150>/Cast4' */
  const uint8_T Cast5;                 /* '<S150>/Cast5' */
  const uint8_T Cast6;                 /* '<S150>/Cast6' */
} rtC_TRCK1_ID2_TX;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T signV2;                 /* '<S72>/Sign' */
  const real_T signL0b;                /* '<S72>/Sign1' */
  const real_T Abs;                    /* '<S73>/Abs' */
  const real_T signL0b_o;              /* '<S76>/Sign1' */
  const uint16_T Cast;                 /* '<S78>/Cast' */
  const uint8_T Cast_h;                /* '<S338>/Cast' */
  const uint8_T Cast2;                 /* '<S338>/Cast2' */
  const uint8_T Cast3;                 /* '<S338>/Cast3' */
  const uint8_T Cast4;                 /* '<S338>/Cast4' */
  const uint8_T Cast5;                 /* '<S338>/Cast5' */
  const uint8_T Cast6;                 /* '<S338>/Cast6' */
  const uint8_T Cast7;                 /* '<S338>/Cast7' */
  const uint8_T Cast_j;                /* '<S291>/Cast' */
  const uint8_T Cast2_o;               /* '<S291>/Cast2' */
  const uint8_T Cast3_g;               /* '<S291>/Cast3' */
  const uint8_T Cast4_l;               /* '<S291>/Cast4' */
  const uint8_T Cast5_h;               /* '<S291>/Cast5' */
  const uint8_T Cast6_e;               /* '<S291>/Cast6' */
  const uint8_T Cast7_e;               /* '<S291>/Cast7' */
  const uint8_T Cast_f;                /* '<S219>/Cast' */
  const uint8_T Cast2_i;               /* '<S219>/Cast2' */
  const uint8_T Cast3_k;               /* '<S219>/Cast3' */
  const uint8_T Cast4_b;               /* '<S219>/Cast4' */
  const uint8_T Cast5_k;               /* '<S219>/Cast5' */
  const uint8_T Cast6_i;               /* '<S219>/Cast6' */
  const boolean_T Cast1;               /* '<S78>/Cast1' */
  const boolean_T Cast2_p;             /* '<S78>/Cast2' */
  rtC_TRCK1_ID2_TX TRCK1_ID3_TX;       /* '<S10>/TRCK1_ID3_TX' */
  rtC_TRCK1_ID2_TX TRCK1_ID2_TX_f;     /* '<S10>/TRCK1_ID2_TX' */
} ConstBlockIO;

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Expression: [0 1;1 0;0 1;0 1;1 0;1 0;0 0;0 0])
   * Referenced by:
   *   '<S91>/Logic'
   *   '<S92>/Logic'
   *   '<S376>/Logic'
   *   '<S377>/Logic'
   */
  boolean_T pooled23[16];
} ConstParam;

/* Real-time Model Data Structure */
struct tag_RTM {
  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
  } Timing;
};

/* Block signals (default storage) */
extern BlockIO rtB;

/* Block states (default storage) */
extern D_Work rtDWork;

/* Zero-crossing (trigger) state */
extern PrevZCSigStates rtPrevZCSigState;
extern const ConstBlockIO rtConstB;    /* constant block i/o */

/* Constant parameters (default storage) */
extern const ConstParam rtConstP;

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern real_T reqAngle;                /* '<S5>/Data Store Read' */
extern real_T Gamma1;                  /* '<S19>/Sum1' */
extern real_T steering;                /* '<S18>/Gain2' */
extern real_T position;                /* '<S18>/Gain1' */
extern real_T control;                 /* '<S18>/Sum' */
extern uint32_T SI_FreeHeap;           /* '<S368>/Level-2 M-file S-Function' */
extern uint32_T SI_FreeStack;          /* '<S369>/Level-2 M-file S-Function' */
extern real32_T derivativeMean;        /* '<S79>/Moving Average' */
extern real32_T delta12K;              /* '<S74>/tan 1' */
extern int32_T motorPos;               /* '<S81>/Level-2 M-file S-Function' */
extern uint16_T pot31;                 /* '<S241>/Add' */
extern uint16_T pot32;                 /* '<S240>/Add' */
extern uint16_T pot11;                 /* '<S194>/Add' */
extern uint16_T pot12;                 /* '<S193>/Add' */
extern uint16_T pot21;                 /* '<S125>/Add' */
extern uint16_T pot22;                 /* '<S124>/Add' */
extern uint16_T testCounter;           /* '<S103>/Data Store Read1' */
extern uint16_T potRaw;                /* '<S79>/Data Store Read5' */
extern uint16_T lastPot;               /* '<S79>/Data Store Read6' */
extern uint16_T derivative;            /* '<S90>/Diff' */
extern uint16_T analogPot1;            /* '<S82>/Level-2 M-file S-Function' */
extern uint16_T pot1;                  /* '<S77>/Cast1' */
extern uint16_T analogPot2;            /* '<S83>/Level-2 M-file S-Function' */
extern uint16_T pot2;                  /* '<S77>/Cast2' */
extern uint16_T t2Angle;               /* '<S5>/Data Store Read2' */
extern uint16_T t1Angle;               /* '<S5>/Data Store Read1' */
extern uint16_T Gamma2;                /* '<S19>/Sum2' */
extern uint16_T mospeed;               /* '<S18>/Add' */
extern uint8_T SI_CPUload;             /* '<S367>/Level-2 M-file S-Function' */
extern uint8_T buttonpress2;           /* '<S320>/In6' */
extern uint8_T buttonpress1;           /* '<S273>/In6' */
extern uint8_T amounttrailers;         /* '<S16>/Add' */
extern uint8_T positionID5;            /* '<S16>/Cast3' */
extern uint8_T positionID4;            /* '<S16>/Cast2' */
extern uint8_T local_ticks_interrupt;  /* '<S9>/Switch' */
extern uint8_T setSlotTime;            /* '<S9>/Data Store Read3' */
extern uint8_T slotSelected;           /* '<S94>/Switch' */
extern boolean_T boolCan;              /* '<S10>/AND' */
extern boolean_T potFaultDetected;     /* '<S108>/Data Store Read4' */
extern boolean_T masterCanFail;        /* '<S98>/NOT' */
extern boolean_T mf1;                  /* '<S79>/Delay' */
extern boolean_T mf2;                  /* '<S79>/Delay1' */
extern boolean_T mf3;                  /* '<S79>/Delay2' */
extern boolean_T mf4;                  /* '<S79>/Delay4' */
extern boolean_T mf5;                  /* '<S79>/Delay3' */
extern boolean_T motorFaultDetected;   /* '<S79>/AND2' */
extern boolean_T ioInit;               /* '<S77>/Constant' */
extern boolean_T cw;                   /* '<S18>/Cast1' */
extern boolean_T ccw;                  /* '<S18>/NOT' */
extern boolean_T canActive;            /* '<S9>/Clock_State' */

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern real_T ClockOn;                 /* Variable: ClockOn
                                        * Referenced by: '<S12>/Constant'
                                        */
extern real_T ResetPosition;           /* Variable: ResetPosition
                                        * Referenced by: '<S371>/Constant'
                                        */
extern real_T controlWidth;            /* Variable: controlWidth
                                        * Referenced by: '<S18>/Constant'
                                        */
extern real_T desiredAngle;            /* Variable: desiredAngle
                                        * Referenced by: '<S77>/Constant2'
                                        */
extern real_T intVal;                  /* Variable: intVal
                                        * Referenced by: '<S51>/Integral Gain'
                                        */
extern real_T matrixRows;              /* Variable: matrixRows
                                        * Referenced by: '<S94>/Constant1'
                                        */
extern real_T propVal;                 /* Variable: propVal
                                        * Referenced by: '<S59>/Proportional Gain'
                                        */
extern uint32_T MMBS1_ID;              /* Variable: MMBS1_ID
                                        * Referenced by: '<S10>/Constant12'
                                        */
extern uint32_T SSTM1_ID;              /* Variable: SSTM1_ID
                                        * Referenced by: '<S10>/Constant14'
                                        */
extern uint32_T SYNC1_ID;              /* Variable: SYNC1_ID
                                        * Referenced by:
                                        *   '<S10>/Constant10'
                                        *   '<S360>/Constant10'
                                        */
extern uint32_T TRCK1_ID1;             /* Variable: TRCK1_ID1
                                        * Referenced by: '<S10>/Constant3'
                                        */
extern uint32_T TRCK1_ID2;             /* Variable: TRCK1_ID2
                                        * Referenced by: '<S10>/Constant5'
                                        */
extern uint32_T TRCK1_ID3;             /* Variable: TRCK1_ID3
                                        * Referenced by: '<S10>/Constant26'
                                        */
extern uint32_T TRLS1_ID4;             /* Variable: TRLS1_ID4
                                        * Referenced by: '<S10>/Constant8'
                                        */
extern uint32_T TRLS1_ID5;             /* Variable: TRLS1_ID5
                                        * Referenced by: '<S10>/Constant18'
                                        */
extern uint8_T slotTime;               /* Variable: slotTime
                                        * Referenced by: '<S359>/Constant3'
                                        */

/* Model entry point functions */
extern void HANcoder_E407_TTA_CombineModel_initialize(void);
extern void HANcoder_E407_TTA_CombineModel_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'HANcoder_E407_TTA_CombineModel'
 * '<S1>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm'
 * '<S2>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Base Sample Time config'
 * '<S3>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/CAN config'
 * '<S4>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Compare Event IRQ'
 * '<S5>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution'
 * '<S6>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Custom ID config'
 * '<S7>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution'
 * '<S8>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Initialize Clock Schedule'
 * '<S9>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Local Time generation'
 * '<S10>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector'
 * '<S11>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Output Compare Init'
 * '<S12>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment'
 * '<S13>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Setting ID'
 * '<S14>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Spars Slots'
 * '<S15>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/System information'
 * '<S16>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Triggered Subsystem'
 * '<S17>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/XCP on USB config'
 * '<S18>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm'
 * '<S19>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Kinematic Algorithm'
 * '<S20>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1'
 * '<S21>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Anti-windup'
 * '<S22>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/D Gain'
 * '<S23>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Filter'
 * '<S24>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Filter ICs'
 * '<S25>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/I Gain'
 * '<S26>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Ideal P Gain'
 * '<S27>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Ideal P Gain Fdbk'
 * '<S28>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Integrator'
 * '<S29>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Integrator ICs'
 * '<S30>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/N Copy'
 * '<S31>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/N Gain'
 * '<S32>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/P Copy'
 * '<S33>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Parallel P Gain'
 * '<S34>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Reset Signal'
 * '<S35>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Saturation'
 * '<S36>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Saturation Fdbk'
 * '<S37>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Sum'
 * '<S38>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Sum Fdbk'
 * '<S39>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Tracking Mode'
 * '<S40>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Tracking Mode Sum'
 * '<S41>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Tsamp - Integral'
 * '<S42>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Tsamp - Ngain'
 * '<S43>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/postSat Signal'
 * '<S44>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/preSat Signal'
 * '<S45>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Anti-windup/Disc. Clamping Parallel'
 * '<S46>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S47>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S48>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/D Gain/Disabled'
 * '<S49>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Filter/Disabled'
 * '<S50>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Filter ICs/Disabled'
 * '<S51>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/I Gain/Internal Parameters'
 * '<S52>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Ideal P Gain/Passthrough'
 * '<S53>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S54>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Integrator/Discrete'
 * '<S55>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Integrator ICs/Internal IC'
 * '<S56>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/N Copy/Disabled wSignal Specification'
 * '<S57>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/N Gain/Disabled'
 * '<S58>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/P Copy/Disabled'
 * '<S59>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S60>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Reset Signal/Disabled'
 * '<S61>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Saturation/Enabled'
 * '<S62>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Saturation Fdbk/Disabled'
 * '<S63>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Sum/Sum_PI'
 * '<S64>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Sum Fdbk/Disabled'
 * '<S65>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Tracking Mode/Disabled'
 * '<S66>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S67>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Tsamp - Integral/Passthrough'
 * '<S68>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Tsamp - Ngain/Passthrough'
 * '<S69>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/postSat Signal/Forward_Path'
 * '<S70>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/preSat Signal/Forward_Path'
 * '<S71>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Kinematic Algorithm/1st trailer local velocity'
 * '<S72>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Kinematic Algorithm/1st trailer yew rate'
 * '<S73>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Kinematic Algorithm/2nd Trailer yaw rate'
 * '<S74>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Kinematic Algorithm/Steer angle at steer axle'
 * '<S75>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Kinematic Algorithm/Tractor local velocity'
 * '<S76>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Kinematic Algorithm/Tractor yaw rate'
 * '<S77>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Inputs'
 * '<S78>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Outputs'
 * '<S79>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Voting'
 * '<S80>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Inputs/Digital Input'
 * '<S81>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Inputs/Quadrature Encoder Get'
 * '<S82>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Inputs/Trailer1 Angle'
 * '<S83>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Inputs/Trailer2 Angle'
 * '<S84>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Inputs/Quadrature Encoder Get/Detect Increase'
 * '<S85>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Outputs/Digital Output'
 * '<S86>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Outputs/Digital Output1'
 * '<S87>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Outputs/Digital Output2'
 * '<S88>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Outputs/PWM Duty Cycle'
 * '<S89>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Outputs/PWM Init'
 * '<S90>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Voting/Discrete Derivative'
 * '<S91>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Voting/S-R Flip-Flop'
 * '<S92>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Voting/S-R Flip-Flop1'
 * '<S93>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Initialize Clock Schedule/Schedule Compare Event'
 * '<S94>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Local Time generation/Enabled Subsystem'
 * '<S95>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Local Time generation/Get Last Event Counter'
 * '<S96>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Local Time generation/Schedule Compare Event1'
 * '<S97>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Backup system'
 * '<S98>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_RX'
 * '<S99>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_TX'
 * '<S100>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SSTM1_RX'
 * '<S101>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SSTM1_TX'
 * '<S102>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX'
 * '<S103>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_TX'
 * '<S104>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX'
 * '<S105>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX'
 * '<S106>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX'
 * '<S107>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX'
 * '<S108>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX'
 * '<S109>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX'
 * '<S110>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX'
 * '<S111>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX'
 * '<S112>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX'
 * '<S113>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX'
 * '<S114>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_RX/CAN receive1'
 * '<S115>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_RX/CAN receive1/Enabled Subsystem'
 * '<S116>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_TX/CAN send1'
 * '<S117>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SSTM1_RX/CAN receive1'
 * '<S118>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SSTM1_RX/CAN receive1/Enabled Subsystem'
 * '<S119>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SSTM1_TX/CAN send1'
 * '<S120>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX/CAN receive1'
 * '<S121>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX/Subsystem'
 * '<S122>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX/CAN receive1/Enabled Subsystem'
 * '<S123>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_TX/CAN send1'
 * '<S124>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/2bytes2uint1'
 * '<S125>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/2bytes2uint16'
 * '<S126>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/CAN receive1'
 * '<S127>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem'
 * '<S128>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/2bytes2uint1/Bit Shift'
 * '<S129>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/2bytes2uint1/Bit Shift/bit_shift'
 * '<S130>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/2bytes2uint16/Bit Shift'
 * '<S131>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/2bytes2uint16/Bit Shift/bit_shift'
 * '<S132>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/CAN receive1/Enabled Subsystem'
 * '<S133>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift'
 * '<S134>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift1'
 * '<S135>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift2'
 * '<S136>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift3'
 * '<S137>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift4'
 * '<S138>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift5'
 * '<S139>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift6'
 * '<S140>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift7'
 * '<S141>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift/bit_shift'
 * '<S142>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift1/bit_shift'
 * '<S143>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift2/bit_shift'
 * '<S144>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift3/bit_shift'
 * '<S145>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift4/bit_shift'
 * '<S146>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift5/bit_shift'
 * '<S147>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift6/bit_shift'
 * '<S148>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift7/bit_shift'
 * '<S149>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/CAN send1'
 * '<S150>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack'
 * '<S151>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint1'
 * '<S152>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint8'
 * '<S153>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift'
 * '<S154>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift1'
 * '<S155>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift2'
 * '<S156>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift3'
 * '<S157>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift4'
 * '<S158>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift5'
 * '<S159>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift6'
 * '<S160>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift/bit_shift'
 * '<S161>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift1/bit_shift'
 * '<S162>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift2/bit_shift'
 * '<S163>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift3/bit_shift'
 * '<S164>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift4/bit_shift'
 * '<S165>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift5/bit_shift'
 * '<S166>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift6/bit_shift'
 * '<S167>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint1/Bit Shift'
 * '<S168>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint1/Bit Shift/bit_shift'
 * '<S169>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint8/Bit Shift'
 * '<S170>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint8/Bit Shift/bit_shift'
 * '<S171>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/CAN send1'
 * '<S172>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack'
 * '<S173>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint1'
 * '<S174>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint8'
 * '<S175>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift'
 * '<S176>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift1'
 * '<S177>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift2'
 * '<S178>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift3'
 * '<S179>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift4'
 * '<S180>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift5'
 * '<S181>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift6'
 * '<S182>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift/bit_shift'
 * '<S183>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift1/bit_shift'
 * '<S184>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift2/bit_shift'
 * '<S185>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift3/bit_shift'
 * '<S186>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift4/bit_shift'
 * '<S187>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift5/bit_shift'
 * '<S188>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift6/bit_shift'
 * '<S189>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint1/Bit Shift'
 * '<S190>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint1/Bit Shift/bit_shift'
 * '<S191>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint8/Bit Shift'
 * '<S192>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint8/Bit Shift/bit_shift'
 * '<S193>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/2bytes2uint1'
 * '<S194>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/2bytes2uint16'
 * '<S195>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/CAN receive1'
 * '<S196>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem'
 * '<S197>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/2bytes2uint1/Bit Shift'
 * '<S198>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/2bytes2uint1/Bit Shift/bit_shift'
 * '<S199>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/2bytes2uint16/Bit Shift'
 * '<S200>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/2bytes2uint16/Bit Shift/bit_shift'
 * '<S201>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/CAN receive1/Enabled Subsystem'
 * '<S202>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift'
 * '<S203>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift1'
 * '<S204>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift2'
 * '<S205>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift3'
 * '<S206>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift4'
 * '<S207>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift5'
 * '<S208>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift6'
 * '<S209>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift7'
 * '<S210>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift/bit_shift'
 * '<S211>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift1/bit_shift'
 * '<S212>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift2/bit_shift'
 * '<S213>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift3/bit_shift'
 * '<S214>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift4/bit_shift'
 * '<S215>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift5/bit_shift'
 * '<S216>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift6/bit_shift'
 * '<S217>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift7/bit_shift'
 * '<S218>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/CAN send1'
 * '<S219>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack'
 * '<S220>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint1'
 * '<S221>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint8'
 * '<S222>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift'
 * '<S223>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift1'
 * '<S224>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift2'
 * '<S225>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift3'
 * '<S226>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift4'
 * '<S227>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift5'
 * '<S228>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift6'
 * '<S229>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift/bit_shift'
 * '<S230>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift1/bit_shift'
 * '<S231>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift2/bit_shift'
 * '<S232>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift3/bit_shift'
 * '<S233>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift4/bit_shift'
 * '<S234>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift5/bit_shift'
 * '<S235>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift6/bit_shift'
 * '<S236>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint1/Bit Shift'
 * '<S237>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint1/Bit Shift/bit_shift'
 * '<S238>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint8/Bit Shift'
 * '<S239>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint8/Bit Shift/bit_shift'
 * '<S240>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/2bytes2uint1'
 * '<S241>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/2bytes2uint16'
 * '<S242>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/CAN receive1'
 * '<S243>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem'
 * '<S244>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/2bytes2uint1/Bit Shift'
 * '<S245>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/2bytes2uint1/Bit Shift/bit_shift'
 * '<S246>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/2bytes2uint16/Bit Shift'
 * '<S247>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/2bytes2uint16/Bit Shift/bit_shift'
 * '<S248>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/CAN receive1/Enabled Subsystem'
 * '<S249>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift'
 * '<S250>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift1'
 * '<S251>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift2'
 * '<S252>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift3'
 * '<S253>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift4'
 * '<S254>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift5'
 * '<S255>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift6'
 * '<S256>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift7'
 * '<S257>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift/bit_shift'
 * '<S258>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift1/bit_shift'
 * '<S259>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift2/bit_shift'
 * '<S260>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift3/bit_shift'
 * '<S261>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift4/bit_shift'
 * '<S262>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift5/bit_shift'
 * '<S263>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift6/bit_shift'
 * '<S264>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift7/bit_shift'
 * '<S265>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/2bytes2uint1'
 * '<S266>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/2bytes2uint16'
 * '<S267>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/CAN receive1'
 * '<S268>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem'
 * '<S269>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/2bytes2uint1/Bit Shift'
 * '<S270>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/2bytes2uint1/Bit Shift/bit_shift'
 * '<S271>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/2bytes2uint16/Bit Shift'
 * '<S272>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/2bytes2uint16/Bit Shift/bit_shift'
 * '<S273>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/CAN receive1/Enabled Subsystem'
 * '<S274>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift'
 * '<S275>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift1'
 * '<S276>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift2'
 * '<S277>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift3'
 * '<S278>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift4'
 * '<S279>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift5'
 * '<S280>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift6'
 * '<S281>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift7'
 * '<S282>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift/bit_shift'
 * '<S283>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift1/bit_shift'
 * '<S284>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift2/bit_shift'
 * '<S285>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift3/bit_shift'
 * '<S286>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift4/bit_shift'
 * '<S287>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift5/bit_shift'
 * '<S288>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift6/bit_shift'
 * '<S289>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift7/bit_shift'
 * '<S290>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/CAN send1'
 * '<S291>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack'
 * '<S292>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint1'
 * '<S293>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint8'
 * '<S294>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift'
 * '<S295>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift1'
 * '<S296>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift2'
 * '<S297>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift3'
 * '<S298>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift4'
 * '<S299>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift5'
 * '<S300>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift6'
 * '<S301>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift/bit_shift'
 * '<S302>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift1/bit_shift'
 * '<S303>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift2/bit_shift'
 * '<S304>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift3/bit_shift'
 * '<S305>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift4/bit_shift'
 * '<S306>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift5/bit_shift'
 * '<S307>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift6/bit_shift'
 * '<S308>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint1/Bit Shift'
 * '<S309>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint1/Bit Shift/bit_shift'
 * '<S310>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint8/Bit Shift'
 * '<S311>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint8/Bit Shift/bit_shift'
 * '<S312>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/2bytes2uint1'
 * '<S313>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/2bytes2uint16'
 * '<S314>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/CAN receive1'
 * '<S315>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem'
 * '<S316>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/2bytes2uint1/Bit Shift'
 * '<S317>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/2bytes2uint1/Bit Shift/bit_shift'
 * '<S318>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/2bytes2uint16/Bit Shift'
 * '<S319>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/2bytes2uint16/Bit Shift/bit_shift'
 * '<S320>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/CAN receive1/Enabled Subsystem'
 * '<S321>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift'
 * '<S322>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift1'
 * '<S323>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift2'
 * '<S324>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift3'
 * '<S325>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift4'
 * '<S326>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift5'
 * '<S327>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift6'
 * '<S328>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift7'
 * '<S329>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift/bit_shift'
 * '<S330>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift1/bit_shift'
 * '<S331>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift2/bit_shift'
 * '<S332>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift3/bit_shift'
 * '<S333>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift4/bit_shift'
 * '<S334>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift5/bit_shift'
 * '<S335>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift6/bit_shift'
 * '<S336>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift7/bit_shift'
 * '<S337>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/CAN send1'
 * '<S338>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack'
 * '<S339>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint1'
 * '<S340>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint2'
 * '<S341>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift'
 * '<S342>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift1'
 * '<S343>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift2'
 * '<S344>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift3'
 * '<S345>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift4'
 * '<S346>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift5'
 * '<S347>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift6'
 * '<S348>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift/bit_shift'
 * '<S349>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift1/bit_shift'
 * '<S350>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift2/bit_shift'
 * '<S351>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift3/bit_shift'
 * '<S352>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift4/bit_shift'
 * '<S353>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift5/bit_shift'
 * '<S354>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift6/bit_shift'
 * '<S355>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint1/Bit Shift'
 * '<S356>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint1/Bit Shift/bit_shift'
 * '<S357>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint2/Bit Shift'
 * '<S358>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint2/Bit Shift/bit_shift'
 * '<S359>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem'
 * '<S360>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem2'
 * '<S361>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem2/CAN receive1'
 * '<S362>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem2/Subsystem1'
 * '<S363>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem2/CAN receive1/Enabled Subsystem'
 * '<S364>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Setting ID/Digital Input'
 * '<S365>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Setting ID/Digital Input1'
 * '<S366>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Setting ID/Digital Input2'
 * '<S367>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get CPU load'
 * '<S368>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get free Heap'
 * '<S369>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get free Stack'
 * '<S370>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Triggered Subsystem/Digital Input1'
 * '<S371>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Triggered Subsystem/Subsystem'
 * '<S372>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Triggered Subsystem/Subsystem/If Action Subsystem'
 * '<S373>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Triggered Subsystem/Subsystem/If Action Subsystem1'
 * '<S374>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Triggered Subsystem/Subsystem/If Action Subsystem2'
 * '<S375>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Triggered Subsystem/Subsystem/If Action Subsystem3'
 * '<S376>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Triggered Subsystem/Subsystem/S-R Flip-Flop'
 * '<S377>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Triggered Subsystem/Subsystem/S-R Flip-Flop1'
 */
#endif                        /* RTW_HEADER_HANcoder_E407_TTA_CombineModel_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
>>>>>>> 81417dd1e339209a4e3107c0a47e656175be45ac
