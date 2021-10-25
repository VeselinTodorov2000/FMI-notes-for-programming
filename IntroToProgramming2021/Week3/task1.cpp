#include <iostream>

int main()
{
    //въвеждане на броя числа
    int numbersCount;
    std::cin >> numbersCount;
    int sum = 0;
    
    //въвеждане на отделните числа
    //събиране на всички числа докато не срещнем 0
    for(int currentNumberCount = 0; currentNumberCount < numbersCount; currentNumberCount++)
    {
        int currentNumber;
        std::cin >> currentNumber;
        if(currentNumber == 0)
        {
            break;    
        }
        else
        {
            sum += currentNumber;
        }
    }
    
    //извеждане на сумата
    std::cout << sum << std::endl;    
    return 0;
}




