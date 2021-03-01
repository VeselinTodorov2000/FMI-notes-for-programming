#include <iostream>

//task 4
double increaseByOne(double r)
{
    return ++r;
}

double decreaseByTen(double r)
{
    return r - 10;
}


using doubleFunc = double (*) (double);

//task 5
double fmax(doubleFunc f, doubleFunc g, double x)
{
    return (f(x) > g(x)) ? f(x) : g(x); 
}

int main()
{
    //task 4
    doubleFunc functions[5];

    functions[0] = increaseByOne;
    functions[1] = decreaseByTen;

    std::cout << functions[1](25) << std::endl;  
    //task 5
    std::cout << "----------" << std::endl;
    std::cout << fmax(functions[0], functions[1], 15) << std::endl;
    
    return 0;
}