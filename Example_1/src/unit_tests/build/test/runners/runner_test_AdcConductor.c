/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include "cmock.h"
#include "Types.h"
#include "AdcConductor.h"
#include "mock_AdcModel.h"
#include "mock_AdcHardware.h"

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_AdcConductor_Init_CheckIfHardwareInitCalled(void);
extern void test_AdcConductor_Run_NotGetSample(void);
extern void test_AdcConductor_Run_GetSampleDoneNotComplete(void);
extern void test_FunctionName_TestName_4(void);


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  mock_AdcModel_Init();
  mock_AdcHardware_Init();
}
static void CMock_Verify(void)
{
  mock_AdcModel_Verify();
  mock_AdcHardware_Verify();
}
static void CMock_Destroy(void)
{
  mock_AdcModel_Destroy();
  mock_AdcHardware_Destroy();
}

/*=======Test Reset Options=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  CMock_Verify();
  CMock_Destroy();
  CMock_Init();
  setUp();
}
void verifyTest(void);
void verifyTest(void)
{
  CMock_Verify();
}

/*=======Test Runner Used To Run Each Test=====*/
static void run_test(UnityTestFunction func, const char* name, UNITY_LINE_TYPE line_num)
{
    Unity.CurrentTestName = name;
    Unity.CurrentTestLineNumber = line_num;
#ifdef UNITY_USE_COMMAND_LINE_ARGS
    if (!UnityTestMatches())
        return;
#endif
    Unity.NumberOfTests++;
    UNITY_CLR_DETAILS();
    UNITY_EXEC_TIME_START();
    CMock_Init();
    if (TEST_PROTECT())
    {
        setUp();
        func();
    }
    if (TEST_PROTECT())
    {
        tearDown();
        CMock_Verify();
    }
    CMock_Destroy();
    UNITY_EXEC_TIME_STOP();
    UnityConcludeTest();
}

/*=======MAIN=====*/
int main(void)
{
  UnityBegin("./test/test_AdcConductor.c");
  run_test(test_AdcConductor_Init_CheckIfHardwareInitCalled, "test_AdcConductor_Init_CheckIfHardwareInitCalled", 25);
  run_test(test_AdcConductor_Run_NotGetSample, "test_AdcConductor_Run_NotGetSample", 36);
  run_test(test_AdcConductor_Run_GetSampleDoneNotComplete, "test_AdcConductor_Run_GetSampleDoneNotComplete", 48);
  run_test(test_FunctionName_TestName_4, "test_FunctionName_TestName_4", 60);

  CMock_Guts_MemFreeFinal();
  return UnityEnd();
}