#include <iostream>

int main()
{
    int x = 5; //10000101
    std::cout << x << std::endl; //value
    std::cout << &x << std::endl; //address in memory

    //pointer declaration
    int *pointerToX = &x;
    std::cout << pointerToX << std::endl;
    std::cout << *pointerToX << std::endl;

    std::cout << sizeof(int*) << std::endl; //4
    std::cout << sizeof(double*) << std::endl; //4
    std::cout << sizeof(bool*) << std::endl; //4

    // int *x, y, *z;
    //x - pointer
    //y - variable
    //z - pointer

    std::cout << "---------------------" << std::endl;
    int arr[10];
    arr[0] = 15;
    arr[1] = 12;
    std::cout << arr << std::endl;
    std::cout << &arr[0] << std::endl;
    std::cout << arr + 1 << std::endl;
    std::cout << &arr[1] << std::endl;
    std::cout << arr + 2 << std::endl;
    std::cout << &arr[2] << std::endl;

    std::cout << *arr + 1 << std::endl;
    std::cout << *(arr + 1) << std::endl;

    //arr[1] = *(arr + 1) = *(1 + arr) = 1[arr]

    int* const ptr1 = arr; //pointer cannot change value
    const int* ptr2; //pointer have to point to a constant

    int* pointToNothing = nullptr;
    // int* pointToNothing = NULL; - September

    
}