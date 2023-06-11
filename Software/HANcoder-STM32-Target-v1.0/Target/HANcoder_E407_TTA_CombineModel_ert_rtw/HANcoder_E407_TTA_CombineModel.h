/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_CombineModel.h
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_CombineModel'.
 *
 * Model version                  : 17.26
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Sun Jun 11 21:49:47 2023
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
#include "quadencoder.h"
#include "digout.h"
#include "pwmout.h"
#include "canio.h"
#include "can.h"
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

/* Block signals for system '<S78>/Moving Average' */
typedef struct {
  real32_T MovingAverage_n;            /* '<S78>/Moving Average' */
} rtB_MovingAverage;

/* Block states (default storage) for system '<S78>/Moving Average' */
typedef struct {
  dsp_simulink_MovingAverage obj;      /* '<S78>/Moving Average' */
  boolean_T objisempty;                /* '<S78>/Moving Average' */
} rtDW_MovingAverage;

/* Block signals for system '<S115>/Enabled Subsystem' */
typedef struct {
  uint8_T In1;                         /* '<S116>/In1' */
  uint8_T In2;                         /* '<S116>/In2' */
  uint8_T In3;                         /* '<S116>/In3' */
  uint8_T In4;                         /* '<S116>/In4' */
  uint8_T In7;                         /* '<S116>/In7' */
} rtB_EnabledSubsystem;

/* Block signals for system '<S13>/MMBS1_RX' */
typedef struct {
  rtB_EnabledSubsystem EnabledSubsystem_k;/* '<S115>/Enabled Subsystem' */
} rtB_MMBS1_RX;

/* Block states (default storage) for system '<S13>/MMBS1_RX' */
typedef struct {
  boolean_T MMBS1_RX_MODE;             /* '<S13>/MMBS1_RX' */
} rtDW_MMBS1_RX;

/* Zero-crossing (trigger) state for system '<S13>/MMBS1_TX' */
typedef struct {
  ZCSigState MMBS1_TX_Trig_ZCE;        /* '<S13>/MMBS1_TX' */
} rtZCE_MMBS1_TX;

/* Block signals for system '<S125>/Bit Shift' */
typedef struct {
  uint16_T y;                          /* '<S129>/bit_shift' */
} rtB_BitShift;

/* Block signals for system '<S128>/Bit Shift' */
typedef struct {
  uint8_T y;                           /* '<S134>/bit_shift' */
} rtB_BitShift_l;

/* Block signals for system '<S128>/Bit Shift1' */
typedef struct {
  uint8_T y;                           /* '<S135>/bit_shift' */
} rtB_BitShift1;

/* Block signals for system '<S128>/Bit Shift2' */
typedef struct {
  uint8_T y;                           /* '<S136>/bit_shift' */
} rtB_BitShift2;

/* Block signals for system '<S128>/Bit Shift3' */
typedef struct {
  uint8_T y;                           /* '<S137>/bit_shift' */
} rtB_BitShift3;

/* Block signals for system '<S128>/Bit Shift4' */
typedef struct {
  uint8_T y;                           /* '<S138>/bit_shift' */
} rtB_BitShift4;

/* Block signals for system '<S128>/Bit Shift5' */
typedef struct {
  uint8_T y;                           /* '<S139>/bit_shift' */
} rtB_BitShift5;

/* Block signals for system '<S128>/Bit Shift6' */
typedef struct {
  uint8_T y;                           /* '<S140>/bit_shift' */
} rtB_BitShift6;

/* Block signals for system '<S151>/Bit Shift' */
typedef struct {
  uint8_T y;                           /* '<S154>/bit_shift' */
} rtB_BitShift_o;

/* Block signals for system '<S151>/Bit Shift1' */
typedef struct {
  uint8_T y;                           /* '<S155>/bit_shift' */
} rtB_BitShift1_j;

/* Block signals for system '<S151>/Bit Shift2' */
typedef struct {
  uint8_T y;                           /* '<S156>/bit_shift' */
} rtB_BitShift2_e;

/* Block signals for system '<S151>/Bit Shift3' */
typedef struct {
  uint8_T y;                           /* '<S157>/bit_shift' */
} rtB_BitShift3_g;

/* Block signals for system '<S151>/Bit Shift4' */
typedef struct {
  uint8_T y;                           /* '<S158>/bit_shift' */
} rtB_BitShift4_g;

/* Block signals for system '<S151>/Bit Shift5' */
typedef struct {
  uint8_T y;                           /* '<S159>/bit_shift' */
} rtB_BitShift5_e;

/* Block signals for system '<S151>/Bit Shift6' */
typedef struct {
  uint8_T y;                           /* '<S160>/bit_shift' */
} rtB_BitShift6_b;

/* Block signals for system '<S152>/Bit Shift' */
typedef struct {
  uint16_T y;                          /* '<S168>/bit_shift' */
} rtB_BitShift_c;

/* Block signals for system '<S13>/TRCK1_ID2_TX' */
typedef struct {
  uint8_T DataStoreRead2;              /* '<S106>/Data Store Read2' */
  uint8_T Add;                         /* '<S151>/Add' */
  uint8_T Cast;                        /* '<S152>/Cast' */
  uint8_T Cast1;                       /* '<S152>/Cast1' */
  uint8_T Cast_k;                      /* '<S153>/Cast' */
  uint8_T Cast1_i;                     /* '<S153>/Cast1' */
  rtB_BitShift_c BitShift_h;           /* '<S153>/Bit Shift' */
  rtB_BitShift_c BitShift_of;          /* '<S152>/Bit Shift' */
  rtB_BitShift6_b BitShift6_dc;        /* '<S151>/Bit Shift6' */
  rtB_BitShift5_e BitShift5_nr;        /* '<S151>/Bit Shift5' */
  rtB_BitShift4_g BitShift4_g2;        /* '<S151>/Bit Shift4' */
  rtB_BitShift3_g BitShift3_lh;        /* '<S151>/Bit Shift3' */
  rtB_BitShift2_e BitShift2_pw;        /* '<S151>/Bit Shift2' */
  rtB_BitShift1_j BitShift1_b0;        /* '<S151>/Bit Shift1' */
  rtB_BitShift_o BitShift_gyk;         /* '<S151>/Bit Shift' */
} rtB_TRCK1_ID2_TX;

