#include <iostream>
#include "Book.h"
#include "Book.cpp"

int main()
{
    Book b;
    b.setIsbn(1);
    b.setName("hello");
    b.setAuthor("world");
    b.setYearOfPublishing(2000);

    Book** c = new Book*[5];
    c[0] = new Book(b);

    for(int i = 0; i < 5; i++)
    {
        delete c[i];
    }
    delete[] c;
    return 0;
}