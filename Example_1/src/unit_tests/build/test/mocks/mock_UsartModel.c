/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "mock_UsartModel.h"

static const char* CMockString_UsartModel_GetBaudRateRegisterSetting = "UsartModel_GetBaudRateRegisterSetting";
static const char* CMockString_UsartModel_GetFormattedTemperature = "UsartModel_GetFormattedTemperature";
static const char* CMockString_UsartModel_GetWakeupMessage = "UsartModel_GetWakeupMessage";

typedef struct _CMOCK_UsartModel_GetBaudRateRegisterSetting_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  uint8 ReturnVal;

} CMOCK_UsartModel_GetBaudRateRegisterSetting_CALL_INSTANCE;

typedef struct _CMOCK_UsartModel_GetFormattedTemperature_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char* ReturnVal;

} CMOCK_UsartModel_GetFormattedTemperature_CALL_INSTANCE;

typedef struct _CMOCK_UsartModel_GetWakeupMessage_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char* ReturnVal;

} CMOCK_UsartModel_GetWakeupMessage_CALL_INSTANCE;

static struct mock_UsartModelInstance
{
  char UsartModel_GetBaudRateRegisterSetting_IgnoreBool;
  uint8 UsartModel_GetBaudRateRegisterSetting_FinalReturn;
  char UsartModel_GetBaudRateRegisterSetting_CallbackBool;
  CMOCK_UsartModel_GetBaudRateRegisterSetting_CALLBACK UsartModel_GetBaudRateRegisterSetting_CallbackFunctionPointer;
  int UsartModel_GetBaudRateRegisterSetting_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE UsartModel_GetBaudRateRegisterSetting_CallInstance;
  char UsartModel_GetFormattedTemperature_IgnoreBool;
  char* UsartModel_GetFormattedTemperature_FinalReturn;
  char UsartModel_GetFormattedTemperature_CallbackBool;
  CMOCK_UsartModel_GetFormattedTemperature_CALLBACK UsartModel_GetFormattedTemperature_CallbackFunctionPointer;
  int UsartModel_GetFormattedTemperature_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE UsartModel_GetFormattedTemperature_CallInstance;
  char UsartModel_GetWakeupMessage_IgnoreBool;
  char* UsartModel_GetWakeupMessage_FinalReturn;
  char UsartModel_GetWakeupMessage_CallbackBool;
  CMOCK_UsartModel_GetWakeupMessage_CALLBACK UsartModel_GetWakeupMessage_CallbackFunctionPointer;
  int UsartModel_GetWakeupMessage_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE UsartModel_GetWakeupMessage_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void mock_UsartModel_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_MEM_INDEX_TYPE call_instance;
  call_instance = Mock.UsartModel_GetBaudRateRegisterSetting_CallInstance;
  if (Mock.UsartModel_GetBaudRateRegisterSetting_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_UsartModel_GetBaudRateRegisterSetting);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.UsartModel_GetBaudRateRegisterSetting_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.UsartModel_GetFormattedTemperature_CallInstance;
  if (Mock.UsartModel_GetFormattedTemperature_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_UsartModel_GetFormattedTemperature);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.UsartModel_GetFormattedTemperature_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.UsartModel_GetWakeupMessage_CallInstance;
  if (Mock.UsartModel_GetWakeupMessage_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_UsartModel_GetWakeupMessage);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.UsartModel_GetWakeupMessage_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
}

void mock_UsartModel_Init(void)
{
  mock_UsartModel_Destroy();
}

void mock_UsartModel_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
}

