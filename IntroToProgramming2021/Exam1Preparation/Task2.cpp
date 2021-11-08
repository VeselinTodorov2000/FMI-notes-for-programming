#include <iostream>

int main()
{
    // Да се напише програма, която прочита от стандартния вход естествено число и
    // отпечатва числото, образувано само от нечетните цифри на подаденото, умножено по
    // две.
    // Вход: 123456, Изход: 270
    // Вход: 223441, Изход: 62
    // Вход: 559, Изход: 1118
    // Вход: 24242, Изход: 0

    int number;
    std::cin >> number;

    int reversedOddDigitsNumber = 0;
    while(number)
    {  
        if(number % 2 != 0)
        {
            reversedOddDigitsNumber += number % 10;
            reversedOddDigitsNumber *= 10;
        }
        number /= 10;
    }
    reversedOddDigitsNumber /= 10;

    int oddDigitsNumber = 0;
    while(reversedOddDigitsNumber)
    {
        oddDigitsNumber += reversedOddDigitsNumber % 10;
        oddDigitsNumber *= 10;
        reversedOddDigitsNumber /= 10;
    }
    oddDigitsNumber /= 10;

    std::cout << oddDigitsNumber * 2 << std::endl;
    return 0;
}