#include <iostream>

/*
void swap(int& fst, int& snd)
{
    int temp = fst;
    fst = snd;
    snd = temp;
}

void swap(char& fst, char& snd)
{
    char temp = fst;
    fst = snd;
    snd = temp;
}

void swap(double& fst, double& snd)
{
    double temp = fst;
    fst = snd;
    snd = temp;
}*/

template<typename T> //C++11
void swap(T& fst, T& snd)
{
    T temp = fst;
    fst = snd;
    snd = temp;
}

template<typename First, typename Second>
void printArray(First* fst, Second* snd, size_t size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << fst[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "----------------------" << std::endl;

    for(int i = 0; i < size; i++)
    {
        std::cout << snd[i] << " ";
    }
    std::cout << std::endl;
}

template<typename T, typename K>
K func(T& fst, K& snd)
{
    snd = fst;
    return snd;
}

//functions
template<typename T>
bool greaterLT(T& fst, T& snd)
{
    return fst > snd;
}

template<typename T>
bool greaterRT(T& fst, T& snd)
{
    return snd > fst;
}

template<typename T>
using Comparator = bool (*) (T&, T&);

template<typename T>
void sort(T* array, int n, Comparator<T> comp);

int main()
{
 //   int a = 5;
 //   int b = 7;

 //  swap<int>(a, b);
 //  std::cout << a << " " << b << std::endl;
    
 //  int arr[] = {1, 2, 3, 4, 5};
 //  char arr1[] = {'a', 'b', 'c', 'd', 'e'};

 //  printArray<int, char>(arr, arr1, 5);
    
    bool (*comparator) (int&, int&);

    comparator = greaterLT;
    /*
    bool (*comparator) (int&, int&);
    bool (*greaterLT) (int&, int&)
    bool greaterLT(int&, int&)
    */
    
    int a = 3;
    int b = 2;
    std::cout << comparator(a, b) << std::endl; //1
    std::cout << comparator(b, a) << std::endl; //0

    comparator = greaterRT;
    std::cout << comparator(a, b) << std::endl; //0
    std::cout << comparator(b, a) << std::endl; //1
    
    Comparator<int> comp = greaterRT<int>;
    std::cout << comp(a, b) << std::endl;
    return 0;
}