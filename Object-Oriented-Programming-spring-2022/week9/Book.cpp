#pragma once
#include<string>

class Book
{
    protected:
    std::string ibsm;
    std::string name;
    size_t numberOfPages;

    public:
    Book() 
    {
        ibsm = "1";
        name = "empty";
        numberOfPages = 10;
    }
};