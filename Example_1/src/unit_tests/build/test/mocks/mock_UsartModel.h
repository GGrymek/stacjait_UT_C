/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_USARTMODEL_H
#define _MOCK_USARTMODEL_H

#include "unity.h"
#include "UsartModel.h"

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

void mock_UsartModel_Init(void);
void mock_UsartModel_Destroy(void);
void mock_UsartModel_Verify(void);




#define UsartModel_GetBaudRateRegisterSetting_IgnoreAndReturn(cmock_retval) UsartModel_GetBaudRateRegisterSetting_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void UsartModel_GetBaudRateRegisterSetting_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint8 cmock_to_return);
#define UsartModel_GetBaudRateRegisterSetting_StopIgnore() UsartModel_GetBaudRateRegisterSetting_CMockStopIgnore()
void UsartModel_GetBaudRateRegisterSetting_CMockStopIgnore(void);
#define UsartModel_GetBaudRateRegisterSetting_ExpectAndReturn(cmock_retval) UsartModel_GetBaudRateRegisterSetting_CMockExpectAndReturn(__LINE__, cmock_retval)
void UsartModel_GetBaudRateRegisterSetting_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint8 cmock_to_return);
typedef uint8 (* CMOCK_UsartModel_GetBaudRateRegisterSetting_CALLBACK)(int cmock_num_calls);
void UsartModel_GetBaudRateRegisterSetting_AddCallback(CMOCK_UsartModel_GetBaudRateRegisterSetting_CALLBACK Callback);
void UsartModel_GetBaudRateRegisterSetting_Stub(CMOCK_UsartModel_GetBaudRateRegisterSetting_CALLBACK Callback);
#define UsartModel_GetBaudRateRegisterSetting_StubWithCallback UsartModel_GetBaudRateRegisterSetting_Stub
#define UsartModel_GetFormattedTemperature_IgnoreAndReturn(cmock_retval) UsartModel_GetFormattedTemperature_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void UsartModel_GetFormattedTemperature_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, char* cmock_to_return);
#define UsartModel_GetFormattedTemperature_StopIgnore() UsartModel_GetFormattedTemperature_CMockStopIgnore()
void UsartModel_GetFormattedTemperature_CMockStopIgnore(void);
#define UsartModel_GetFormattedTemperature_ExpectAndReturn(cmock_retval) UsartModel_GetFormattedTemperature_CMockExpectAndReturn(__LINE__, cmock_retval)
void UsartModel_GetFormattedTemperature_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, char* cmock_to_return);
typedef char* (* CMOCK_UsartModel_GetFormattedTemperature_CALLBACK)(int cmock_num_calls);
void UsartModel_GetFormattedTemperature_AddCallback(CMOCK_UsartModel_GetFormattedTemperature_CALLBACK Callback);
void UsartModel_GetFormattedTemperature_Stub(CMOCK_UsartModel_GetFormattedTemperature_CALLBACK Callback);
#define UsartModel_GetFormattedTemperature_StubWithCallback UsartModel_GetFormattedTemperature_Stub
#define UsartModel_GetWakeupMessage_IgnoreAndReturn(cmock_retval) UsartModel_GetWakeupMessage_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void UsartModel_GetWakeupMessage_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, char* cmock_to_return);
#define UsartModel_GetWakeupMessage_StopIgnore() UsartModel_GetWakeupMessage_CMockStopIgnore()
void UsartModel_GetWakeupMessage_CMockStopIgnore(void);
#define UsartModel_GetWakeupMessage_ExpectAndReturn(cmock_retval) UsartModel_GetWakeupMessage_CMockExpectAndReturn(__LINE__, cmock_retval)
void UsartModel_GetWakeupMessage_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, char* cmock_to_return);
typedef char* (* CMOCK_UsartModel_GetWakeupMessage_CALLBACK)(int cmock_num_calls);
void UsartModel_GetWakeupMessage_AddCallback(CMOCK_UsartModel_GetWakeupMessage_CALLBACK Callback);
void UsartModel_GetWakeupMessage_Stub(CMOCK_UsartModel_GetWakeupMessage_CALLBACK Callback);
#define UsartModel_GetWakeupMessage_StubWithCallback UsartModel_GetWakeupMessage_Stub

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif
