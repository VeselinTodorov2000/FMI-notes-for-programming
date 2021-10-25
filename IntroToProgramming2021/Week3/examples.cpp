#include <iostream>

int main()
{
    //Напишете програма, която извежда числата от 1 до 100

    //while 
    int currentNumber = 1;
    while(currentNumber <= 100)
    {
        std::cout << currentNumber << std::endl;
        currentNumber++;
    }
   
    //do while
    int currentNumber = 1;
    do 
    {
        std::cout << currentNumber << std::endl;
        currentNumber++;        
    } while(currentNumber <= 100);

    //for
    for(int currentNumber = 1;currentNumber <= 100;currentNumber++)
    {
        std::cout << currentNumber << std::endl;
    }

    return 0;
}