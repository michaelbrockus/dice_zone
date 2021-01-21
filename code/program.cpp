//
// file: program.cpp
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include "program.hpp"
#include "roller.hpp"
#include "game.hpp"
#include "dice.hpp"

#include <iostream>
#include <vector>
#include <string>
#include <ctime>


//
// foundation of the program and related
// application logic must be implemented
// in the foundation.
//
int foundation(void)
{
    Roller *dice = new(Roller); // give dice to the user
    std::string command;

    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    while (true)
    {
        clearScreen();
        std::cout << "Enter a command to run an action [roll/quit]" << std::endl;
        std::cout << "command: ";
        std::cin >> command;

        if (!command.compare("roll"))
        {
            rollRandom(dice);
            rollOutput(dice);
        } // end if
        else if (!command.compare("quit"))
        {
            clearScreen();
            break;
        } // end else if

        std::cout << "----------------------------" << std::endl;
        std::cout << "press enter: ";
        std::fflush(stdin);
        std::getchar();
    } // end while

    delete dice;

    return EXIT_SUCCESS;
} // end of function foundation
