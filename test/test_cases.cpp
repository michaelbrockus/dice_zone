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
#include "roller.hpp"
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
    TEST_ASSERT_EQUAL_INT(0, die->getRoll());
    die->roll();
    TEST_ASSERT_TRUE(die->getRoll() <= 6);
    delete die;
} // end of test case

static void test_rollEightSides(void)
{
    Dice *die = new(Dice);
    die->setSides(8);
    TEST_ASSERT_EQUAL_INT(0, die->getRoll());
    die->roll();
    TEST_ASSERT_TRUE(die->getRoll() <= 8);
    delete die;
} // end of test case

static void test_rollTenSides(void)
{
    Dice *die = new(Dice);
    die->setSides(10);
    TEST_ASSERT_EQUAL_INT(0, die->getRoll());
    die->roll();
    TEST_ASSERT_TRUE(die->getRoll() <= 10);
    delete die;
} // end of test case

static void test_resetDie(void)
{
    Dice *die = new(Dice);
    TEST_ASSERT_EQUAL_INT(0, die->getRoll());
    die->roll();
    TEST_ASSERT_TRUE(die->getRoll() <= 6);
    die->reset();
    TEST_ASSERT_EQUAL_INT(0, die->getRoll());
    delete die;
} // end of test case


//
// Roller class test cases
static void test_rollerSixSided(void)
{
    Roller *roller = new(Roller);
    for (auto &die : roller->result())
    {
        TEST_ASSERT_EQUAL_INT(0, die.getRoll());
    } // end for

    roller->roll();
    for (auto &die : roller->result())
    {
        TEST_ASSERT_TRUE((die.getRoll() <= 6));
    } // end for

    delete roller;
} // end of test case

static void test_rollerEgihtSided(void)
{
    Roller *roller = new(Roller);

    roller->useSide(8);
    for (auto &die : roller->result())
    {
        TEST_ASSERT_EQUAL_INT(0, die.getRoll());
    } // end for

    roller->roll();
    for (auto &die : roller->result())
    {
        TEST_ASSERT_TRUE((die.getRoll() <= 8));
    } // end for

    delete roller;
} // end of test case

static void test_rollerTenSided(void)
{
    Roller *roller = new(Roller);

    roller->useSide(10);
    for (auto &die : roller->result())
    {
        TEST_ASSERT_EQUAL_INT(0, die.getRoll());
    } // end for

    roller->roll();
    for (auto &die : roller->result())
    {
        TEST_ASSERT_TRUE((die.getRoll() <= 10));
    } // end for

    delete roller;
} // end of test case

static void test_rollerTweentySided(void)
{
    Roller *roller = new(Roller);

    roller->useSide(20);
    for (auto &die : roller->result())
    {
        TEST_ASSERT_EQUAL_INT(0, die.getRoll());
    } // end for

    roller->roll();
    for (auto &die : roller->result())
    {
        TEST_ASSERT_TRUE((die.getRoll() <= 20));
    } // end for

    delete roller;
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

    // Roller test cases
    RUN_TEST(test_rollerSixSided);
    RUN_TEST(test_rollerEgihtSided);
    RUN_TEST(test_rollerTenSided);
    RUN_TEST(test_rollerTweentySided);

    return UNITY_END();
} // end of function main
