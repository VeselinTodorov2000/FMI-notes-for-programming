#include <iostream>

using namespace std;

int main()
{
  //task 0
  cout << "Geometriqta e nai-lesniq izpit!" << endl;
  //alternate solution
  //cout << "Geometriqta e nai-lesniq izpit! \n";

  //task 1
  cout << "Enter a number" << endl;
  int number;
  cin >> number; //2514
  int firstDigit = number/1000; //2514/1000 = 2
  int secondDigit = (number/100)%10; //(2514/100)%10 = 25%10 = 5
  int thirdDigit = (number/10)%10; //(2514/10)%10 = 251%10 = 1
  int fourthDigit = number%10; //2514%10 = 4
  cout << "first digit: " << firstDigit << endl
       << "second digit: " << secondDigit << endl
       << "third digit: " << thirdDigit << endl
       << "fourth digit: " << fourthDigit << endl
       << "product: " << firstDigit*secondDigit*thirdDigit*fourthDigit << endl; //2*5*1*4 = 40

//task 2
int a = 21, b = 30;

int temp = a; //21
a = b; //temp = 21, a = 30, b = 30
b = temp; //temp = 21, a = 30, b = 21
cout << "a = " << a << " b = "<< b << endl;

//task 3
int num1, num2;
cout << "Enter first number: ";
cin >> num1;
cout << "Enter second number: ";
cin >> num2;

cout << boolalpha << !(num1%num2) << endl; 
}
