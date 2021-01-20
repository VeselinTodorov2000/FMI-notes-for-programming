#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
//task 1
//Abs
size_t Abs(int x)
{
    if(x < 0)
    {
        return -x;
    }
    return x;
}

//Pow
double Pow(double x, size_t p)
{
    double powered = 1;
    while(p)
    {
        powered*=x;
        p--;
    }
    return powered;
}

double Min(double x, double y)
{
    return (x < y) ? x : y;
}

double Max(double x, double y)
{
    return (x >= y) ? x : y;
}

double minOf3(double x, double y, double z)
{
    return Min(x, Min(y,z));
}

double maxOf3(double x, double y, double z)
{
    return Max(Max(x,y), z);
}

bool isAlpha(char symbol)
{
    return ('a' <= symbol && symbol <= 'z') || ('A' <= symbol && symbol <= 'Z');
}

bool isDigit(char x) 
{
	return ('0' <= x && x <= '9');
}

double average(int x, int y)
{
    return (double)(x+y)/2;
}

void testTask1()
{
    //abs
    cout << "-----Abs-----" << endl;
    cout << Abs(-5) << endl;
    cout << Abs(3) << endl;
    //pow
    cout << "-----Pow-----" << endl;
    cout << Pow(2,3) << endl; //8
    cout << Pow(-3,3) << endl; //-27

    //min
    cout << "-----Min-----" << endl;
    cout << Min(5, -6) << endl;
    cout << Min(2, 2) << endl;

    //max
    cout << "-----Max-----" << endl;
    cout << Max(5, -6) << endl;
    cout << Max(2, 2) << endl;

    //min of 3
    cout << "--min of 3--" << endl;
    cout << minOf3(21, 36, 30) << endl;
    cout << minOf3(5, 3 ,8) << endl;

    //max of 3
    cout << "--max of 3--" << endl;
    cout << maxOf3(21, 36, 30) << endl;
    cout << maxOf3(5, 3 ,8) << endl;

    //isAlpha
    cout << "--is Alpha--" << endl;
    cout << std::boolalpha << isAlpha('t') << endl;
    cout << std::boolalpha << isAlpha('3') << endl;
    cout << std::boolalpha << isAlpha('\0') << endl;

    //isAlpha
    cout << "--is Digit--" << endl;
    cout << std::boolalpha << isDigit('t') << endl;
    cout << std::boolalpha << isDigit('3') << endl;
    cout << std::boolalpha << isDigit('\0') << endl;

    //average
    cout << "--avg--" << endl;
    cout << average(5, 8) << endl;
    cout << average(3.14, 36) << endl;
}

//task 2
//unsigned int == size_t (4B)
bool isPrime(size_t x)
{
    for(int i = 2; i <= sqrt(x); i++)
    {
        if(x % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool areConnectPrimes(size_t x, size_t y)
{
    return (isPrime(x) && isPrime(y) && (x+2==y));
}

void testTask2()
{
    cout << std::boolalpha << areConnectPrimes(3,5) << endl;
    cout << std::boolalpha << areConnectPrimes(11,13) << endl;
    cout << std::boolalpha << areConnectPrimes(2,3) << endl;
}

int main()
{
    //testTask1();
    //testTask2();
    return 0;
}

