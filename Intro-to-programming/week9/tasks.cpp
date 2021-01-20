#include <iostream>
using std::cin;
using std::cout;
using std::endl;

size_t factorial(size_t n)
{
    if(n <= 1)
    {
        return 1;
    }
    return n*factorial(n-1);
}

//f(5) = 5*f(4) = 5*4*f(3) = 5*4*3*f(2) = 5*4*3*2*f(1) = 5*4*3*2*1 = 120

size_t helper(size_t n, size_t product)
{
    if(n <= 1)
    {
        return product;
    }
    return helper(n-1, product*n);
}
//n product
//5 1
//4 5
//3 20
//2 60
//1 120
//
size_t factIter(size_t n)
{
    //if(n <= 1)
    //{
    //    return 1;
    //}
	return helper(n, 1);
}



int main()
{
    cout << factIter(7) << endl;
}





