#include <iostream>
int* cnt()
{
    int* cnt = new int[5];
    return cnt;
} 

int main()
{
    int* a = cnt();
    int* ptr = new int(); //not used at all, but not prohibited
    delete[] ptr;
    return 0;
}