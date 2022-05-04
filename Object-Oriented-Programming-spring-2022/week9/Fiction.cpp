#pragma once
#include<string>
#include "Book.cpp"

class Fiction : public Book
{
    private:
    size_t yearOfPublishing;
};