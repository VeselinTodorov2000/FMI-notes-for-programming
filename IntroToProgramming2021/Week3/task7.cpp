#include <iostream>

int main()
{
    //проверка дали дадено число е просто
    int number;
    std::cin >> number;

    int countDenominators = 0;
    for(int toCheck = 1; toCheck <= number; toCheck++)
    {
        if(number % toCheck == 0)
        {
            countDenominators++;
        }
    }

    std::cout << std::boolalpha << (countDenominators == 2) << std::endl;
}