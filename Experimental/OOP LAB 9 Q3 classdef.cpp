//#include "OOP LAB 9Q3.h"
//#include <iostream>
//#include <string>
//using namespace std;
//
//Date::Date()
//{
//	day = month = year = 0;
//}
//
//Hospital::Hospital()
//{
//	name = "";
//	department = "";
//}
//
//int Hospital::patientCount = 0;
//
//void Hospital::admitpatient()
//{
//	cout << "Enter name = ";
//	cin >> name;
//	cout << "Enter department = ";
//	cin >> department;
//	cout << "Date of admission = " << endl;
//	cout << "Enter day: ";
//	int dateInput;
//	cin >> dateInput;
//	dateOfAdmission.day = dateInput;
//	cout << "Enter month: ";
//	cin >> dateInput;
//	dateOfAdmission.month = dateInput;
//	cout << "Enter year: ";
//	cin >> dateInput;
//	dateOfAdmission.year = dateInput;
//	cout << "Date of discharge = " << endl;
//	cout << "Enter day: ";
//	cin >> dateInput;
//	dateOfDischarge.day = dateInput;
//	cout << "Enter month: ";
//	cin >> dateInput;
//	dateOfDischarge.month = dateInput;
//	cout << "Enter year: ";
//	cin >> dateInput;
//	dateOfDischarge.year = dateInput;
//	patientCount++;
//}
//
//void Hospital::dischargePatient()
//{
//	string patientName;
//	cout << "Enter the name of the person to be discharged = ";
//	cin >> patientName;
//	if (patientName == name)
//	{
//		cout << "Patient discharged." << endl;
//		patientCount--;
//	}
//}
//
//void Hospital::displayPatientData()
//{
//	cout << "-------PATIENT DATA-------" << endl;
//	cout << "Patient name = " << name << endl;
//	cout << "Patient department = " << department << endl;
//	cout << "Patient date of admission = " << dateOfAdmission.day << "/" << dateOfAdmission.month << "/" << dateOfAdmission.year << endl;
//	cout << "Patient date of discharge = " << dateOfDischarge.day << "/" << dateOfDischarge.month << "/" << dateOfDischarge.year << endl;
//}
//
//void Hospital::displayPatientCount()
//{
//	cout << "Patient count is = " << patientCount << endl;
//}
