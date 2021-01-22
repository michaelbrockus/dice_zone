//
// file: dice.hpp
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#ifndef DICE_HPP
#define DICE_HPP

class Dice
{
    private:
        unsigned int _sides;
        unsigned int _value;
    
    public:
        Dice();
        ~Dice();
        void setSides(const int sides);
        const unsigned int roll();
        const unsigned int reset();
}; // end class

#endif // end of DICE_HPP
