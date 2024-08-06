#include <iostream>
using namespace std;

int main()
{
	int numofquestions, X = 1, Y, Z, i = 1, randOperator, ans, score = 0;
	cout << "How many questions do you want to answer? " << endl;
	cin >> numofquestions;

	int plus = 1, minus = 2, multiply = 3, divide = 4;

	char op;

	int QuestionAns;


	for (; i <= numofquestions; i++)
	{

		srand(time(0));
		Y = rand() % 10 + 1;
		Z = rand() % 10 + 1;


		randOperator = rand() % 4 + 1;

		switch (randOperator)
		{
		case 1:
			op = '+';
			break;
		case 2:
			op = '-';
			break;
		case 3:
			op = '*';
			break;
		case 4:
			op = '/';
			break;
		}

		cout << endl << "Question " << X << ": " << Y << " " << op << " " << Z << " = ";
		cin >> ans;

		if (randOperator == plus)
		{
			QuestionAns = Y + Z;

		}
		if (randOperator == minus)
		{
			QuestionAns = Y - Z;
		}
		if (randOperator == multiply)
		{
			QuestionAns = Y * Z;
		}
		if (randOperator == divide)
		{
			QuestionAns = Y / Z;
		}

		if (ans == QuestionAns)
		{
			cout << "Correct Answer!";
			score++;
		}
		else
		{
			cout << "Incorrect Answer. Correct Answer = " << QuestionAns;
		}


		X++;
	}

	cout << endl << "Your score is " << score << " out of " << X - 1 << endl;

	system("pause");
	return 0;

}