/* Zero-crossing (trigger) state for system '<S13>/TRCK1_ID2_TX' */
typedef struct {
  ZCSigState TRCK1_ID2_TX_Trig_ZCE;    /* '<S13>/TRCK1_ID2_TX' */
} rtZCE_TRCK1_ID2_TX;

/* Block signals (default storage) */
typedef struct {
  uint16_T Switch;                     /* '<S79>/Switch' */
  uint16_T Sum;                        /* '<S12>/Sum' */
  uint8_T DataStoreRead3;              /* '<S114>/Data Store Read3' */
  uint8_T Add;                         /* '<S339>/Add' */
  uint8_T Cast;                        /* '<S340>/Cast' */
  uint8_T Cast1;                       /* '<S340>/Cast1' */
  uint8_T Cast_f;                      /* '<S341>/Cast' */
  uint8_T Cast1_m;                     /* '<S341>/Cast1' */
  uint8_T DataStoreRead2;              /* '<S112>/Data Store Read2' */
  uint8_T Add_f;                       /* '<S292>/Add' */
  uint8_T Cast_d;                      /* '<S293>/Cast' */
  uint8_T Cast1_c;                     /* '<S293>/Cast1' */
  uint8_T Cast_n;                      /* '<S294>/Cast' */
  uint8_T Cast1_i;                     /* '<S294>/Cast1' */
  uint8_T DataStoreRead;               /* '<S104>/Data Store Read' */
  boolean_T OR;                        /* '<S15>/OR' */
  boolean_T DataTypeConversion;        /* '<S81>/Data Type Conversion' */
  boolean_T Switch1;                   /* '<S79>/Switch1' */
  boolean_T Switch2;                   /* '<S79>/Switch2' */
  boolean_T NotEqual;                  /* '<S79>/NotEqual' */
  rtB_EnabledSubsystem EnabledSubsystem_i;/* '<S362>/Enabled Subsystem' */
  rtB_BitShift_c BitShift_gul;         /* '<S341>/Bit Shift' */
  rtB_BitShift_c BitShift_g3;          /* '<S340>/Bit Shift' */
  rtB_BitShift6_b BitShift6_ab;        /* '<S339>/Bit Shift6' */
  rtB_BitShift5_e BitShift5_nm;        /* '<S339>/Bit Shift5' */
  rtB_BitShift4_g BitShift4_ew;        /* '<S339>/Bit Shift4' */
  rtB_BitShift3_g BitShift3_a;         /* '<S339>/Bit Shift3' */
  rtB_BitShift2_e BitShift2_f;         /* '<S339>/Bit Shift2' */
  rtB_BitShift1_j BitShift1_n;         /* '<S339>/Bit Shift1' */
  rtB_BitShift_o BitShift_a0;          /* '<S339>/Bit Shift' */
  rtB_BitShift_l BitShift7_ms;         /* '<S316>/Bit Shift7' */
  rtB_BitShift6 BitShift6_a;           /* '<S316>/Bit Shift6' */
  rtB_BitShift5 BitShift5_ni;          /* '<S316>/Bit Shift5' */
  rtB_BitShift4 BitShift4_o;           /* '<S316>/Bit Shift4' */
  rtB_BitShift3 BitShift3_dx;          /* '<S316>/Bit Shift3' */
  rtB_BitShift2 BitShift2_d;           /* '<S316>/Bit Shift2' */
  rtB_BitShift1 BitShift1_au;          /* '<S316>/Bit Shift1' */
  rtB_BitShift_l BitShift_dp;          /* '<S316>/Bit Shift' */
  rtB_EnabledSubsystem EnabledSubsystem_e;/* '<S315>/Enabled Subsystem' */
  rtB_BitShift BitShift_jx;            /* '<S314>/Bit Shift' */
  rtB_BitShift BitShift_a;             /* '<S313>/Bit Shift' */
  rtB_BitShift_c BitShift_d;           /* '<S294>/Bit Shift' */
  rtB_BitShift_c BitShift_h;           /* '<S293>/Bit Shift' */
  rtB_BitShift6_b BitShift6_k;         /* '<S292>/Bit Shift6' */
  rtB_BitShift5_e BitShift5_og;        /* '<S292>/Bit Shift5' */
  rtB_BitShift4_g BitShift4_c;         /* '<S292>/Bit Shift4' */
  rtB_BitShift3_g BitShift3_m;         /* '<S292>/Bit Shift3' */
  rtB_BitShift2_e BitShift2_l4;        /* '<S292>/Bit Shift2' */
  rtB_BitShift1_j BitShift1_c;         /* '<S292>/Bit Shift1' */
  rtB_BitShift_o BitShift_eg;          /* '<S292>/Bit Shift' */
  rtB_BitShift_l BitShift7_m;          /* '<S269>/Bit Shift7' */
  rtB_BitShift6 BitShift6_o5;          /* '<S269>/Bit Shift6' */
  rtB_BitShift5 BitShift5_o;           /* '<S269>/Bit Shift5' */
  rtB_BitShift4 BitShift4_j;           /* '<S269>/Bit Shift4' */
  rtB_BitShift3 BitShift3_f;           /* '<S269>/Bit Shift3' */
  rtB_BitShift2 BitShift2_l;           /* '<S269>/Bit Shift2' */
  rtB_BitShift1 BitShift1_e;           /* '<S269>/Bit Shift1' */
  rtB_BitShift_l BitShift_l;           /* '<S269>/Bit Shift' */
  rtB_EnabledSubsystem EnabledSubsystem_g;/* '<S268>/Enabled Subsystem' */
  rtB_BitShift BitShift_n;             /* '<S267>/Bit Shift' */
  rtB_BitShift BitShift_gu;            /* '<S266>/Bit Shift' */
  rtB_BitShift_l BitShift7_j;          /* '<S244>/Bit Shift7' */
  rtB_BitShift6 BitShift6_b;           /* '<S244>/Bit Shift6' */
  rtB_BitShift5 BitShift5_c;           /* '<S244>/Bit Shift5' */
  rtB_BitShift4 BitShift4_d;           /* '<S244>/Bit Shift4' */
  rtB_BitShift3 BitShift3_d;           /* '<S244>/Bit Shift3' */
  rtB_BitShift2 BitShift2_cw;          /* '<S244>/Bit Shift2' */
  rtB_BitShift1 BitShift1_a;           /* '<S244>/Bit Shift1' */
  rtB_BitShift_l BitShift_f;           /* '<S244>/Bit Shift' */
  rtB_EnabledSubsystem EnabledSubsystem_bj;/* '<S243>/Enabled Subsystem' */
  rtB_BitShift BitShift_p;             /* '<S242>/Bit Shift' */
  rtB_BitShift BitShift_e;             /* '<S241>/Bit Shift' */
  rtB_TRCK1_ID2_TX TRCK1_TX;           /* '<S13>/TRCK1_TX' */
  rtB_BitShift_l BitShift7_e;          /* '<S197>/Bit Shift7' */
  rtB_BitShift6 BitShift6_i;           /* '<S197>/Bit Shift6' */
  rtB_BitShift5 BitShift5_bs;          /* '<S197>/Bit Shift5' */
  rtB_BitShift4 BitShift4_a;           /* '<S197>/Bit Shift4' */
  rtB_BitShift3 BitShift3_lj;          /* '<S197>/Bit Shift3' */
  rtB_BitShift2 BitShift2_c;           /* '<S197>/Bit Shift2' */
  rtB_BitShift1 BitShift1_l;           /* '<S197>/Bit Shift1' */
  rtB_BitShift_l BitShift_c;           /* '<S197>/Bit Shift' */
  rtB_EnabledSubsystem EnabledSubsystem_h;/* '<S196>/Enabled Subsystem' */
  rtB_BitShift BitShift_j;             /* '<S195>/Bit Shift' */
  rtB_BitShift BitShift_k;             /* '<S194>/Bit Shift' */
  rtB_TRCK1_ID2_TX TRCK1_ID3_TX;       /* '<S13>/TRCK1_ID3_TX' */
  rtB_TRCK1_ID2_TX TRCK1_ID2_TX_f;     /* '<S13>/TRCK1_ID2_TX' */
  rtB_BitShift_l BitShift7;            /* '<S128>/Bit Shift7' */
  rtB_BitShift6 BitShift6_o;           /* '<S128>/Bit Shift6' */
  rtB_BitShift5 BitShift5_b;           /* '<S128>/Bit Shift5' */
  rtB_BitShift4 BitShift4_e;           /* '<S128>/Bit Shift4' */
  rtB_BitShift3 BitShift3_c;           /* '<S128>/Bit Shift3' */
  rtB_BitShift2 BitShift2_i;           /* '<S128>/Bit Shift2' */
  rtB_BitShift1 BitShift1_g;           /* '<S128>/Bit Shift1' */
  rtB_BitShift_l BitShift_gy3;         /* '<S128>/Bit Shift' */
  rtB_EnabledSubsystem EnabledSubsystem_b;/* '<S127>/Enabled Subsystem' */
  rtB_BitShift BitShift_gvk;           /* '<S126>/Bit Shift' */
  rtB_BitShift BitShift_gv;            /* '<S125>/Bit Shift' */
  rtB_EnabledSubsystem EnabledSubsystem_c;/* '<S121>/Enabled Subsystem' */
  rtB_MMBS1_RX SSTM1_RX;               /* '<S13>/SSTM1_RX' */
  rtB_MMBS1_RX MMBS1_RX_j;             /* '<S13>/MMBS1_RX' */
  rtB_MovingAverage MovingAverage1;    /* '<S78>/Moving Average' */
  rtB_MovingAverage MovingAverage_p;   /* '<S78>/Moving Average' */
} BlockIO;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T DelayInput1_DSTATE;           /* '<S84>/Delay Input1' */
  real_T Integrator_DSTATE;            /* '<S55>/Integrator' */
  real_T setAngle;                     /* '<S1>/Data Store Memory2' */
  real_T amountOfTrailers;             /* '<S1>/Data Store Memory5' */
  real_T systemState;                  /* '<S1>/Data Store Memory6' */
  real_T init_clock;                   /* '<S1>/Data Store Memory18' */
  real_T requestedAngle;               /* '<S1>/Data Store Memory7' */
  int32_T encoderPosition;             /* '<S1>/Data Store Memory16' */
  uint16_T potentiometer1;             /* '<S1>/Data Store Memory1' */
  uint16_T pwmMotor;                   /* '<S1>/Data Store Memory12' */
  uint16_T pot5_1;                     /* '<S1>/Data Store Memory20' */
  uint16_T pot4_1;                     /* '<S1>/Data Store Memory27' */
  uint16_T pot4_2;                     /* '<S1>/Data Store Memory29' */
  uint16_T lastPot1;                   /* '<S1>/Data Store Memory32' */
  uint16_T potentiometer2;             /* '<S1>/Data Store Memory4' */
  uint16_T trailerOneAngle;            /* '<S1>/Data Store Memory8' */
  uint16_T trailerTwoAngle;            /* '<S1>/Data Store Memory9' */
  uint16_T testCount;                  /* '<S104>/Data Store Memory' */
  boolean_T Delay_DSTATE[2];           /* '<S80>/Delay' */
  boolean_T Delay1_DSTATE[5];          /* '<S80>/Delay1' */
  boolean_T Delay2_DSTATE[10];         /* '<S80>/Delay2' */
  uint8_T velocity;                    /* '<S1>/Data Store Memory11' */
  uint8_T Local_Ticks;                 /* '<S1>/Data Store Memory' */
  uint8_T nodeRole;                    /* '<S1>/Data Store Memory10' */
  uint8_T slot;                        /* '<S1>/Data Store Memory15' */
  uint8_T SlotTime;                    /* '<S1>/Data Store Memory3' */
  boolean_T slaveClockOn;              /* '<S15>/Data Store Memory' */
  boolean_T cwMotor;                   /* '<S1>/Data Store Memory13' */
  boolean_T ccwMotor;                  /* '<S1>/Data Store Memory14' */
  boolean_T node4Active;               /* '<S1>/Data Store Memory26' */
  boolean_T node5Active;               /* '<S1>/Data Store Memory28' */
  boolean_T motorFailed;               /* '<S1>/Data Store Memory31' */
  boolean_T potFault;                  /* '<S1>/Data Store Memory33' */
  boolean_T Memory_PreviousInput;      /* '<S90>/Memory' */
  boolean_T Subsystem2_MODE;           /* '<S15>/Subsystem2' */
  boolean_T Messageselector_MODE;      /* '<S1>/Message selector' */
  boolean_T TRLS_ID5_RX_MODE;          /* '<S13>/TRLS_ID5_RX' */
  boolean_T TRLS_ID4_RX_MODE;          /* '<S13>/TRLS_ID4_RX' */
  boolean_T TRCK_ID3_RX_MODE;          /* '<S13>/TRCK_ID3_RX' */
  boolean_T TRCK1_RX_MODE;             /* '<S13>/TRCK1_RX' */
  boolean_T TRCK1_ID2_RX_MODE;         /* '<S13>/TRCK1_ID2_RX' */
  boolean_T SYNC1_RX_MODE;             /* '<S13>/SYNC1_RX' */
  boolean_T InitializeClockSchedule_MODE;/* '<S1>/Initialize Clock Schedule' */
  rtDW_MMBS1_RX SSTM1_RX;              /* '<S13>/SSTM1_RX' */
  rtDW_MMBS1_RX MMBS1_RX_j;            /* '<S13>/MMBS1_RX' */
  rtDW_MovingAverage MovingAverage1;   /* '<S78>/Moving Average' */
  rtDW_MovingAverage MovingAverage_p;  /* '<S78>/Moving Average' */
} D_Work;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState Subsystem1_Trig_ZCE;      /* '<S361>/Subsystem1' */
  ZCSigState Subsystem_Trig_ZCE;       /* '<S15>/Subsystem' */
  ZCSigState TRLS_ID5_TX_Trig_ZCE;     /* '<S13>/TRLS_ID5_TX' */
  ZCSigState TRLS_ID4_TX_Trig_ZCE;     /* '<S13>/TRLS_ID4_TX' */
  rtZCE_TRCK1_ID2_TX TRCK1_TX;         /* '<S13>/TRCK1_TX' */
  rtZCE_TRCK1_ID2_TX TRCK1_ID3_TX;     /* '<S13>/TRCK1_ID3_TX' */
  rtZCE_TRCK1_ID2_TX TRCK1_ID2_TX_f;   /* '<S13>/TRCK1_ID2_TX' */
  ZCSigState SYNC1_TX_Trig_ZCE;        /* '<S13>/SYNC1_TX' */
  ZCSigState Subsystem_Trig_ZCE_h;     /* '<S103>/Subsystem' */
  rtZCE_MMBS1_TX SSTM1_TX;             /* '<S13>/SSTM1_TX' */
  rtZCE_MMBS1_TX MMBS1_TX_a;           /* '<S13>/MMBS1_TX' */
  ZCSigState IOexecution_Trig_ZCE;     /* '<S1>/IO execution' */
  ZCSigState Controlexecution_Trig_ZCE;/* '<S1>/Control execution' */
  ZCSigState EnabledSubsystem_Trig_ZCE;/* '<S12>/Enabled Subsystem' */
} PrevZCSigStates;

