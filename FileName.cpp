#include <iostream>
using namespace std;

//    The name of the struct "distance" is giving an error because it is causing 
//    conflict with a keyword in the library so that is why I have changed the 
//    name of the structure.
struct distanceOfRoom
{
	float inches;
	int feet;
};

int main()
{
	distanceOfRoom d1, d2, d3;
	cout << "Please enter feet: " << endl;
	cin >> d1.feet;
	cout << "Please enter inches: " << endl;
	cin >> d1.inches;

	d2.feet = 10;
	d2.inches = 5.25;

	d3.feet = d1.feet + d2.feet;
	d3.inches = d1.inches + d1.inches;

	if (d3.inches > 12)
	{
		d3.feet++;
		d3.inches -= 12;
	}

	cout << "d1 details: " << endl;
	cout << "feet: " << d1.feet << endl;
	cout << "Inches: " << d1.inches << endl;
	cout << endl << "d2 details: " << endl;
	cout << "feet: " << d2.feet << endl;
	cout << "Inches: " << d2.inches	<< endl;
	cout << endl << "d3 details: " << endl;
	cout << "feet: " << d3.feet << endl;
	cout << "Inches: " << d3.inches << endl;

	system("pause");
	return 0;
}