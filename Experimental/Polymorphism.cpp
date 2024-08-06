////#include <iostream>
////#include <string>
////using namespace std;
////
////class Test
////{
////private:
////	int n;
////public:
////	void in()
////	{
////		cout << "Enter Number: ";
////		cin >> n;
////	}
////	void out()
////	{
////		cout << "The value of n = " << n << endl;
////	}
////};
////
////int main()
////{
////	Test* ptr;
////	ptr = new Test;
////	ptr->in();
////	ptr->out();
////
////	system("pause");
////	return 0;
////}
//
//
//
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Person
//{
//private:
//	char name[50];
//public:
//	void get()
//	{
//		cout << "Enter your name: ";
//		cin >> name;
//	}
//	void show()
//	{
//		cout << "Your name = " << name << endl;
//	}
//};
//
//int main()
//{
//	Person* ptr[5];
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		ptr[i] = new Person;
//		ptr[i]->get();
//	}
//	for (i = 0; i < 5; i++)
//	{
//		ptr[i]->show();
//	}
//
//	system("pause");
//	return 0;
//}