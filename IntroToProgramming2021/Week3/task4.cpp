#include <iostream>

int main()
{
    //n!
    int n;
    std::cin >> n;
    int factoriel = 1;

    while(n > 1) {
        factoriel *= n;
        n--;
    }  

    std::cout << factoriel << std::endl; 
    return 0;
}