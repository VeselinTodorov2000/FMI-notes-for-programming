#include <iostream>

void swap(int& first, int& second)
{
    int temp = first;
    first = second;
    second = temp;
}

void print(int* arrayOfNumbers, int length)
{
    for(int i = 0; i < length; i++)
    {
        std::cout << arrayOfNumbers[i] << std::endl;
    }
}

void reverse(int* arrayOfNumbers, int length)
{
    for(int i = 0; i < length / 2; i++)
    {
        swap(arrayOfNumbers[i], arrayOfNumbers[length - i - 1]);
    }
}

int main()
{
    int arr[] = {1,2,3,4,5};
    reverse(5, arr);   
    print(arr, 5);
    return 0;
}