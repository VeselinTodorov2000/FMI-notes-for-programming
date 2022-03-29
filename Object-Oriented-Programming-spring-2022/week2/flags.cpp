#include <fstream>

int main()
{
    std::fstream out("input.txt", std::ios::in | std::ios::out | 
                                  std::ios::trunc | std::ios::ate |
                                  std::ios::binary | std::ios::app);
    return 0;
}