#include <iostream>
using namespace std;

int main()
{
	
	int stop = 0;
	int number;
	bool flag = false;

	while (flag != true)
	{
		char matrix[20][20] = {'\0'};

		cout << "What type of pattern do you want to see? " << endl;
		cout << "Please enter a number from the following patterns: " << endl;
		cout << " 1. Filled square of * " << endl;
		cout << " 2. Hollow square of * " << endl;
		cout << " 3. Right triangle of * " << endl;

		cin >> number;

		switch (number)
		{
		case 1:
		{
			for (int i = 0; i < 20; i++)
			{
				for (int x = 0; x < 20; x++)
				{
					matrix[i][x] = '*';
				}
			}
			for (int i = 0; i < 20; i++)
			{
				for (int x = 0; x < 20; x++)
				{
					cout << matrix[i][x];
				}
				cout << endl;
			}
			break;
		}
		case 2:
		{
			for (int i = 0; i < 20; i++)
			{
				for (int x = 0; x < 20; x++)
				{
					if (i == 0 || x == 0 || x == 19 || i == 19)
					{
						matrix[i][x] = '*';
					}
					else
					{
						matrix[i][x] = ' ';
					}
				}
			}
			for (int i = 0; i < 20; i++)
			{
				for (int x = 0; x < 20; x++)
				{
					cout << matrix[i][x];
				}
				cout << endl;
			}
			break;
		}
		case 3:
		{
			for (int i = 0; i < 20; i++)
			{
				for (int x = 0; x <= i; x++)
				{
					matrix[i][x] = '*';
				}
			}
			for (int i = 0; i < 20; i++)
			{
				for (int x = 0; x < 20; x++)
				{
					cout << matrix[i][x];
				}
				cout << endl;
			}
			break;
		}
		case 0:
		{
			cout << "Thank you!" << endl;
			flag = true;
			break;
		}
		default:
		{
			cout << "Wrong number! Please enter from 1-3" << endl;
			break;
		}
		}
	}


	system("pause");
	return 0;
}
