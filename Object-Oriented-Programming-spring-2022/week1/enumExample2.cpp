#include <iostream>

enum TreeType
{
    OAK,
    BIRCH,
    PALM,
    SPRUCE,
    ACACIA
};

int main()
{
    TreeType t = (TreeType) 0; 

    std::cout << sizeof(TreeType) << std::endl;
    return 0;
}