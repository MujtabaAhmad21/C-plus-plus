//#include <iostream>
//using namespace std;
//
//class Add
//{
//private:
//	int a, b;
//public:
//	Add()
//	{
//		a = b = 0;
//	}
//	void in()
//	{
//		cout << "Enter a: ";
//		cin >> a;
//		cout << "Enter b: ";
//		cin >> b;
//	}
//	void show()
//	{
//		cout << "Value of A = " << a << endl;
//		cout << "Value of B = " << b << endl;
//	}
//	Add operator +(Add p)
//	{
//		Add temp;
//		temp.a = p.a + a;
//		temp.b = p.b + b;
//		return temp;
//	}
//};
//
//int main()
//{
//	Add x, y, z;
//	cout << "Enter values for x = " << endl;
//	x.in();
//	cout << "Enter values for y = " << endl;
//	y.in();
//	z = x + y;
//	cout << "Values of x are = " << endl;
//	x.show();
//	cout << "Values of y are = " << endl;
//	y.show();
//	cout << "After summing x and y , values are = " << endl;
//	z.show();
//
//	return 0;
//}