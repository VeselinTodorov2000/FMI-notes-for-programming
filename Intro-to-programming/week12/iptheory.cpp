#include <iostream>

int main()
{
//    int a = 10, b = !!a; 
//    if( !(b = !a)) b += !false;
//    std::cout << a * 5 + b * a + (!!4 * 012) * true;

//    double grades[6] = {6, 5, 4, 3, 2, 4};
//    double sum = 0;
//    for(int i = 0; i < 6; i++)
//    {
//        sum += grades[i];
//    }
//    std::cout << "Average is " << sum / 6;
    
    int value = 0xA; //10
    switch (value)
    {
        case 012: std::cout << "Am I right ?"; break; //10
        case 010: std::cout << "Or maybe me ?"; break; //8
        case '10': std::cout << "Or me ?"; break; //
        default: std::cout << "No one is right!!!"; break;
    }
}
