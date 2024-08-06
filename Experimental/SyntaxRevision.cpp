#include <iostream>
using namespace std;

int main()
{
	int size;
	cout << "Please enter the size of your triangle: ";
	cin >> size;

	for (int outer = 1; outer <= size; outer++)
	{
		for (int inner = 0; inner < outer; inner++)
		{
			cout << "*";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}