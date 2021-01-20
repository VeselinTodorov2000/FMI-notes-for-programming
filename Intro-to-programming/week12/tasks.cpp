#include <iostream>

struct Time
{
    int hour;
    int minute;
    int second;

    /*Time()
    {
        hour = 0;
        minute = 0;
        second = 0;
    }*/

    //until c++ 2008
    /*Time(int _hour, int _minute, int _second)
    {
        hour = _hour;
        minute = _minute;
        second = _second;
    }*/

    void print()
    {
        std::cout << hour << ":" << minute << ":" << second << std::endl;
    }
};


struct Gosho
{
    char surname[10];
    bool a, b;
    int age;
};

int main()
{   
    //c++11
    Time* t = new Time{12, 30, 45};
    (*t).print();
    t->print();

    delete t;

    //padding
    std::cout << "Gosho size -> " << sizeof(Gosho) << std::endl;

    return 0;
}