#include <iostream>
using namespace std;

int main()
{
    /*int year;
    cin >> year;

    if(year % 400 == 0){
        cout << "The year is leap." << endl;
    }
    else if(year % 4 == 0 && year % 100 != 0){
        cout << "The year is leap." << endl;
    }
    else {
        cout << "The year is not leap." << endl;
    }*/
    /*
    char symbol;
    cin >> symbol;

    if('a' < symbol && symbol < 'z')
    {
        cout << "upper case is " << char(symbol - ('a' - 'A'));
    }
    else if('A' < symbol && symbol < 'Z')
    {
        cout << "lower case is " << char(symbol + ('a'-'A'));
    }
    else
    {
        cout << "not a letter";
    }
    cout << endl;
    return 0;*/

    int tt1, tt2, tt3;
    cin >> tt1 >> tt2 >> tt3;
    double h1,h2;
    cin >> h1 >> h2;
    double k1, k2;
    cin >> k1 >> k2;
    

    bool free = ((k1+k2)/2 >= 4.50) && ((h1+h2)/2 >= 5.00);
    
    double PE;
    cin >> PE;
    
    bool allowed = tt1 >= 10 && tt2 >= 10 && tt3 >= 6 && (free || PE >= 3);

    double t1,t2;
    bool taken = allowed && t1 >= 3.00 && t2 >= 3.00; 
}