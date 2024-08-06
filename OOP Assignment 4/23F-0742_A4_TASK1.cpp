//#include <iostream>
//#include <string>
//using namespace std;
//
//class Base
//{
//public:
//	int Base1;
//protected:
//	int Base2;
//private:
//	int Base3;
//public:
//	Base()
//	{
//		Base1 = Base2 = Base3 = 0;
//	}
//	Base(int b1, int b2, int b3)
//	{
//		Base1 = b1;
//		Base2 = b2;
//		Base3 = b3;
//	}
//	void display()
//	{
//		cout << "--------BASE CLASS--------" << endl;
//		cout << "Attribute 1 = " << Base1 << endl;
//		cout << "Attribute 2 = " << Base2 << endl;
//		cout << "Attribute 3 = " << Base3 << endl;
//	}
//};
//
//class Intermediate : public Base      // private base3 not inherited.
//{
//public:
//	int Intermediate1;
//protected:
//	int Intermediate2;
//private:
//	int Intermediate3;
//public:
//	Intermediate()
//	{
//		Intermediate1 = Intermediate2 = Intermediate3 = 0;
//	}
//	Intermediate(int i1, int i2, int i3, int b1, int b2)
//	{
//		Intermediate1 = i1;
//		Intermediate2 = i2;
//		Intermediate3 = i3;
//		Base1 = b1;
//		Base2 = b2;
//	}
//	void display()
//	{
//		cout << "--------INTERMERDIATE CLASS--------" << endl;
//		cout << "Attribute 1 = " << Intermediate1 << endl;
//		cout << "Attribute 2 = " << Intermediate2 << endl;
//		cout << "Attribute 3 = " << Intermediate3 << endl;
//		cout << "Attribute 4 (base public) = " << Base1 << endl;
//		cout << "Attribute 5 (base protected) = " << Base2 << endl;
//	}
//};
//
//class Derived : public Intermediate       // private base3 and attribute3 not inherited.
//{
//public:
//	int Derived1;
//protected:
//	int Derived2;
//private:
//	int Derived3;
//public:
//	Derived()
//	{
//		Derived1 = Derived2 = Derived3 = 0;
//	}
//	Derived(int d1, int d2, int d3, int b1, int b2, int i1, int i2)
//	{
//		Derived1 = d1;
//		Derived2 = d2;
//		Derived3 = d3;
//		Base1 = b1;
//		Base2 = b2;
//		Intermediate1 = i1;
//		Intermediate2 = i2;
//	}
//	void display()
//	{
//		cout << "--------DERIVED CLASS--------" << endl;
//		cout << "Attribute 1 = " << Derived1 << endl;
//		cout << "Attribute 2 = " << Derived2 << endl;
//		cout << "Attribute 3 = " << Derived3 << endl;
//		cout << "Attribute 4 (base public) = " << Base1 << endl;
//		cout << "Attribute 5 (base protected) = " << Base2 << endl;
//		cout << "Attribute 6 (inter public) = " << Intermediate1 << endl;
//		cout << "Attribute 7 (inter protected) = " << Intermediate2 << endl;
//	}
//};
//
//int main()
//{
//	Base obj(20, 40, 60);
//	obj.display();
//
//	Intermediate obj2(10, 30, 50, 70, 80);
//	obj2.display();
//
//	Derived obj3(80, 90, 100, 110, 120, 130, 140);
//	obj3.display();
//
//	system("pause");
//	return 0;
//}