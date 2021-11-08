#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    //print first row
    std::cout << "*****";
    for(int i = 0; i < (n - 2) * 2; i++)
    {
        std::cout << ' ';
    }
    std::cout << "*****" << std::endl;
    std::cout << std::endl;
    
    //print middle rows
    for(int row = 1; row <= n - 2; row++)
    {
        for(int i = 0; i < row; i++)
        {
            std::cout << ' ';
        }
        std::cout << "*   *";
        for(int i = 0; i < (n - 2 - row) * 2; i++)
        {
            std::cout << ' ';
        }
        std::cout << "*   *" << std::endl;
        std::cout << std::endl;
    }

    //print last row
    for(int i = 0; i < n - 1; i++)
    {
        std::cout << ' ';
    }
    std::cout << "********" << std::endl;

    return 0;
}