#pragma once
#include<string>
#include "Book.cpp"

class NonFiction : public Book
{
    private:
    std::string author;

    public:
    NonFiction() 
    {
        ibsm = "2";
        author = "unknown";
    }
};