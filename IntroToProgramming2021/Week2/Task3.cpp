#include<iostream>
#include<cmath>

int main()
{
    // Напишете програма, смятаща квадратно уравнение.
    // a*x^2 + b*x + c = 0
    // x1/2 = -b +- sqrt(D) / 2*a
    // D = b^2 - 4*a*c 

    int a = 1;
    int b = 5;
    int c = 6;

    double D = b*b - 4*a*c;

    if(D > 0)
    {
        double x1 = (-b - sqrt(D)) / (2*a);
        double x2 = (-b + sqrt(D)) / (2*a);
        std::cout << "x1=" << x1 << " x2=" << x2 << std::endl;
    }
    else if(D == 0)
    {
        double x1 = -b / (2*a);
        std::cout << "x1=" << x1 << std::endl;
    }
    else
    {
        std::cout << "No solution" << std::endl;
    }
    return 0;
}










