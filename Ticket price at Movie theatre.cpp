#include <iostream>
using namespace std;

int main()
{
	cout << "Please enter your age = ";
	int age;
	char children, teenager, adult, senior, value;
	cin >> age;

	if (age < 0)
	{
		cout << "Invalid....age cannot be less than 0 \n";
	}
	if (age > 0 && age <= 12)
	{
		children = 'c';
		value = children;
	}
	if (age > 12 && age <= 17)
	{
		teenager = 't';
		value = teenager;
	}
	if (age > 17 && age <= 59)
	{
		adult = 'a';
		value = adult;
	}
	if (age > 60)
	{
		senior = 's';
		value = senior;
	}

	switch (value)
	{
	case 'c':
		cout << "Your ticket price is = &5 \n";
		break;
	case 't':
		cout << "Your ticket price is = $8 \n";
		break;
	case 'a':
		cout << "Your ticket price is = $12 \n";
		break;
	case 's':
		cout << "Your ticket price is = $6 \n";
		break;
	}


	system("pause");
	return 0;
}