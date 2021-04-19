#include <iostream>
#include "LList.h"
#include "LList.cpp"

int main()
{
    LList<int> h;
    h.push_back(10);
    h.push_back(20);
    h.push_back(30);
    h.push_back(40);
    h.push_back(50);
    h.push_back(60);
    h.push_back(70);
    h.push_back(80);
    h.pop();
    h.pop_back();
    std::cout << h.size() << std::endl;
    h.print();

    LList<int> h1(h);
    h1.print();
    h1.clear();
    std::cout << h1.size() << std::endl;
    return 0;
}