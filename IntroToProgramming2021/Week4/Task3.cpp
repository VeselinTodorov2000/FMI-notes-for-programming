#include <iostream>

int main()
{
// Вход: 5                                                                  
//    *                                                                  
//   ***                                                                 
//  *****                                                                
// *******                                                               
//*********                                                              
// *******                                                               
//  *****                                                                
//   ***                                                                 
//    *   

    int n;
    std::cin >> n;

    for(int row = 1; row <= n; row++)
    {
        for(int spaces = 0; spaces < n - row; spaces++)
        {
            std::cout << " ";
        }
        for(int asterisk = 1; asterisk <= 2*row - 1; asterisk++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    for(int row = 1; row < n; row++)
    {
        for(int spaces = 0; spaces < row; spaces++)
        {
            std::cout << " ";
        }
        for(int asterisk = 1; asterisk <= 2*(n-row) - 1; asterisk++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }


    return 0;
}