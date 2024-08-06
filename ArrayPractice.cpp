#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	const int size = 7;
	int frequency[size] = { 0 };

	srand(time(0));

	for (int roll = 1; roll <= 6000; roll++) 
	{
		++frequency[1 + rand() % 6];
	}

	cout << "Face" << setw(13) << "Frequency" << endl;

	for (int face = 1; face < size; face++) 
	{
		cout << setw(4) << face << setw(13) << frequency[face] << endl;
	}

	system("pause");
	return 0;
}