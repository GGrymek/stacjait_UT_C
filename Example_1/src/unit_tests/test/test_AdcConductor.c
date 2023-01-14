/* Must have includes */
/* Include unity.h */
#include "unity.h"

/* Include basic types, specific types configurations etc... */
#include "Types.h"

/* Include header of Unit Under Test (UUT) */
#include "AdcConductor.h"

/* Include all required mock headers */
#include "mock_AdcModel.h"
#include "mock_AdcHardware.h"

void setUp(void)
{
    mock_AdcHardware_Init();
}

void tearDown(void)
{
    mock_AdcHardware_Verify();
}

void test_AdcConductor_Init_CheckIfHardwareInitCalled(void)
{
    AdcHardware_Init_Expect();
    AdcConductor_Init();
}

/* 
   Input: None
   Returned Values: None
   Description: AdcModel_DoGetSample retruns FALSE 
*/
void test_AdcConductor_Run_NotGetSample(void)
{
    AdcModel_DoGetSample_ExpectAndReturn(FALSE);
    AdcConductor_Run();
}

/* 
   Input: None
   Returned Values: None
   Description: AdcModel_DoGetSample retruns TRUE
   AdcModel_GetSampleComplete returns FALSE
*/
void test_AdcConductor_Run_GetSampleDoneNotComplete(void)
{
    AdcModel_DoGetSample_ExpectAndReturn(TRUE);
    AdcHardware_GetSampleComplete_ExpectAndReturn(FALSE);
    AdcConductor_Run();
}

/* 
   Input: None
   Returned Values: None
   Description: Default run.
*/
void test_FunctionName_TestName_DefaultFunctionRun(void)
{
    AdcModel_DoGetSample_ExpectAndReturn(TRUE);
    AdcHardware_GetSampleComplete_ExpectAndReturn(TRUE);
    AdcHardware_GetSample_ExpectAndReturn(12345);
    AdcModel_ProcessInput_Expect(12345);
    AdcHardware_StartConversion_Expect();
    AdcConductor_Run();
}
