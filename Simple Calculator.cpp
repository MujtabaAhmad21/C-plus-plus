#include <iostream>
using namespace std;

int main() {
	double num1, num2, Ans;
	char operation;

	cout << "Please enter any two numbers and also tell enter the operator you want to perform with the numbers. \n";
	
	cin >> num1 >> num2 >> operation;

	switch (operation) {
	case '+':
		Ans = num1 + num2;
		cout << Ans;
		break;
	case '*':
		Ans = num1 * num2;
		cout << Ans;
		break;
	case '-':
		Ans = num1 - num2;
		cout << Ans;
		break;
	case '/':
		Ans = num1 / num2;
		cout << Ans;
		break;
	}


	system("pause");
	return 0;
}