//#include<iostream>
//#include<sstream>
//using namespace std;
//
//int gcd(int a, int b) 
//{
//    if (b == 0)
//        return a;
//    return gcd(b, a % b);
//}
//
//void addFractions(int num1, int den1, int num2, int den2) {
//    int den3 = gcd(den1, den2);
//    den3 = (den1 * den2) / den3;
//    int num3 = (num1) * (den3 / den1) + (num2) * (den3 / den2);
//    int common_factor = gcd(num3, den3);
//    den3 = den3 / common_factor;
//    num3 = num3 / common_factor;
//    cout << "Sum = " << num3 << "/" << den3 << endl;
//}
//
//void subtractFractions(int num1, int den1, int num2, int den2) {
//    int den3 = gcd(den1, den2);
//    den3 = (den1 * den2) / den3;
//    int num3 = (num1) * (den3 / den1) - (num2) * (den3 / den2);
//    int common_factor = gcd(num3, den3);
//    den3 = den3 / common_factor;
//    num3 = num3 / common_factor;
//    cout << "Difference = " << num3 << "/" << den3 << endl;
//}
//
//void multiplyFractions(int num1, int den1, int num2, int den2) {
//    int num3 = num1 * num2;
//    int den3 = den1 * den2;
//    int common_factor = gcd(num3, den3);
//    den3 = den3 / common_factor;
//    num3 = num3 / common_factor;
//    cout << "Product = " << num3 << "/" << den3 << endl;
//}
//
//void divideFractions(int num1, int den1, int num2, int den2) {
//    if (num2 == 0) {
//        cout << "Invalid operation. Division by zero." << endl;
//        return;
//    }
//    int num3 = num1 * den2;
//    int den3 = den1 * num2;
//    int common_factor = gcd(num3, den3);
//    den3 = den3 / common_factor;
//    num3 = num3 / common_factor;
//    cout << "Quotient = " << num3 << "/" << den3 << endl;
//}
//
//int main()
//{
//    int num1, den1, num2, den2;
//    char op;
//    cout << "Welcome to Fraction Arithmetic Calculator" << endl;
//    cout << "Enter two fractions in the format a/b and an operator (+,-,*,/):" << endl;
//    string input;
//    getline(cin, input);
//    stringstream ss(input);
//    char slash; // variable to hold the slash character
//    ss >> num1 >> slash >> den1 >> op >> num2 >> slash >> den2;
//    if (den1 == 0 || den2 == 0) {
//        cout << "Invalid fraction. Denominator cannot be zero." << endl;
//        return 0;
//    }
//    if (op == '+')
//    {
//        addFractions(num1, den1, num2, den2);
//    }
//    else if (op == '-')
//    {
//        subtractFractions(num1, den1, num2, den2);
//    }
//    else if (op == '*')
//    {
//        multiplyFractions(num1, den1, num2, den2);
//    }
//    else if (op == '/')
//    {
//        divideFractions(num1, den1, num2, den2);
//    }
//    else
//    {
//        cout << "Invalid operator." << endl;
//    }
//        
//
//    system("pause");
//    return 0;
//}