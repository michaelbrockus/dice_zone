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
// Should set current die sides
//
void Dice::setSides(const int sides)
{
    this->_sides = sides;
} // end of method setSides

//
// Should roll the die
//
const unsigned int Dice::roll()
{
    this->_value = std::rand() % _sides + 1;
    return this->_value;
} // end of method roll

//
// Should reset die value
//
const unsigned int Dice::reset()
{
    this->_value = 0;
    return this->_value;
} // end of method reset
