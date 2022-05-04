#include <iostream>
#include <vector>

class Figure 
{
    public:
    virtual double area() = 0;
};

class Circle : public Figure
{
    private:
    double radius;

    public:
    Circle()
    {
        radius = 5;
    }

    double area()
    {
        return 3.14*radius*radius;
    }
};

class Rectangle : public Figure
{
    private:
    double width;
    double height;

    public:
    Rectangle() {
        width = 5;
        height = 10;
    }
    double area() 
    {
        return width*height;
    }
};

class Triangle : public Figure
{
    private:
    double sideA;
    double sideB;
    double sideC;

    public:
    double area() 
    {
        return 40;
    }
};

int main() 
{
    std::vector<Figure*> figures;
    figures.push_back(new Rectangle());
    figures.push_back(new Rectangle());
    figures.push_back(new Rectangle());
    figures.push_back(new Circle());
    figures.push_back(new Triangle());
    figures.push_back(new Triangle());

    for(int i = 0; i < figures.size(); i++)
    {
        std::cout << figures[i]->area() << std::endl;
    }

    return 0;
}