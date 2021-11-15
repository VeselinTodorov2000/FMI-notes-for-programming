#include <iostream>

//abs
int abs(int number)
{
    if(number < 0)
    {
        return number * -1;
    }
    return number;
}

//pow
double pow(double number, int power)
{
    double powered = 1;
    for(int i = 1; i <= power; i++)
    {
        powered *= number;
    }
    return powered;
}

//min
double min(double firstNumber, double secondNumber)
{
    return firstNumber > secondNumber ? secondNumber : firstNumber; 
}

//max
double max(double firstNumber, double secondNumber)
{
    return firstNumber > secondNumber ? firstNumber : secondNumber;
}

//minOfThree
double minOfThree(double firstNumber, double secondNumber, double thirdNumber)
{
    int currentMinimum = firstNumber;
    if(currentMinimum > secondNumber)
    {
        currentMinimum = secondNumber;
    }
    if(currentMinimum > thirdNumber)
    {
        currentMinimum = thirdNumber;
    }
    return currentMinimum;
}

//maxOfThree
double maxOfThree(double firstNumber, double secondNumber, double thirdNumber)
{
    int currentMinimum = firstNumber;
    if(currentMinimum < secondNumber)
    {
        currentMinimum = secondNumber;
    }
    if(currentMinimum < thirdNumber)
    {
        currentMinimum = thirdNumber;
    }
    return currentMinimum;
}

bool isAlpha(char input)
{
    return ('a' <= input && input <= 'z') || ('A' <= input && input <= 'Z');
}

bool isDigit(char input)
{
    return '0' <= input && input <= '9';
}

//task 2
bool isPrime(int number)
{
    for(int i = 2; i < number; i++)
    {
        if(number % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool areConnectedPrimes(int firstNumber, int secondNumber)
{
    return isPrime(firstNumber) && isPrime(secondNumber) && (firstNumber + 2) == secondNumber;
}

int main()
{
    std::cout << areConnectedPrimes(3, 5) << std::endl;
    std::cout << areConnectedPrimes(5, 9) << std::endl;
    return 0;
}