//
// file: test_cases.cpp
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
// USE CASE:
//
// The use case of this file is to contain the test cases needed by this
// project since its important to test once implementation against a set
// of common test cases
//
#include "game.hpp"
#include <vector>
#include <unity.h>

//
//  project setup teardown functions if needed
//
void setUp(void)
{
    // TODO.
} // end of function setUp

void tearDown(void)
{
    // TODO.
} // end of function tearDown

//
// list of all the test cases for this project
//

static void test_rollOutput(void)
{
    std::vector<int> vect = {0, 0, 0};
    TEST_ASSERT_TRUE(rollOutput(&vect));
} // end of test case

static void test_rollOutput_withNull(void)
{
    TEST_ASSERT_FALSE(rollOutput(nullptr));
} // end of test case

static void test_rollRandom(void)
{
    std::vector<int> vect = {0, 0, 0, 0, 0, 0};
    TEST_ASSERT_TRUE(rollRandom(&vect));
} // end of test case

static void test_rollRandom_withNull(void)
{
    TEST_ASSERT_FALSE(rollRandom(nullptr));
} // end of test case

//
//  here main is used as the test runner
//
int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_rollOutput);
    RUN_TEST(test_rollOutput_withNull);
    RUN_TEST(test_rollRandom);
    RUN_TEST(test_rollRandom_withNull);

    return UNITY_END();
} // end of function main
