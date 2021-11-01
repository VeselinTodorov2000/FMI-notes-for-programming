#include<iostream>

int main()
{  
    //Да се намерят всички тройки от числа, сумата на които е 20, така че да образуват страни на правоъгълен триъгълник
    for(int firstSide = 1; firstSide <= 20; firstSide++)
    {
        for(int secondSide = firstSide; secondSide <= 20; secondSide++)
        {
            for(int thirdSide = secondSide; thirdSide <= 20; thirdSide++)
            {
                if( thirdSide < firstSide + secondSide &&
                    (firstSide + secondSide + thirdSide) < 20 &&
                    (firstSide*firstSide + secondSide*secondSide) == thirdSide*thirdSide)
                    {
                        std::cout << firstSide << " " << secondSide << " " << thirdSide << std::endl;
                    }
                }
        }
    }
    return 0;
}