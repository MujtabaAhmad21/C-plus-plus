#include <iostream>
#include <fstream>
using namespace std;

void bubbleSort(float arr[], int size)
{
	for (int i = 0; i < size - 1; ++i)
	{
		for (int j = 0; j < size - i - 1; ++j)

		{
			if (arr[j] > arr[j + 1])
			{
				float temp = arr[j]; arr[j] = arr[j + 1]; arr[j + 1] = temp;
			}
		}
	}
}
int main()
{
	const int size = 20;
	float arr[size];
	ifstream inputFile("firstfile.txt");
	if (!inputFile.is_open())
	{
		cout << "Error opening the input file." << endl;
	}
	for (int i = 0; i < size; ++i)
	{
		inputFile >> arr[i];
	}
	inputFile.close();
	bubbleSort(arr, size);
	ofstream outputFile("firstfile.txt");
	if (!outputFile.is_open())
	{
		cout << "Error creating the output file." << endl;
	}
	for (int i = 0; i < size; ++i)
	{
		outputFile << arr[i] << " ";
	}
	outputFile.close();
	cout << "Sorted array:\n";
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}

	system("pause");
	return 0;
}