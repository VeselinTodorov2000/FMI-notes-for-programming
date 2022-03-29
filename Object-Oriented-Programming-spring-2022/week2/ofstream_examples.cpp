#include <iostream>
#include <fstream>

int main()
{
    std::ofstream out;
    out.open("example.is");
    out << "This is an example" << std::endl;
    out.close();

    //open a stream with your fn as a name and print on it
    //three names and faculty number on two separate rows
    std::ofstream fn("fn71923.txt");
    if(fn.is_open())
    {
        fn << "Veselin Slavov Todorov" << std::endl;
        fn << "71923";
        fn.close();
    }
    else
    {
        std::cout << "No file opened" << std::endl;
    }
    return 0;
}