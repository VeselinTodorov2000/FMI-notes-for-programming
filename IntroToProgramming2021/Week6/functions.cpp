#include <iostream>

void printAge(int age)
{
    if(age < 0)
    {
        return;
    }
    std::cout << "You are " << age << " years old!" << std::endl;
}

int reverseNumber(int number)
{
    int reversed = 0;
    while(number)
    {
        reversed += (number % 10);
        reversed *= 10;
        number /= 10;
    }
    return reversed /= 10;
}

int findSquareArea(int sideA)
{
    return sideA * sideA;
}

int findRectangleArea(int sideA, int sideB)
{
    if(sideA == sideB)
    {
        return findSquareArea(sideA);
    }
    return sideA * sideB;
}

int findCircleArea(double r, double pi = 3.14)
{
    return pi*r*r;
}

//findRectangleArea
//find_rectangle_area

//for constants -> const int MAX_SIZE

int main()
{
    int age;
    std::cin >> age;
    printAge(age);
    return 0;
}