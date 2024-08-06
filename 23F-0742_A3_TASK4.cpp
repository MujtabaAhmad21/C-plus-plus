#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int students[100];
	int frequency[8] = { 0 };
	srand(time(0));
	for (int i = 0; i < 100; i++)
	{
		students[i] = rand() % 201;
	}
	for (int x = 0; x < 100; x++)
	{
		if (students[x] >= 0 && students[x] < 24)
		{
			++frequency[0];
		}
		else if (students[x] >= 24 && students[x] < 49)
		{
			++frequency[1];
		}
		else if (students[x] >= 49 && students[x] < 74)
		{
			++frequency[2];
		}
		else if (students[x] >= 74 && students[x] < 99)
		{
			++frequency[3];
		}
		else if (students[x] >= 99 && students[x] < 124)
		{
			++frequency[4];
		}
		else if (students[x] >= 124 && students[x] < 149)
		{
			++frequency[5];
		}
		else if (students[x] >= 149 && students[x] < 174)
		{
			++frequency[6];
		}
		else if (students[x] >= 174 && students[x] <= 200)
		{
			++frequency[7];
		}

	}

	cout << setw(11) << "Marks Range" << setw(28) << "Frequency of students" << endl;

	int lowerRange = 0, upperRange = 24;

	for (int j = 0; j < 8; j++)
	{
		if (lowerRange < 90)
			cout << setw(6) << lowerRange << "-" << upperRange;
		else if (lowerRange < 10)
			cout << setw(7) << lowerRange << "-" << upperRange;
		else
			cout << setw(5) << lowerRange << "-" << upperRange;

		cout << setw(28) << frequency[j] << endl;
		if (j == 6)
		{
			lowerRange = upperRange;
			upperRange += 26;
		}
		else
		{
			lowerRange = upperRange;
			upperRange += 25;
		}
	}

	return 0;
}