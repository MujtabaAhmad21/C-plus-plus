//#include <iostream>
//#include <string>
//using namespace std;
//
//class student
//{
//	string name;
//	int CNIC;
//	char gender;
//	float CGPA;
//
//public:
//	void setCNIC(int x)
//	{
//		CNIC = x;
//	}
//	void setGender(int g)
//	{
//		gender = g;
//	}
//	void setName()
//	{
//		cout << "Enter name of student: ";
//		cin >> name;
//		cout << endl;
//	}
//	void setCGPA()
//	{
//		cout << "Enter cgpa of student: ";
//		cin >> CGPA;
//		cout << endl;
//	}
//	string getName()
//	{
//		return name;
//	}
//	char getGender()
//	{
//		return gender;
//	}
//	int getCNIC()
//	{
//		return CNIC;
//	}
//	float getCGPA()
//	{
//		return CGPA;
//	}
//};
//
//class section
//{
//	student instance[40];
//	string sectionName;
//	string classTeacher;
//
//public:
//	int count = 0;     // this variable keeps track of the students added in a section.
//	void editSection()
//	{
//		cout << "Enter the name of the Section: ";
//		cin >> sectionName;
//		cout << "Enter the name of Class Teacher: ";
//		cin >> classTeacher;
//	}
//	void addStudent()
//	{
//		char g;
//		int p;
//		instance[count].setName();
//		cout << "Enter the gender of student (M/F): ";
//		cin >> g;
//		instance[count].setGender(g);
//		cout << "Enter the cnic of student: ";
//		cin >> p;
//		instance[count].setCNIC(p);
//		instance[count].setCGPA();
//		count++;
//	}
//	void updateStudent()  // this function works by first comparing the name of the student in the 
//	{                     // section and then updating the data of that student.
//		string NAME;
//		cout << "Enter the name of student to update data: ";
//		cin >> NAME;
//		for (int i = 0; i < 40; i++)
//		{
//			if (instance[i].getName() == NAME)
//			{
//				cout << "-----Update CGPA-----";
//				instance[i].setCGPA();
//			}
//		}
//	}
//	void printListOfSections()
//	{
//		cout << "Name: " << sectionName << endl;
//		cout << "Class Teacher: " << classTeacher << endl;
//	}
//	void printListOfStudentsOfSection()
//	{
//		cout << "Name of section: " << sectionName << endl;
//		cout << "Name of Class Teacher: " << classTeacher << endl;
//		cout << "------LIST OF STUDENTS----" << endl;
//		for (int i = 0; i < 40; i++)
//		{
//			cout << "Student " << i + 1 << " name = " << instance[i].getName() << endl;
//			cout << "Student " << i + 1 << " gender = " << instance[i].getGender() << endl;
//			cout << "Student " << i + 1 << " cnic = " << instance[i].getCNIC() << endl;
//			cout << "Student " << i + 1 << " cgpa = " << instance[i].getCGPA() << endl;
//		}
//		cout << endl;
//	}
//};
//
//int main()
//{
//	section* ptr;   // pointer of class Section.
//	int size;
//	cout << "-----------WELCOME---------" << endl;
//	cout << "How many sections you want to create? ";
//	cin >> size;
//	ptr = new section[size];  // dynamically allocated the size of sections user wanted.
//
//	bool flag = true;
//	while (flag == true)    // menu loop which iterates until the user enters 0.
//	{
//		cout << "--------MENU--------" << endl;
//		cout << "1. Edit Section Attributes" << endl;
//		cout << "2. Add Student in a section" << endl;
//		cout << "3. Update Student of a section" << endl;
//		cout << "4. Print List of Students of a section" << endl;
//		cout << "5. Print List of Sections" << endl;
//		cout << "Enter 0 to exit the programme" << endl;
//
//		int choice;   //  variable for switch structure.
//		cout << "Enter your choice: ";
//		cin >> choice;  
//
//		int z;      // variable for sections created.
//		if (choice != 0 && choice != 5) {
//			cout << "Enter the section number (0 to " << size - 1 << "): ";
//			cin >> z;
//		}
//
//		switch (choice)
//		{
//		case 0:
//		{
//			cout << "THANKS! Please come again." << endl;
//			flag = false;
//			break;
//		}
//		case 1:
//		{
//			ptr[z].editSection();
//			break;
//		}
//		case 2:
//		{
//			ptr[z].addStudent();
//			break;
//		}
//		case 3:
//		{
//			ptr[z].updateStudent();
//			break;
//		}
//		case 4:
//		{
//			cout << "--------LIST OF STUDENTS OF SECTION-------" << endl;
//			ptr[z].printListOfStudentsOfSection();
//			break;
//		}
//		case 5:
//		{
//			cout << "--------LIST OF SECTIONS-------" << endl;
//			for (int x = 0; x < size; x++)
//			{
//				ptr[x].printListOfSections();
//			}
//			break;
//		}
//		default:
//		{
//			cout << "Invalid input. Please try again.";
//			break;
//		}
//		}
//	}
//
//	system("pause");
//	return 0;
//}