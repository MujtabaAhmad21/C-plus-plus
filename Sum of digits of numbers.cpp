#include <iostream>
using namespace std;

int main() {
	cout << "Please enter a number";
	int num, digit, sum = 0;
	cin >> num;

	while (num > 0) 
	{
		digit = num % 10;
		num = num / 10;
		sum = sum + digit;

	}

	cout << "The sum of digits of your number is = " << sum;


	system("pause");
	return 0;
}