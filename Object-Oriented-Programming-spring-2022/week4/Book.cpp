#pragma once
#include "Book.h"
    
void Book::copy(const Book& others)
{
    isbn = others.isbn;
    name = new char[strlen(others.name) + 1];
    strcpy(name, others.name);
    author = new char[strlen(others.author) + 1];
    strcpy(author, others.author);
    yearOfPublishing = others.yearOfPublishing;    
}

void Book::destroy()
{
    delete[] this->name;
    delete[] this->author;
}

Book::Book()
{
    std::cout << "Book()" << std::endl;
    isbn = 0;
    name = new char[10];
    strcpy(name, "UNKNOWN");
    author = new char[10];
    strcpy(author, "UNKNOWN");
    yearOfPublishing = 1970;
}

Book::Book(const Book& others)
{
    std::cout << "Book(copy)" << std::endl;
    copy(others);
}

Book& Book::operator=(const Book& others)
{
    std::cout << "operator=()" << std::endl;
    if(this != &others)
    {
        destroy();
        copy(others);        
    }
    return *this;
}

Book::~Book()
{
    std::cout << "~Book()" << std::endl;
    destroy();
}

int Book::getIsbn() const
{
    return isbn;
}
    
const char* Book::getName() const
{
    return name;
}

const char* Book::getAuthor() const
{
    return author;
}

size_t Book::getYearOfPublishing() const
{
    return yearOfPublishing;
}

void Book::setIsbn(int isbn)
{
    this->isbn = isbn;
}

    void Book::setName(const char* name)
    {
        if(this->name != nullptr)
        {
            delete[] this->name;
        }
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }
    
    void Book::setAuthor(const char* author)
    {
        if(this->author != nullptr)
        {
            delete[] this->author;
        }
        this->author = new char[strlen(author) + 1];
        strcpy(this->author, author);
    }
    
    void Book::setYearOfPublishing(size_t yearOfPublishing)
    {
        this->yearOfPublishing = yearOfPublishing;
    }