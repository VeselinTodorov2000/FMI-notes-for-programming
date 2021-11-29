#include <iostream>

void swap(int& first, int& second)
{
    int temp = first;
    first = second;
    second = temp;
}

int main()
{
    int a = 5, b = 3;
    swap(a, b);
    std::cout << a << " " << b << std::endl;
}