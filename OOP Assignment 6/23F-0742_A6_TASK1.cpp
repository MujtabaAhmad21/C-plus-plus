//#include <iostream>
//#include <cstring>
//#include <string>
//using namespace std;
//
//template <typename T>
//class Student
//{
//private:
//    T name;
//    int rollNumber;
//    T courseList;
//    char section;
//
//public:
//    Student(T n, int rn, T cl, char sec)
//    {
//        name = n;
//        rollNumber = rn;
//        courseList = cl;
//        section = sec;
//    }
//    T getName() const
//    {
//        return name;
//    }
//    void setName(T n)
//    {
//        name = n;
//    }
//    int getRollNumber() const 
//    {
//        return rollNumber;
//    }
//    void setRollNumber(int rn)
//    {
//        rollNumber = rn;
//    }
//    T getCourseList() const
//    {
//        return courseList; 
//    }
//    void setCourseList(T cl)
//    {
//        courseList = cl;
//    }
//    char getSection() const
//    {
//        return section;
//    }
//    void setSection(char sec)
//    {
//        section = sec;
//    }
//    void display() const
//    {
//        cout << "Name = " << name << endl;
//        cout << "Roll Number = " << rollNumber << endl;
//        cout << "Course List = " << courseList << endl;
//        cout << "Section = " << section << endl;
//    }
//};
//
//template<int Start, int End>
//void printPrimes()
//{
//    bool isPrime = true;
//    for (int i = 2; i <= Start / 2; ++i)
//    {
//        if (Start % i == 0)
//        {
//            isPrime = false;
//            break;
//        }
//    }
//    if (isPrime && Start > 1)
//    {
//        cout << Start << " ";
//    }
//    if constexpr (Start < End)
//    {
//        printPrimes<Start + 1, End>();
//    }
//}
//
//template <typename T>
//class BaseballPlayer
//{
//private:
//    T name;
//    int homeRuns;
//    static const int maxSize = 10;
//    T names[maxSize];
//    int homeRunsList[maxSize];
//    int count = 0;
//
//public:
//    BaseballPlayer(T n, int hr)
//    {
//        name = n;
//        homeRuns = hr;
//    }
//    void addPlayer(T n, int hr) 
//    {
//        if (count < maxSize) 
//        {
//            names[count] = n;
//            homeRunsList[count] = hr;
//            count++;
//        }
//        else
//        {
//            cout << "Maximum players limit reached." << endl;
//        }
//    }
//    void displayPlayers() const 
//    {
//        for (int i = 0; i < count; ++i)
//        {
//            cout << "Name: " << names[i] << ", Home Runs: " << homeRunsList[i] << endl;
//        }
//    }
//    void updatePlayer(T n, int hr) 
//    {
//        for (int i = 0; i < count; ++i) 
//        {
//            if (names[i] == n) {
//                homeRunsList[i] = hr;
//                break;
//            }
//        }
//    }
//};
//
//template <typename T>
//class Calculator {
//public:
//    static T add(T a, T b)
//    {
//        return a + b;
//    }
//    static T subtract(T a, T b) 
//    {
//        return a - b;
//    }
//    static T multiply(T a, T b) 
//    {
//        return a * b;
//    }
//};
//
//int main() 
//{
//    Student<string> student1("Mujtaba Ahmad", 230742, "OOP, DLD", 'A');
//    student1.display();
//
//    cout << "Prime numbers between 1 and 10 are = ";
//    printPrimes<1, 10>();
//    cout << endl;
//
//    BaseballPlayer<string> players("Player1", 15);
//    players.addPlayer("Player2", 20);
//    players.addPlayer("Player3", 10);
//    players.displayPlayers();
//    players.updatePlayer("Player2", 18);
//    players.displayPlayers();
//
//    cout << "Addition: " << Calculator<int>::add(5, 3) << endl;
//    cout << "Subtraction: " << Calculator<int>::subtract(5, 3) << endl;
//    cout << "Multiplication: " << Calculator<int>::multiply(5, 3) << endl;
//
//    //Calculator<int> calc;
//    //cout << "Addition: " << calc.add(5, 3) << endl;
//    //cout << "Subtraction: " << calc.subtract(5, 3) << endl;
//    //cout << "Multiplication: " << calc.multiply(5, 3) << endl;
//
//    system("pause");
//    return 0;
//}