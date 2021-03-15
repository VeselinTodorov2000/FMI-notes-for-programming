#include <iostream>
#include "Product.h"
#include "Product.cpp"

int main()
{
    Product p("Bread", Kilogram, 15.7);
    p.print();
    p += 20;
    p.print();
    std::cout << "Andy Studio was here" << std::endl;
    p -= 30;
    p.print();
    return 0;
}