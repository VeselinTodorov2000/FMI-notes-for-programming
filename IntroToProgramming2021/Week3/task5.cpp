#include <iostream>

int main()
{
    //power
    int number, power;
    std::cin >> number >> power;
    int poweredNumber = 1;
    
    for(int timesPowered = 1; timesPowered <= power; timesPowered++)
    {
        poweredNumber *= number;
    } 

    std::cout << poweredNumber << std::endl;
    return 0;
}