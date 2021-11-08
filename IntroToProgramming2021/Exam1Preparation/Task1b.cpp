#include <iostream>
#include <cmath>

int main()
{
    // б) Да се напише програма, която по координати на точка в равнината определя дали
    // точката принадлежи на оцветената част на фигурата (включително и контура).    
    const double radius = 2;
    double x, y;
    std::cin >> x >> y;

    bool isYInRange = -2 <= y && y <= 2;
    bool isInTheRightHalfCircle = (0 <= x && x <= 2) && isYInRange &&
                                    sqrt((2 - x) * (2 - x) + (y * y)) <= radius;

    bool isInTheLeftHalfCircle = (-2 <= x && x <= 0) && isYInRange &&
                                sqrt((x + 2) * (x + 2) + (y * y)) <= radius;

    std::cout << std::boolalpha << (isInTheLeftHalfCircle || isInTheRightHalfCircle) << std::endl;
}