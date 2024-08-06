#include <iostream>
#include <ctime>
#include <cstdlib>
#include <conio.h>
#include <windows.h>
#include <synchapi.h>
#include <fstream>
#include <string>
using namespace std;
int score = 0;
int lives = 3;
void colourText() {

	system("Color 0A");

	cout << "--------*WELCOME TO RAMBO GAME*--------" << endl;
	cout << "--------****WELCOME TO MENU****--------" << endl;
	string name;
	cout << "enter your name " << endl;
	cin >> name;
	cout << "Here are some rules" << endl;
	cout << "Press 'W' to move forward" << endl;
	cout << "Press 'A' to move left" << endl;
	cout << "Press 'D' to move right" << endl;
	cout << "Press 'S' to move backward" << endl;
	cout << "Game is loading,please wait" << endl;
	Sleep(3000);

}
const int mapHeight = 50;
const int mapWidth = 30;
char matrix[50][30];

char Rambo[3][4] =
{
	{' ','O',' ','\0'},
	{'<','|','>','\0'},
	{' ','A','\0'}
};

char Tank[5][5] =
{
	{'-','-','-','-','\0'},
	{'|',' ',' ','|','\0'},
	{'|','[',']','|','\0'},
	{'|',' ',' ','|','\0'},
	{'-','-','-','-','\0'}
};

char Tank2[5][5] =
{
	{'-','-','-','-','\0'},
	{'|',' ',' ','|','\0'},
	{'|','[',']','|','\0'},
	{'|',' ',' ','|','\0'},
	{'-','-','-','-','\0'}
};

char Tank3[5][5] =
{
	{'-','-','-','-','\0'},
	{'|',' ',' ','|','\0'},
	{'|','[',']','|','\0'},
	{'|',' ',' ','|','\0'},
	{'-','-','-','-','\0'}
};
void printLives() {
	cout << "Lives:" << lives << endl;
}
void printScore() {
	cout << "Score: " << score << endl;
}
void obstaclePlacement(int x, int y)
{
	int width;
	for (int i = 0; i < 3; i++)
	{
		width = rand() % (7 - 3 + 1) + 3;
		switch (width)
		{
		case 3:
		{
			char obstacle[6] = "|---|";
			for (int i = 0; i < 6; i++) {
				matrix[x][y + i] = obstacle[i];
			}
			break;
		}
		case 4:
		{
			char obstacle[7] = "|----|";
			for (int i = 0; i < 7; i++) {
				matrix[x][y + i] = obstacle[i];
			}
			break;
		}
		case 5:
		{
			char obstacle[8] = "|-----|";
			for (int i = 0; i < 8; i++) {
				matrix[x][y + i] = obstacle[i];
			}
			break;
		}
		case 6:
		{
			char obstacle[9] = "|------|";
			for (int i = 0; i < 9; i++) {
				matrix[x][y + i] = obstacle[i];
			}
			break;
		}
		case 7:
		{
			char obstacle[10] = "|-------|";
			for (int i = 0; i < 10; i++) {
				matrix[x][y + i] = obstacle[i];
			}
			break;
		}
		default:
			break;
		}
	}
}

void emptyObstaclePlacement(int x, int y)
{
	int width;
	for (int i = 0; i < 3; i++)
	{
		width = rand() % (7 - 3 + 1) + 3;
		switch (width)
		{
		case 3:
		{
			char emptyObstacle[6] = " ";
			for (int i = 0; i < 6; i++) {
				matrix[x][y + i] = emptyObstacle[i];
			}
			break;
		}
		case 4:
		{
			char emptyObstacle[7] = " ";
			for (int i = 0; i < 7; i++) {
				matrix[x][y + i] = emptyObstacle[i];
			}
			break;
		}
		case 5:
		{
			char emptyObstacle[8] = " ";
			for (int i = 0; i < 8; i++) {
				matrix[x][y + i] = emptyObstacle[i];
			}
			break;
		}
		case 6:
		{
			char emptyObstacle[9] = " ";
			for (int i = 0; i < 9; i++) {
				matrix[x][y + i] = emptyObstacle[i];
			}
			break;
		}
		case 7:
		{
			char emptyObstacle[10] = " ";
			for (int i = 0; i < 10; i++) {
				matrix[x][y + i] = emptyObstacle[i];
			}
			break;
		}
		default:
			break;
		}
	}
}

void startMap()
{
	for (int i = 0; i < 50; i++)
	{
		for (int x = 0; x < 30; x++)
		{
			if (i == 0 || x == 0 || x == 29 || i == 49)
			{
				matrix[i][x] = '*';
			}
			else
			{
				matrix[i][x] = ' ';
			}
		}
	}
}

void ramboPlacement(int x, int y)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			matrix[x + i][y + j] = Rambo[i][j];
		}
	}
}

// Clears tank's previous position.
void emptyTankPos(int x, int y)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			matrix[x + i][y + j] = ' ';
		}
	}
}

void emptyTank2Pos(int x, int y)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			matrix[x + i][y + j] = ' ';
		}
	}
}

void emptyTank3Pos(int x, int y)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			matrix[x + i][y + j] = ' ';
		}
	}
}

// Clears rambo's previous position.
void emptyRamboPos(int x, int y)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			matrix[x + i][y + j] = ' ';
		}
	}
}

void tankPlacement(int x, int y)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			matrix[x + i][y + j] = Tank[i][j];
		}
	}
}

void tank2Placement(int x, int y)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			matrix[x + i][y + j] = Tank[i][j];
		}
	}
}

