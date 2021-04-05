#include <iostream>
#include <fstream>
#include <string>

class Rectangle
{
    private:
    int width, height, color;
    std::string label;
    public:
    
    Rectangle() {}
    
    Rectangle(int _width, int _height, int _color) : width(_width), height(_height), color(_color)
    {
        label = "Rectangle";
    }

    void print(const char* fileName)
    {
        std::ofstream output(fileName, std::fstream::app);

        output << label << " " << width << " " << height << " " << color << std::endl;
    }
};