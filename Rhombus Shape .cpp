#include <iostream>
using namespace std;

int main() {

	int i, x, j, space = -1, size;
	cout << "Enter the size for Rhombus you would like: ";
	cin >> size;

	for (i = size; i >= 1; i--) {
		for (x = 1; x <= i; x++) {
			cout << " ";
		}
		cout << "*";
		for (j = 0; j < space; j++) {
			cout << " ";
		}
		space += 2;
		if (i == size) {
			cout << " ";
		}
		else {
			cout << "*";
		}
		cout << endl;
	}
	space -= 2;
	for (i = 2; i <= size; i++) {
		for (x = 1; x <= i; x++) {
			cout << " ";
		}
		cout << "*";
		space -= 2;
		for (j = 0; j < space; j++) {
			cout << " ";
		}

		if (i == size) {
			cout << " ";
		}
		else {
			cout << "*";
		}
		cout << endl;
	}


	system("pause");
	return 0;
}