void tank3Placement(int x, int y)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			matrix[x + i][y + j] = Tank[i][j];
		}
	}
}

void printMap()
{
	for (int i = 0; i < 50; i++)
	{
		for (int x = 0; x < 30; x++)
		{
			cout << matrix[i][x];
		}
		cout << endl;
	}
}
const int maxplayers = 10;

// Function to save player information to a text file
void savePlayer(const string& name, int score) {
	ofstream outFile("scores.txt", ios::app); // Open file in append mode

	if (outFile.is_open()) {
		outFile << name << " " << score << endl;
		cout << "Player information saved." << endl;;
		outFile.close();
	}
	else {
		// Handle file opening error
		cout << "Unable to open file for writing." << endl;
	}
}
// Function to display top players
void displayTopPlayers() {
	ifstream inFile("scores.txt");

	if (inFile.is_open()) {
		string name;
		int score;
		int count = 0;

		cout << "Top " << maxplayers << " Players:" << endl;;

		while (inFile >> name >> score && count < maxplayers) {
			cout << name << ": " << score << endl;
			++count;
		}

		inFile.close();
	}
	else {
		// Handle file opening error
		cout << "Unable to open file for reading." << endl;
	}
}

int main()
{
	srand(time(0));
	colourText();
	startMap();
	bool exit = false;
	int ramboX = 45, ramboY = 15;
	int tankX = 1, tankY = 1;
	int tank2X = 1, tank2Y = 20;
	int tank3X = 1, tank3Y = 10;

	tankPlacement(tankX, tankY);
	tank2Placement(tank2X, tank2Y);
	tank3Placement(tank3X, tank3Y);

	int tank1Steps = 0;
	int tank2Steps = 0;
	int tank3Steps = 5;


	while (exit != true)
	{
		system("cls");

		ramboPlacement(ramboX, ramboY);

		/* This code below generates 3 tanks on the map and give them random movement.
		* As well as , the tanks disappear after moving down 10 rows that's why emptyTankPos
		* function is used here. The conditions are set according to tanks movements so they
		* do not collide with eachother and for that variable of tank1Steps, tank2Steps and
		* tank3Steps is used ; to track tanks coordinates.
		*/
		if (tank1Steps < 10)
		{
			emptyTankPos(tankX, tankY);
			tankX++;
			tankY++;
			tankPlacement(tankX, tankY);
			tank1Steps++;
		}
		else
		{
			emptyTankPos(tankX, tankY);
			tank1Steps = 0;
			tankX = 1;
			tankY = 1;
		}

		if (tank1Steps > 5 && tank2Steps < 15)
		{
			emptyTank2Pos(tank2X, tank2Y);
			tank2X++;
			tank2Y--;
			tank2Placement(tank2X, tank2Y);
			tank2Steps++;
		}
		else if (tank2Steps >= 15)
		{
			emptyTank2Pos(tank2X, tank2Y);
			tank2Steps = 0;
			tank2X = 1;
			tank2Y = 20;
		}

		if (tank2Steps >= 10 && tank3Steps < 10)
		{
			emptyTank3Pos(tank3X, tank3Y);
			tank3X++;
			tank3Y--;
			tank3Placement(tank3X, tank3Y);
			tank3Steps++;
		}
		else if (tank3Steps >= 10)
		{
			emptyTank3Pos(tank3X, tank3Y);
			tank3Steps = 5;
			tank3X = 1;
			tank3Y = 10;
		}

		obstaclePlacement(25, 6);
		obstaclePlacement(30, 14);
		obstaclePlacement(35, 19);

		Sleep(1);
		score += 1; // Increase the score by 1
		printMap();

		/* This code below navigates rambo movements when user controls rambo with the W A S D keys.
		*/
		char userInput = _getch();
		switch (userInput) {
		case 'w':
		case'W':
			emptyRamboPos(ramboX, ramboY);
			ramboX--;
			break;
		case 's':
		case 'S':
			emptyRamboPos(ramboX, ramboY);
			ramboX++;
			break;
		case 'a':
		case 'A':
			emptyRamboPos(ramboX, ramboY);
			ramboY--;
			break;
		case 'd':
		case 'D':
			emptyRamboPos(ramboX, ramboY);
			ramboY++;
			break;
		case'0':
			exit = true;
			cout << "Thanks for playing!" << endl;
			break;
		}

		//  horizontal boundaries
		if (ramboX < 30)
		{
			ramboX = 30;  // Adjust to the leftmost boundary
		}
		else if (ramboX >= mapHeight - 4)
		{
			ramboX = mapHeight - 5;  // Adjust to the rightmost boundary
		}

		//  vertical boundaries
		if (ramboY < 1)
		{
			ramboY = 1;  // Adjust to the top boundary
		}
		else if (ramboY >= mapWidth - 3)
		{
			ramboY = mapWidth - 4;  // Adjust to the bottom boundary
		}
		printScore(); // Display the score to the user
		printLives();

		Sleep(100); // Add a delay to control the speed of movement

	}

	cout << "Total Score: " << score << endl; // Display the total score when the game is finished
	string playerName;
	int playerScore;

	// Get player information from the user
	//cout << "Enter your name: ";
	//getline(cin, playerName); // Allowing spaces in the name
	//cout << endl;
	cout << "Enter your score: ";
	cin >> playerScore;
	cout << endl;
	// Save player information to the text file
	savePlayer(playerName, playerScore);

	// Display top players
	displayTopPlayers();


	system("pause");
	return 0;
}