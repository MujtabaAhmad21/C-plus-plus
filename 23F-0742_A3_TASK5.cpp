#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	char names[5][20];
	int votes[5];
	float total = 0;
	float percentage[5];
	int winner = 0, h, index;

	cout << "Please enter candidate names: " << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << "Candidate " << i + 1 << ": ";
		cin >> names[i];
	}

	cout << "Please enter votes of these candidates: " << endl;

	for (int x = 0; x < 5; x++)
	{
		cout << "Vote of Candidate " << x + 1 << ": ";
		cin >> votes[x];
		total += votes[x];
	}

	for (h = 0; h < 5; h++)
	{
		if (winner < votes[h])
		{
			winner = votes[h];
			index = h;
		}
	}

	for (int j = 0; j < 5; j++)
	{
		percentage[j] = (votes[j] / total) * 100;
	}

	cout << setw(9) << "Candidate" << setw(20) << "Votes recieved" << setw(30) << "% of Total Votes" << endl;

	for (int x = 0; x < 5; x++)
	{
		cout << setw(9) << names[x];
		cout << setw(20) << votes[x];
		cout << setw(30) << percentage[x];
		cout << endl;
	}
	cout << setw(9) << "Total";
	cout << setw(20) << total << endl;
	cout << "The winner of the election is " << names[index] << endl;

	system("pause");
	return 0;
}