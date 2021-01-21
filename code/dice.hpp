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
        void roll();
        void reset();
        void setSides(const unsigned int newSides);
        const unsigned int getRoll();

}; // end class

#endif // end of DICE_HPP
