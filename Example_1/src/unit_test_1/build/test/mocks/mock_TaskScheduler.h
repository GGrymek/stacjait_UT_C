/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_TASKSCHEDULER_H
#define _MOCK_TASKSCHEDULER_H

#include "unity.h"
#include "TaskScheduler.h"

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

void mock_TaskScheduler_Init(void);
void mock_TaskScheduler_Destroy(void);
void mock_TaskScheduler_Verify(void);




#define TaskScheduler_Init_Ignore() TaskScheduler_Init_CMockIgnore()
void TaskScheduler_Init_CMockIgnore(void);
#define TaskScheduler_Init_StopIgnore() TaskScheduler_Init_CMockStopIgnore()
void TaskScheduler_Init_CMockStopIgnore(void);
#define TaskScheduler_Init_Expect() TaskScheduler_Init_CMockExpect(__LINE__)
void TaskScheduler_Init_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_TaskScheduler_Init_CALLBACK)(int cmock_num_calls);
void TaskScheduler_Init_AddCallback(CMOCK_TaskScheduler_Init_CALLBACK Callback);
void TaskScheduler_Init_Stub(CMOCK_TaskScheduler_Init_CALLBACK Callback);
#define TaskScheduler_Init_StubWithCallback TaskScheduler_Init_Stub
#define TaskScheduler_Update_Ignore() TaskScheduler_Update_CMockIgnore()
void TaskScheduler_Update_CMockIgnore(void);
#define TaskScheduler_Update_StopIgnore() TaskScheduler_Update_CMockStopIgnore()
void TaskScheduler_Update_CMockStopIgnore(void);
#define TaskScheduler_Update_Expect(time) TaskScheduler_Update_CMockExpect(__LINE__, time)
void TaskScheduler_Update_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32 time);
typedef void (* CMOCK_TaskScheduler_Update_CALLBACK)(uint32 time, int cmock_num_calls);
void TaskScheduler_Update_AddCallback(CMOCK_TaskScheduler_Update_CALLBACK Callback);
void TaskScheduler_Update_Stub(CMOCK_TaskScheduler_Update_CALLBACK Callback);
#define TaskScheduler_Update_StubWithCallback TaskScheduler_Update_Stub
#define TaskScheduler_DoUsart_IgnoreAndReturn(cmock_retval) TaskScheduler_DoUsart_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void TaskScheduler_DoUsart_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return);
#define TaskScheduler_DoUsart_StopIgnore() TaskScheduler_DoUsart_CMockStopIgnore()
void TaskScheduler_DoUsart_CMockStopIgnore(void);
#define TaskScheduler_DoUsart_ExpectAndReturn(cmock_retval) TaskScheduler_DoUsart_CMockExpectAndReturn(__LINE__, cmock_retval)
void TaskScheduler_DoUsart_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return);
typedef bool (* CMOCK_TaskScheduler_DoUsart_CALLBACK)(int cmock_num_calls);
void TaskScheduler_DoUsart_AddCallback(CMOCK_TaskScheduler_DoUsart_CALLBACK Callback);
void TaskScheduler_DoUsart_Stub(CMOCK_TaskScheduler_DoUsart_CALLBACK Callback);
#define TaskScheduler_DoUsart_StubWithCallback TaskScheduler_DoUsart_Stub
#define TaskScheduler_DoAdc_IgnoreAndReturn(cmock_retval) TaskScheduler_DoAdc_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void TaskScheduler_DoAdc_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return);
#define TaskScheduler_DoAdc_StopIgnore() TaskScheduler_DoAdc_CMockStopIgnore()
void TaskScheduler_DoAdc_CMockStopIgnore(void);
#define TaskScheduler_DoAdc_ExpectAndReturn(cmock_retval) TaskScheduler_DoAdc_CMockExpectAndReturn(__LINE__, cmock_retval)
void TaskScheduler_DoAdc_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return);
typedef bool (* CMOCK_TaskScheduler_DoAdc_CALLBACK)(int cmock_num_calls);
void TaskScheduler_DoAdc_AddCallback(CMOCK_TaskScheduler_DoAdc_CALLBACK Callback);
void TaskScheduler_DoAdc_Stub(CMOCK_TaskScheduler_DoAdc_CALLBACK Callback);
#define TaskScheduler_DoAdc_StubWithCallback TaskScheduler_DoAdc_Stub

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif
