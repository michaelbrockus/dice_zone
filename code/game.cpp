//
// file: game.cpp
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include "game.hpp"


//
// Should set each die to a random value between
// zero and six. If dice is null function well
// return false else true.
//
const bool rollTable(std::vector<Dice> *dice)
{
    if (!dice)
    {
        return false;
    } // end if

    std::cout << "ROLLED:" << std::endl;
    std::cout << "All dice have been rolled." << std::endl;

    for (auto die : *dice)
    {
        std::cout << die.roll() << " ";
    } // end for

    putchar('\n');

    return true;
} // end of function rollTable

//
// Should set each die to a init value of zero. If
// dice is null function well return false else true.
//
const bool resetTable(std::vector<Dice> *dice)
{
    if (!dice)
    {
        return false;
    } // end if

    std::cout << "RESET:" << std::endl;
    std::cout << "All dice have been reset to zero." << std::endl;

   for (auto die : *dice)
    {
        std::cout << die.reset() << " ";
    } // end for

    putchar('\n');

    return true;
} // end of function resetTable

//
// Should clear the screen for a clean console
//
void clearScreen()
{
    system(CLEAR_SCREEN);
} // end of function clearScreen
