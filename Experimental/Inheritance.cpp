//#include <iostream>
//using namespace std;
//
//class base
//{
//public:
//	int x;
//private:
//	int y;
//protected:
//	int z;
//	void setY(int num)
//	{
//		y = num;
//	}
//	int getY()
//	{
//		return y;
//	}
//};
//
//class derived : public base
//{
//public:
//	void setX(int num)
//	{
//		z = num;
//	}
//	void display()
//	{
//		cout << z;
//	}
//	void show()
//	{
//		cout << "Enter value for private: ";
//		int num;
//		cin >> num;
//		setY(num);
//		cout << "Private value from getter function returning y = " << getY() << endl;
//	}
//};
//
//int main()
//{
//	derived obj;
//	obj.x = 20;
//
//	cout << obj.x << endl;
//
//	derived obj2;
//	obj2.setX(5);
//	obj2.display();
//	cout << endl;
//
//	derived obj3;
//	obj3.show();
//	cout << endl;
//
//	system("pause");
//	return 0;
//}