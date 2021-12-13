#include <iostream>
#include <cstring>

// Задача 1. Да се дефинира функция strduplicate, която създава
// копие на символен низ. Функцията да се грижи за заделянето на памет
// за новия низ.
char* strduplicate(const char* source)
{
    char* copy = new char[strlen(source) + 1];
    strcpy(copy, source);
    return copy;
}

int main()
{
    char* copy = strduplicate("I <3 Love");
    std::cout << copy << std::endl;
    delete[] copy;
    return 0;
}