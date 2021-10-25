#include <iostream>

int main()
{
    //От клавиатурата се въвежда естествено число. Намерете сбора на цифрите му.
    int number;
    std::cin >> number;
    int sum = 0;

    while(number)
    {
        sum += number % 10;
        number /= 10;
    }

    std::cout << sum << std::endl;
    
    return 0;
}