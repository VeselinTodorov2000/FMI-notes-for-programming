#pragma once
#include "Validator.h"

bool Validator::validateBook(std::vector<std::string> splitted)
{
    if(splitted.size() != 6)
    {
        std::cout << "Invalid parameter number" << std::endl;
        return false;
    }
    if(!(splitted[4].size() <= 30))
    {
        std::cout << "Name should be max 30 symbols" << std::endl;
        return false;
    }
    return true;
}