//#include <iostream>
//using namespace std;
//
//class Read
//{
//private:
//	int days, pages;
//public:
//	Read()
//	{
//		days = pages = 0;
//	}
//	void input()
//	{
//		cout << "How many days have you read? ";
//		cin >> days;
//		cout << "How many pages have you read? ";
//		cin >> pages;
//	}
//	void show()
//	{
//		cout << "You have read " << pages << " pages in " << days << " days. \n";
//	}
//	Read operator +=(Read obj)
//	{
//		Read temp;
//		days += obj.days;
//		pages += obj.pages;
//		temp.days = days;
//		temp.pages = pages;
//		return temp;
//	}
//};
//
//int main()
//{
//	Read result, month1, month2;
//
//	cout << "Reading in 1st month = " << endl;
//	month1.input();
//	cout << "Reading in 2nd month = " << endl;
//	month2.input();
//
//	cout << "Reading details of 1st month = " << endl;
//	month1.show();
//	cout << "Reading details of 2nd month = " << endl;
//	month2.show();
//
//	cout << "Adding 2nd month reading to 1st month reading.." << endl;
//	result = month1 += month2;
//
//	cout << "The result is = " << endl;
//	result.show();
//		 
//	return 0;
//} 