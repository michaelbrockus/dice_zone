//
// file: roller.hpp
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#ifndef ROLLER_HPP
#define ROLLER_HPP

#include <vector>
#include "dice.hpp"

class Roller
{
    private:
        std::vector<Dice> _dice;
        unsigned int _numberDice;

    public:
        Roller();
        ~Roller();
        void roll();
        void reset();
        void useSide(const unsigned int sides);
        std::vector<Dice> result();

}; // end class

#endif // end of ROLLER_HPP
