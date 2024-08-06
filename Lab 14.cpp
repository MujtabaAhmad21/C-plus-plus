#include <iostream>
using namespace std;

int divideFunction(int &num1, int &num2) 
{
	int remainder;
	remainder = num1 % num2;
	num1 = num1 / num2;
	return remainder;
}

int main() 
{
	int num1, num2;
	cout << "Please enter two numbers: " << endl;
	cin >> num1 >> num2;
	cout << "Remainder: " << divideFunction(num1, num2) << endl << "Quotient: " << num1 << endl;
	system("pause");
	return 0;
}