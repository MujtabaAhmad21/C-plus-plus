#include <iostream>
using namespace std;

int main()
{
	float temp;
	const int size = 20;
	int array[size];
	int evenCount = 0;

	cout << "Enter 20 integers: " << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (array[i] < array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}

	cout << "Array sorted after even first: " << endl;

	for (int i = 0; i < size; i++)
	{
		if (array[i] % 2 == 0)
		{
			temp = array[evenCount];
			array[evenCount] = array[i];
			array[i] = temp;
			evenCount++;
		}
	}
	for (int i = evenCount; i < size; i++)
	{
		for (int j = evenCount; j < size; j++)
		{
			if (array[i] < array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	for (int x = 0; x < size; x++)
	{
		cout << array[x] << " ";
	}



	system("pause");
	return 0;
}
