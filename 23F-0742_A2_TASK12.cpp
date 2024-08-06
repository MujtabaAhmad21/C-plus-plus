#include <iostream>
using namespace std;

int main() {
	double num1, num2, Ans;
	char operation;
	int exit = -1;

	cout << "Please enter any two numbers and also tell enter the operator you want to perform with the numbers. \n";
	cout << "If you want to exit, then enter -1 ." << endl << endl;

	do
	{
		cout << "Number 1: ";
		cin >> num1;

		if (num1 == exit)
		{
			break;
		}

		cout << "Number 2: ";
		cin >> num2;

		if (num2 == exit)
		{
			break;
		}

		cout << "Operator: ";
		cin >> operation;

		switch (operation) {
		case '+':
			Ans = num1 + num2;
			cout << "Answer: " << Ans << endl << endl;
			break;
		case '*':
			Ans = num1 * num2;
			cout << "Answer: " << Ans << endl << endl;
			break;
		case '-':
			Ans = num1 - num2;
			cout << "Answer: " << Ans << endl << endl;
			break;
		case '/':
			Ans = num1 / num2;
			cout << "Answer: " << Ans << endl << endl;
			break;
		default:
			cout << endl << "Invalid Operator. Please choose from '*, +, -, /' " << endl;
		}

	} while (num1 != exit || num2 != exit);

	system("pause");
	return 0;
}