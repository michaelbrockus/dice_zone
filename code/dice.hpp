//
// file: dice.hpp
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#ifndef DICE_HPP
#define DICE_HPP

#include <string>

enum
{
    SIDES_06 = 6,
    SIDES_08 = 8,
    SIDES_10 = 10
};
    
typedef struct Dice
{
    std::string type;
    int sides;
};

#endif // end of DICE_HPP
