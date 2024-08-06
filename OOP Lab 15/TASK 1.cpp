//#include <iostream>
//using namespace std;
//
//double division(int num1, int num2) 
//{
//    if (num2 == 0) 
//    {
//        throw "Cannot divide numerator by 0!";
//    }
//    return (double) num1 / num2;
//}
//
//int main() 
//{
//    int numerator, denominator;
//    double result = 0;
//
//    cout << "Please enter value for numerator: ";
//    cin >> numerator;
//    cout << "Please enter value for denominator: ";
//    cin >> denominator;
//
//    try 
//    {
//        result = division(numerator, denominator);
//        cout << "The result is = " << result << endl;
//    }
//    catch (const char* msg)
//    {
//        cout << msg << endl;
//    }
//
//    system("pause");
//    return 0;
//}