//#include <iostream>
//using namespace std;
//
//class Count
//{
//private:
//	int n;
//public:
//	Count()
//	{
//		n = 0;
//	}
//	void show()
//	{
//		cout << "N = " << n << endl;
//	}
//	Count operator ++()
//	{
//		Count temp;
//		n += 1;
//		temp.n = n;
//		return temp;
//	}
//};
//
//int main()
//{
//	Count x;
//	Count y;
//	x.show();
//	y.show();
//	y = ++x;
//	x.show();
//	y.show();
//
//	return 0;
//}