/* Invariant block signals for system '<S13>/TRCK1_ID2_TX' */
typedef struct {
  const uint8_T Cast;                  /* '<S151>/Cast' */
  const uint8_T Cast2;                 /* '<S151>/Cast2' */
  const uint8_T Cast3;                 /* '<S151>/Cast3' */
  const uint8_T Cast4;                 /* '<S151>/Cast4' */
  const uint8_T Cast5;                 /* '<S151>/Cast5' */
  const uint8_T Cast6;                 /* '<S151>/Cast6' */
} rtC_TRCK1_ID2_TX;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T signV2;                 /* '<S73>/Sign' */
  const real_T signL0b;                /* '<S73>/Sign1' */
  const real_T Abs;                    /* '<S74>/Abs' */
  const real_T signL0b_o;              /* '<S77>/Sign1' */
  const uint16_T Cast;                 /* '<S79>/Cast' */
  const uint8_T Cast_h;                /* '<S339>/Cast' */
  const uint8_T Cast2;                 /* '<S339>/Cast2' */
  const uint8_T Cast3;                 /* '<S339>/Cast3' */
  const uint8_T Cast4;                 /* '<S339>/Cast4' */
  const uint8_T Cast5;                 /* '<S339>/Cast5' */
  const uint8_T Cast6;                 /* '<S339>/Cast6' */
  const uint8_T Cast7;                 /* '<S339>/Cast7' */
  const uint8_T Cast_j;                /* '<S292>/Cast' */
  const uint8_T Cast2_o;               /* '<S292>/Cast2' */
  const uint8_T Cast3_g;               /* '<S292>/Cast3' */
  const uint8_T Cast4_l;               /* '<S292>/Cast4' */
  const uint8_T Cast5_h;               /* '<S292>/Cast5' */
  const uint8_T Cast6_e;               /* '<S292>/Cast6' */
  const uint8_T Cast7_e;               /* '<S292>/Cast7' */
  const boolean_T Cast1;               /* '<S79>/Cast1' */
  const boolean_T Cast2_p;             /* '<S79>/Cast2' */
  rtC_TRCK1_ID2_TX TRCK1_TX;           /* '<S13>/TRCK1_TX' */
  rtC_TRCK1_ID2_TX TRCK1_ID3_TX;       /* '<S13>/TRCK1_ID3_TX' */
  rtC_TRCK1_ID2_TX TRCK1_ID2_TX_f;     /* '<S13>/TRCK1_ID2_TX' */
} ConstBlockIO;

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: Logic_table
   * Referenced by: '<S90>/Logic'
   */
  boolean_T Logic_table[16];
} ConstParam;

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
extern real_T Gamma1;                  /* '<S20>/Sum1' */
extern real_T steering;                /* '<S19>/Gain2' */
extern real_T position;                /* '<S19>/Gain1' */
extern real_T control;                 /* '<S19>/Sum' */
extern uint32_T SI_FreeHeap;           /* '<S366>/Level-2 M-file S-Function' */
extern uint32_T SI_FreeStack;          /* '<S367>/Level-2 M-file S-Function' */
extern real32_T delta12K;              /* '<S75>/tan 1' */
extern int32_T motorPos;               /* '<S81>/Level-2 M-file S-Function' */
extern uint16_T pot31;                 /* '<S242>/Add' */
extern uint16_T pot32;                 /* '<S241>/Add' */
extern uint16_T pot11;                 /* '<S195>/Add' */
extern uint16_T pot12;                 /* '<S194>/Add' */
extern uint16_T pot21;                 /* '<S126>/Add' */
extern uint16_T pot22;                 /* '<S125>/Add' */
extern uint16_T testCounter;           /* '<S104>/Data Store Read1' */
extern uint16_T analogPot1;            /* '<S82>/Level-2 M-file S-Function' */
extern uint16_T pot1;                  /* '<S78>/Cast1' */
extern uint16_T analogPot2;            /* '<S83>/Level-2 M-file S-Function' */
extern uint16_T pot2;                  /* '<S78>/Cast2' */
extern uint16_T t2Angle;               /* '<S5>/Data Store Read2' */
extern uint16_T t1Angle;               /* '<S5>/Data Store Read1' */
extern uint16_T Gamma2;                /* '<S20>/Sum2' */
extern uint16_T mospeed;               /* '<S19>/Add' */
extern uint8_T SI_CPUload;             /* '<S365>/Level-2 M-file S-Function' */
extern uint8_T local_ticks_interrupt;  /* '<S12>/Switch' */
extern uint8_T setSlotTime;            /* '<S12>/Data Store Read3' */
extern uint8_T slotSelected;           /* '<S96>/Switch' */
extern boolean_T boolCan;              /* '<S13>/AND' */
extern boolean_T cw;                   /* '<S19>/Cast1' */
extern boolean_T ccw;                  /* '<S19>/NOT' */
extern boolean_T canActive;            /* '<S12>/Clock_State' */

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern real_T ClockOn;                 /* Variable: ClockOn
                                        * Referenced by: '<S15>/Constant'
                                        */
