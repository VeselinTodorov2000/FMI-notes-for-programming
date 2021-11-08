#include <iostream>
#include <cmath>
int main()
{
    //б) Да се напише програма, която по координати на точка в равнината определя дали
    //точката принадлежи на оцветената част на фигурата (включително и контура).
    double x, y;
    std::cin >> x >> y;
    const int radius = 2;

    bool isInTheUpperPartOfFigure = (-2 <= x && x <= 2) && (0 <= y && y <= 2);

    double distanceFromCenter = sqrt((x * x) + (y + 2)*(y + 2));
    bool isInTheBottomPartOfFigure = (-2 <= x && x <= 2) && (-2 <= y && y <= 0)
                                    && distanceFromCenter > radius;
    
    if(isInTheUpperPartOfFigure || isInTheBottomPartOfFigure)
    {
        std::cout << "Point is in the figure" << std::endl;
    }
    else
    {
        std::cout << "Point is not in the figure" << std::endl;
    }
    return 0;
}