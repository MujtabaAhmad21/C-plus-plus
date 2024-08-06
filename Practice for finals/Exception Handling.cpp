//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int numerator, denominator, result = 0;
//	cout << "Enter numerator and denominator: ";
//	cin >> numerator >> denominator;
//
//	try
//	{
//		if (denominator == 0)
//		{
//			throw denominator;
//		}
//		result = numerator / denominator;
//	}
//	catch(int ex)
//	{
//		cout << "Exception: divide by zero isn't allowed." << ex;
//	}
//	cout << "Division is = " << result;
//
//	return 0;
//}