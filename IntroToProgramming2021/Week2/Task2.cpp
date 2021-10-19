#include<iostream>
#include<cmath>

int main()
{
    // Нека приемем числата n и m от конзолата. Ако m е делител на n, то
    // да се изведе дали квадратът на числото m е по-голям от корена от
    // куба на n. Внимавайте!
    int n, m;
    std::cin >> n >> m;

    bool isDivisor = n % m == 0;
    if(isDivisor) 
    {
        std::cout << (m*m > sqrt(n*n*n)) << std::endl;
    }

    //4 2
    //4 /64 -> 8
    return 0;
}