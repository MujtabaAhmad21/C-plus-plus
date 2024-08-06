#include <iostream>
using namespace std;

int main()
{
	int num = 1;

	for (; num <= 100; num++)
	{
		if (num % 3 == 0)
		{
			cout << "Fizz " << endl;
		}
		if (num % 5 == 0)
		{
			cout << "Buzz " << endl;
		}
		if (num % 3 == 0 && num % 5 == 0)
		{
			cout << "FizzBuzz " << endl;
		}
		else
		{
			continue;
		}
	}

	system("pause");
	return 0;
}