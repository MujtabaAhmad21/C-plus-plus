#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main()
{
	ofstream outFile("employee.txt", ios::out);
	for (int i = 0; i < 5; ++i)
	{
		string name, address;
		int age, income;
		cout << "Enter employee " << i + 1 << " details:\n"; cout << "Name: ";
		cin >> name;
		cout << "Age: ";
		cin >> age;
		cout << "Address: ";
		cin >> address;
		cout << "Income: ";
		cin >> income;
		outFile << "Name: " << name << endl;
		outFile << "Age: " << age << endl;
		outFile << "Address: " << address << endl;
		outFile << "Income: " << income << endl;
	}
	outFile.close();
	ifstream inFile("employee.txt", ios::in); string line;
	inFile.close();
	system("pause");
	return 0;
}
