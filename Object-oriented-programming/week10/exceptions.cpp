#include <iostream>
#include "Vector.h"
#include "Vector.cpp"
//Syntax error - No compilation
//Runtime error - Compile, not finish
//Link error - No compilation
//Logical - Compile, finish
//Semantic - Not always compile, finish

int main()
{
    //throw, try, catch
    Vector<int> a;
    a.push_back(4);
    a.push_back(5);
    a.push_back(5);
    a.push_back(5);
    a.push_back(5);

    //exception ~ assert
    try
    {
        a[40];
    }
    catch(std::overflow_error& c)
    {
        std::cout << "hello" << std::endl;
    }
    catch(std::out_of_range r)
    {
        std::cout << r.what() << std::endl;
    }
    catch(...)
    {
        std::cout << "default" << std::endl;   
    }
    std::cout << "end" << std::endl;

    return 0;
}