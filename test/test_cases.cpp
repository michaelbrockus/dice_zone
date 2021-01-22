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
#include "dice.hpp"

#include <vector>
#include <unity.h>

//
//  project setup teardown functions if needed
//
void setUp(void)
{
} // end of function setUp

void tearDown(void)
{
} // end of function tearDown

//
// list of all the test cases for this project
//

//
// Dice class test cases
static void test_rollSixSides(void)
{
    Dice *die = new(Dice); // six sides by defualt
    TEST_ASSERT_TRUE(die->roll() <= 6);
    delete die;
} // end of test case

static void test_rollEightSides(void)
{
    Dice *die = new(Dice);
    die->setSides(8);
    TEST_ASSERT_TRUE(die->roll() <= 8);
    delete die;
} // end of test case

static void test_rollTenSides(void)
{
    Dice *die = new(Dice);
    die->setSides(10);
    TEST_ASSERT_TRUE(die->roll() <= 10);
    delete die;
} // end of test case

static void test_resetDie(void)
{
    Dice *die = new(Dice);
    TEST_ASSERT_TRUE(die->roll() <= 6);
    TEST_ASSERT_EQUAL_INT(0, die->reset());
    delete die;
} // end of test case


//
//  here main is used as the test runner
//
int main(void)
{
    UNITY_BEGIN();

    // Dice test cases
    RUN_TEST(test_rollSixSides);
    RUN_TEST(test_rollEightSides);
    RUN_TEST(test_rollTenSides);
    RUN_TEST(test_resetDie);

    return UNITY_END();
} // end of function main
