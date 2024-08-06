//#include <iostream>
//#include <string>
//using namespace std;
//
//class Parent
//{
//public:
//	virtual void show() = 0;
//};
//
//class Child1 : public Parent
//{
//public:
//	void show()
//	{
//		cout << "Child1 class...\n";
//	}
//};
//
//class Child2 : public Parent
//{
//public:
//	void show()
//	{
//		cout << "Child2 class...\n";
//	}
//};
//
//int main()
//{
//	//   you cannot create an object of pure virtual class for example.
//	//   Parent obj;
//	//   if any one of the child class does not have the override function
//	//   definition in it then that child class is also called an abstract class.
//	//   so you cannot create an object of that child class now as well.
//	//   ptr[1] = new Child2 will give error if we comment out the function.
//
//	Parent* ptr[2];
//	ptr[0] = new Child1;
//	ptr[1] = new Child2;
//	ptr[0]->show();
//	ptr[1]->show();
//
//	return 0;
//}