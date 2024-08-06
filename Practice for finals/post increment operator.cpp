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
//		temp.n = ++n;
//		return temp;
//	}
//	Count operator ++(int)
//	{
//		Count temp;
//		temp.n = n++;
//		return temp;
//	}
//};
//
//int main()
//{
//	Count x;
//	Count y;
//	 
//	y = x++;
//	x.show();
//	y.show();
//	x.show();
//
//	return 0;
//}