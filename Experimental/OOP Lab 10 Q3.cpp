//#include <iostream>
//#include <string>
//using namespace std;
//class student
//{
//    int stdID;
//    string stdName;
//    string dept;
//
//public:
//    student() : stdID(0), stdName(""), dept("") {};
//    student(int id, string name) : stdID(id), stdName(name) {};
//    student(int id, string name, string Dep) :stdID(id), stdName(name), dept(Dep) {}
//
//
//    void inputData()
//    {
//        cout << "Enter student name: ";
//        cin.ignore();
//        getline(cin, stdName);
//        cout << "Enter student ID: ";
//        cin >> stdID;
//        cin.ignore();
//        cout << "Enter department: ";
//        getline(cin, dept);
//    }
//
//    void displayData()
//    {
//        cout << "Student ID: " << stdID << endl;
//        cout << "Student Name: " << stdName << endl;
//        cout << "Department: " << dept << endl;
//    }
//
//    student(const student& obj)
//    {
//        stdID = obj.stdID;
//        stdName = obj.stdName;
//        dept = obj.dept;
//    }
//
//    ~student()
//    {
//        cout << "Student Destructor: " << stdName << endl;
//    }
//};
//
//int main()
//{
//    student obj1(8924523, "Mujtaba Ahmad");
//    cout << endl << endl << "\t\tInformation from object 1\n\n";
//    obj1.displayData();
//    cout << endl << endl << "\t\tInformation from object 2\n\n";
//    student obj2(389473298, "Imran", "BS Computer Science");
//    obj2.displayData();
//    student obj3(93845823, "Sheraz");
//    cout << endl << endl << "\t\tInformation from object 3\n\n";
//    obj3.displayData();
//    cout << endl;
//
//    system("pause");
//    return 0;
//}