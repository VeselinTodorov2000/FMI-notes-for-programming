#pragma once
#include <string>
#include <vector>
#include "Validator.h"
#include "Validator.cpp"

class Menu
{
    private:
    Validator valid;
    std::vector<std::string> commandsSet;
    std::string command;

    std::vector<std::string> splitted;
    public:
    Menu();
    void split();
    void start();
};