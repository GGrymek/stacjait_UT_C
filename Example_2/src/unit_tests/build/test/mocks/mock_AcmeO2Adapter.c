/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "mock_AcmeO2Adapter.h"

static const char* CMockString_AcmeO2Adapter_Cleanup = "AcmeO2Adapter_Cleanup";
static const char* CMockString_AcmeO2Adapter_Create = "AcmeO2Adapter_Create";
static const char* CMockString_AcmeO2Adapter_Destroy = "AcmeO2Adapter_Destroy";
static const char* CMockString_AcmeO2Adapter_Init = "AcmeO2Adapter_Init";
static const char* CMockString_AcmeO2Adapter_gimmeO2Conc = "AcmeO2Adapter_gimmeO2Conc";
static const char* CMockString_AcmeO2Adapter_gimmeO2Flow = "AcmeO2Adapter_gimmeO2Flow";
static const char* CMockString_me = "me";

typedef struct _CMOCK_AcmeO2Adapter_Init_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  AcmeO2Adapter* Expected_me;
  char ReturnThruPtr_me_Used;
  AcmeO2Adapter* ReturnThruPtr_me_Val;
  size_t ReturnThruPtr_me_Size;

} CMOCK_AcmeO2Adapter_Init_CALL_INSTANCE;

typedef struct _CMOCK_AcmeO2Adapter_Cleanup_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  AcmeO2Adapter* Expected_me;
  char ReturnThruPtr_me_Used;
  AcmeO2Adapter* ReturnThruPtr_me_Val;
  size_t ReturnThruPtr_me_Size;

} CMOCK_AcmeO2Adapter_Cleanup_CALL_INSTANCE;

typedef struct _CMOCK_AcmeO2Adapter_Create_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  AcmeO2Adapter* ReturnVal;

} CMOCK_AcmeO2Adapter_Create_CALL_INSTANCE;

typedef struct _CMOCK_AcmeO2Adapter_Destroy_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  AcmeO2Adapter* Expected_me;
  char ReturnThruPtr_me_Used;
  AcmeO2Adapter* ReturnThruPtr_me_Val;
  size_t ReturnThruPtr_me_Size;

} CMOCK_AcmeO2Adapter_Destroy_CALL_INSTANCE;

typedef struct _CMOCK_AcmeO2Adapter_gimmeO2Conc_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int ReturnVal;
  AcmeO2Adapter* Expected_me;
  char ReturnThruPtr_me_Used;
  AcmeO2Adapter* ReturnThruPtr_me_Val;
  size_t ReturnThruPtr_me_Size;

} CMOCK_AcmeO2Adapter_gimmeO2Conc_CALL_INSTANCE;

typedef struct _CMOCK_AcmeO2Adapter_gimmeO2Flow_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int ReturnVal;
  AcmeO2Adapter* Expected_me;
  char ReturnThruPtr_me_Used;
  AcmeO2Adapter* ReturnThruPtr_me_Val;
  size_t ReturnThruPtr_me_Size;

} CMOCK_AcmeO2Adapter_gimmeO2Flow_CALL_INSTANCE;

