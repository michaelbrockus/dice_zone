//
// file: roller.cpp
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include "roller.hpp"


Roller::Roller() : _numberDice(6)
{
    auto temp = _numberDice;
    while (temp != 0)
    {
        _dice.push_back(Dice());
        --temp;
    } // end while
}

Roller::~Roller()
{
    //
}

void Roller::roll()
{
    for (auto die : _dice)
    {
        die.roll();
    }
}

void Roller::useSide(const unsigned int sides)
{
    for (auto die : _dice)
    {
        die.setSides(sides);
    }
}

void Roller::reset()
{
    for (auto die : _dice)
    {
        die.reset();
    }
}

std::vector<Dice> Roller::result()
{
    return _dice;
}
