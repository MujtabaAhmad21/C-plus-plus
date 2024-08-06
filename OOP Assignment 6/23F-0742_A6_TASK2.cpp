//#include <iostream>
//#include <string>
//#include <sstream>
//using namespace std;
//
//class InvalidDay {};
//class InvalidMonth {};
//
//bool isLeapYear(int year) {
//    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//}
//
//int main() {
//    string dob;
//    cout << "Enter your date of birth (MM-DD-YYYY): ";
//    getline(cin, dob);
//
//    int month, day, year;
//    stringstream ss(dob);
//    char ignore;
//    ss >> month >> ignore >> day >> ignore >> year;
//
//    try
//    {
//        if (month < 1 || month > 12) throw InvalidMonth();
//        int maxDay;
//        switch (month)
//        {
//        case 2:
//        {
//            maxDay = isLeapYear(year) ? 29 : 28;
//            break;
//        }
//        case 4:
//        case 6:
//        case 9:
//        case 11:
//        {
//            maxDay = 30;
//            break;
//        }
//        default:
//        {
//            maxDay = 31;
//            break;
//        }
//        if (day < 1 || day > maxDay)
//        {
//            throw InvalidDay();
//
//        }
//        string months[] = { "January", "February", "March", "April", "May", "June",
//                                "July", "August", "September", "October", "November", "December" };
//        cout << "Your date of birth is: " << months[month - 1] << " " << day << ", " << year << endl;
//        }
//    }
//    catch (InvalidMonth) {
//        cout << "Error: Invalid month entered. Please enter a value between 1 and 12." << endl;
//    }
//    catch (InvalidDay) {
//        cout << "Error: Invalid day entered. Please enter a valid day for the given month and year." << endl;
//    }
//
//    system("pause");
//    return 0;
//}
