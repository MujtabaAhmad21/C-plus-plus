#include <iostream>
using namespace std;

int main()
{
	bool incorrectInput = false;
	int integer, convBase = 0 , conversion, remainder, quotient, converted = 0;
	cout << "Please enter an integer value in base 10. ";
	cin >> integer;
	cout << "Please enter 1 if you want to convert integer into base 2 and \n";
	cout << "enter 2 if you want to convert integer into base 8. \n";
	int yourInteger = integer;


	do
	{
		if (incorrectInput == true)
		{
			cout << "Incorrect input, please enter again\n";
		}
		cin >> conversion;
		//cout << "Incorrect input, please try again. \n";
		if (conversion == 1)
		{
			convBase = 2;
		}
		if (conversion == 2)
		{
			convBase = 8;
		}
		incorrectInput = true;
	} while (conversion != 1 && conversion != 2);


	while (integer >= 1)
	{
		remainder = integer % convBase;
		quotient = integer / convBase;
		integer = quotient;
		converted = (converted * 10) + remainder;
	}

	cout << "Your entered number was " << yourInteger << " and it's equivalent in base " << convBase << " is " << converted << "\n";


	system("pause");
	return 0;
}