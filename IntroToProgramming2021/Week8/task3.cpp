#include <iostream>

void uniteTwoArray(int* firstArray, int firstArrayLength, int* secondArray, int secondArrayLength, int* thirdArray)
{
    int indexFirstArray = 0, indexSecondArray = 0;
    int thirdArrayIndex = 0;
    while(indexFirstArray < firstArrayLength && indexSecondArray < secondArrayLength)
    {
        if(firstArray[indexFirstArray] < secondArray[indexSecondArray])
        {
            thirdArray[thirdArrayIndex++] = firstArray[indexFirstArray];
            indexFirstArray++;
        }
        else
        {
            thirdArray[thirdArrayIndex++] = secondArray[indexSecondArray];
            indexSecondArray++;
        }
    }

    while(indexFirstArray < firstArrayLength)
    {
        thirdArray[thirdArrayIndex++] = firstArray[indexFirstArray];
        indexFirstArray++;
    }

    while(indexSecondArray < secondArrayLength)
    {
        thirdArray[thirdArrayIndex++] = secondArray[indexSecondArray];
        indexSecondArray++; 
    }
}

void print(int* arrayOfNumbers, int length)
{
    for(int i = 0; i < length; i++)
    {
        std::cout << arrayOfNumbers[i] << std::endl;
    }
}

int main()
{
    // Да се напише функция , която , по подадени указатели към два сортирани масива и съответните им размери и 
    // подаден трети масив , слива първите два масива в третия , така че полученият масив отново да е сортиран ,
    // без да се прилага допълнително сорнитане . Приемаме , че масивите са от цели числа .
    int firstArray[] = {1, 3, 5};
    int secondArray[] = {2, 4};
    int thirdArray[1000];

    uniteTwoArray(firstArray, 3, secondArray, 2, thirdArray);
    print(thirdArray, 5);
    
    return 0;
}