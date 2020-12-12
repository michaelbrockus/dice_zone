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

const unsigned int MAX_DIE = 6;

const bool rollOutput(std::vector<int> *dice);
const bool rollRandom(std::vector<int> *dice);
void clearScreen();

#endif // end of GAME_HPP
