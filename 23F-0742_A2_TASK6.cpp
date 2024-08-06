#include <iostream>
using namespace std;

int main()
{
	int firstNum, secondNum, position, count = 1, nextNum;

	do
	{
		cout << "Please enter two positive integers: " << endl;
		cin >> firstNum >> secondNum;

		if (firstNum <= 0 && secondNum <= 0 || firstNum >= 0 && secondNum <= 0 || firstNum <= 0 && secondNum >= 0 || firstNum > secondNum)
		{
			cout << "Invalid input. Second integer should be greater than the first integer. " << endl;
		}

	} while (firstNum <= 0 || secondNum <= 0 || firstNum >= secondNum);

	cout << "Which position in Fibonacci sequence are you interested in? " << endl;


	do
	{
		cin >> position;


		if (position < 0)
		{
			cout << "Please enter a 'Positive' integer for position. " << endl;
		}

	} while (position <= 0);

	cout << "Your position is: " << position << endl;

	while (count <= position)
	{
		nextNum = firstNum + secondNum;
		firstNum = secondNum;
		secondNum = nextNum;
		count++;
	}
	cout << "Number at the position you entered: " << nextNum << endl;


	system("pause");
	return 0;
}