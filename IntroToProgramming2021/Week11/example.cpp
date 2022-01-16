#include <iostream>
#include <cmath>

struct Point
{
    double x; 
    double y; 
    double z;
    //constructor
    Point()
    {
        x = 0;
        y = 0;
        z = 0;        
    }

    Point(double x, double y, double z)
    {
        this->x = x;
        this->y = y;
        this->z = z;        
    }

    Point(const Point& otherPoint)
    {
        x = otherPoint.x;
        y = otherPoint.y;
        z = otherPoint.z;        
    }

    void print()
    {
        std::cout << "x=" << x << " y=" << y << " z=" << z << std::endl;
    }
};

double distanceBetweenPoints(Point p1, Point p2)
{
    double diagonal = sqrt((p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y));
    return sqrt(diagonal*diagonal + (p1.z-p2.z)*(p1.z-p2.z));
}

int main()
{
    Point p1(3,5,4);
    std::cout << sizeof(p1) << std::endl;
    // std::cout << distanceBetweenPoints(0, 0, 1, 1)<< std::endl;
    return 0;
}