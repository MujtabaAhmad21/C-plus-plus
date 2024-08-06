#include <iostream>
using namespace std;

int main() {
	cout << "Enter your birth year, current year and amount of Bill. ";

	int birthYear, currentYear, age;
	float billAmount;

	cin >> birthYear >> currentYear >> billAmount;

	age = currentYear - birthYear;

	cout << age;

	if (age >= 60 and billAmount > 50)
		cout << "You're a senior citizen and eligible for discount. ";

	else
		cout << "You're not a senior citizen and not eligible for discount. \n";

	system("pause");
	return 0;
}