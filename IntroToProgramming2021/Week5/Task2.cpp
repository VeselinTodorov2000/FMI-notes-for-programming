#include <iostream>
#include <cmath>

int main()
{
    // Да се напише програма, която прочита от стандартния вход две естествени числа и
    // проверява дали второто е префикс на първото. 

    int firstNumber, secondNumber;
    std::cin >> firstNumber >> secondNumber;

    //reverse first number
    int firstNumberReversed = 0;
    while(firstNumber) 
    {
        firstNumberReversed *= 10; 
        firstNumberReversed += firstNumber % 10; 
        
        firstNumber /= 10; 
    }

    //reverse second number
    int secondNumberReversed = 0;
    while(secondNumber)
    {
        secondNumberReversed *= 10;
        secondNumberReversed += secondNumber % 10;

        secondNumber /= 10;
    }

    bool isPrefix = true;
    
    if(firstNumberReversed == 0 || secondNumberReversed == 0)
    {
        isPrefix = false;
    }

    while(firstNumberReversed && secondNumberReversed)
    {
        if(firstNumberReversed % 10 != secondNumberReversed % 10)
        {
            isPrefix = false;
            break;
        }
        firstNumberReversed /= 10;
        secondNumberReversed /= 10;
    }

    std::cout << std::boolalpha << isPrefix << std::endl;
    return 0;
}