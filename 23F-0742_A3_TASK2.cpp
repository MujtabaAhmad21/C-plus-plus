#include <iostream>
using namespace std;

int main()
{
	int matrix1[2][2] =
	{
		{2,3},
		{4,5}
	},
		matrix2[2][2] =
	{
		{3,9},
		{6,5}
	},
		sumMatrix[2][2];

	int sum, multiply;

	for (int i = 0; i < 2; i++)
	{
		for (int x = 0; x < 2; x++)
		{
			sum = 0;
			for (int p = 0; p < 2; p++)
			{
				multiply = matrix1[i][p] * matrix2[p][x];
				sum += multiply;
			}
			cout << sum << endl;
		}

	}

	system("pause");
	return 0;
}