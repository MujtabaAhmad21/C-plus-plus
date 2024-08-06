//#include <iostream>
//using namespace std;
//
//class Student
//{
//	int roll;
//	int mark;
//public:
//	Student(int m, int n)
//	{
//		roll = m;
//		mark = n;
//	}
//	Student(Student& t);
//	void showData()
//	{
//		cout << "\n Roll num: " << roll;
//		cout << "\n Mark: " << mark << endl;;
//	}
//};
//
//Student::Student(Student& t)
//{
//	roll = t.roll;
//	mark = t.mark;
//}
//
//int main()
//{
//	cout << "\nParameterized constuctor output r \n";
//	Student r(60, 130);
//	r.showData();
//	cout << "\n \nCopy Constructor output stu(r) \n";
//	Student stu(r);
//	stu.showData();
//
//	system("pause");
//	return 0;
//}