#include<iostream>

int main()
{
    int sum = 0;
    for(int i = 100; i <= 200; i++)
    {
        if(i % 9 == 0)
        {
            sum += i;
        }
    }
    std::cout << sum << std::endl;
    return 0;
}