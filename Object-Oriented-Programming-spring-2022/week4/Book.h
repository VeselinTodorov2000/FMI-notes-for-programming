#pragma once
#include <iostream>
#include <cstring>

class Book
{
    private:
    int isbn;
    char* name;
    char* author;
    size_t yearOfPublishing;

    void copy(const Book& others);
    void destroy();
    public:
    Book();
    Book(int isbn, const char* name, 
    const char* author, size_t yearOfPublishing);
    Book(const Book& others);
    Book& operator=(const Book& others);
    ~Book();

    int getIsbn() const;
    const char* getName() const;
    const char* getAuthor() const;
    size_t getYearOfPublishing() const;
    void setIsbn(int isbn);
    void setName(const char* name);
    void setAuthor(const char* author);
    void setYearOfPublishing(size_t yearOfPublishing);
};