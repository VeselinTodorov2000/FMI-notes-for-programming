#include <iostream>

//task 1
template<typename T>
void input(T* array, int n)
{
    for(int i = 0; i < n; i++)
    {
        std::cin >> array[i];
    }
}

template<typename T>
void print(T* array, int n)
{
    for(int i = 0; i < n; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

//task 2
template<typename T>
bool ordered(T* array, int n)
{
    for(int i = 0; i < n-1; i++)
    {
        if(!(array[i] < array[i+1]))
        {
            return false;
        }
    }
    return true;
}

//task 3
template<typename T>
bool member(T* array, int n, T x)
{
    for (size_t i = 0; i < n; i++)
    {
        if(array[i] == x)
        {
            return true;
        }
    }
    return false;
}


int main()
{
//    bool booleanArr[5];
//    input(booleanArr, 5);
//    print(booleanArr, 5);


    return 0;
}