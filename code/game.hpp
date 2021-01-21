//
// file: game.hpp
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#ifndef GAME_HPP
#define GAME_HPP

#if defined _WIN32 || defined __CYGWIN__
#define CLEAR_SCREEN "cls"
#else
#define CLEAR_SCREEN "clear"
#endif

#include <iostream>
#include <vector>
#include <string>

#include "roller.hpp"
#include "dice.hpp"

const unsigned int MAX_DIE = 6;

const bool rollOutput(Roller *dice);
const bool rollRandom(Roller *dice);
void clearScreen();

#endif // end of GAME_HPP
