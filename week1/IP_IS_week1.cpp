#include <iostream>
//iostream = input/output stream
using namespace std;

int main()
{
	//cout = console output
    //endl = end line
	//cin = console input

	/*int number;
	cout << "Insert number" << endl;
	cin >> number;
	cout << "The number is: ";
	cout << number << endl;
	
	int lastDigit = number % 10;	//присвояваме последната цифра от number
	int thirdDigit = (number / 10) % 10;	//присвояваме третата цифра
	int secondDigit = (number / 100) % 10;
	int firstDigit = number / 1000;
	
	cout << "First digit: " << firstDigit << endl;
	cout << "Second digit: " << secondDigit << endl;
	cout << "Third digit: " << thirdDigit << endl;
	cout << "Fourth digit: " << lastDigit << endl;
	cout << "Product is " << firstDigit * secondDigit * thirdDigit * lastDigit << endl;
	cin >> number >> lastDigit >> thirdDigit;*/
	
	//task 2
	/*
	int a, b, c;
	cin >> a >> b ;
	c = a;
	a = b;
	b = c;
	cout << a << " "<< b << endl;
	*/

	//task 3
	int num1, num2;
	bool k;
	cin >> num1 >> num2;
	k = !(num2 % num1);
	cout << boolalpha << k <<endl;





	return 0;
}
