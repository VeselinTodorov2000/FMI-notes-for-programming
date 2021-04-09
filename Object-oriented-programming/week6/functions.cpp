#include <iostream>
#include <functional>
#include <vector>

template<typename T>
using myFunc = T (*) (T);

double plus1(double x)
{
    return x+1;
}

//map & filter

void map(std::vector<double>& sal, std::function<double(double)> mapFunction)
{
    for(int i = 0; i < sal.size(); i++)
    {
        sal[i] = mapFunction(sal[i]);
    }
}

void testMap()
{
    std::vector<double> sal;
    sal.push_back(123.45);
    sal.push_back(256.8);
    sal.push_back(359.89); 
    sal.push_back(314.59);
    sal.push_back(666.6);
    sal.push_back(792.3);
    sal.push_back(442.5);
    sal.push_back(858.5);

    //multiply by 2
    map(sal, [] (double x) -> double {return x*2;});

    for(int i = 0; i < sal.size(); i++)
    {
        std::cout << sal[i] << " " << std::endl;
    } 
    std::cout << "\n";
}

//filter
std::vector<double> filter(std::vector<double>& sal, std::function<bool(double)> filterFunction)
{
    std::vector<double> filtered;
    for(int i = 0; i < sal.size(); i++)
    {
        if(filterFunction(sal[i]))
        {
            filtered.push_back(sal[i]);
        }
    }

    return filtered;
}

void testFilter()
{
    std::vector<double> sal;
    sal.push_back(123.45);
    sal.push_back(256.8);
    sal.push_back(359.89); 
    sal.push_back(314.59);
    sal.push_back(666.6);
    sal.push_back(792.3);
    sal.push_back(442.5);
    sal.push_back(858.5);

    std::vector<double> filtered = filter(sal, [] (double x) -> bool {return x >= 500;});
    for(int i = 0; i < filtered.size(); i++)
    {
        std::cout << filtered[i] << " ";
    }
    std::cout << "\n";
}

int main()
{
    //std::function
    myFunc<double> f = plus1;
    std::function<double(double)> d(f);
    std::cout << d(5) << std::endl;
    std::cout << f(3) << std::endl;

    std::cout << sizeof(d) << std::endl;
    
    //lambdas
    std::cout << "----------" << std::endl;

    d = [] (double x) -> double { return x+3; };
    std::cout << d(5) << std::endl; //8
    
    //map
    testMap();
    
    std::cout << "----------------------" << std::endl;
    //filter
    testFilter();

    return 0;
}