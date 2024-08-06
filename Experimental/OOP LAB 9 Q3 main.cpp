//#include "OOP LAB 9Q3.h"
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	int choice;
//	bool flag = true;
//	Hospital newPatient;
//	cout << "--------WELCOME to The Hospital-------" << endl;
//
//	while (flag == true)
//	{
//		cout << "What would you like to do?" << endl;
//		cout << "1. Admit patient." << endl;
//		cout << "2. Discharge patient." << endl;
//		cout << "3. Display patient's data." << endl;
//		cout << "4. Show patient count." << endl;
//		cout << "Enter 0 to exit the programme." << endl;
//
//		cin >> choice;
//		switch (choice)
//		{
//		case 0: 
//		{
//			cout << "Thanks for coming!" << endl;
//			flag = false;
//			break;
//		}
//		case 1:
//		{
//			newPatient.admitpatient();
//			break;
//		}
//		case 2: 
//		{
//			newPatient.dischargePatient();
//			break;
//		}
//		case 3:
//		{
//			newPatient.displayPatientData();
//			break;
//		}
//		case 4:
//		{
//			newPatient.displayPatientCount();
//			break;
//		}
//		default:
//		{
//			cout << "Invalid Input. Please try again." << endl;
//			break;
//		}
//		}
//	}
//
//	system("pause");
//	return 0;
//}