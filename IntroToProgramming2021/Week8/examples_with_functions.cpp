#include <iostream>

void addOne1(int a) //pass by value
{
    a += 1;
}

void addOne2(int& a) //pass by reference 
{
    a += 1;
}

int main()
{
    int a = 5;
    addOne1(a);
    std::cout << a << std::endl;
}