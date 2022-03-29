#include <iostream>
#include <fstream>

int main()
{
    int numbers[20];
    std::ifstream in("input.txt");
    if(in.is_open())
    {
        int i = 0;
        while(in >> numbers[i])
        {
            in >> numbers[i];
            i++;
        }
    }
    else
    {
        std::cout << "No file opened" << std::endl;
    }
    in.close();

    for(int i = 0; i < 20; i++)
    {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    //10 rows
    //input.txt -> ... -> output.txt
    return 0;
}