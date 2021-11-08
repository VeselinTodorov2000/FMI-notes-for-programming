#include <iostream>

int main()
{
    // Въведете размер на фигура - число в интервала [3,25]. Начертайте следната фигура
    // според въведения размер:
    
    int n;
    do
    {
        std::cin >> n;
    } while (n < 3 || n > 25);
    
    //първи ред
    for(int i = 0; i < n - 1; i++)
    {
        std::cout << ' ';
    }
    std::cout << "********" << std::endl;
    std::cout << std::endl;
    
    //средни редове
    for(int row = 1; row <= n - 2; row++)
    {
        for(int spaces = 0; spaces < n - row - 1; spaces++)
        {
            std::cout << ' ';
        }
        std::cout << "*   *";
        for(int spaces = 0; spaces < (row - 1) * 2; spaces++)
        {
            std::cout << ' ';
        } 
        std::cout << "*   *" << std::endl;
        std::cout << std::endl;
    }

    //последен ред
    std::cout << "*****";
    for(int spaces = 0; spaces < (n - 2) * 2; spaces++)
    {
        std::cout << ' ';
    }
    std::cout << "*****" << std::endl;
    return 0;
}