#pragma once
#include "Menu.h"
#include <iostream>

Menu::Menu() //needed for singleton
{

}

Menu* Menu::getInstance() //needed for singleton
{
    if(instance == nullptr) 
    {
        instance = new Menu();
    } 
    return instance;
}

void Menu::printMenu()
{
    std::cout << "Menu \n1 - Option 1 \n2 - Option 2" << std::endl;   
}

Menu::~Menu() 
{
    delete instance;
}