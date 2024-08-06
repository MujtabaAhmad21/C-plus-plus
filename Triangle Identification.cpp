#include <iostream>
using namespace std;

int main() {
	float side1, side2, side3;
	cout << "Please enter any three lengths of a triangle. \n";

	cin >> side1 >> side2 >> side3;

	if (side1 == side2 && side2 == side3) 
		cout << "It is an equilateral triangle. ";
	else if (side1 > side2 && side1 == side3)
		cout << "It is an issoceles triangle. ";
	else if (side2 > side1 && side1 == side3)
		cout << "It is an issoceles triangle. ";
	else if (side3 > side1 && side1 == side2)
		cout << "It is an issoceles triangle. ";
	else if (side3 > side2 && side1 == side2)
		cout << "It is an issoceles triangle. ";
	else if (side1 > side3 && side2 && side3)
		cout << "It is an issoceles triangle. ";
	else
		cout << "It is a scalene triangle. ";
	

	system("pause");
	return 0;
}