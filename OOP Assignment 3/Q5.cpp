//#include <iostream>
//#include <string>
//using namespace std;
//
//class Time
//{
//	int hours;
//	int minutes;
//	int seconds;
//public:
//	Time()     //  default constructor to initialize values to 0.
//	{
//		hours = minutes = seconds = 0;
//	}
//	Time(int h, int m, int s)     //   overloaded function to set values to 
//	{                             //   fixed values.
//		hours = h;
//		minutes = m;
//		seconds = s;
//	}
//	void display()
//	{
//		cout << "Time is = " << hours << ":" << minutes << ":" << seconds << endl;
//	}
//	void addTime(Time obj1, Time obj2)      // this function adds the data members of
//	{                                       // the two objects together. There are
//		hours = obj1.hours + obj2.hours;    // also if conditions to set time in 12hr
//		if (hours > 12)                     // format so the hours, mins, secs does not
//		{                                   // go out of range.
//			hours -= 12;
//		}
//		minutes = obj1.minutes + obj2.minutes;
//		if (minutes > 60)
//		{
//			minutes -= 60;
//		}
//		seconds = obj1.seconds + obj2.seconds;
//		if (seconds > 60)
//		{
//			seconds -= 60;
//		}
//	}
//};
//
//int main()
//{
//	Time time1(10, 60, 50);
//	Time time2(7, 40, 70);
//	Time time3;
//
//	time3.addTime(time1, time2);
//	time3.display();
//
//	system("pause");
//	return 0;
//}