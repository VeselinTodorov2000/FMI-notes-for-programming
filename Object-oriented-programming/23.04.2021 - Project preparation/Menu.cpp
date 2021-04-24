#pragma once
#include <iostream>
#include "Menu.h"
#include <cstring>

Menu::Menu()
{
    commandsSet.push_back("book");
    commandsSet.push_back("unbook");
    commandsSet.push_back("agenda");
    commandsSet.push_back("change");
    commandsSet.push_back("find");
    commandsSet.push_back("holiday");
    commandsSet.push_back("busydays");
    commandsSet.push_back("findslot");
    commandsSet.push_back("findslotwith");
    commandsSet.push_back("merge");
    commandsSet.push_back("exit");
}

void Menu::split()
{
    splitted.clear();
    std::string currentWord = "";
    for(int i = 0; i < command.size(); i++)
    {
        if(command[i] == ' ')
        {
            splitted.push_back(currentWord);
            currentWord = "";
            continue;
        }
        currentWord += command[i];
    }
    splitted.push_back(currentWord); 
}

void Menu::start()
{
    int choise;
    do
    {
        choise = -1;
        std::cout << "Enter: ";
        command = "";
        getline(std::cin, command);
        split();
        for(int i = 0; i < commandsSet.size(); i++)
        {
            if(splitted[0] == commandsSet[i])
            {
                choise = i;
                break;
            }
        }
        switch(choise)
        {
            case 0: 
            {
                bool isValid = valid.validateBook(splitted);
                if(isValid)
                {
                std::cout << "Execute book" << std::endl; 
                break;
                }
                else
                {
                    break;
                }
            }
            case 1: std::cout << "Execute unbook" << std::endl; break;
            case 2: std::cout << "Execute agenga" << std::endl; break;
            case 3: std::cout << "Execute change" << std::endl; break;
            case 4: std::cout << "Execute find" << std::endl; break;
            case 5: std::cout << "Execute book2" << std::endl; break;
            case 6: std::cout << "Execute book3" << std::endl; break;
            case 7: std::cout << "Execute book4" << std::endl; break;
            case 8: std::cout << "Execute book5" << std::endl; break;
            case 9: std::cout << "Execute book6" << std::endl; break;
            case 10: std::cout << "Exit the application" << std::endl; break;
            default: "Invalid command";
        }
    }
    while(splitted[0] != "exit");
}