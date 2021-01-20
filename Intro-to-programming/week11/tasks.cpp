#include <iostream>
#include <cstring>
#include <cassert>
//example
char* mystrcat(const char *str1, const char *str2)
{
    char* concatenated = new char[strlen(str1) + strlen(str2) + 1];
    strcpy(concatenated, str1);
    strcat(concatenated, str2);
    return concatenated;
}


//task1
void print(int *arr, size_t size)
{
    for(size_t i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

int* task1(int *arr, size_t size)
{
    int* newarr = new int[size / 2];
    for(size_t i = 0; i <= size/2; i++)
    {
        newarr[i] = arr[i];
    }
    return newarr;
}


//task 2
void task2() 
{
    int size = 3;
    int** matrix = new int*[size];
    for(int i = 0; i < size; i++)
    {
        int n;
        std::cin >> n;
        matrix[i] = new int[n];
        for(int j = 0; j < n; j++)
        {
            std::cin >> matrix[i][j];
        }
        print(matrix[i], n);
    }


    for(int i = 0; i < size; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
}

//task 3
void task3(int*& arr, size_t size, size_t newsize)
{
    assert(size < newsize);
    int* newarr = new int[newsize];
    
    for(size_t i = 0; i < size; i++)
    {
        newarr[i] = arr[i];
    }
    delete[] arr;
    arr = newarr;
}

//task 4
int* task4(int* arr, size_t size)
{
    int* newarr = new int[size];
    for(int i = 0; i < size; i++)
    {
        newarr[i] = arr[i];
    }

    return newarr;
}

//task5
size_t cntDigits(size_t n)
{
    if(n < 10)
    {
        return 1;
    }
    return 1 + cntDigits(n/10);
}

char* toString(size_t n)
{
    size_t digits = cntDigits(n);
    char* converted = new char[digits + 1];
    converted[digits] = '\0';
    while(digits)
    {
        converted[--digits] = n%10 + '0';
        n/=10;
    }

    return converted;
}

int main()
{
    size_t num = 123;
    char* conv = toString(num);
    assert(conv[0] == '1');
    assert(conv[1] == '2');
    assert(conv[2] == '3');
    delete conv;
    return 0;
}