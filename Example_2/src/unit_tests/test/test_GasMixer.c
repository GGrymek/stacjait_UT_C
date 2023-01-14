/* Must have includes */
/* Include unity.h */
#include "unity.h"

/* Include basic types, specific types configurations etc... */

/* Include header of Unit Under Test */
#include "GasMixer.h"

/* Include all required mock headers */
#include "mock_iO2Sensor.h"
#include "mock_AcmeO2Adapter.h"
#include "mock_UltimateO2Adapter.h"

void setUp(void)
{
}

void tearDown(void)
{
}

/* 
   Input: None
   Returned Values: None
   Method: Control flow.
   SDD requirement testing: XXX-XXXX
   Description: Default run.
*/
void test_GasMixer_UpdateO2Parameters_DefaultFunctionRun(void)
{
    /* Prepare required variables. */
    AcmeO2Adapter* acmeO2Adapter;
    UltimateO2Adapter* ultimateO2Adapter;
    int* actual_values_table_ptr;

    /* Preparing expected values */
    int expected_values_table[4] = {5, 3, 200, 66};

    /* Mocks preparing */
    AcmeO2Adapter_Create_ExpectAndReturn(acmeO2Adapter);
    UltimateO2Adapter_Create_ExpectAndReturn(ultimateO2Adapter);
    AcmeO2Adapter_gimmeO2Conc_ExpectAndReturn(acmeO2Adapter, 5);
    AcmeO2Adapter_gimmeO2Flow_ExpectAndReturn(acmeO2Adapter, 3);
    UltimateO2Adapter_gimmeO2Conc_ExpectAndReturn(ultimateO2Adapter, 200);
    UltimateO2Adapter_gimmeO2Flow_ExpectAndReturn(ultimateO2Adapter, 66);

    /* Test code */
    actual_values_table_ptr = GasMixer_UpdateO2Parameters();

    /* Checking outputs */
    TEST_ASSERT_EQUAL_INT_ARRAY(expected_values_table, actual_values_table_ptr, 4);
}
