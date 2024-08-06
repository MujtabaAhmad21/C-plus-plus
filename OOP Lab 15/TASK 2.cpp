//#include <iostream>
//using namespace std;
//
//void menu() 
//{
//    cout << "This program performs arithmetic operations on fractions." << endl;
//    cout << "Enter fractions in the form a/b where a and b are integers and b is not equal to 0." << endl;
//    cout << "Select the operation (+, -, *, /) and input the numerator and denominator of each fraction." << endl;
//}
//
//void addFractions(int numer1, int denom1, int numer2, int denom2, int& resNumer, int& resDenom)
//{
//    resNumer = numer1 * denom2 + numer2 * denom1;
//    resDenom = denom1 * denom2;
//}
//
//void subtractFractions(int numer1, int denom1, int numer2, int denom2, int& resNumer, int& resDenom) 
//{
//    resNumer = numer1 * denom2 - numer2 * denom1;
//    resDenom = denom1 * denom2;
//}
//
//void multiplyFractions(int numer1, int denom1, int numer2, int denom2, int& resNumer, int& resDenom) 
//{
//    resNumer = numer1 * numer2;
//    resDenom = denom1 * denom2;
//}
//
//void divideFractions(int numer1, int denom1, int numer2, int denom2, int& resNumer, int& resDenom)
//{
//    if (numer2 == 0)                          
//    {
//        throw "Division by zero condition!";
//    }
//    resNumer = numer1 * denom2;
//    resDenom = denom1 * numer2;
//}
//
//int main() 
//{
//    try
//    {
//        menu();
//        int num1, den1, num2, den2;
//        char op;
//        cout << "Enter the first fraction (a/b): ";
//        cin >> num1;
//        cin.ignore();
//        cin >> den1;
//        cout << "Enter the operation (+, -, *, /): ";
//        cin >> op;
//        cout << "Enter the second fraction (a/b): ";
//        cin >> num2;
//        cin.ignore();
//        cin >> den2;
//        int res_num, res_den;
//        switch (op) 
//        {
//        case '+':
//            addFractions(num1, den1, num2, den2, res_num, res_den);
//            break;
//        case '-':
//            subtractFractions(num1, den1, num2, den2, res_num, res_den);
//            break;
//        case '*':
//            multiplyFractions(num1, den1, num2, den2, res_num, res_den);
//            break;
//        case '/':
//            divideFractions(num1, den1, num2, den2, res_num, res_den);
//            break;
//        default:
//            cout << "Invalid operation!";
//            return 1;
//        }
//        cout << "The result is: " << res_num << "/" << res_den << "\n";
//    }
//    catch (const char* msg) 
//    {
//        cerr << msg << endl;
//    }
//
//    system("pause");
//    return 0;
//}