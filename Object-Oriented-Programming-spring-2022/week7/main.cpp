#include <iostream>
#include <cassert>
#include "Vector.h"
#include "Vector.cpp"

void constructor_shouldReserve4Elements_whenUseDefaultConstructor()
{
    Vector<int> v(4);
    assert(v.maxSize() == 4);
    std::cout << "constructor_shouldReserve4Elements_whenUseDefaultConstructor" << " PASS" << std::endl;
}

void constructor_shouldBeEmpty_whenUseDefaultConstructor()
{
    Vector<int> v(4);
    assert(v.isEmpty() == true);
    std::cout << "constructor_shouldBeEmpty_whenUseDefaultConstructor" << " PASS" << std::endl;
}

void operatorPlus_shouldHaveSize5_whenWeAdd5Elements()
{
    Vector<int> v(4);
    assert(v.maxSize() == 4);
    v.push_back(5)
    .push_back(4)
    .push_back(3)
    .push_back(2)
    .push_back(1);
    v += 4;

    assert(v.maxSize() == 8);
    assert(v.currentSize() == 6);
    std::cout << "operatorPlus_shouldHaveSize5_whenWeAdd5Elements" << " PASS" << std::endl;
}

void popBack_shouldHaveSize5_whenWeAddAndRemove5Elements()
{
    Vector<int> v(4);
    assert(v.maxSize() == 4);
    v.push_back(5)
    .push_back(4)
    .push_back(3);
    assert(v.currentSize() == 3);

    v.pop_back().pop_back().pop_back();
    assert(v.isEmpty());
    std::cout << "popBack_shouldHaveSize5_whenWeAdd5Elements" << " PASS" << std::endl;
}

void clear_shouldDeleteAllElements_whenInvoked()
{
    Vector<int> v(4);
    assert(v.maxSize() == 4);
    v.push_back(5)
    .push_back(4)
    .push_back(3);
    assert(v.currentSize() == 3);

    ~v;
    assert(v.isEmpty());
    std::cout << "clear_shouldDeleteAllElements_whenInvoked" << " PASS" << std::endl;
}

// void test()
// {
//     Vector<int> v(10);
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);
//     v.push_back(6);
//     v.push_back(7);
//     v.push_back(8);
//     v.push_back(9);
//     v.insert(5, 12);

//     for(int i = 0; i < v.currentSize(); i++)
//     {
//         std::cout << v[i] << " ";
//     }
//     std::cout << std::endl;

//     v.erase(5);
//     for(int i = 0; i < v.currentSize(); i++)
//     {
//         std::cout << v[i] << " ";
//     }
//     std::cout << std::endl;
// }

void test1()
{
    Vector<int> v1(10);
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    Vector<int> v2(5);
    v2.push_back(4);
    v2.push_back(5);
    v2.push_back(6);
    v2.push_back(7);

    // std::cout << v1;
    // std::cout << v2;
}

int main() 
{
    constructor_shouldReserve4Elements_whenUseDefaultConstructor();
    constructor_shouldBeEmpty_whenUseDefaultConstructor();
    operatorPlus_shouldHaveSize5_whenWeAdd5Elements();
    popBack_shouldHaveSize5_whenWeAddAndRemove5Elements();
    clear_shouldDeleteAllElements_whenInvoked();

    // test1();
    return 0;
}