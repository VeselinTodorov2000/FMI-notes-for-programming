#include <iostream>

int main()
{
    //единица в записа
    bool hasOne = false;
    int number;
    std::cin >> number;

    while(number != 0)
    {
        if(number % 10 == 1)
        {
            hasOne = true;
            break;
        }
        number /= 10;
    }

    std::cout << std::boolalpha << hasOne << std::endl;
    return 0;
}