#pragma once
#include <iostream>
#include <fstream>
#include <string>

class Circle
{
    private:
    int cx, cy, r;
    std::string label;

    public:
    Circle () {}
    Circle(int _cx, int _cy, int _r) : cx(_cx), cy(_cy), r(_r)
    {
        label = "Circle";
    }

    void setCX(int _cx)
    {
        cx = _cx;
    }
    void print(const char* fileName)
    {
        std::ofstream output(fileName, std::fstream::app);
        output << label << " " << cx << " " << cy << " " << r << std::endl;
        output.close();
    }
};