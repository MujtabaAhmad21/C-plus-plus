#include <iostream>
using namespace std;

int main() {
	srand(time(0));

	int originalNum1, originalNum2, originalNum3, lastOriginalNum, number, quotient, remainder, digitCount = 0, power = 1, sum = 0, i;

	int array[100];
	for (int i = 0; i < 100; i++)
	{
		array[i] = rand() % 9900 + 100;
		cout << array[i] << endl;
		
	}
	for (int i = 0; i < 100; i++)
	{
		
		number = array[i];


		originalNum1 = number;
		originalNum2 = number;
		originalNum3 = number;
		lastOriginalNum = number;


		while (number >= 1)
		{
			quotient = number / 10;
			number = quotient;
			digitCount += 1;
		}


		while (originalNum1 >= 1)
		{
			quotient = originalNum1 / 10;
			remainder = originalNum1 % 10;
			for (i = 1; i <= digitCount; i++)
			{
				power = power * remainder;
			}
			sum = sum + power;
			power = 1;
			originalNum1 = quotient;
		}

		if (sum == lastOriginalNum) {
			cout << "The number is armstrong because ";

			while (lastOriginalNum >= 1)
			{
				quotient = lastOriginalNum / 10;
				remainder = lastOriginalNum % 10;
				cout << remainder << "^" << digitCount << " + ";
				lastOriginalNum = quotient;
			}
			cout << " = " << sum;
		}

	}
	
	system("pause");
	return 0;
}
