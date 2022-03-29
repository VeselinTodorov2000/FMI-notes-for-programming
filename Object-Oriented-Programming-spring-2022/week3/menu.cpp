#pragma once
#include <iostream>
#include "option.cpp"

struct Menu {
    static void menuDialog() 
    {
        std::cout << "Choose option:" << std::endl;
        std::cout << "1 - Add a note" << std::endl;
        std::cout << "2 - Delete note" << std::endl;
    }

    static Option chooseOption() 
    {
        int choise;
        do 
        {
            std::cout << "Your choise:";
            std::cin >> choise;
        } while(choise != 1 && choise != 2);

        switch(choise)
        {
            case 1: return ADD_NOTE; break;
            case 2: return DELETE_NOTE; break;
            default: return INVALID;
        }
    }

    // static void execute(Option choise) 
    // {
        // switch(choise)
        // {
            // case ADD_NOTE:; break;
            // case DELETE_NOTE: break;
        // }
    // }
};