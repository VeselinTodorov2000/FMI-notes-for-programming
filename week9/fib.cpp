#include <iostream>
using namespace std;
//Напишете рекурсивна функция, която по дадено естествено число n намира n-тото число на Фибоначи.

int fibbonacci(int n)
{
    if(n <= 2)
    {
        return 1;
    }
    return fibbonacci(n-1) + fibbonacci(n-2);
}

int helper(int n, int fib1, int fib2)
{
    if(n <= 1)
    {
        return fib2;
    }
    return helper(n-1, fib2,fib1 + fib2);
}

//6 -> 8
//6 1 1
//5 1 2
//4 2 3
//3 3 5
//2 5 8
//1 -> 8

int fibbonacciIter(int n)
{
    return helper(n, 1, 1);
}

int main()
{

}
