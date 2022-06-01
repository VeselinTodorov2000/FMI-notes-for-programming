#include <iostream>
#include <functional>

template<typename T>
void swap(T& first, T& second)
{
    T temp = first;
    first = second;
    second = temp;
}

int plusOne(int a)
{
    return a + 10;
}

void map(int* arr, size_t size, std::function<int(int)> mapFunction) 
{
    for(int i = 0; i < size; i++) 
    {
        arr[i] = mapFunction(arr[i]);
    }
}

int main()
{
    int a = 2, b = 5;
    // template<typename T>
    // std::function<void(T,T)> swappingFunction = swap;
    // swappingFunction(a, b);

    int arr[] = {1,2,3,4,5};
    map(arr, 5, plusOne);

    for(int i = 0; i < 5; i++) 
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}