static struct mock_AcmeO2AdapterInstance
{
  char AcmeO2Adapter_Init_IgnoreBool;
  char AcmeO2Adapter_Init_CallbackBool;
  CMOCK_AcmeO2Adapter_Init_CALLBACK AcmeO2Adapter_Init_CallbackFunctionPointer;
  int AcmeO2Adapter_Init_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE AcmeO2Adapter_Init_CallInstance;
  char AcmeO2Adapter_Cleanup_IgnoreBool;
  char AcmeO2Adapter_Cleanup_CallbackBool;
  CMOCK_AcmeO2Adapter_Cleanup_CALLBACK AcmeO2Adapter_Cleanup_CallbackFunctionPointer;
  int AcmeO2Adapter_Cleanup_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE AcmeO2Adapter_Cleanup_CallInstance;
  char AcmeO2Adapter_Create_IgnoreBool;
  AcmeO2Adapter* AcmeO2Adapter_Create_FinalReturn;
  char AcmeO2Adapter_Create_CallbackBool;
  CMOCK_AcmeO2Adapter_Create_CALLBACK AcmeO2Adapter_Create_CallbackFunctionPointer;
  int AcmeO2Adapter_Create_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE AcmeO2Adapter_Create_CallInstance;
  char AcmeO2Adapter_Destroy_IgnoreBool;
  char AcmeO2Adapter_Destroy_CallbackBool;
  CMOCK_AcmeO2Adapter_Destroy_CALLBACK AcmeO2Adapter_Destroy_CallbackFunctionPointer;
  int AcmeO2Adapter_Destroy_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE AcmeO2Adapter_Destroy_CallInstance;
  char AcmeO2Adapter_gimmeO2Conc_IgnoreBool;
  int AcmeO2Adapter_gimmeO2Conc_FinalReturn;
  char AcmeO2Adapter_gimmeO2Conc_CallbackBool;
  CMOCK_AcmeO2Adapter_gimmeO2Conc_CALLBACK AcmeO2Adapter_gimmeO2Conc_CallbackFunctionPointer;
  int AcmeO2Adapter_gimmeO2Conc_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE AcmeO2Adapter_gimmeO2Conc_CallInstance;
  char AcmeO2Adapter_gimmeO2Flow_IgnoreBool;
  int AcmeO2Adapter_gimmeO2Flow_FinalReturn;
  char AcmeO2Adapter_gimmeO2Flow_CallbackBool;
  CMOCK_AcmeO2Adapter_gimmeO2Flow_CALLBACK AcmeO2Adapter_gimmeO2Flow_CallbackFunctionPointer;
  int AcmeO2Adapter_gimmeO2Flow_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE AcmeO2Adapter_gimmeO2Flow_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void mock_AcmeO2Adapter_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_MEM_INDEX_TYPE call_instance;
  call_instance = Mock.AcmeO2Adapter_Init_CallInstance;
  if (Mock.AcmeO2Adapter_Init_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_AcmeO2Adapter_Init);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.AcmeO2Adapter_Init_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.AcmeO2Adapter_Cleanup_CallInstance;
  if (Mock.AcmeO2Adapter_Cleanup_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_AcmeO2Adapter_Cleanup);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.AcmeO2Adapter_Cleanup_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.AcmeO2Adapter_Create_CallInstance;
  if (Mock.AcmeO2Adapter_Create_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_AcmeO2Adapter_Create);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.AcmeO2Adapter_Create_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.AcmeO2Adapter_Destroy_CallInstance;
  if (Mock.AcmeO2Adapter_Destroy_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_AcmeO2Adapter_Destroy);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.AcmeO2Adapter_Destroy_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.AcmeO2Adapter_gimmeO2Conc_CallInstance;
  if (Mock.AcmeO2Adapter_gimmeO2Conc_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_AcmeO2Adapter_gimmeO2Conc);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.AcmeO2Adapter_gimmeO2Conc_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.AcmeO2Adapter_gimmeO2Flow_CallInstance;
  if (Mock.AcmeO2Adapter_gimmeO2Flow_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_AcmeO2Adapter_gimmeO2Flow);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.AcmeO2Adapter_gimmeO2Flow_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
}

void mock_AcmeO2Adapter_Init(void)
{
  mock_AcmeO2Adapter_Destroy();
}

void mock_AcmeO2Adapter_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
}

void AcmeO2Adapter_Init(AcmeO2Adapter* const me)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_AcmeO2Adapter_Init_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_AcmeO2Adapter_Init);
  cmock_call_instance = (CMOCK_AcmeO2Adapter_Init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.AcmeO2Adapter_Init_CallInstance);
  Mock.AcmeO2Adapter_Init_CallInstance = CMock_Guts_MemNext(Mock.AcmeO2Adapter_Init_CallInstance);
  if (Mock.AcmeO2Adapter_Init_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (!Mock.AcmeO2Adapter_Init_CallbackBool &&
      Mock.AcmeO2Adapter_Init_CallbackFunctionPointer != NULL)
  {
    Mock.AcmeO2Adapter_Init_CallbackFunctionPointer(me, Mock.AcmeO2Adapter_Init_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_SET_DETAILS(CMockString_AcmeO2Adapter_Init,CMockString_me);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_me), (void*)(me), sizeof(AcmeO2Adapter), cmock_line, CMockStringMismatch);
  }
  if (Mock.AcmeO2Adapter_Init_CallbackFunctionPointer != NULL)
  {
    Mock.AcmeO2Adapter_Init_CallbackFunctionPointer(me, Mock.AcmeO2Adapter_Init_CallbackCalls++);
  }
  if (cmock_call_instance->ReturnThruPtr_me_Used)
  {
    UNITY_TEST_ASSERT_NOT_NULL(me, cmock_line, CMockStringPtrIsNULL);
    memcpy((void*)me, (void*)cmock_call_instance->ReturnThruPtr_me_Val,
      cmock_call_instance->ReturnThruPtr_me_Size);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_AcmeO2Adapter_Init(CMOCK_AcmeO2Adapter_Init_CALL_INSTANCE* cmock_call_instance, AcmeO2Adapter* const me);
void CMockExpectParameters_AcmeO2Adapter_Init(CMOCK_AcmeO2Adapter_Init_CALL_INSTANCE* cmock_call_instance, AcmeO2Adapter* const me)
{
  cmock_call_instance->Expected_me = me;
  cmock_call_instance->ReturnThruPtr_me_Used = 0;
}

void AcmeO2Adapter_Init_CMockIgnore(void)
{
  Mock.AcmeO2Adapter_Init_IgnoreBool = (char)1;
}

void AcmeO2Adapter_Init_CMockStopIgnore(void)
{
  Mock.AcmeO2Adapter_Init_IgnoreBool = (char)0;
}

void AcmeO2Adapter_Init_CMockExpect(UNITY_LINE_TYPE cmock_line, AcmeO2Adapter* const me)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_AcmeO2Adapter_Init_CALL_INSTANCE));
  CMOCK_AcmeO2Adapter_Init_CALL_INSTANCE* cmock_call_instance = (CMOCK_AcmeO2Adapter_Init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.AcmeO2Adapter_Init_CallInstance = CMock_Guts_MemChain(Mock.AcmeO2Adapter_Init_CallInstance, cmock_guts_index);
  Mock.AcmeO2Adapter_Init_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_AcmeO2Adapter_Init(cmock_call_instance, me);
}

void AcmeO2Adapter_Init_AddCallback(CMOCK_AcmeO2Adapter_Init_CALLBACK Callback)
{
  Mock.AcmeO2Adapter_Init_IgnoreBool = (char)0;
  Mock.AcmeO2Adapter_Init_CallbackBool = (char)1;
  Mock.AcmeO2Adapter_Init_CallbackFunctionPointer = Callback;
}

void AcmeO2Adapter_Init_Stub(CMOCK_AcmeO2Adapter_Init_CALLBACK Callback)
{
  Mock.AcmeO2Adapter_Init_IgnoreBool = (char)0;
  Mock.AcmeO2Adapter_Init_CallbackBool = (char)0;
  Mock.AcmeO2Adapter_Init_CallbackFunctionPointer = Callback;
}

void AcmeO2Adapter_Init_CMockReturnMemThruPtr_me(UNITY_LINE_TYPE cmock_line, AcmeO2Adapter* me, size_t cmock_size)
{
  CMOCK_AcmeO2Adapter_Init_CALL_INSTANCE* cmock_call_instance = (CMOCK_AcmeO2Adapter_Init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.AcmeO2Adapter_Init_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringPtrPreExp);
  cmock_call_instance->ReturnThruPtr_me_Used = 1;
  cmock_call_instance->ReturnThruPtr_me_Val = me;
  cmock_call_instance->ReturnThruPtr_me_Size = cmock_size;
}

void AcmeO2Adapter_Cleanup(AcmeO2Adapter* const me)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_AcmeO2Adapter_Cleanup_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_AcmeO2Adapter_Cleanup);
  cmock_call_instance = (CMOCK_AcmeO2Adapter_Cleanup_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.AcmeO2Adapter_Cleanup_CallInstance);
  Mock.AcmeO2Adapter_Cleanup_CallInstance = CMock_Guts_MemNext(Mock.AcmeO2Adapter_Cleanup_CallInstance);
  if (Mock.AcmeO2Adapter_Cleanup_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (!Mock.AcmeO2Adapter_Cleanup_CallbackBool &&
      Mock.AcmeO2Adapter_Cleanup_CallbackFunctionPointer != NULL)
  {
    Mock.AcmeO2Adapter_Cleanup_CallbackFunctionPointer(me, Mock.AcmeO2Adapter_Cleanup_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_SET_DETAILS(CMockString_AcmeO2Adapter_Cleanup,CMockString_me);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_me), (void*)(me), sizeof(AcmeO2Adapter), cmock_line, CMockStringMismatch);
  }
  if (Mock.AcmeO2Adapter_Cleanup_CallbackFunctionPointer != NULL)
  {
    Mock.AcmeO2Adapter_Cleanup_CallbackFunctionPointer(me, Mock.AcmeO2Adapter_Cleanup_CallbackCalls++);
  }
  if (cmock_call_instance->ReturnThruPtr_me_Used)
  {
    UNITY_TEST_ASSERT_NOT_NULL(me, cmock_line, CMockStringPtrIsNULL);
    memcpy((void*)me, (void*)cmock_call_instance->ReturnThruPtr_me_Val,
      cmock_call_instance->ReturnThruPtr_me_Size);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_AcmeO2Adapter_Cleanup(CMOCK_AcmeO2Adapter_Cleanup_CALL_INSTANCE* cmock_call_instance, AcmeO2Adapter* const me);
void CMockExpectParameters_AcmeO2Adapter_Cleanup(CMOCK_AcmeO2Adapter_Cleanup_CALL_INSTANCE* cmock_call_instance, AcmeO2Adapter* const me)
{
  cmock_call_instance->Expected_me = me;
  cmock_call_instance->ReturnThruPtr_me_Used = 0;
}

void AcmeO2Adapter_Cleanup_CMockIgnore(void)
{
  Mock.AcmeO2Adapter_Cleanup_IgnoreBool = (char)1;
}

void AcmeO2Adapter_Cleanup_CMockStopIgnore(void)
{
  Mock.AcmeO2Adapter_Cleanup_IgnoreBool = (char)0;
}

void AcmeO2Adapter_Cleanup_CMockExpect(UNITY_LINE_TYPE cmock_line, AcmeO2Adapter* const me)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_AcmeO2Adapter_Cleanup_CALL_INSTANCE));
  CMOCK_AcmeO2Adapter_Cleanup_CALL_INSTANCE* cmock_call_instance = (CMOCK_AcmeO2Adapter_Cleanup_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.AcmeO2Adapter_Cleanup_CallInstance = CMock_Guts_MemChain(Mock.AcmeO2Adapter_Cleanup_CallInstance, cmock_guts_index);
  Mock.AcmeO2Adapter_Cleanup_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_AcmeO2Adapter_Cleanup(cmock_call_instance, me);
}

void AcmeO2Adapter_Cleanup_AddCallback(CMOCK_AcmeO2Adapter_Cleanup_CALLBACK Callback)
{
  Mock.AcmeO2Adapter_Cleanup_IgnoreBool = (char)0;
  Mock.AcmeO2Adapter_Cleanup_CallbackBool = (char)1;
  Mock.AcmeO2Adapter_Cleanup_CallbackFunctionPointer = Callback;
}

void AcmeO2Adapter_Cleanup_Stub(CMOCK_AcmeO2Adapter_Cleanup_CALLBACK Callback)
{
  Mock.AcmeO2Adapter_Cleanup_IgnoreBool = (char)0;
  Mock.AcmeO2Adapter_Cleanup_CallbackBool = (char)0;
  Mock.AcmeO2Adapter_Cleanup_CallbackFunctionPointer = Callback;
}

void AcmeO2Adapter_Cleanup_CMockReturnMemThruPtr_me(UNITY_LINE_TYPE cmock_line, AcmeO2Adapter* me, size_t cmock_size)
{
  CMOCK_AcmeO2Adapter_Cleanup_CALL_INSTANCE* cmock_call_instance = (CMOCK_AcmeO2Adapter_Cleanup_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.AcmeO2Adapter_Cleanup_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringPtrPreExp);
  cmock_call_instance->ReturnThruPtr_me_Used = 1;
  cmock_call_instance->ReturnThruPtr_me_Val = me;
  cmock_call_instance->ReturnThruPtr_me_Size = cmock_size;
}

AcmeO2Adapter* AcmeO2Adapter_Create(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_AcmeO2Adapter_Create_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_AcmeO2Adapter_Create);
  cmock_call_instance = (CMOCK_AcmeO2Adapter_Create_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.AcmeO2Adapter_Create_CallInstance);
  Mock.AcmeO2Adapter_Create_CallInstance = CMock_Guts_MemNext(Mock.AcmeO2Adapter_Create_CallInstance);
  if (Mock.AcmeO2Adapter_Create_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.AcmeO2Adapter_Create_FinalReturn;
    Mock.AcmeO2Adapter_Create_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (!Mock.AcmeO2Adapter_Create_CallbackBool &&
      Mock.AcmeO2Adapter_Create_CallbackFunctionPointer != NULL)
  {
    AcmeO2Adapter* cmock_cb_ret = Mock.AcmeO2Adapter_Create_CallbackFunctionPointer(Mock.AcmeO2Adapter_Create_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return cmock_cb_ret;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (Mock.AcmeO2Adapter_Create_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.AcmeO2Adapter_Create_CallbackFunctionPointer(Mock.AcmeO2Adapter_Create_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void AcmeO2Adapter_Create_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, AcmeO2Adapter* cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_AcmeO2Adapter_Create_CALL_INSTANCE));
  CMOCK_AcmeO2Adapter_Create_CALL_INSTANCE* cmock_call_instance = (CMOCK_AcmeO2Adapter_Create_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.AcmeO2Adapter_Create_CallInstance = CMock_Guts_MemChain(Mock.AcmeO2Adapter_Create_CallInstance, cmock_guts_index);
  Mock.AcmeO2Adapter_Create_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.AcmeO2Adapter_Create_IgnoreBool = (char)1;
}

void AcmeO2Adapter_Create_CMockStopIgnore(void)
{
  if(Mock.AcmeO2Adapter_Create_IgnoreBool)
    Mock.AcmeO2Adapter_Create_CallInstance = CMock_Guts_MemNext(Mock.AcmeO2Adapter_Create_CallInstance);
  Mock.AcmeO2Adapter_Create_IgnoreBool = (char)0;
}

void AcmeO2Adapter_Create_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, AcmeO2Adapter* cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_AcmeO2Adapter_Create_CALL_INSTANCE));
  CMOCK_AcmeO2Adapter_Create_CALL_INSTANCE* cmock_call_instance = (CMOCK_AcmeO2Adapter_Create_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.AcmeO2Adapter_Create_CallInstance = CMock_Guts_MemChain(Mock.AcmeO2Adapter_Create_CallInstance, cmock_guts_index);
  Mock.AcmeO2Adapter_Create_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void AcmeO2Adapter_Create_AddCallback(CMOCK_AcmeO2Adapter_Create_CALLBACK Callback)
{
  Mock.AcmeO2Adapter_Create_IgnoreBool = (char)0;
  Mock.AcmeO2Adapter_Create_CallbackBool = (char)1;
  Mock.AcmeO2Adapter_Create_CallbackFunctionPointer = Callback;
}

void AcmeO2Adapter_Create_Stub(CMOCK_AcmeO2Adapter_Create_CALLBACK Callback)
{
  Mock.AcmeO2Adapter_Create_IgnoreBool = (char)0;
  Mock.AcmeO2Adapter_Create_CallbackBool = (char)0;
  Mock.AcmeO2Adapter_Create_CallbackFunctionPointer = Callback;
}

void AcmeO2Adapter_Destroy(AcmeO2Adapter* me)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_AcmeO2Adapter_Destroy_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_AcmeO2Adapter_Destroy);
  cmock_call_instance = (CMOCK_AcmeO2Adapter_Destroy_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.AcmeO2Adapter_Destroy_CallInstance);
  Mock.AcmeO2Adapter_Destroy_CallInstance = CMock_Guts_MemNext(Mock.AcmeO2Adapter_Destroy_CallInstance);
  if (Mock.AcmeO2Adapter_Destroy_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (!Mock.AcmeO2Adapter_Destroy_CallbackBool &&
      Mock.AcmeO2Adapter_Destroy_CallbackFunctionPointer != NULL)
  {
    Mock.AcmeO2Adapter_Destroy_CallbackFunctionPointer(me, Mock.AcmeO2Adapter_Destroy_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_SET_DETAILS(CMockString_AcmeO2Adapter_Destroy,CMockString_me);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_me), (void*)(me), sizeof(AcmeO2Adapter), cmock_line, CMockStringMismatch);
  }
  if (Mock.AcmeO2Adapter_Destroy_CallbackFunctionPointer != NULL)
  {
    Mock.AcmeO2Adapter_Destroy_CallbackFunctionPointer(me, Mock.AcmeO2Adapter_Destroy_CallbackCalls++);
  }
  if (cmock_call_instance->ReturnThruPtr_me_Used)
  {
    UNITY_TEST_ASSERT_NOT_NULL(me, cmock_line, CMockStringPtrIsNULL);
    memcpy((void*)me, (void*)cmock_call_instance->ReturnThruPtr_me_Val,
      cmock_call_instance->ReturnThruPtr_me_Size);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_AcmeO2Adapter_Destroy(CMOCK_AcmeO2Adapter_Destroy_CALL_INSTANCE* cmock_call_instance, AcmeO2Adapter* me);
void CMockExpectParameters_AcmeO2Adapter_Destroy(CMOCK_AcmeO2Adapter_Destroy_CALL_INSTANCE* cmock_call_instance, AcmeO2Adapter* me)
{
  cmock_call_instance->Expected_me = me;
  cmock_call_instance->ReturnThruPtr_me_Used = 0;
}

void AcmeO2Adapter_Destroy_CMockIgnore(void)
{
  Mock.AcmeO2Adapter_Destroy_IgnoreBool = (char)1;
}

void AcmeO2Adapter_Destroy_CMockStopIgnore(void)
{
  Mock.AcmeO2Adapter_Destroy_IgnoreBool = (char)0;
}

void AcmeO2Adapter_Destroy_CMockExpect(UNITY_LINE_TYPE cmock_line, AcmeO2Adapter* me)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_AcmeO2Adapter_Destroy_CALL_INSTANCE));
  CMOCK_AcmeO2Adapter_Destroy_CALL_INSTANCE* cmock_call_instance = (CMOCK_AcmeO2Adapter_Destroy_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.AcmeO2Adapter_Destroy_CallInstance = CMock_Guts_MemChain(Mock.AcmeO2Adapter_Destroy_CallInstance, cmock_guts_index);
  Mock.AcmeO2Adapter_Destroy_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_AcmeO2Adapter_Destroy(cmock_call_instance, me);
}

void AcmeO2Adapter_Destroy_AddCallback(CMOCK_AcmeO2Adapter_Destroy_CALLBACK Callback)
{
  Mock.AcmeO2Adapter_Destroy_IgnoreBool = (char)0;
  Mock.AcmeO2Adapter_Destroy_CallbackBool = (char)1;
  Mock.AcmeO2Adapter_Destroy_CallbackFunctionPointer = Callback;
}

void AcmeO2Adapter_Destroy_Stub(CMOCK_AcmeO2Adapter_Destroy_CALLBACK Callback)
{
  Mock.AcmeO2Adapter_Destroy_IgnoreBool = (char)0;
  Mock.AcmeO2Adapter_Destroy_CallbackBool = (char)0;
  Mock.AcmeO2Adapter_Destroy_CallbackFunctionPointer = Callback;
}

void AcmeO2Adapter_Destroy_CMockReturnMemThruPtr_me(UNITY_LINE_TYPE cmock_line, AcmeO2Adapter* me, size_t cmock_size)
{
  CMOCK_AcmeO2Adapter_Destroy_CALL_INSTANCE* cmock_call_instance = (CMOCK_AcmeO2Adapter_Destroy_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.AcmeO2Adapter_Destroy_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringPtrPreExp);
  cmock_call_instance->ReturnThruPtr_me_Used = 1;
  cmock_call_instance->ReturnThruPtr_me_Val = me;
  cmock_call_instance->ReturnThruPtr_me_Size = cmock_size;
}

int AcmeO2Adapter_gimmeO2Conc(AcmeO2Adapter* const me)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_AcmeO2Adapter_gimmeO2Conc_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_AcmeO2Adapter_gimmeO2Conc);
  cmock_call_instance = (CMOCK_AcmeO2Adapter_gimmeO2Conc_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.AcmeO2Adapter_gimmeO2Conc_CallInstance);
  Mock.AcmeO2Adapter_gimmeO2Conc_CallInstance = CMock_Guts_MemNext(Mock.AcmeO2Adapter_gimmeO2Conc_CallInstance);
  if (Mock.AcmeO2Adapter_gimmeO2Conc_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.AcmeO2Adapter_gimmeO2Conc_FinalReturn;
    Mock.AcmeO2Adapter_gimmeO2Conc_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (!Mock.AcmeO2Adapter_gimmeO2Conc_CallbackBool &&
      Mock.AcmeO2Adapter_gimmeO2Conc_CallbackFunctionPointer != NULL)
  {
    int cmock_cb_ret = Mock.AcmeO2Adapter_gimmeO2Conc_CallbackFunctionPointer(me, Mock.AcmeO2Adapter_gimmeO2Conc_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return cmock_cb_ret;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_SET_DETAILS(CMockString_AcmeO2Adapter_gimmeO2Conc,CMockString_me);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_me), (void*)(me), sizeof(AcmeO2Adapter), cmock_line, CMockStringMismatch);
  }
  if (Mock.AcmeO2Adapter_gimmeO2Conc_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.AcmeO2Adapter_gimmeO2Conc_CallbackFunctionPointer(me, Mock.AcmeO2Adapter_gimmeO2Conc_CallbackCalls++);
  }
  if (cmock_call_instance->ReturnThruPtr_me_Used)
  {
    UNITY_TEST_ASSERT_NOT_NULL(me, cmock_line, CMockStringPtrIsNULL);
    memcpy((void*)me, (void*)cmock_call_instance->ReturnThruPtr_me_Val,
      cmock_call_instance->ReturnThruPtr_me_Size);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_AcmeO2Adapter_gimmeO2Conc(CMOCK_AcmeO2Adapter_gimmeO2Conc_CALL_INSTANCE* cmock_call_instance, AcmeO2Adapter* const me);
void CMockExpectParameters_AcmeO2Adapter_gimmeO2Conc(CMOCK_AcmeO2Adapter_gimmeO2Conc_CALL_INSTANCE* cmock_call_instance, AcmeO2Adapter* const me)
{
  cmock_call_instance->Expected_me = me;
  cmock_call_instance->ReturnThruPtr_me_Used = 0;
}

void AcmeO2Adapter_gimmeO2Conc_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_AcmeO2Adapter_gimmeO2Conc_CALL_INSTANCE));
  CMOCK_AcmeO2Adapter_gimmeO2Conc_CALL_INSTANCE* cmock_call_instance = (CMOCK_AcmeO2Adapter_gimmeO2Conc_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.AcmeO2Adapter_gimmeO2Conc_CallInstance = CMock_Guts_MemChain(Mock.AcmeO2Adapter_gimmeO2Conc_CallInstance, cmock_guts_index);
  Mock.AcmeO2Adapter_gimmeO2Conc_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.AcmeO2Adapter_gimmeO2Conc_IgnoreBool = (char)1;
}

