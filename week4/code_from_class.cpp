#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    //task 1
    int n;
    cout << "n = ";
    cin >> n;
    int toPrint = 1;
    for (int i = 1; i <= n; ++i)
    {
        if(i == n)
        {
            cout << toPrint;
            break;
        }
        cout << toPrint << " + ";
        toPrint = (toPrint*10) + 1;
        cout << endl;
    }

    //task 2
    int sum = 0;
    for(int i = 100; i <= 200; i++)
    {
        if(i % 9 == 0)
        {
            sum += i;
        }
    }
    cout << sum << endl;
    

    //task 3
    int num, reversed = 0, copy, digit;
    cin >> num;
    copy = num;
    while(num) // while(num!=0)
    {
        digit = num%10;
        reversed = reversed*10 + digit;
        num/=10;
    }
    cout << reversed << endl;
    if(copy == reversed)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not a palindrome" << endl;
    }
    

    
    //task 4
    int num, reversed = 0;
    cin >> num;
    while(num) // while(num!=0)
    {
        reversed = reversed*10 + num%10;
        num/=10;
    }
    cout << reversed << endl;

    //task 5
    int n;
    cin >> n;
    //first half
    for(int row = 1; row <= n; row++)
    {
        //spaces at beginning
        for(int space = 0; space < n - row; space++)
        {
            cout << ' ';
        }
        //stars to print
        for(int start = 0; start < 2*row - 1; start++)
        {
            cout << '*';
        }
        cout << endl;
    }

    //bottom half
    for(int row = 1; row < n; row++)
    {
        //spaces at beginning
        for(int space = 0; space < row; space++)
        {
            cout << ' ';
        }
        //stars to print
        for(int start = 0; start < 2*(n-row) - 1; start++)
        {
            cout << '*';
        }
        cout << endl;
    }

    //task 6
    int num1, lastDigit;
    cin >> num1;
    lastDigit = num1 % 10;
    while(num1 >= 10)
    {
        num1 = num1/10;
    }
    cout << std::boolalpha << (num1 == lastDigit) << endl;

    //from previous class
    int a, b;
    cin >> a >> b;
    for(int cnt = 0;a<=b; a++)
    {
        for(int currentDel = 2; currentDel <= a/2; currentDel++)
        {
            if(a % currentDel == 0)
            {
                cnt++;
            }
        }
        
        if(a == 1)
        {
            continue;
        }
        if(cnt == 0)
        {
            cout << a << " ";
        }
        cnt = 0;
    }

    return 0; //sponsored by Andon Denkov
}