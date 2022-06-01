#include<iostream>
#include<exception>

int main()
{
    std::range_error e = std::range_error("You can't obtain this value!");
    std::cout << e.what() << std::endl;
    throw e;
    return 0;
}