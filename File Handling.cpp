#include <iostream>
#include <fstream>
using namespace std;

// Programme to copy data from one file to another.

int main() 
{
	char myData[30];  // made char array to store the data from a file which is ALREADY created.

	ifstream readFromFile;     // object to read data from the file which is ALREADY created.
	ofstream writeInFile;      // object to write data in.

	writeInFile.open("File.txt");         // opened the file in which data is to be copied in.
	readFromFile.open("Manualfile.txt");  // opened the file in which data is to be copied from.

	if(readFromFile.is_open() == true)    // condition to check if file is open.
	{
		while (readFromFile.eof() == false)      // condition to read data till the end of file data.
		{
			readFromFile.getline(myData, 30);      //  object.function concept same as cin.getline(), data is stored in my char array
			writeInFile << myData << endl;         // transferred data which was in char array to the file 
			cout << myData << endl;                // just to check the data.
		}
		cout << "End of file \n";
	}
	else
	{
		cout << "Could not open file.\n";
	}

	readFromFile.close();

	system("pause");
	return 0;
}