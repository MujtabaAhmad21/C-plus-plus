#include <iostream>
using namespace std;

int main() {

	int digit4num, reverse4digitnum, count = 1, reverse = 0;
	cout << "Please enter a four digit number \n";

	cin >> digit4num;

	while (count <= 4) {

		reverse4digitnum = digit4num % 10;
		digit4num = digit4num / 10;
		reverse = (reverse * 10) + reverse4digitnum;
		count = count + 1;
	}


	cout << "The reverse of your 4 digit number is = " << reverse;

	system("pause");
	return 0;
}