#include <iostream>
using namespace std;

int main()
{
	int boolexp1 = true, boolexp2 = true, boolexp3 = false, boolexp4 = false, boolexp5 = true, boolexp6 = false, boolexp7 = false;
	int intexp1 = 3, intexp2 = 0;
	char charexp1 = 97, charexp2 = 90;

	int ans1, ans2, ans3, ans4, ans5, ans6, ans7;
	int intAns1, intAns2, charAns1, charAns2, score = 0;

	cout << "Enter your answer in 1 or 0 for question 1-7 and Enter integer answer for the rest." << endl;

	cout << "Q1: (!0) " << endl;
	cin >> ans1;

	if (ans1 == boolexp1)
	{
		score++;
	}

	cout << "Q2: (( !1 || !0 ) && (!( 1&& 0 ))" << endl;
	cin >> ans2;

	if (ans2 == boolexp2)
	{
		score++;
	}

	cout << "Q3: ( 5+4 < 3 && 7+3 <= 20 )" << endl;
	cin >> ans3;

	if (ans3 == boolexp3)
	{
		score++;
	}

	cout << "Q4: ('a' != 'b' -1)" << endl;
	cin >> ans4;

	if (ans4 == boolexp4)
	{
		score++;
	}

	cout << "Q5: ((3 % 2) * 1 ==1 && 5 * (3 % 3) == 0)" << endl;
	cin >> ans5;

	if (ans5 == boolexp5)
	{
		score++;
	}

	cout << "Q6: \"Ali\" >= \"Noor\"" << endl;
	cin >> ans6;

	if (ans6 == boolexp6)
	{
		score++;
	}

	cout << "Q7: \"123\" >= \"456\" " << endl;
	cin >> ans7;

	if (ans7 == boolexp7)
	{
		score++;
	}

	cout << "Q8: (9/3 % 3) + (3 * 4/4 )" << endl;
	cin >> intAns1;

	if (intAns1 == intexp1)
	{
		score++;
	}

	cout << "Q9: ((3 - 2/2) * 7 % 7" << endl;
	cin >> intAns2;

	if (intAns2 == intexp2)
	{
		score++;
	}

	cout << "Q10: 'a' + (5 % 5) * 4 " << endl;
	cin >> charAns1;

	if (charAns1 == charexp1)
	{
		score++;
	}

	cout << "Q11: 'Z' - 5 + (30 / 6) " << endl;
	cin >> charAns2;

	if (charAns2 == charexp2)
	{
		score++;
	}

	cout << "Your score is = " << score << "/11";


	system("pause");
	return 0;
}