//#include <iostream>
//using namespace std;
//
//class Parent
//{
//protected:
//	int n;
//public:
//	Parent()
//	{
//		n = 0;
//	}
//	Parent(int p)
//	{
//		n = p;
//	}
//	void show()
//	{
//		cout << "n = " << n << endl;
//	}
//};
//
//class Child : public Parent
//{
//private:
//	char ch;
//public:
//	Child() 
//	{
//		ch = 'x';
//	}
//	Child(char c, int m) : Parent(m)
//	{
//		ch = c;
//	}
//	void display()
//	{
//		cout << "ch = " << ch << endl;
//	}
//};
//
//int main()
//{
//	Child obj, obj2('@', 100);
//	cout << "obj is as follows: " << endl;
//	obj.show();
//	obj.display();
//	cout << "obj2 is as follows: " << endl;
//	obj2.show();
//	obj2.display();
//
//	return 0;
//}