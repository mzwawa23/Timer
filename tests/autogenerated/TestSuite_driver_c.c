#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/Timer_Jama/driver.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/Timer_Jama/driver.c");

EXTERN_C_LINKAGE void TestSuite_driver_c_1ebba14c_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_driver_c_1ebba14c_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_driver_c_1ebba14c);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_driver_c_1ebba14c_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_driver_c_1ebba14c_test_main_1);
        CPPTEST_TEST(TestSuite_driver_c_1ebba14c_test_main_loop_1);
        CPPTEST_TEST(TestSuite_driver_c_1ebba14c_test_print_menu_get_action_1);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_driver_c_1ebba14c_testSuiteTearDown);
CPPTEST_TEST(TestSuite_driver_c_1ebba14c_test_main_loop_2);
CPPTEST_TEST(TestSuite_driver_c_1ebba14c_test_main_loop_3);
CPPTEST_TEST(TestSuite_driver_c_1ebba14c_test_main_loop_4);
CPPTEST_TEST(TestSuite_driver_c_1ebba14c_test_case);
CPPTEST_TEST_SUITE_END();
        
void TestSuite_driver_c_1ebba14c_test_main_1(void);
void TestSuite_driver_c_1ebba14c_test_main_loop_1(void);
void TestSuite_driver_c_1ebba14c_test_print_menu_get_action_1(void);

void TestSuite_driver_c_1ebba14c_test_main_loop_2(void);
void TestSuite_driver_c_1ebba14c_test_main_loop_3(void);
void TestSuite_driver_c_1ebba14c_test_main_loop_4(void);
void TestSuite_driver_c_1ebba14c_test_case(void);
CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_driver_c_1ebba14c);

void TestSuite_driver_c_1ebba14c_testSuiteSetUp(void);
void TestSuite_driver_c_1ebba14c_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_driver_c_1ebba14c_testSuiteTearDown(void);
void TestSuite_driver_c_1ebba14c_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_driver_c_1ebba14c_setUp(void);
void TestSuite_driver_c_1ebba14c_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_driver_c_1ebba14c_tearDown(void);
void TestSuite_driver_c_1ebba14c_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_main_1 */
/* CPPTEST_TEST_CASE_CONTEXT int main(void) */
void TestSuite_driver_c_1ebba14c_test_main_1()
{
	/*  @req 20579  */
    /* Pre-condition initialization */
    {
        /* Tested function call */
        int _return  = main();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_main_1 */

/* CPPTEST_TEST_CASE_BEGIN test_main_loop_1 */
/* CPPTEST_TEST_CASE_CONTEXT void main_loop(void) */
void TestSuite_driver_c_1ebba14c_test_main_loop_1()
{
	/*  @req 20579  */
    /* Pre-condition initialization */
    {
        /* Tested function call */
        main_loop();
        /* Post-condition check */
    }
}
/* CPPTEST_TEST_CASE_END test_main_loop_1 */

/* CPPTEST_TEST_CASE_BEGIN test_print_menu_get_action_1 */
/* CPPTEST_TEST_CASE_CONTEXT int print_menu_get_action(void) */
void TestSuite_driver_c_1ebba14c_test_print_menu_get_action_1()
{
	/*  @req 20585  */
    /* Pre-condition initialization */
    {
        /* Tested function call */
        int _return  = print_menu_get_action();
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(1, ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_print_menu_get_action_1 */

void CppTest_StubCallback_main_loop_2(CppTest_StubCallInfo* stubCallInfo, int* __return){
	*__return = 1;
}

/* CPPTEST_TEST_CASE_BEGIN test_main_loop_2 */
/* CPPTEST_TEST_CASE_CONTEXT void main_loop(void) */
void TestSuite_driver_c_1ebba14c_test_main_loop_2()
{
	/*  @req 20579  */
	CPPTEST_REGISTER_STUB_CALLBACK("print_menu_get_action", &CppTest_StubCallback_main_loop_2);
    /* Pre-condition initialization */
    {
        /* Tested function call */
        main_loop();
        /* Post-condition check */
    }
}
/* CPPTEST_TEST_CASE_END test_main_loop_2 */


void CppTest_StubCallback_main_loop_3(CppTest_StubCallInfo* stubCallInfo, int* __return){
	*__return = 2;
}

/* CPPTEST_TEST_CASE_BEGIN test_main_loop_3 */
/* CPPTEST_TEST_CASE_CONTEXT void main_loop(void) */
void TestSuite_driver_c_1ebba14c_test_main_loop_3()
{
	/*  @req 20579  */
	CPPTEST_REGISTER_STUB_CALLBACK("print_menu_get_action", &CppTest_StubCallback_main_loop_3);
    /* Pre-condition initialization */
    {
        /* Tested function call */
        main_loop();
        /* Post-condition check */
    }
}
/* CPPTEST_TEST_CASE_END test_main_loop_3 */

void CppTest_StubCallback_main_loop_4(CppTest_StubCallInfo* stubCallInfo, int* __return){
	*__return = 3;
}

/* CPPTEST_TEST_CASE_BEGIN test_main_loop_4 */
/* CPPTEST_TEST_CASE_CONTEXT void main_loop(void) */
void TestSuite_driver_c_1ebba14c_test_main_loop_4()
{
	/*  @req 20579  */
	CPPTEST_REGISTER_STUB_CALLBACK("print_menu_get_action", &CppTest_StubCallback_main_loop_4);
    /* Pre-condition initialization */
    {
        /* Tested function call */
        main_loop();
        /* Post-condition check */
    }
}
/* CPPTEST_TEST_CASE_END test_main_loop_4 */

/* CPPTEST_TEST_CASE_BEGIN test_case */
void TestSuite_driver_c_1ebba14c_test_case()
{
    CPPTEST_FAIL("Auto-generated test case");
}
/* CPPTEST_TEST_CASE_END test_case */
