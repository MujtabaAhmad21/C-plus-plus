#include <iostream>
using namespace std;

int main()
{
	int temperature[12][2] =
	{
		{24,9},
		{20,15},
		{27,18},
		{32,16},
		{35,19},
		{40,20},
		{53,24},
		{39,20},
		{33,16},
		{38,21},
		{19,-2},
		{20,5}
	};

	int sumHigh = 0, sumLow = 0, averageHigh, averageLow, highest = 0, lowest = 0;

	for (int i = 0; i < 12; i++)
	{
		for (int x = 0; x < 2; x++)
		{
			if (x == 0)
			{
				sumHigh += temperature[i][x];
			}
			else
			{
				sumLow += temperature[i][x];
			}
		}
	}

	averageHigh = sumHigh / 12;
	averageLow = sumLow / 12;

	cout << "          ---IN THIS YEAR---" << endl;
	cout << "Average of highest temperature: " << averageHigh << endl << "Average of lowest temp: " << averageLow << endl;

	for (int j = 0; j < 12; j++)
	{
		if (highest < temperature[j][0])
		{
			highest = temperature[j][0];
		}
	}
	cout << "Highest temp is: " << highest << endl;

	for (int j = 0; j < 12; j++)
	{
		if (lowest > temperature[j][1])
		{
			lowest = temperature[j][1];
		}
	}
	cout << "Lowest temp is: " << lowest << endl;

	system("pause");
	return 0;
}