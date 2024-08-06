#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Channel
{
	int frequency, time;
	string date;

public:
	Channel()
	{
		frequency = time = 0;
		date = "";
	}
	void inputDetails()
	{
		cout << "Enter the frequency: ";
		cin >> frequency;
		cout << "Enter the time: ";
		cin >> time;
		cin.ignore(); // Ignore any leftover newline characters in the input buffer
		cout << "Enter the date: ";
		getline(cin, date); // Read the entire line, including spaces
	}
	void printDetails()
	{
		cout << "Details:- " << endl;
		cout << "Frequency = " << frequency << endl;
		cout << "Time = " << time << endl;
		cout << "Time = " << time << endl;
		cout << "Date = " << date << endl;
	}
};

struct message
{
	string msg = "";
	int msg_id = 0;
};

class Receiver;

class Sender
{
	message obj;
	Channel obj2;
public:
	void LoadMessage()
	{
		int randMsgGen;
		cin.ignore(); // Ignore any leftover newline characters in the input buffer
		cout << "Please enter your message: ";
		getline(cin, obj.msg); // Read the entire line, including spaces
		cout << "Please enter channel details:- " << endl;
		obj2.inputDetails();
		srand(time(0));
		randMsgGen = rand() % 9;
		obj.msg_id = randMsgGen;
	}
	friend void path(Sender& send, Receiver& receive);
};

class Receiver
{
	message obj3;
	bool received;
public:
	void printMessage()
	{
		cout << "Message id = " << obj3.msg_id << endl;
		cout << "Message = " << obj3.msg << endl;
	}
	friend void path(Sender& send, Receiver& receive);
};

void path(Sender& send, Receiver& receive)
{
	receive.obj3 = send.obj;
	receive.received = true;
}

int main()
{
	Sender sender;
	Receiver receiver;

	int choice;
	do
	{
		cout << "Menu:" << endl;
		cout << "1. Load Message" << endl;
		cout << "2. Print Message" << endl;
		cout << "3. Exit" << endl;
		cout << "Enter your choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			sender.LoadMessage();
			break;
		case 2:
			path(sender, receiver);
			receiver.printMessage();
			break;
		case 3:
			cout << "Exiting program..." << endl;
			break;
		default:
			cout << "Invalid choice. Please try again." << endl;
			break;
		}
	} while (choice != 3);

	system("pause");
	return 0;
}