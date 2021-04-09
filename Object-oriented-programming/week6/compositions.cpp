#include <iostream>
#include <functional>
#include <vector>


//[f][g][h] x = h(g(f(x)))
double composition(std::vector<std::function<double(double)>> functions, double x)
{
    for(int i = 0; i < functions.size(); i++)
    {
        x = functions[i](x);    
        std::cout << x << std::endl;
    }
    return x;
}

double f(double x)
{
    return x/2;
}

double g(double x)
{
    return x + 10;
}

double h(double x)
{
    return x*x;
}

//x = 3
//h(g(f(x))) = h(g(1.5)) = h(11.5) = 11.5^2 ~ 132

int main()
{
    std::vector<std::function<double(double)>> funcs;
    funcs.push_back(f);
    funcs.push_back(g);
    funcs.push_back(h);

    std::cout << composition(funcs, 3) << std::endl;   
    return 0;
}