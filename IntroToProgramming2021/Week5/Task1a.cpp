#include <iostream>

int main()
{
    // Да се напише булев израз, който проверява дали поне две от целите числа a, b и c
    // са неотрицателни и точно едно от тях се дели на 7.
    int a, b, c;
    std::cin >> a >> b >> c;

    bool areAAndBNonNegativeAndOneDividesBy7 = (a >= 0 && b >= 0) &&
                                               ((a % 7 == 0 && b % 7 != 0) || 
                                               (a % 7 != 0 && b % 7 == 0));
                                               
    bool areAAndCNonNegativeAndOneDividesBy7 = (a >= 0 && c >= 0) &&
                                               ((a % 7 == 0 && c % 7 != 0) || 
                                               (a % 7 != 0 && c % 7 == 0));

    bool areBAndCNonNegativeAndOneDividesBy7 = (b >= 0 && c >= 0) &&
                                               ((b % 7 == 0 && c % 7 != 0) || 
                                               (b % 7 != 0 && c % 7 == 0));

    bool areNonNegativeAndOneDividesBy7 = areAAndBNonNegativeAndOneDividesBy7 ||
                                          areAAndCNonNegativeAndOneDividesBy7 ||
                                          areBAndCNonNegativeAndOneDividesBy7;

    std::cout << areNonNegativeAndOneDividesBy7 << std::endl;
    return 0;
}