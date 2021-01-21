//
// file: dice.cpp
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include "dice.hpp"
#include <random>

//
// Build a new die to be used in the system
//
Dice::Dice() : _sides(6), _value(0)
{
} // end of ctor

//
// Clean up the die
//
Dice::~Dice()
{
} // end of dtor

//
// Should roll the die
//
void Dice::roll()
{
    _value = std::rand() % _sides + 1;
} // end of method roll

//
// Should reset die value
//
void Dice::reset()
{
    _value = 0;
} // end of method reset

//
// Should set current die sides
//
void Dice::setSides(const unsigned int newSides)
{
    _sides = newSides;
} // end of method setSides

//
// Should return the value rolled
//
const unsigned int Dice::getRoll()
{
    return _value;
} // end of method getRoll
