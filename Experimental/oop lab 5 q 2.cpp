///*     In this programme we are creating a structure of baseball player which has 3 
//       member variables. The programme has 4 functions as well (you can see their prototypes
//	   below). The functions are used by passing the structure object to the function 
//	   parameter and then performing functions to initialize the member variables.
//	   After all the data is initialized and updated the data is also stored in a 
//	   text file called players data.
//*/
//
//#include <iostream>
//#include <string>
//#include <fstream>
//using namespace std;
//
//struct baseball_player
//{
//	string name;
//	int numOfHomeRuns;
//	int numOfHits;
//}players[3];
//
//void inputData(baseball_player* players);
//void outputData(baseball_player* players);
//void searchPlayer(baseball_player* players, string name);
//void storeDataInFile(baseball_player* players, ofstream& fileWrite);
//
//void inputData(baseball_player* players)
//{
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "Enter player name (first name only) : ";
//		cin >> players[i].name;
//		cout << "Enter number of home runs: ";
//		cin >> players[i].numOfHomeRuns;
//		cout << "Enter number of hits: ";
//		cin >> players[i].numOfHits;
//	}
//}
//
//void outputData(baseball_player* players)
//{
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "Player name: " << players[i].name << endl;
//		cout << "Number of home runs: " << players[i].numOfHomeRuns << endl;
//		cout << "Number of hits: " << players[i].numOfHits << endl;
//	}
//}
//
//void searchPlayer(baseball_player* players, string name)
//{
//	for (int i = 0; i < 3; i++)
//	{
//		if (name == players[i].name)
//		{
//			cout << "Enter player name (first name only) : ";
//			cin >> players[i].name;
//			cout << "Enter number of home runs: ";
//			cin >> players[i].numOfHomeRuns;
//			cout << "Enter number of hits: ";
//			cin >> players[i].numOfHits;
//		}
//	}
//}
//
//int main()
//{
//	ofstream writeInFile;
//	writeInFile.open("playerData.txt");
//	
//	bool flag = true;
//	int choice;
//	cout << "Input data for players: " << endl;
//	string playerName;
//	inputData(players);
//	cout << "Output data of players: " << endl;
//	outputData(players);
//	while (flag == true)
//	{
//		cout << "What do you want to do? (enter 0 to exit)" << endl;
//		cout << "1. Update player data " << endl;
//		cout << "2. Store data to file " << endl;
//		cin >> choice;
//		switch (choice)
//		{
//		case 0:
//		{
//			flag = false;
//			cout << "Thank you!";
//			break;
//		}
//		case 1:
//		{
//			cout << "Enter the name if the player you want to update stats: ";
//			cin >> playerName;
//			searchPlayer(players, playerName);
//			break;
//		}
//		case 2:
//		{
//			cout << "Data stored in file." << endl;
//			storeDataInFile(players, writeInFile);
//			break;
//		}
//		default:
//		{
//			cout << "Error." << endl;
//			break;
//		}
//		}
//	}
//	system("pause");
//	return 0;
//}
//
//void storeDataInFile(baseball_player* players, ofstream &fileWrite)
//{
//	if (fileWrite.is_open())
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			fileWrite << "Player " << i+1 << "Data: " << endl;
//			fileWrite << "Name: " << players[i].name << endl;
//			fileWrite << "Number of home runs: " << players[i].numOfHomeRuns << endl;
//			fileWrite << "Number of hits: " << players[i].numOfHits << endl;
//		}
//	}
//	else
//	{
//		cout << "Can't write in file." << endl;
//	}
//}