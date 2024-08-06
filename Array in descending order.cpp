#include <iostream>
using namespace std;

int main()
{
	float temp;
	float array[5] = { 4.4,1.1,3.3,5.5,2.2 };
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (array[i] < array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	cout << "Array in descending order: " << endl;

	for (int k = 0; k < 5; k++)
	{
		cout << array[k] << " ";
	}


	system("pause");
	return 0;
}