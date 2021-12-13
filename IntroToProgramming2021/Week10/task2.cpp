#include <iostream>

// Задача 2. Да се дефинира функция, която преобразува положително 
// цяло число в съответния му символен низ и връща така построения
// символен низ.
int countDigitsInNumber(int number)
{
    if(number < 10) 
    {
        return 1;
    }

    int cnt = 0;
    while(number != 0)
    {
        cnt++;
        number /= 10;
    }
    return cnt;
}

char* intToString(int number)
{
    int length = countDigitsInNumber(number);
    char* converted = new char[length + 1];
    converted[length--] = 0;
    while(length >= 0) 
    {
        converted[length--] = (number % 10) + '0';
        number /= 10;
    }

    return converted;
}

int main()
{
    char* str = intToString(150);
    std::cout << str << std::endl;
    return 0;
}