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
const bool rollOutput(std::vector<int> *dice)
{
    if (!dice)
    {
        return false;
    } // end if

    for (const auto &die : *dice)
    {
        std::cout << "Rolled " << die << std::endl;
    } // end for

    return true;
} // end of function rollOutput


//
// Should set each die to a random value between
// zero and six. If dice is null function well
// return false else true.
//
const bool rollRandom(std::vector<int> *dice)
{
    if (!dice)
    {
        return false;
    } // end if

    for (unsigned int it = 0; it < MAX_DIE; ++it)
    {
        dice->at(it) = std::rand() % MAX_DIE + 1;
    } // end for

    return true;
} // end of function rollRandom


//
// Should clear the screen for a clean console
//
void clearScreen()
{
    system(CLEAR_SCREEN);
} // end of function clearScreen
