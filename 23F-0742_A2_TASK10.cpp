#include <iostream>
using namespace std;

int main()
{
	int num, originalNum, quotient, remainder, dividor = 1, count = 1, digitCount = 0, evenCount = 0;

	cout << "Please enter a number: ";

	cin >> num;
	originalNum = num;

	// Determine the digits of the number

	while (num >= 1)
	{
		num /= 10;
		digitCount += 1;
	}

	// Calculate dividor for the number , 10 to the power of 1-digitCount
	// (e.g. if 3 digits then divide by 100)

	while (count < digitCount)
	{
		dividor *= 10;
		count++;
	}

	// Seperate the numbers of number by dividing with dividor and checking each number if it is even or odd.
	// If even then increment evenCount , if not then break.


	while (originalNum >= 1)
	{
		quotient = originalNum / dividor;
		remainder = originalNum % dividor;
		originalNum = remainder;
		if (quotient % 2 == 0)
		{
			evenCount = evenCount + 1;
		}
		else
		{
			break;
		}
		dividor /= 10;
	}

	cout << "Longest sequence of consecutive even digits is: " << evenCount << endl;



	system("pause");
	return 0;
}