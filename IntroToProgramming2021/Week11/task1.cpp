#include <iostream>

struct Poly
{
    double coefs[50];
    size_t power;

    void print()
    {
        for(int i = power; i >= 0; i--)
        {
            std::cout << coefs[i] <<"*x^" << i << " ";
        }        
        std::cout << std::endl;
    }
};

void derivate(Poly& poly)
{
    for(int i = 0; i < poly.power; i++)
    {
        poly.coefs[i] = (i+1)*poly.coefs[i+1];
    }
    poly.power--;
}

int main()
{
    Poly p;
    p.coefs[0] = 2;
    p.coefs[1] = 3;
    p.coefs[2] = 5;
    p.power = 2;
    p.print();
    
    derivate(p);
    p.print();
    
    return 0;
}