extern real_T controlWidth;            /* Variable: controlWidth
                                        * Referenced by: '<S19>/Constant'
                                        */
extern real_T desiredAngle;            /* Variable: desiredAngle
                                        * Referenced by: '<S78>/Constant2'
                                        */
extern real_T intVal;                  /* Variable: intVal
                                        * Referenced by: '<S52>/Integral Gain'
                                        */
extern real_T matrixRows;              /* Variable: matrixRows
                                        * Referenced by: '<S96>/Constant1'
                                        */
extern real_T propVal;                 /* Variable: propVal
                                        * Referenced by: '<S60>/Proportional Gain'
                                        */
extern uint32_T MMBS1_ID;              /* Variable: MMBS1_ID
                                        * Referenced by: '<S13>/Constant12'
                                        */
extern uint32_T SSTM1_ID;              /* Variable: SSTM1_ID
                                        * Referenced by: '<S13>/Constant14'
                                        */
extern uint32_T SYNC1_ID;              /* Variable: SYNC1_ID
                                        * Referenced by:
                                        *   '<S13>/Constant10'
                                        *   '<S361>/Constant10'
                                        */
extern uint32_T TRCK1_ID1;             /* Variable: TRCK1_ID1
                                        * Referenced by: '<S13>/Constant3'
                                        */
