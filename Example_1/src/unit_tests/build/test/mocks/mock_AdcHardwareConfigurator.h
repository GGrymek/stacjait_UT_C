/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_ADCHARDWARECONFIGURATOR_H
#define _MOCK_ADCHARDWARECONFIGURATOR_H

#include "unity.h"
#include "AdcHardwareConfigurator.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic push
#endif
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void mock_AdcHardwareConfigurator_Init(void);
void mock_AdcHardwareConfigurator_Destroy(void);
void mock_AdcHardwareConfigurator_Verify(void);




#define Adc_Reset_Ignore() Adc_Reset_CMockIgnore()
void Adc_Reset_CMockIgnore(void);
#define Adc_Reset_StopIgnore() Adc_Reset_CMockStopIgnore()
void Adc_Reset_CMockStopIgnore(void);
#define Adc_Reset_Expect() Adc_Reset_CMockExpect(__LINE__)
void Adc_Reset_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_Adc_Reset_CALLBACK)(int cmock_num_calls);
void Adc_Reset_AddCallback(CMOCK_Adc_Reset_CALLBACK Callback);
void Adc_Reset_Stub(CMOCK_Adc_Reset_CALLBACK Callback);
#define Adc_Reset_StubWithCallback Adc_Reset_Stub
#define Adc_ConfigureMode_Ignore() Adc_ConfigureMode_CMockIgnore()
void Adc_ConfigureMode_CMockIgnore(void);
#define Adc_ConfigureMode_StopIgnore() Adc_ConfigureMode_CMockStopIgnore()
void Adc_ConfigureMode_CMockStopIgnore(void);
#define Adc_ConfigureMode_Expect() Adc_ConfigureMode_CMockExpect(__LINE__)
void Adc_ConfigureMode_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_Adc_ConfigureMode_CALLBACK)(int cmock_num_calls);
void Adc_ConfigureMode_AddCallback(CMOCK_Adc_ConfigureMode_CALLBACK Callback);
void Adc_ConfigureMode_Stub(CMOCK_Adc_ConfigureMode_CALLBACK Callback);
#define Adc_ConfigureMode_StubWithCallback Adc_ConfigureMode_Stub
#define Adc_EnableTemperatureChannel_Ignore() Adc_EnableTemperatureChannel_CMockIgnore()
void Adc_EnableTemperatureChannel_CMockIgnore(void);
#define Adc_EnableTemperatureChannel_StopIgnore() Adc_EnableTemperatureChannel_CMockStopIgnore()
void Adc_EnableTemperatureChannel_CMockStopIgnore(void);
#define Adc_EnableTemperatureChannel_Expect() Adc_EnableTemperatureChannel_CMockExpect(__LINE__)
void Adc_EnableTemperatureChannel_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_Adc_EnableTemperatureChannel_CALLBACK)(int cmock_num_calls);
void Adc_EnableTemperatureChannel_AddCallback(CMOCK_Adc_EnableTemperatureChannel_CALLBACK Callback);
void Adc_EnableTemperatureChannel_Stub(CMOCK_Adc_EnableTemperatureChannel_CALLBACK Callback);
#define Adc_EnableTemperatureChannel_StubWithCallback Adc_EnableTemperatureChannel_Stub

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif
