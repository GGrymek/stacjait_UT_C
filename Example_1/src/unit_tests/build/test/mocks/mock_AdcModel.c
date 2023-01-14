/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "mock_AdcModel.h"

static const char* CMockString_AdModel_DoNothingExceptTestPointers = "AdModel_DoNothingExceptTestPointers";
static const char* CMockString_AdcModel_DoGetSample = "AdcModel_DoGetSample";
static const char* CMockString_AdcModel_DoNothingExceptReturnASpecialType = "AdcModel_DoNothingExceptReturnASpecialType";
static const char* CMockString_AdcModel_DoNothingExceptTestASpecialType = "AdcModel_DoNothingExceptTestASpecialType";
static const char* CMockString_AdcModel_ProcessInput = "AdcModel_ProcessInput";
static const char* CMockString_ExampleStruct = "ExampleStruct";
static const char* CMockString_millivolts = "millivolts";
static const char* CMockString_pExample = "pExample";

typedef struct _CMOCK_AdcModel_DoGetSample_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  bool ReturnVal;

} CMOCK_AdcModel_DoGetSample_CALL_INSTANCE;

typedef struct _CMOCK_AdcModel_ProcessInput_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  uint16 Expected_millivolts;

} CMOCK_AdcModel_ProcessInput_CALL_INSTANCE;

typedef struct _CMOCK_AdcModel_DoNothingExceptTestASpecialType_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  bool ReturnVal;
  EXAMPLE_STRUCT_T Expected_ExampleStruct;

} CMOCK_AdcModel_DoNothingExceptTestASpecialType_CALL_INSTANCE;

typedef struct _CMOCK_AdModel_DoNothingExceptTestPointers_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  bool ReturnVal;
  uint32* Expected_pExample;
  char ReturnThruPtr_pExample_Used;
  uint32* ReturnThruPtr_pExample_Val;
  size_t ReturnThruPtr_pExample_Size;

} CMOCK_AdModel_DoNothingExceptTestPointers_CALL_INSTANCE;

typedef struct _CMOCK_AdcModel_DoNothingExceptReturnASpecialType_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  EXAMPLE_STRUCT_T ReturnVal;

} CMOCK_AdcModel_DoNothingExceptReturnASpecialType_CALL_INSTANCE;

static struct mock_AdcModelInstance
{
  char AdcModel_DoGetSample_IgnoreBool;
  bool AdcModel_DoGetSample_FinalReturn;
  char AdcModel_DoGetSample_CallbackBool;
  CMOCK_AdcModel_DoGetSample_CALLBACK AdcModel_DoGetSample_CallbackFunctionPointer;
  int AdcModel_DoGetSample_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE AdcModel_DoGetSample_CallInstance;
  char AdcModel_ProcessInput_IgnoreBool;
  char AdcModel_ProcessInput_CallbackBool;
  CMOCK_AdcModel_ProcessInput_CALLBACK AdcModel_ProcessInput_CallbackFunctionPointer;
  int AdcModel_ProcessInput_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE AdcModel_ProcessInput_CallInstance;
  char AdcModel_DoNothingExceptTestASpecialType_IgnoreBool;
  bool AdcModel_DoNothingExceptTestASpecialType_FinalReturn;
  char AdcModel_DoNothingExceptTestASpecialType_CallbackBool;
  CMOCK_AdcModel_DoNothingExceptTestASpecialType_CALLBACK AdcModel_DoNothingExceptTestASpecialType_CallbackFunctionPointer;
  int AdcModel_DoNothingExceptTestASpecialType_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE AdcModel_DoNothingExceptTestASpecialType_CallInstance;
  char AdModel_DoNothingExceptTestPointers_IgnoreBool;
  bool AdModel_DoNothingExceptTestPointers_FinalReturn;
  char AdModel_DoNothingExceptTestPointers_CallbackBool;
  CMOCK_AdModel_DoNothingExceptTestPointers_CALLBACK AdModel_DoNothingExceptTestPointers_CallbackFunctionPointer;
  int AdModel_DoNothingExceptTestPointers_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE AdModel_DoNothingExceptTestPointers_CallInstance;
  char AdcModel_DoNothingExceptReturnASpecialType_IgnoreBool;
  EXAMPLE_STRUCT_T AdcModel_DoNothingExceptReturnASpecialType_FinalReturn;
  char AdcModel_DoNothingExceptReturnASpecialType_CallbackBool;
  CMOCK_AdcModel_DoNothingExceptReturnASpecialType_CALLBACK AdcModel_DoNothingExceptReturnASpecialType_CallbackFunctionPointer;
  int AdcModel_DoNothingExceptReturnASpecialType_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE AdcModel_DoNothingExceptReturnASpecialType_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void mock_AdcModel_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_MEM_INDEX_TYPE call_instance;
  call_instance = Mock.AdcModel_DoGetSample_CallInstance;
  if (Mock.AdcModel_DoGetSample_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_AdcModel_DoGetSample);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.AdcModel_DoGetSample_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.AdcModel_ProcessInput_CallInstance;
  if (Mock.AdcModel_ProcessInput_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_AdcModel_ProcessInput);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.AdcModel_ProcessInput_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.AdcModel_DoNothingExceptTestASpecialType_CallInstance;
  if (Mock.AdcModel_DoNothingExceptTestASpecialType_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_AdcModel_DoNothingExceptTestASpecialType);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.AdcModel_DoNothingExceptTestASpecialType_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.AdModel_DoNothingExceptTestPointers_CallInstance;
  if (Mock.AdModel_DoNothingExceptTestPointers_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_AdModel_DoNothingExceptTestPointers);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.AdModel_DoNothingExceptTestPointers_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.AdcModel_DoNothingExceptReturnASpecialType_CallInstance;
  if (Mock.AdcModel_DoNothingExceptReturnASpecialType_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_AdcModel_DoNothingExceptReturnASpecialType);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.AdcModel_DoNothingExceptReturnASpecialType_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
}

void mock_AdcModel_Init(void)
{
  mock_AdcModel_Destroy();
}

void mock_AdcModel_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
}

bool AdcModel_DoGetSample(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_AdcModel_DoGetSample_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_AdcModel_DoGetSample);
  cmock_call_instance = (CMOCK_AdcModel_DoGetSample_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.AdcModel_DoGetSample_CallInstance);
  Mock.AdcModel_DoGetSample_CallInstance = CMock_Guts_MemNext(Mock.AdcModel_DoGetSample_CallInstance);
  if (Mock.AdcModel_DoGetSample_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.AdcModel_DoGetSample_FinalReturn;
    Mock.AdcModel_DoGetSample_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (!Mock.AdcModel_DoGetSample_CallbackBool &&
      Mock.AdcModel_DoGetSample_CallbackFunctionPointer != NULL)
  {
    bool cmock_cb_ret = Mock.AdcModel_DoGetSample_CallbackFunctionPointer(Mock.AdcModel_DoGetSample_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return cmock_cb_ret;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (Mock.AdcModel_DoGetSample_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.AdcModel_DoGetSample_CallbackFunctionPointer(Mock.AdcModel_DoGetSample_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void AdcModel_DoGetSample_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_AdcModel_DoGetSample_CALL_INSTANCE));
  CMOCK_AdcModel_DoGetSample_CALL_INSTANCE* cmock_call_instance = (CMOCK_AdcModel_DoGetSample_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.AdcModel_DoGetSample_CallInstance = CMock_Guts_MemChain(Mock.AdcModel_DoGetSample_CallInstance, cmock_guts_index);
  Mock.AdcModel_DoGetSample_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.AdcModel_DoGetSample_IgnoreBool = (char)1;
}

void AdcModel_DoGetSample_CMockStopIgnore(void)
{
  if(Mock.AdcModel_DoGetSample_IgnoreBool)
    Mock.AdcModel_DoGetSample_CallInstance = CMock_Guts_MemNext(Mock.AdcModel_DoGetSample_CallInstance);
  Mock.AdcModel_DoGetSample_IgnoreBool = (char)0;
}

void AdcModel_DoGetSample_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_AdcModel_DoGetSample_CALL_INSTANCE));
  CMOCK_AdcModel_DoGetSample_CALL_INSTANCE* cmock_call_instance = (CMOCK_AdcModel_DoGetSample_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.AdcModel_DoGetSample_CallInstance = CMock_Guts_MemChain(Mock.AdcModel_DoGetSample_CallInstance, cmock_guts_index);
  Mock.AdcModel_DoGetSample_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void AdcModel_DoGetSample_AddCallback(CMOCK_AdcModel_DoGetSample_CALLBACK Callback)
{
  Mock.AdcModel_DoGetSample_IgnoreBool = (char)0;
  Mock.AdcModel_DoGetSample_CallbackBool = (char)1;
  Mock.AdcModel_DoGetSample_CallbackFunctionPointer = Callback;
}

void AdcModel_DoGetSample_Stub(CMOCK_AdcModel_DoGetSample_CALLBACK Callback)
{
  Mock.AdcModel_DoGetSample_IgnoreBool = (char)0;
  Mock.AdcModel_DoGetSample_CallbackBool = (char)0;
  Mock.AdcModel_DoGetSample_CallbackFunctionPointer = Callback;
}

void AdcModel_ProcessInput(uint16 millivolts)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_AdcModel_ProcessInput_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_AdcModel_ProcessInput);
  cmock_call_instance = (CMOCK_AdcModel_ProcessInput_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.AdcModel_ProcessInput_CallInstance);
  Mock.AdcModel_ProcessInput_CallInstance = CMock_Guts_MemNext(Mock.AdcModel_ProcessInput_CallInstance);
  if (Mock.AdcModel_ProcessInput_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (!Mock.AdcModel_ProcessInput_CallbackBool &&
      Mock.AdcModel_ProcessInput_CallbackFunctionPointer != NULL)
  {
    Mock.AdcModel_ProcessInput_CallbackFunctionPointer(millivolts, Mock.AdcModel_ProcessInput_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_SET_DETAILS(CMockString_AdcModel_ProcessInput,CMockString_millivolts);
    UNITY_TEST_ASSERT_EQUAL_HEX16(cmock_call_instance->Expected_millivolts, millivolts, cmock_line, CMockStringMismatch);
  }
  if (Mock.AdcModel_ProcessInput_CallbackFunctionPointer != NULL)
  {
    Mock.AdcModel_ProcessInput_CallbackFunctionPointer(millivolts, Mock.AdcModel_ProcessInput_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_AdcModel_ProcessInput(CMOCK_AdcModel_ProcessInput_CALL_INSTANCE* cmock_call_instance, uint16 millivolts);
void CMockExpectParameters_AdcModel_ProcessInput(CMOCK_AdcModel_ProcessInput_CALL_INSTANCE* cmock_call_instance, uint16 millivolts)
{
  cmock_call_instance->Expected_millivolts = millivolts;
}

void AdcModel_ProcessInput_CMockIgnore(void)
{
  Mock.AdcModel_ProcessInput_IgnoreBool = (char)1;
}

void AdcModel_ProcessInput_CMockStopIgnore(void)
{
  Mock.AdcModel_ProcessInput_IgnoreBool = (char)0;
}

void AdcModel_ProcessInput_CMockExpect(UNITY_LINE_TYPE cmock_line, uint16 millivolts)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_AdcModel_ProcessInput_CALL_INSTANCE));
  CMOCK_AdcModel_ProcessInput_CALL_INSTANCE* cmock_call_instance = (CMOCK_AdcModel_ProcessInput_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.AdcModel_ProcessInput_CallInstance = CMock_Guts_MemChain(Mock.AdcModel_ProcessInput_CallInstance, cmock_guts_index);
  Mock.AdcModel_ProcessInput_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_AdcModel_ProcessInput(cmock_call_instance, millivolts);
}

void AdcModel_ProcessInput_AddCallback(CMOCK_AdcModel_ProcessInput_CALLBACK Callback)
{
  Mock.AdcModel_ProcessInput_IgnoreBool = (char)0;
  Mock.AdcModel_ProcessInput_CallbackBool = (char)1;
  Mock.AdcModel_ProcessInput_CallbackFunctionPointer = Callback;
}

void AdcModel_ProcessInput_Stub(CMOCK_AdcModel_ProcessInput_CALLBACK Callback)
{
  Mock.AdcModel_ProcessInput_IgnoreBool = (char)0;
  Mock.AdcModel_ProcessInput_CallbackBool = (char)0;
  Mock.AdcModel_ProcessInput_CallbackFunctionPointer = Callback;
}

bool AdcModel_DoNothingExceptTestASpecialType(EXAMPLE_STRUCT_T ExampleStruct)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_AdcModel_DoNothingExceptTestASpecialType_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_AdcModel_DoNothingExceptTestASpecialType);
  cmock_call_instance = (CMOCK_AdcModel_DoNothingExceptTestASpecialType_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.AdcModel_DoNothingExceptTestASpecialType_CallInstance);
  Mock.AdcModel_DoNothingExceptTestASpecialType_CallInstance = CMock_Guts_MemNext(Mock.AdcModel_DoNothingExceptTestASpecialType_CallInstance);
  if (Mock.AdcModel_DoNothingExceptTestASpecialType_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.AdcModel_DoNothingExceptTestASpecialType_FinalReturn;
    Mock.AdcModel_DoNothingExceptTestASpecialType_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (!Mock.AdcModel_DoNothingExceptTestASpecialType_CallbackBool &&
      Mock.AdcModel_DoNothingExceptTestASpecialType_CallbackFunctionPointer != NULL)
  {
    bool cmock_cb_ret = Mock.AdcModel_DoNothingExceptTestASpecialType_CallbackFunctionPointer(ExampleStruct, Mock.AdcModel_DoNothingExceptTestASpecialType_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return cmock_cb_ret;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_SET_DETAILS(CMockString_AdcModel_DoNothingExceptTestASpecialType,CMockString_ExampleStruct);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_ExampleStruct), (void*)(&ExampleStruct), sizeof(EXAMPLE_STRUCT_T), cmock_line, CMockStringMismatch);
  }
  if (Mock.AdcModel_DoNothingExceptTestASpecialType_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.AdcModel_DoNothingExceptTestASpecialType_CallbackFunctionPointer(ExampleStruct, Mock.AdcModel_DoNothingExceptTestASpecialType_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_AdcModel_DoNothingExceptTestASpecialType(CMOCK_AdcModel_DoNothingExceptTestASpecialType_CALL_INSTANCE* cmock_call_instance, EXAMPLE_STRUCT_T ExampleStruct);
void CMockExpectParameters_AdcModel_DoNothingExceptTestASpecialType(CMOCK_AdcModel_DoNothingExceptTestASpecialType_CALL_INSTANCE* cmock_call_instance, EXAMPLE_STRUCT_T ExampleStruct)
{
  memcpy((void*)(&cmock_call_instance->Expected_ExampleStruct), (void*)(&ExampleStruct),
         sizeof(EXAMPLE_STRUCT_T[sizeof(ExampleStruct) == sizeof(EXAMPLE_STRUCT_T) ? 1 : -1])); /* add EXAMPLE_STRUCT_T to :treat_as_array if this causes an error */
}

void AdcModel_DoNothingExceptTestASpecialType_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_AdcModel_DoNothingExceptTestASpecialType_CALL_INSTANCE));
  CMOCK_AdcModel_DoNothingExceptTestASpecialType_CALL_INSTANCE* cmock_call_instance = (CMOCK_AdcModel_DoNothingExceptTestASpecialType_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.AdcModel_DoNothingExceptTestASpecialType_CallInstance = CMock_Guts_MemChain(Mock.AdcModel_DoNothingExceptTestASpecialType_CallInstance, cmock_guts_index);
  Mock.AdcModel_DoNothingExceptTestASpecialType_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.AdcModel_DoNothingExceptTestASpecialType_IgnoreBool = (char)1;
}

void AdcModel_DoNothingExceptTestASpecialType_CMockStopIgnore(void)
{
  if(Mock.AdcModel_DoNothingExceptTestASpecialType_IgnoreBool)
    Mock.AdcModel_DoNothingExceptTestASpecialType_CallInstance = CMock_Guts_MemNext(Mock.AdcModel_DoNothingExceptTestASpecialType_CallInstance);
  Mock.AdcModel_DoNothingExceptTestASpecialType_IgnoreBool = (char)0;
}

void AdcModel_DoNothingExceptTestASpecialType_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, EXAMPLE_STRUCT_T ExampleStruct, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_AdcModel_DoNothingExceptTestASpecialType_CALL_INSTANCE));
  CMOCK_AdcModel_DoNothingExceptTestASpecialType_CALL_INSTANCE* cmock_call_instance = (CMOCK_AdcModel_DoNothingExceptTestASpecialType_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.AdcModel_DoNothingExceptTestASpecialType_CallInstance = CMock_Guts_MemChain(Mock.AdcModel_DoNothingExceptTestASpecialType_CallInstance, cmock_guts_index);
  Mock.AdcModel_DoNothingExceptTestASpecialType_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_AdcModel_DoNothingExceptTestASpecialType(cmock_call_instance, ExampleStruct);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void AdcModel_DoNothingExceptTestASpecialType_AddCallback(CMOCK_AdcModel_DoNothingExceptTestASpecialType_CALLBACK Callback)
{
  Mock.AdcModel_DoNothingExceptTestASpecialType_IgnoreBool = (char)0;
  Mock.AdcModel_DoNothingExceptTestASpecialType_CallbackBool = (char)1;
  Mock.AdcModel_DoNothingExceptTestASpecialType_CallbackFunctionPointer = Callback;
}

void AdcModel_DoNothingExceptTestASpecialType_Stub(CMOCK_AdcModel_DoNothingExceptTestASpecialType_CALLBACK Callback)
{
  Mock.AdcModel_DoNothingExceptTestASpecialType_IgnoreBool = (char)0;
  Mock.AdcModel_DoNothingExceptTestASpecialType_CallbackBool = (char)0;
  Mock.AdcModel_DoNothingExceptTestASpecialType_CallbackFunctionPointer = Callback;
}

bool AdModel_DoNothingExceptTestPointers(uint32* pExample)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_AdModel_DoNothingExceptTestPointers_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_AdModel_DoNothingExceptTestPointers);
  cmock_call_instance = (CMOCK_AdModel_DoNothingExceptTestPointers_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.AdModel_DoNothingExceptTestPointers_CallInstance);
  Mock.AdModel_DoNothingExceptTestPointers_CallInstance = CMock_Guts_MemNext(Mock.AdModel_DoNothingExceptTestPointers_CallInstance);
  if (Mock.AdModel_DoNothingExceptTestPointers_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.AdModel_DoNothingExceptTestPointers_FinalReturn;
    Mock.AdModel_DoNothingExceptTestPointers_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (!Mock.AdModel_DoNothingExceptTestPointers_CallbackBool &&
      Mock.AdModel_DoNothingExceptTestPointers_CallbackFunctionPointer != NULL)
  {
    bool cmock_cb_ret = Mock.AdModel_DoNothingExceptTestPointers_CallbackFunctionPointer(pExample, Mock.AdModel_DoNothingExceptTestPointers_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return cmock_cb_ret;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_SET_DETAILS(CMockString_AdModel_DoNothingExceptTestPointers,CMockString_pExample);
    if (cmock_call_instance->Expected_pExample == NULL)
      { UNITY_TEST_ASSERT_NULL(pExample, cmock_line, CMockStringExpNULL); }
    else
      { UNITY_TEST_ASSERT_EQUAL_HEX32_ARRAY(cmock_call_instance->Expected_pExample, pExample, 1, cmock_line, CMockStringMismatch); }
  }
  if (Mock.AdModel_DoNothingExceptTestPointers_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.AdModel_DoNothingExceptTestPointers_CallbackFunctionPointer(pExample, Mock.AdModel_DoNothingExceptTestPointers_CallbackCalls++);
  }
  if (cmock_call_instance->ReturnThruPtr_pExample_Used)
  {
    UNITY_TEST_ASSERT_NOT_NULL(pExample, cmock_line, CMockStringPtrIsNULL);
    memcpy((void*)pExample, (void*)cmock_call_instance->ReturnThruPtr_pExample_Val,
      cmock_call_instance->ReturnThruPtr_pExample_Size);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_AdModel_DoNothingExceptTestPointers(CMOCK_AdModel_DoNothingExceptTestPointers_CALL_INSTANCE* cmock_call_instance, uint32* pExample);
void CMockExpectParameters_AdModel_DoNothingExceptTestPointers(CMOCK_AdModel_DoNothingExceptTestPointers_CALL_INSTANCE* cmock_call_instance, uint32* pExample)
{
  cmock_call_instance->Expected_pExample = pExample;
  cmock_call_instance->ReturnThruPtr_pExample_Used = 0;
}

void AdModel_DoNothingExceptTestPointers_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_AdModel_DoNothingExceptTestPointers_CALL_INSTANCE));
  CMOCK_AdModel_DoNothingExceptTestPointers_CALL_INSTANCE* cmock_call_instance = (CMOCK_AdModel_DoNothingExceptTestPointers_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.AdModel_DoNothingExceptTestPointers_CallInstance = CMock_Guts_MemChain(Mock.AdModel_DoNothingExceptTestPointers_CallInstance, cmock_guts_index);
  Mock.AdModel_DoNothingExceptTestPointers_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.AdModel_DoNothingExceptTestPointers_IgnoreBool = (char)1;
}

void AdModel_DoNothingExceptTestPointers_CMockStopIgnore(void)
{
  if(Mock.AdModel_DoNothingExceptTestPointers_IgnoreBool)
    Mock.AdModel_DoNothingExceptTestPointers_CallInstance = CMock_Guts_MemNext(Mock.AdModel_DoNothingExceptTestPointers_CallInstance);
  Mock.AdModel_DoNothingExceptTestPointers_IgnoreBool = (char)0;
}

void AdModel_DoNothingExceptTestPointers_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32* pExample, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_AdModel_DoNothingExceptTestPointers_CALL_INSTANCE));
  CMOCK_AdModel_DoNothingExceptTestPointers_CALL_INSTANCE* cmock_call_instance = (CMOCK_AdModel_DoNothingExceptTestPointers_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.AdModel_DoNothingExceptTestPointers_CallInstance = CMock_Guts_MemChain(Mock.AdModel_DoNothingExceptTestPointers_CallInstance, cmock_guts_index);
  Mock.AdModel_DoNothingExceptTestPointers_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_AdModel_DoNothingExceptTestPointers(cmock_call_instance, pExample);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void AdModel_DoNothingExceptTestPointers_AddCallback(CMOCK_AdModel_DoNothingExceptTestPointers_CALLBACK Callback)
{
  Mock.AdModel_DoNothingExceptTestPointers_IgnoreBool = (char)0;
  Mock.AdModel_DoNothingExceptTestPointers_CallbackBool = (char)1;
  Mock.AdModel_DoNothingExceptTestPointers_CallbackFunctionPointer = Callback;
}

void AdModel_DoNothingExceptTestPointers_Stub(CMOCK_AdModel_DoNothingExceptTestPointers_CALLBACK Callback)
{
  Mock.AdModel_DoNothingExceptTestPointers_IgnoreBool = (char)0;
  Mock.AdModel_DoNothingExceptTestPointers_CallbackBool = (char)0;
  Mock.AdModel_DoNothingExceptTestPointers_CallbackFunctionPointer = Callback;
}

void AdModel_DoNothingExceptTestPointers_CMockReturnMemThruPtr_pExample(UNITY_LINE_TYPE cmock_line, uint32* pExample, size_t cmock_size)
{
  CMOCK_AdModel_DoNothingExceptTestPointers_CALL_INSTANCE* cmock_call_instance = (CMOCK_AdModel_DoNothingExceptTestPointers_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.AdModel_DoNothingExceptTestPointers_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringPtrPreExp);
  cmock_call_instance->ReturnThruPtr_pExample_Used = 1;
  cmock_call_instance->ReturnThruPtr_pExample_Val = pExample;
  cmock_call_instance->ReturnThruPtr_pExample_Size = cmock_size;
}

EXAMPLE_STRUCT_T AdcModel_DoNothingExceptReturnASpecialType(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_AdcModel_DoNothingExceptReturnASpecialType_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_AdcModel_DoNothingExceptReturnASpecialType);
  cmock_call_instance = (CMOCK_AdcModel_DoNothingExceptReturnASpecialType_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.AdcModel_DoNothingExceptReturnASpecialType_CallInstance);
  Mock.AdcModel_DoNothingExceptReturnASpecialType_CallInstance = CMock_Guts_MemNext(Mock.AdcModel_DoNothingExceptReturnASpecialType_CallInstance);
  if (Mock.AdcModel_DoNothingExceptReturnASpecialType_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.AdcModel_DoNothingExceptReturnASpecialType_FinalReturn;
    memcpy((void*)(&Mock.AdcModel_DoNothingExceptReturnASpecialType_FinalReturn), (void*)(&cmock_call_instance->ReturnVal),
         sizeof(EXAMPLE_STRUCT_T[sizeof(cmock_call_instance->ReturnVal) == sizeof(EXAMPLE_STRUCT_T) ? 1 : -1])); /* add EXAMPLE_STRUCT_T to :treat_as_array if this causes an error */
    return cmock_call_instance->ReturnVal;
  }
  if (!Mock.AdcModel_DoNothingExceptReturnASpecialType_CallbackBool &&
      Mock.AdcModel_DoNothingExceptReturnASpecialType_CallbackFunctionPointer != NULL)
  {
    EXAMPLE_STRUCT_T cmock_cb_ret = Mock.AdcModel_DoNothingExceptReturnASpecialType_CallbackFunctionPointer(Mock.AdcModel_DoNothingExceptReturnASpecialType_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return cmock_cb_ret;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (Mock.AdcModel_DoNothingExceptReturnASpecialType_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.AdcModel_DoNothingExceptReturnASpecialType_CallbackFunctionPointer(Mock.AdcModel_DoNothingExceptReturnASpecialType_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void AdcModel_DoNothingExceptReturnASpecialType_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, EXAMPLE_STRUCT_T cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_AdcModel_DoNothingExceptReturnASpecialType_CALL_INSTANCE));
  CMOCK_AdcModel_DoNothingExceptReturnASpecialType_CALL_INSTANCE* cmock_call_instance = (CMOCK_AdcModel_DoNothingExceptReturnASpecialType_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.AdcModel_DoNothingExceptReturnASpecialType_CallInstance = CMock_Guts_MemChain(Mock.AdcModel_DoNothingExceptReturnASpecialType_CallInstance, cmock_guts_index);
  Mock.AdcModel_DoNothingExceptReturnASpecialType_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.AdcModel_DoNothingExceptReturnASpecialType_IgnoreBool = (char)1;
}

void AdcModel_DoNothingExceptReturnASpecialType_CMockStopIgnore(void)
{
  if(Mock.AdcModel_DoNothingExceptReturnASpecialType_IgnoreBool)
    Mock.AdcModel_DoNothingExceptReturnASpecialType_CallInstance = CMock_Guts_MemNext(Mock.AdcModel_DoNothingExceptReturnASpecialType_CallInstance);
  Mock.AdcModel_DoNothingExceptReturnASpecialType_IgnoreBool = (char)0;
}

void AdcModel_DoNothingExceptReturnASpecialType_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, EXAMPLE_STRUCT_T cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_AdcModel_DoNothingExceptReturnASpecialType_CALL_INSTANCE));
  CMOCK_AdcModel_DoNothingExceptReturnASpecialType_CALL_INSTANCE* cmock_call_instance = (CMOCK_AdcModel_DoNothingExceptReturnASpecialType_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.AdcModel_DoNothingExceptReturnASpecialType_CallInstance = CMock_Guts_MemChain(Mock.AdcModel_DoNothingExceptReturnASpecialType_CallInstance, cmock_guts_index);
  Mock.AdcModel_DoNothingExceptReturnASpecialType_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  memcpy((void*)(&cmock_call_instance->ReturnVal), (void*)(&cmock_to_return),
         sizeof(EXAMPLE_STRUCT_T[sizeof(cmock_to_return) == sizeof(EXAMPLE_STRUCT_T) ? 1 : -1])); /* add EXAMPLE_STRUCT_T to :treat_as_array if this causes an error */
}

void AdcModel_DoNothingExceptReturnASpecialType_AddCallback(CMOCK_AdcModel_DoNothingExceptReturnASpecialType_CALLBACK Callback)
{
  Mock.AdcModel_DoNothingExceptReturnASpecialType_IgnoreBool = (char)0;
  Mock.AdcModel_DoNothingExceptReturnASpecialType_CallbackBool = (char)1;
  Mock.AdcModel_DoNothingExceptReturnASpecialType_CallbackFunctionPointer = Callback;
}

void AdcModel_DoNothingExceptReturnASpecialType_Stub(CMOCK_AdcModel_DoNothingExceptReturnASpecialType_CALLBACK Callback)
{
  Mock.AdcModel_DoNothingExceptReturnASpecialType_IgnoreBool = (char)0;
  Mock.AdcModel_DoNothingExceptReturnASpecialType_CallbackBool = (char)0;
  Mock.AdcModel_DoNothingExceptReturnASpecialType_CallbackFunctionPointer = Callback;
}
