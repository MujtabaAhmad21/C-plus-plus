#include <iostream>
using namespace std;

void convertdouble(double&);
void convertint(int&);

int main()
{
	double num1;
	int num2;
	cout << "Enter a positive value: \n";
	cin >> num1 >> num2;
	convertdouble(num1);
	convertint(num2);

	system("pause");
	return 0;
}

void convertdouble(double& value)
{
	if (value > 0)
	{
		double fictorial = 1.0;
		for (int i = 1; i <= value; i++)
		{
			fictorial *= i;
		}
		cout << "The fictorail of " << value << " is: " << fictorial << endl;
	}
	else if (value < 0)
	{
		cout << "The absolute value of " << value << " is: " << value * -1 << endl;
	}
	else
	{
		value = 42;
		cout << "The value is now:" << value << endl;
	}
}
void convertint(int& value)
{
	if (value % 2 == 0)
	{
		value = value * value * value;
		cout << "The cube of Even number: " << value << endl;
	}
	else if (value % 2 != 0)
	{
		int sum = 0;
		while (value != 0)
		{
			sum += value % 10;
			value = value / 10;
		}
		cout << "the sum of odd number digits is: " << sum << endl;
	}
	if (value % 3 == 0)
	{
		value = 100;
		cout << "The value as it is a amultiple of three it is now: " << value << endl;
	}
}
