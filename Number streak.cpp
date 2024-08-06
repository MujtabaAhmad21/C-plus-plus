#include <iostream>
using namespace std;

int main()
{

	int integer, streak = 0, stop = -1, prevInt = 0;
	cout << "Please enter an integer. \n";

	do
	{
		cin >> integer;
		if (integer > prevInt)
		{
			streak = streak + 1;
		}

		prevInt = integer;


	} 
	while (integer != stop);


	cout << "Longest streak of non-decreasing numbers was " << streak << "\n";

	system("pause");
	return 0;
}