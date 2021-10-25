#include <iostream>

int main()
{
    //Програмата трябва да прочете едно цяло число n и да изведе всички 
    //естествени числа от 1 до n на екрана, разделени с интервали.
    int n;
    std::cin >> n;
    
    for(int current = 1; current <= n; current++)
    {
        std::cout << current << " ";
    }
    std::cout << std::endl;
    return 0;
}