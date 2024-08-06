#include <iostream>
using namespace std;

int main() {
	
	
char alphabet;
cout << "Please enter any alphabet number. ";

cin >> alphabet;

switch (alphabet) {
case 'a':
case 'A':
	cout << " It is a vowel ";
	break;
case 'E':
case 'e':
	cout << "It is a vowel ";
	break;
case 'I':
case 'i':
	cout << "It is a vowel ";
	break;
case 'O':
case 'o':
	cout << "It is a vowel ";
	break;
case 'U':
case 'u':
	cout << "It is a vowel ";
	break;
default:
	cout << alphabet << " is a consonent ";
}


	system("pause");
	return 0;
}