#include<iostream>

int main()
{  
    int countCombinations = 0;
    for(int first = 1; first <= 44; first++)
    {
        for(int second = first + 1; second <= 45; second++)
        {
            for(int third = second + 1; third <= 46; third++)
            {
                for(int fourth = third + 1; fourth <= 47; fourth++)
                {
                    for(int fifth = fourth + 1; fifth <= 48; fifth++)
                    { 
                        for(int sixth = fifth + 1; sixth <= 49; sixth++)
                        {
                            countCombinations++;
                        }
                    }
                }
            }  
        }
    }
    std::cout << countCombinations << std::endl;
    std::cout << 1.0 / countCombinations << std::endl;
    return 0;
}