void AcmeO2Adapter_gimmeO2Conc_CMockStopIgnore(void)
{
  if(Mock.AcmeO2Adapter_gimmeO2Conc_IgnoreBool)
    Mock.AcmeO2Adapter_gimmeO2Conc_CallInstance = CMock_Guts_MemNext(Mock.AcmeO2Adapter_gimmeO2Conc_CallInstance);
  Mock.AcmeO2Adapter_gimmeO2Conc_IgnoreBool = (char)0;
}

void AcmeO2Adapter_gimmeO2Conc_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, AcmeO2Adapter* const me, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_AcmeO2Adapter_gimmeO2Conc_CALL_INSTANCE));
  CMOCK_AcmeO2Adapter_gimmeO2Conc_CALL_INSTANCE* cmock_call_instance = (CMOCK_AcmeO2Adapter_gimmeO2Conc_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.AcmeO2Adapter_gimmeO2Conc_CallInstance = CMock_Guts_MemChain(Mock.AcmeO2Adapter_gimmeO2Conc_CallInstance, cmock_guts_index);
  Mock.AcmeO2Adapter_gimmeO2Conc_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_AcmeO2Adapter_gimmeO2Conc(cmock_call_instance, me);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void AcmeO2Adapter_gimmeO2Conc_AddCallback(CMOCK_AcmeO2Adapter_gimmeO2Conc_CALLBACK Callback)
{
  Mock.AcmeO2Adapter_gimmeO2Conc_IgnoreBool = (char)0;
  Mock.AcmeO2Adapter_gimmeO2Conc_CallbackBool = (char)1;
  Mock.AcmeO2Adapter_gimmeO2Conc_CallbackFunctionPointer = Callback;
}

void AcmeO2Adapter_gimmeO2Conc_Stub(CMOCK_AcmeO2Adapter_gimmeO2Conc_CALLBACK Callback)
{
  Mock.AcmeO2Adapter_gimmeO2Conc_IgnoreBool = (char)0;
  Mock.AcmeO2Adapter_gimmeO2Conc_CallbackBool = (char)0;
  Mock.AcmeO2Adapter_gimmeO2Conc_CallbackFunctionPointer = Callback;
}

void AcmeO2Adapter_gimmeO2Conc_CMockReturnMemThruPtr_me(UNITY_LINE_TYPE cmock_line, AcmeO2Adapter* me, size_t cmock_size)
{
  CMOCK_AcmeO2Adapter_gimmeO2Conc_CALL_INSTANCE* cmock_call_instance = (CMOCK_AcmeO2Adapter_gimmeO2Conc_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.AcmeO2Adapter_gimmeO2Conc_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringPtrPreExp);
  cmock_call_instance->ReturnThruPtr_me_Used = 1;
  cmock_call_instance->ReturnThruPtr_me_Val = me;
  cmock_call_instance->ReturnThruPtr_me_Size = cmock_size;
}

int AcmeO2Adapter_gimmeO2Flow(AcmeO2Adapter* const me)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_AcmeO2Adapter_gimmeO2Flow_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_AcmeO2Adapter_gimmeO2Flow);
  cmock_call_instance = (CMOCK_AcmeO2Adapter_gimmeO2Flow_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.AcmeO2Adapter_gimmeO2Flow_CallInstance);
  Mock.AcmeO2Adapter_gimmeO2Flow_CallInstance = CMock_Guts_MemNext(Mock.AcmeO2Adapter_gimmeO2Flow_CallInstance);
  if (Mock.AcmeO2Adapter_gimmeO2Flow_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.AcmeO2Adapter_gimmeO2Flow_FinalReturn;
    Mock.AcmeO2Adapter_gimmeO2Flow_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (!Mock.AcmeO2Adapter_gimmeO2Flow_CallbackBool &&
      Mock.AcmeO2Adapter_gimmeO2Flow_CallbackFunctionPointer != NULL)
  {
    int cmock_cb_ret = Mock.AcmeO2Adapter_gimmeO2Flow_CallbackFunctionPointer(me, Mock.AcmeO2Adapter_gimmeO2Flow_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return cmock_cb_ret;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_SET_DETAILS(CMockString_AcmeO2Adapter_gimmeO2Flow,CMockString_me);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_me), (void*)(me), sizeof(AcmeO2Adapter), cmock_line, CMockStringMismatch);
  }
  if (Mock.AcmeO2Adapter_gimmeO2Flow_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.AcmeO2Adapter_gimmeO2Flow_CallbackFunctionPointer(me, Mock.AcmeO2Adapter_gimmeO2Flow_CallbackCalls++);
  }
  if (cmock_call_instance->ReturnThruPtr_me_Used)
  {
    UNITY_TEST_ASSERT_NOT_NULL(me, cmock_line, CMockStringPtrIsNULL);
    memcpy((void*)me, (void*)cmock_call_instance->ReturnThruPtr_me_Val,
      cmock_call_instance->ReturnThruPtr_me_Size);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_AcmeO2Adapter_gimmeO2Flow(CMOCK_AcmeO2Adapter_gimmeO2Flow_CALL_INSTANCE* cmock_call_instance, AcmeO2Adapter* const me);
void CMockExpectParameters_AcmeO2Adapter_gimmeO2Flow(CMOCK_AcmeO2Adapter_gimmeO2Flow_CALL_INSTANCE* cmock_call_instance, AcmeO2Adapter* const me)
{
  cmock_call_instance->Expected_me = me;
  cmock_call_instance->ReturnThruPtr_me_Used = 0;
}

void AcmeO2Adapter_gimmeO2Flow_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_AcmeO2Adapter_gimmeO2Flow_CALL_INSTANCE));
  CMOCK_AcmeO2Adapter_gimmeO2Flow_CALL_INSTANCE* cmock_call_instance = (CMOCK_AcmeO2Adapter_gimmeO2Flow_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.AcmeO2Adapter_gimmeO2Flow_CallInstance = CMock_Guts_MemChain(Mock.AcmeO2Adapter_gimmeO2Flow_CallInstance, cmock_guts_index);
  Mock.AcmeO2Adapter_gimmeO2Flow_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.AcmeO2Adapter_gimmeO2Flow_IgnoreBool = (char)1;
}

