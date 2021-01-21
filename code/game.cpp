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
const bool rollOutput(Roller *dice)
{
    if (!dice)
    {
        return false;
    } // end if

    for (auto die : dice->result())
    {
        std::cout << "Rolled " << die.getRoll() << std::endl;
    } // end for

    return true;
} // end of function rollOutput


//
// Should set each die to a random value between
// zero and six. If dice is null function well
// return false else true.
//
const bool rollRandom(Roller *dice)
{
    if (!dice)
    {
        return false;
    } // end if

    dice->roll();

    return true;
} // end of function rollRandom


//
// Should clear the screen for a clean console
//
void clearScreen()
{
    system(CLEAR_SCREEN);
} // end of function clearScreen
