#include <iostream>
using namespace std;

//  decoding function (exact opposite of GenerateCode function)
void Decode(int* P1, int* P2, char* line)
{
	for (int i = 0; i < 35; i++)
	{
		if (line[i] >= 'A' && line[i] <= 'Z')
		{
			int difference;
			char math;
			math = line[i];
			line[i] -= *P1;
			if (line[i] < 'A')
			{
				difference = 'A' - line[i];
				line[i] = 'Z';
				line[i] = line[i] - difference + 1;
			}
		}
		else if (line[i] >= 'a' && line[i] <= 'z')
		{
			int difference;
			char math;
			math = line[i];
			line[i] -= *P2;
			if (line[i] < 'a')
			{
				difference = 'a' - line[i];
				line[i] = 'z';
				line[i] = line[i] - difference + 1;
			}
		}
	}
	cout << line;
}

//   encoding function
void GenerateCode(int* P1, int* P2, char* line)
{
	for (int i = 0; i < 35; i++)
	{
		if (line[i] >= 'A' && line[i] <= 'Z')
		{
			//  difference variable to store the differnce of current character
			//  from 'Z' character. See (1)
			int difference;
			//  math variable to store the current character of line. See (1)
			char math;
			math = line[i];
			line[i] += *P1;
			if (line[i] > 'Z')
			{
				difference = 'Z' - math; // (1)
				line[i] = 'A';
				line[i] = line[i] + *P1 - difference - 1;
				//  if suppose difference is 3 and *P1 is 9 ,then 6 will be 
				// added to 'A'. 
			}
		}
		else if (line[i] >= 'a' && line[i] <= 'z')
		{
			int difference;
			char math;
			math = line[i];
			line[i] += *P2;
			if (line[i] > 'z')
			{
				difference = 'z' - math;
				line[i] = 'a';
				line[i] = line[i] + *P2 - difference - 1;
			}
		}
	}
	cout << line << endl;
	cout << "Decoded line: ";
	Decode(P1, P2, line);
}

int main()
{
	//   declared variables for the arithematic of 'a' & 'b' variable.
	int W, X, Y, Z;
	char message[35];
	cout << "Original line: ";
	cin.getline(message, 35);
	cout << endl;

	cout << "Please enter your roll number: ";
	char rollNum[9];

	cin >> rollNum;
	//   subtracting ascii value of zero from these to treat the numbers as integers.
	W = rollNum[4] - '0', X = rollNum[5] - '0', Y = rollNum[6] - '0', Z = rollNum[7] - '0';
	int a = W + X + 1;
	int b = Y + Z + 1;
	int* P1;
	int* P2;
	P1 = &a;
	P2 = &b;

	cout << endl << "Encoded line: ";
	GenerateCode(P1, P2, message);
	cout << endl;

	system("pause");
	return 0;
}