void AcmeO2Adapter_gimmeO2Flow_CMockStopIgnore(void)
{
  if(Mock.AcmeO2Adapter_gimmeO2Flow_IgnoreBool)
    Mock.AcmeO2Adapter_gimmeO2Flow_CallInstance = CMock_Guts_MemNext(Mock.AcmeO2Adapter_gimmeO2Flow_CallInstance);
  Mock.AcmeO2Adapter_gimmeO2Flow_IgnoreBool = (char)0;
}

void AcmeO2Adapter_gimmeO2Flow_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, AcmeO2Adapter* const me, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_AcmeO2Adapter_gimmeO2Flow_CALL_INSTANCE));
  CMOCK_AcmeO2Adapter_gimmeO2Flow_CALL_INSTANCE* cmock_call_instance = (CMOCK_AcmeO2Adapter_gimmeO2Flow_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.AcmeO2Adapter_gimmeO2Flow_CallInstance = CMock_Guts_MemChain(Mock.AcmeO2Adapter_gimmeO2Flow_CallInstance, cmock_guts_index);
  Mock.AcmeO2Adapter_gimmeO2Flow_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_AcmeO2Adapter_gimmeO2Flow(cmock_call_instance, me);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void AcmeO2Adapter_gimmeO2Flow_AddCallback(CMOCK_AcmeO2Adapter_gimmeO2Flow_CALLBACK Callback)
{
  Mock.AcmeO2Adapter_gimmeO2Flow_IgnoreBool = (char)0;
  Mock.AcmeO2Adapter_gimmeO2Flow_CallbackBool = (char)1;
  Mock.AcmeO2Adapter_gimmeO2Flow_CallbackFunctionPointer = Callback;
}

void AcmeO2Adapter_gimmeO2Flow_Stub(CMOCK_AcmeO2Adapter_gimmeO2Flow_CALLBACK Callback)
{
  Mock.AcmeO2Adapter_gimmeO2Flow_IgnoreBool = (char)0;
  Mock.AcmeO2Adapter_gimmeO2Flow_CallbackBool = (char)0;
  Mock.AcmeO2Adapter_gimmeO2Flow_CallbackFunctionPointer = Callback;
}

void AcmeO2Adapter_gimmeO2Flow_CMockReturnMemThruPtr_me(UNITY_LINE_TYPE cmock_line, AcmeO2Adapter* me, size_t cmock_size)
{
  CMOCK_AcmeO2Adapter_gimmeO2Flow_CALL_INSTANCE* cmock_call_instance = (CMOCK_AcmeO2Adapter_gimmeO2Flow_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.AcmeO2Adapter_gimmeO2Flow_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringPtrPreExp);
  cmock_call_instance->ReturnThruPtr_me_Used = 1;
  cmock_call_instance->ReturnThruPtr_me_Val = me;
  cmock_call_instance->ReturnThruPtr_me_Size = cmock_size;
}

