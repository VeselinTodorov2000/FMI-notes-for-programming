#include <iostream>
#include "Vector.h"
#include "Vector.cpp"
#include <vector>
#include <list>
int main()
{
    std::vector<int> elems;
    elems.push_back(1);
    elems.push_back(10);
    elems.push_back(100);
    elems.push_back(1000);
    elems.push_back(10000);
    elems.push_back(100000);

    std::vector<int> elems2(elems);


    std::list<int> elem;
    elem.push_back(1);
    elem.push_back(1);
    elem.push_back(1);
    elem.push_back(1);
    elem.push_back(1);

    //syntax 1
    for(std::vector<int>::iterator it = elems.begin(); it != elems.end(); ++it)
    {
        *it = 5;
    }

    //syntax 2
    for(int& x : elems2)
    {
        x = 5;
    }

    for (size_t i = 0; i < elems2.size(); i++)
    {
        std::cout << elems2[i] << std::endl;
    }
    
    Vector<int> p;
    p.push_back(2);
    p.push_back(3);
    //syntax with our iterator
    /*for (Vector<int>::Iterator our = p.begin(); our != p.end(); ++p)
    {
        *our;
    }*/

    for(int x : p)
    {
        std::cout << x << "\n";
    }
    return 0;
}