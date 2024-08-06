///*    In this programme we are using a union for the record of a person
//      User is given 3 choices to choose from and for that case switch structure
//	  is used and then relevant data is stored in the member variables of 
//	  union structure.
//*/
//
//#include <iostream>
//using namespace std;
//
//union Person_Record
//{
//	char name[50];
//	char address[50];
//	int phone;
//}person;
//
//int main()
//{
//	int field;
//	cout << "Please enter 1 for Name input, 2 for address input & 3 for phone input." << endl;
//	cin >> field;
//
//	switch (field) 
//	{
//	case 1:
//	{
//		cout << "Enter name: ";
//		cin >> person.name;
//		cout << endl;
//		break;
//	}
//	case 2:
//	{
//		cout << "Enter address: ";
//		cin >> person.address;
//		cout << endl;
//		break;
//	}
//	case 3:
//	{
//		cout << "Enter phone: ";
//		cin >> person.phone;
//		cout << endl;
//		break;
//	}
//	default:
//	{
//		cout << "Invalid input. Please try again." << endl;
//		break;
//	}
//	}
//
//	system("pause");
//	return 0;
//}