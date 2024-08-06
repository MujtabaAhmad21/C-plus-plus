#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int position = 30;

struct Horse {
	string name;
	int speed; 
	int endurance; 
	int position; 
	int fatigue; 
};

void applyFatigue(Horse *horse)
{
	for (int i = 0; i < 8; i++)
	{
		if (horse[i].endurance >= horse[i].fatigue)
		{
			horse[i].fatigue++;
			horse[i].position -= 5;
		}
	}
}

void moveHorse(Horse *horse, int pos)
{
	pos = position;
	int temp;
	int array[8];
	for (int x = 0; x < 8; x++)
	{
		array[x] = horse[x].speed;
	}
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	for (int i = 0; i < 8; i++)
	{
		for (int z = 0; z < 8; z++)
		{
			if (array[i] == horse[z].speed)
			{
				horse[z].position = pos;
			}
		}
		pos -= 2;
		horse[i].fatigue++;
	}
}

void printRaceStatus(Horse* horse)
{
	for (int i = 0; i < 8; i++)
	{
		cout << setw(10) << left << horse[i].name << ": " << "Position = " << setw(3) << horse[i].position << ", " << "Fatigue= " << setw(3) << horse[i].fatigue << endl;
	}
}

void applyObstacle(Horse *horse)
{
	int choice;
	for (int i = 0; i < 3; i++)
	{
		choice = rand() % 8;
		cout << "Mud Pit encountered - " << horse[choice].name << " slowed down.";
		horse[choice].position -= 5;
	}
	cout << endl;
}

void raceWinner(Horse *horse)
{
	for (int i = 0; i < 8; i++)
	{
		if (horse[i].position == 150)
		{
			cout << horse[i].name << " is the WINNER!" << endl;
		}
	}
}

void displayStart()
{
	cout << "               *********************************************************" << endl;
	cout << "                          Welcome to Horse Racing Simulation!" << endl;
	cout << "               *********************************************************" << endl;
	cout << "                                         ~" << endl;
	cout << "                                        ' `" << endl;
	cout << "                                       /  v \\ " << endl;
	cout << "                                      / `    /" << endl;
	cout << "                                     <<     |" << endl;
	cout << "                                     /      |" << endl;
	cout << "                                    /       |" << endl;
	cout << "                                   /         |" << endl;
	cout << "                                  /  \\/  \\_" << endl;
	cout << "                                 (      \\   |" << endl;
	cout << "                                 \\      \\_/" << endl;
	cout << "                                  \\_____\\_)" << endl;
}

void raceTrack(Horse *horse)
{
	for (int i = 0; i < 8; i++)
	{
		cout << setw(10) << left << horse[i].name << " ";
		for (int x = 0; x < horse[i].position/2; x++)
		{
			cout << "-";
		}
		cout << "*" << endl;
	}
}

int main()
{
	srand(time(0));
	Horse horse[8];

	displayStart();

	for (int i = 0; i < 8; i++)
	{
		cout << "Enter horse " << i+1 << " name: ";
		cin >> horse[i].name;
		horse[i].speed = rand() % (43 - 30 + 1) + 30;
		horse[i].endurance = rand() % (9 - 1) + 1;
		horse[i].position = 0;
		horse[i].fatigue = 0;
	}

	for (int z = 0; z < 5; z++)
	{
		cout << endl;
		cout << "Race Status after " << z << " iteration: " << endl;
		cout << endl;
		moveHorse(horse, position);
		applyFatigue(horse);
		printRaceStatus(horse);
		if (z == 3) 
		{
			cout << endl;
			applyObstacle(horse);
			cout << endl;
		}
		position += 30;
	}
	cout << endl << "Race Track :- " << endl;
	raceTrack(horse);
	cout << endl;
	raceWinner(horse);
	cout << endl;

	system("pause");
	return 0;
}