extern uint32_T TRCK1_ID2;             /* Variable: TRCK1_ID2
                                        * Referenced by: '<S13>/Constant5'
                                        */
extern uint32_T TRCK1_ID3;             /* Variable: TRCK1_ID3
                                        * Referenced by: '<S13>/Constant26'
                                        */
extern uint32_T TRLS1_ID4;             /* Variable: TRLS1_ID4
                                        * Referenced by: '<S13>/Constant8'
                                        */
extern uint32_T TRLS1_ID5;             /* Variable: TRLS1_ID5
                                        * Referenced by: '<S13>/Constant18'
                                        */
extern uint8_T slotTime;               /* Variable: slotTime
                                        * Referenced by: '<S360>/Constant3'
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
 * '<S5>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution'
 * '<S6>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Custom ID config'
 * '<S7>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Digital Input'
 * '<S8>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Digital Input1'
 * '<S9>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Digital Input2'
 * '<S10>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution'
 * '<S11>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Initialize Clock Schedule'
 * '<S12>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Local Time generation'
 * '<S13>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector'
 * '<S14>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Output Compare Init'
 * '<S15>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment'
 * '<S16>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Spars Slots'
 * '<S17>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/System information'
 * '<S18>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/XCP on USB config'
 * '<S19>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm'
 * '<S20>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Kinematic Algorithm'
 * '<S21>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1'
 * '<S22>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Anti-windup'
 * '<S23>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/D Gain'
 * '<S24>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Filter'
 * '<S25>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Filter ICs'
 * '<S26>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/I Gain'
 * '<S27>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Ideal P Gain'
 * '<S28>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Ideal P Gain Fdbk'
 * '<S29>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Integrator'
 * '<S30>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Integrator ICs'
 * '<S31>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/N Copy'
 * '<S32>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/N Gain'
 * '<S33>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/P Copy'
 * '<S34>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Parallel P Gain'
 * '<S35>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Reset Signal'
 * '<S36>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Saturation'
 * '<S37>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Saturation Fdbk'
 * '<S38>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Sum'
 * '<S39>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Sum Fdbk'
 * '<S40>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Tracking Mode'
 * '<S41>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Tracking Mode Sum'
 * '<S42>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Tsamp - Integral'
 * '<S43>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Tsamp - Ngain'
 * '<S44>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/postSat Signal'
 * '<S45>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/preSat Signal'
 * '<S46>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Anti-windup/Disc. Clamping Parallel'
 * '<S47>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S48>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S49>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/D Gain/Disabled'
 * '<S50>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Filter/Disabled'
 * '<S51>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Filter ICs/Disabled'
 * '<S52>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/I Gain/Internal Parameters'
 * '<S53>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Ideal P Gain/Passthrough'
 * '<S54>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S55>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Integrator/Discrete'
 * '<S56>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Integrator ICs/Internal IC'
 * '<S57>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/N Copy/Disabled wSignal Specification'
 * '<S58>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/N Gain/Disabled'
 * '<S59>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/P Copy/Disabled'
 * '<S60>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S61>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Reset Signal/Disabled'
 * '<S62>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Saturation/Enabled'
 * '<S63>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Saturation Fdbk/Disabled'
 * '<S64>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Sum/Sum_PI'
 * '<S65>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Sum Fdbk/Disabled'
 * '<S66>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Tracking Mode/Disabled'
 * '<S67>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S68>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Tsamp - Integral/Passthrough'
 * '<S69>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/Tsamp - Ngain/Passthrough'
 * '<S70>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/postSat Signal/Forward_Path'
 * '<S71>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Control Algorithm/Discrete PID Controller1/preSat Signal/Forward_Path'
 * '<S72>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Kinematic Algorithm/1st trailer local velocity'
 * '<S73>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Kinematic Algorithm/1st trailer yew rate'
 * '<S74>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Kinematic Algorithm/2nd Trailer yaw rate'
 * '<S75>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Kinematic Algorithm/Steer angle at steer axle'
 * '<S76>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Kinematic Algorithm/Tractor local velocity'
 * '<S77>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Control execution/Kinematic Algorithm/Tractor yaw rate'
 * '<S78>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Inputs'
 * '<S79>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Outputs'
 * '<S80>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Voting'
 * '<S81>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Inputs/Quadrature Encoder Get'
 * '<S82>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Inputs/Trailer1 Angle'
 * '<S83>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Inputs/Trailer2 Angle'
 * '<S84>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Inputs/Quadrature Encoder Get/Detect Increase'
 * '<S85>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Outputs/Digital Output'
 * '<S86>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Outputs/Digital Output1'
 * '<S87>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Outputs/Digital Output2'
 * '<S88>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Outputs/PWM Duty Cycle'
 * '<S89>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Outputs/PWM Init'
 * '<S90>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Voting/S-R Flip-Flop'
 * '<S91>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Voting/Triggered Subsystem'
 * '<S92>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Voting/Triggered Subsystem1'
 * '<S93>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Voting/Triggered Subsystem2'
 * '<S94>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/IO execution/Voting/Triggered Subsystem3'
 * '<S95>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Initialize Clock Schedule/Schedule Compare Event'
 * '<S96>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Local Time generation/Enabled Subsystem'
 * '<S97>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Local Time generation/Get Last Event Counter'
 * '<S98>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Local Time generation/Schedule Compare Event1'
 * '<S99>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_RX'
 * '<S100>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_TX'
 * '<S101>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SSTM1_RX'
 * '<S102>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SSTM1_TX'
 * '<S103>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX'
 * '<S104>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_TX'
 * '<S105>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX'
 * '<S106>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX'
 * '<S107>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX'
 * '<S108>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX'
 * '<S109>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX'
 * '<S110>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX'
 * '<S111>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX'
 * '<S112>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX'
 * '<S113>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX'
 * '<S114>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX'
 * '<S115>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_RX/CAN receive1'
 * '<S116>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_RX/CAN receive1/Enabled Subsystem'
 * '<S117>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_TX/CAN send1'
 * '<S118>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SSTM1_RX/CAN receive1'
 * '<S119>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SSTM1_RX/CAN receive1/Enabled Subsystem'
 * '<S120>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SSTM1_TX/CAN send1'
 * '<S121>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX/CAN receive1'
 * '<S122>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX/Subsystem'
 * '<S123>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX/CAN receive1/Enabled Subsystem'
 * '<S124>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_TX/CAN send1'
 * '<S125>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/2bytes2uint1'
 * '<S126>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/2bytes2uint16'
 * '<S127>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/CAN receive1'
 * '<S128>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem'
 * '<S129>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/2bytes2uint1/Bit Shift'
 * '<S130>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/2bytes2uint1/Bit Shift/bit_shift'
 * '<S131>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/2bytes2uint16/Bit Shift'
 * '<S132>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/2bytes2uint16/Bit Shift/bit_shift'
 * '<S133>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/CAN receive1/Enabled Subsystem'
 * '<S134>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift'
 * '<S135>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift1'
 * '<S136>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift2'
 * '<S137>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift3'
 * '<S138>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift4'
 * '<S139>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift5'
 * '<S140>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift6'
 * '<S141>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift7'
 * '<S142>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift/bit_shift'
 * '<S143>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift1/bit_shift'
 * '<S144>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift2/bit_shift'
 * '<S145>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift3/bit_shift'
 * '<S146>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift4/bit_shift'
 * '<S147>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift5/bit_shift'
 * '<S148>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift6/bit_shift'
 * '<S149>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/Subsystem/Bit Shift7/bit_shift'
 * '<S150>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/CAN send1'
 * '<S151>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack'
 * '<S152>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint1'
 * '<S153>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint8'
 * '<S154>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift'
 * '<S155>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift1'
 * '<S156>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift2'
 * '<S157>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift3'
 * '<S158>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift4'
 * '<S159>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift5'
 * '<S160>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift6'
 * '<S161>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift/bit_shift'
 * '<S162>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift1/bit_shift'
 * '<S163>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift2/bit_shift'
 * '<S164>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift3/bit_shift'
 * '<S165>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift4/bit_shift'
 * '<S166>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift5/bit_shift'
 * '<S167>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/bitpack/Bit Shift6/bit_shift'
 * '<S168>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint1/Bit Shift'
 * '<S169>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint1/Bit Shift/bit_shift'
 * '<S170>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint8/Bit Shift'
 * '<S171>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint8/Bit Shift/bit_shift'
 * '<S172>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/CAN send1'
 * '<S173>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack'
 * '<S174>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint1'
 * '<S175>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint8'
 * '<S176>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift'
 * '<S177>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift1'
 * '<S178>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift2'
 * '<S179>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift3'
 * '<S180>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift4'
 * '<S181>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift5'
 * '<S182>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift6'
 * '<S183>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift/bit_shift'
 * '<S184>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift1/bit_shift'
 * '<S185>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift2/bit_shift'
 * '<S186>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift3/bit_shift'
 * '<S187>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift4/bit_shift'
 * '<S188>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift5/bit_shift'
 * '<S189>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/bitpack/Bit Shift6/bit_shift'
 * '<S190>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint1/Bit Shift'
 * '<S191>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint1/Bit Shift/bit_shift'
 * '<S192>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint8/Bit Shift'
 * '<S193>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint8/Bit Shift/bit_shift'
 * '<S194>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/2bytes2uint1'
 * '<S195>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/2bytes2uint16'
 * '<S196>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/CAN receive1'
 * '<S197>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem'
 * '<S198>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/2bytes2uint1/Bit Shift'
 * '<S199>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/2bytes2uint1/Bit Shift/bit_shift'
 * '<S200>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/2bytes2uint16/Bit Shift'
 * '<S201>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/2bytes2uint16/Bit Shift/bit_shift'
 * '<S202>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/CAN receive1/Enabled Subsystem'
 * '<S203>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift'
 * '<S204>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift1'
 * '<S205>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift2'
 * '<S206>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift3'
 * '<S207>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift4'
 * '<S208>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift5'
 * '<S209>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift6'
 * '<S210>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift7'
 * '<S211>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift/bit_shift'
 * '<S212>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift1/bit_shift'
 * '<S213>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift2/bit_shift'
 * '<S214>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift3/bit_shift'
 * '<S215>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift4/bit_shift'
 * '<S216>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift5/bit_shift'
 * '<S217>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift6/bit_shift'
 * '<S218>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/Subsystem/Bit Shift7/bit_shift'
 * '<S219>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/CAN send1'
 * '<S220>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack'
 * '<S221>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint1'
 * '<S222>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint8'
 * '<S223>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift'
 * '<S224>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift1'
 * '<S225>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift2'
 * '<S226>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift3'
 * '<S227>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift4'
 * '<S228>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift5'
 * '<S229>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift6'
 * '<S230>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift/bit_shift'
 * '<S231>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift1/bit_shift'
 * '<S232>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift2/bit_shift'
 * '<S233>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift3/bit_shift'
 * '<S234>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift4/bit_shift'
 * '<S235>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift5/bit_shift'
 * '<S236>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/bitpack/Bit Shift6/bit_shift'
 * '<S237>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint1/Bit Shift'
 * '<S238>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint1/Bit Shift/bit_shift'
 * '<S239>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint8/Bit Shift'
 * '<S240>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint8/Bit Shift/bit_shift'
 * '<S241>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/2bytes2uint1'
 * '<S242>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/2bytes2uint16'
 * '<S243>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/CAN receive1'
 * '<S244>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem'
 * '<S245>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/2bytes2uint1/Bit Shift'
 * '<S246>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/2bytes2uint1/Bit Shift/bit_shift'
 * '<S247>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/2bytes2uint16/Bit Shift'
 * '<S248>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/2bytes2uint16/Bit Shift/bit_shift'
 * '<S249>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/CAN receive1/Enabled Subsystem'
 * '<S250>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift'
 * '<S251>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift1'
 * '<S252>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift2'
 * '<S253>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift3'
 * '<S254>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift4'
 * '<S255>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift5'
 * '<S256>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift6'
 * '<S257>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift7'
 * '<S258>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift/bit_shift'
 * '<S259>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift1/bit_shift'
 * '<S260>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift2/bit_shift'
 * '<S261>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift3/bit_shift'
 * '<S262>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift4/bit_shift'
 * '<S263>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift5/bit_shift'
 * '<S264>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift6/bit_shift'
 * '<S265>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/Subsystem/Bit Shift7/bit_shift'
 * '<S266>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/2bytes2uint1'
 * '<S267>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/2bytes2uint16'
 * '<S268>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/CAN receive1'
 * '<S269>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem'
 * '<S270>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/2bytes2uint1/Bit Shift'
 * '<S271>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/2bytes2uint1/Bit Shift/bit_shift'
 * '<S272>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/2bytes2uint16/Bit Shift'
 * '<S273>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/2bytes2uint16/Bit Shift/bit_shift'
 * '<S274>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/CAN receive1/Enabled Subsystem'
 * '<S275>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift'
 * '<S276>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift1'
 * '<S277>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift2'
 * '<S278>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift3'
 * '<S279>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift4'
 * '<S280>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift5'
 * '<S281>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift6'
 * '<S282>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift7'
 * '<S283>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift/bit_shift'
 * '<S284>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift1/bit_shift'
 * '<S285>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift2/bit_shift'
 * '<S286>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift3/bit_shift'
 * '<S287>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift4/bit_shift'
 * '<S288>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift5/bit_shift'
 * '<S289>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift6/bit_shift'
 * '<S290>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/Subsystem/Bit Shift7/bit_shift'
 * '<S291>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/CAN send1'
 * '<S292>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack'
 * '<S293>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint1'
 * '<S294>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint8'
 * '<S295>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift'
 * '<S296>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift1'
 * '<S297>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift2'
 * '<S298>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift3'
 * '<S299>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift4'
 * '<S300>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift5'
 * '<S301>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift6'
 * '<S302>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift/bit_shift'
 * '<S303>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift1/bit_shift'
 * '<S304>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift2/bit_shift'
 * '<S305>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift3/bit_shift'
 * '<S306>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift4/bit_shift'
 * '<S307>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift5/bit_shift'
 * '<S308>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/bitpack/Bit Shift6/bit_shift'
 * '<S309>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint1/Bit Shift'
 * '<S310>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint1/Bit Shift/bit_shift'
 * '<S311>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint8/Bit Shift'
 * '<S312>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint8/Bit Shift/bit_shift'
 * '<S313>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/2bytes2uint1'
 * '<S314>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/2bytes2uint16'
 * '<S315>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/CAN receive1'
 * '<S316>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem'
 * '<S317>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/2bytes2uint1/Bit Shift'
 * '<S318>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/2bytes2uint1/Bit Shift/bit_shift'
 * '<S319>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/2bytes2uint16/Bit Shift'
 * '<S320>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/2bytes2uint16/Bit Shift/bit_shift'
 * '<S321>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/CAN receive1/Enabled Subsystem'
 * '<S322>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift'
 * '<S323>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift1'
 * '<S324>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift2'
 * '<S325>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift3'
 * '<S326>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift4'
 * '<S327>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift5'
 * '<S328>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift6'
 * '<S329>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift7'
 * '<S330>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift/bit_shift'
 * '<S331>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift1/bit_shift'
 * '<S332>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift2/bit_shift'
 * '<S333>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift3/bit_shift'
 * '<S334>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift4/bit_shift'
 * '<S335>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift5/bit_shift'
 * '<S336>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift6/bit_shift'
 * '<S337>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/Subsystem/Bit Shift7/bit_shift'
 * '<S338>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/CAN send1'
 * '<S339>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack'
 * '<S340>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint1'
 * '<S341>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint2'
 * '<S342>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift'
 * '<S343>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift1'
 * '<S344>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift2'
 * '<S345>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift3'
 * '<S346>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift4'
 * '<S347>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift5'
 * '<S348>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift6'
 * '<S349>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift/bit_shift'
 * '<S350>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift1/bit_shift'
 * '<S351>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift2/bit_shift'
 * '<S352>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift3/bit_shift'
 * '<S353>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift4/bit_shift'
 * '<S354>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift5/bit_shift'
 * '<S355>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/bitpack/Bit Shift6/bit_shift'
 * '<S356>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint1/Bit Shift'
 * '<S357>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint1/Bit Shift/bit_shift'
 * '<S358>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint2/Bit Shift'
 * '<S359>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint2/Bit Shift/bit_shift'
 * '<S360>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem'
 * '<S361>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem2'
 * '<S362>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem2/CAN receive1'
 * '<S363>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem2/Subsystem1'
 * '<S364>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem2/CAN receive1/Enabled Subsystem'
 * '<S365>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get CPU load'
 * '<S366>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get free Heap'
 * '<S367>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get free Stack'
 */
#endif                        /* RTW_HEADER_HANcoder_E407_TTA_CombineModel_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
