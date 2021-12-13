#include <iostream>
#include <cstring>

char* mystrcat(const char* firstString, const char* secondString)
{
    char* concatenatedString = new char[strlen(firstString) + strlen(secondString) + 1];
    strcpy(concatenatedString, firstString);
    strcat(concatenatedString, secondString);
    return concatenatedString;
}

int main()
{
    char* str = mystrcat("Hello", " world");
    std::cout << str << std::endl;
    delete[] str;
    return 0;
}