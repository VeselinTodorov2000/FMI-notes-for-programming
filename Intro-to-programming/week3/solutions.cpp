#include<iostream>
using namespace std;

int main()
{
    //task 1
    /*
    int n, current, greatestNegative = INT_MIN;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin>>current;
        if(current < 0 && current > greatestNegative)
        {
            greatestNegative = current;
        }
    }
    cout << greatestNegative << endl;
    */

    //task 2
    /*int n, product = 1;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        product*=i;
    }
    cout << product;*/

    //task 3
    /*int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cout << i*i + 3*i << endl;
    }*/

    //task 4
    /*
    int n,a,powered;
    cin >> a >> n;
    powered = a;
    for(int i = 1; i < n; i++)
    {
        powered *= a;
    }
    cout << powered << endl;*/

    //task 5
    /*int n, fib1 = 1, fib2 = 1,temp;
    cin >> n;
    for(int i = 2; i < n; i++)
    {
        temp = fib2;
        fib2 = fib1+fib2;
        fib1 = temp;
    }
    cout << fib2 << endl;*/

    //task 6
    /*int start,end,product = 1;
    cin >> start >> end;
    for(;start <= end; start++)
    {
        product*=start;
    }
    cout << product << endl;*/

    //task 7
    /*int n, cntDels = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            cntDels++;
        }
    }   

    cout << boolalpha << (cntDels == 2) << endl;*/

    //task 8
    
    //task 9
    /*int rows, current = 1;
    cin>>rows;
    for(int i = 1; i <= rows; i++)
    {
        for(int column = 0; column < i; column++)
        {
            cout << current << " ";
            current++;
        }
        cout << endl;
    }*/

    //task 11
    /*int n;
    cin >> n;
    int inBinary = 0;
    int i = 10;
    while(n!=0)
    {
        int current = n%2;
        n/=2;
        inBinary = inBinary+current*i;
        i*=10;  
    }
    cout << inBinary/10;*/ 
}