uint8 UsartModel_GetBaudRateRegisterSetting(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_UsartModel_GetBaudRateRegisterSetting_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_UsartModel_GetBaudRateRegisterSetting);
  cmock_call_instance = (CMOCK_UsartModel_GetBaudRateRegisterSetting_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.UsartModel_GetBaudRateRegisterSetting_CallInstance);
  Mock.UsartModel_GetBaudRateRegisterSetting_CallInstance = CMock_Guts_MemNext(Mock.UsartModel_GetBaudRateRegisterSetting_CallInstance);
  if (Mock.UsartModel_GetBaudRateRegisterSetting_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.UsartModel_GetBaudRateRegisterSetting_FinalReturn;
    Mock.UsartModel_GetBaudRateRegisterSetting_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (!Mock.UsartModel_GetBaudRateRegisterSetting_CallbackBool &&
      Mock.UsartModel_GetBaudRateRegisterSetting_CallbackFunctionPointer != NULL)
  {
    uint8 cmock_cb_ret = Mock.UsartModel_GetBaudRateRegisterSetting_CallbackFunctionPointer(Mock.UsartModel_GetBaudRateRegisterSetting_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return cmock_cb_ret;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (Mock.UsartModel_GetBaudRateRegisterSetting_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.UsartModel_GetBaudRateRegisterSetting_CallbackFunctionPointer(Mock.UsartModel_GetBaudRateRegisterSetting_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void UsartModel_GetBaudRateRegisterSetting_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint8 cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_UsartModel_GetBaudRateRegisterSetting_CALL_INSTANCE));
  CMOCK_UsartModel_GetBaudRateRegisterSetting_CALL_INSTANCE* cmock_call_instance = (CMOCK_UsartModel_GetBaudRateRegisterSetting_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.UsartModel_GetBaudRateRegisterSetting_CallInstance = CMock_Guts_MemChain(Mock.UsartModel_GetBaudRateRegisterSetting_CallInstance, cmock_guts_index);
  Mock.UsartModel_GetBaudRateRegisterSetting_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.UsartModel_GetBaudRateRegisterSetting_IgnoreBool = (char)1;
}

void UsartModel_GetBaudRateRegisterSetting_CMockStopIgnore(void)
{
  if(Mock.UsartModel_GetBaudRateRegisterSetting_IgnoreBool)
    Mock.UsartModel_GetBaudRateRegisterSetting_CallInstance = CMock_Guts_MemNext(Mock.UsartModel_GetBaudRateRegisterSetting_CallInstance);
  Mock.UsartModel_GetBaudRateRegisterSetting_IgnoreBool = (char)0;
}

void UsartModel_GetBaudRateRegisterSetting_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint8 cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_UsartModel_GetBaudRateRegisterSetting_CALL_INSTANCE));
  CMOCK_UsartModel_GetBaudRateRegisterSetting_CALL_INSTANCE* cmock_call_instance = (CMOCK_UsartModel_GetBaudRateRegisterSetting_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.UsartModel_GetBaudRateRegisterSetting_CallInstance = CMock_Guts_MemChain(Mock.UsartModel_GetBaudRateRegisterSetting_CallInstance, cmock_guts_index);
  Mock.UsartModel_GetBaudRateRegisterSetting_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void UsartModel_GetBaudRateRegisterSetting_AddCallback(CMOCK_UsartModel_GetBaudRateRegisterSetting_CALLBACK Callback)
{
  Mock.UsartModel_GetBaudRateRegisterSetting_IgnoreBool = (char)0;
  Mock.UsartModel_GetBaudRateRegisterSetting_CallbackBool = (char)1;
  Mock.UsartModel_GetBaudRateRegisterSetting_CallbackFunctionPointer = Callback;
}

void UsartModel_GetBaudRateRegisterSetting_Stub(CMOCK_UsartModel_GetBaudRateRegisterSetting_CALLBACK Callback)
{
  Mock.UsartModel_GetBaudRateRegisterSetting_IgnoreBool = (char)0;
  Mock.UsartModel_GetBaudRateRegisterSetting_CallbackBool = (char)0;
  Mock.UsartModel_GetBaudRateRegisterSetting_CallbackFunctionPointer = Callback;
}

char* UsartModel_GetFormattedTemperature(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_UsartModel_GetFormattedTemperature_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_UsartModel_GetFormattedTemperature);
  cmock_call_instance = (CMOCK_UsartModel_GetFormattedTemperature_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.UsartModel_GetFormattedTemperature_CallInstance);
  Mock.UsartModel_GetFormattedTemperature_CallInstance = CMock_Guts_MemNext(Mock.UsartModel_GetFormattedTemperature_CallInstance);
  if (Mock.UsartModel_GetFormattedTemperature_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.UsartModel_GetFormattedTemperature_FinalReturn;
    Mock.UsartModel_GetFormattedTemperature_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (!Mock.UsartModel_GetFormattedTemperature_CallbackBool &&
      Mock.UsartModel_GetFormattedTemperature_CallbackFunctionPointer != NULL)
  {
    char* cmock_cb_ret = Mock.UsartModel_GetFormattedTemperature_CallbackFunctionPointer(Mock.UsartModel_GetFormattedTemperature_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return cmock_cb_ret;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (Mock.UsartModel_GetFormattedTemperature_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.UsartModel_GetFormattedTemperature_CallbackFunctionPointer(Mock.UsartModel_GetFormattedTemperature_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void UsartModel_GetFormattedTemperature_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, char* cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_UsartModel_GetFormattedTemperature_CALL_INSTANCE));
  CMOCK_UsartModel_GetFormattedTemperature_CALL_INSTANCE* cmock_call_instance = (CMOCK_UsartModel_GetFormattedTemperature_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.UsartModel_GetFormattedTemperature_CallInstance = CMock_Guts_MemChain(Mock.UsartModel_GetFormattedTemperature_CallInstance, cmock_guts_index);
  Mock.UsartModel_GetFormattedTemperature_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.UsartModel_GetFormattedTemperature_IgnoreBool = (char)1;
}

void UsartModel_GetFormattedTemperature_CMockStopIgnore(void)
{
  if(Mock.UsartModel_GetFormattedTemperature_IgnoreBool)
    Mock.UsartModel_GetFormattedTemperature_CallInstance = CMock_Guts_MemNext(Mock.UsartModel_GetFormattedTemperature_CallInstance);
  Mock.UsartModel_GetFormattedTemperature_IgnoreBool = (char)0;
}

void UsartModel_GetFormattedTemperature_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, char* cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_UsartModel_GetFormattedTemperature_CALL_INSTANCE));
  CMOCK_UsartModel_GetFormattedTemperature_CALL_INSTANCE* cmock_call_instance = (CMOCK_UsartModel_GetFormattedTemperature_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.UsartModel_GetFormattedTemperature_CallInstance = CMock_Guts_MemChain(Mock.UsartModel_GetFormattedTemperature_CallInstance, cmock_guts_index);
  Mock.UsartModel_GetFormattedTemperature_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void UsartModel_GetFormattedTemperature_AddCallback(CMOCK_UsartModel_GetFormattedTemperature_CALLBACK Callback)
{
  Mock.UsartModel_GetFormattedTemperature_IgnoreBool = (char)0;
  Mock.UsartModel_GetFormattedTemperature_CallbackBool = (char)1;
  Mock.UsartModel_GetFormattedTemperature_CallbackFunctionPointer = Callback;
}

void UsartModel_GetFormattedTemperature_Stub(CMOCK_UsartModel_GetFormattedTemperature_CALLBACK Callback)
{
  Mock.UsartModel_GetFormattedTemperature_IgnoreBool = (char)0;
  Mock.UsartModel_GetFormattedTemperature_CallbackBool = (char)0;
  Mock.UsartModel_GetFormattedTemperature_CallbackFunctionPointer = Callback;
}

char* UsartModel_GetWakeupMessage(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_UsartModel_GetWakeupMessage_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_UsartModel_GetWakeupMessage);
  cmock_call_instance = (CMOCK_UsartModel_GetWakeupMessage_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.UsartModel_GetWakeupMessage_CallInstance);
  Mock.UsartModel_GetWakeupMessage_CallInstance = CMock_Guts_MemNext(Mock.UsartModel_GetWakeupMessage_CallInstance);
  if (Mock.UsartModel_GetWakeupMessage_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.UsartModel_GetWakeupMessage_FinalReturn;
    Mock.UsartModel_GetWakeupMessage_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (!Mock.UsartModel_GetWakeupMessage_CallbackBool &&
      Mock.UsartModel_GetWakeupMessage_CallbackFunctionPointer != NULL)
  {
    char* cmock_cb_ret = Mock.UsartModel_GetWakeupMessage_CallbackFunctionPointer(Mock.UsartModel_GetWakeupMessage_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return cmock_cb_ret;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (Mock.UsartModel_GetWakeupMessage_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.UsartModel_GetWakeupMessage_CallbackFunctionPointer(Mock.UsartModel_GetWakeupMessage_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void UsartModel_GetWakeupMessage_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, char* cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_UsartModel_GetWakeupMessage_CALL_INSTANCE));
  CMOCK_UsartModel_GetWakeupMessage_CALL_INSTANCE* cmock_call_instance = (CMOCK_UsartModel_GetWakeupMessage_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.UsartModel_GetWakeupMessage_CallInstance = CMock_Guts_MemChain(Mock.UsartModel_GetWakeupMessage_CallInstance, cmock_guts_index);
  Mock.UsartModel_GetWakeupMessage_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.UsartModel_GetWakeupMessage_IgnoreBool = (char)1;
}

void UsartModel_GetWakeupMessage_CMockStopIgnore(void)
{
  if(Mock.UsartModel_GetWakeupMessage_IgnoreBool)
    Mock.UsartModel_GetWakeupMessage_CallInstance = CMock_Guts_MemNext(Mock.UsartModel_GetWakeupMessage_CallInstance);
  Mock.UsartModel_GetWakeupMessage_IgnoreBool = (char)0;
}

void UsartModel_GetWakeupMessage_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, char* cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_UsartModel_GetWakeupMessage_CALL_INSTANCE));
  CMOCK_UsartModel_GetWakeupMessage_CALL_INSTANCE* cmock_call_instance = (CMOCK_UsartModel_GetWakeupMessage_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.UsartModel_GetWakeupMessage_CallInstance = CMock_Guts_MemChain(Mock.UsartModel_GetWakeupMessage_CallInstance, cmock_guts_index);
  Mock.UsartModel_GetWakeupMessage_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void UsartModel_GetWakeupMessage_AddCallback(CMOCK_UsartModel_GetWakeupMessage_CALLBACK Callback)
{
  Mock.UsartModel_GetWakeupMessage_IgnoreBool = (char)0;
  Mock.UsartModel_GetWakeupMessage_CallbackBool = (char)1;
  Mock.UsartModel_GetWakeupMessage_CallbackFunctionPointer = Callback;
}

void UsartModel_GetWakeupMessage_Stub(CMOCK_UsartModel_GetWakeupMessage_CALLBACK Callback)
{
  Mock.UsartModel_GetWakeupMessage_IgnoreBool = (char)0;
  Mock.UsartModel_GetWakeupMessage_CallbackBool = (char)0;
  Mock.UsartModel_GetWakeupMessage_CallbackFunctionPointer = Callback;
}
