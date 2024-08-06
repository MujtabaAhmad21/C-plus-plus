#include <iostream>
#include <string>
using namespace std;

class Date
{
	int day, month, year;

	friend class Calendar;

public:
	Date() : day(0), month(0), year(0) {}

	void operator+=(int d)
	{
		this->day += d;
		if (this->day > 30)
		{
			this->day -= 30;
			this->month += 1;
		}
	}
	void operator-=(int d)
	{
		this->day -= d;
	}
};

class Calendar
{
	Date* events;

public:
	int size;
	Calendar()
	{
		cout << "How many events are there? ";
		cin >> size;
		events = new Date[size];
	}
	void input()
	{
		for (int i = 0; i < size; i++)
		{
			cout << "Enter the day of event #" << i + 1 << ": ";
			cin >> events[i].day;
			cout << "Enter the month of event #" << i + 1 << ": ";
			cin >> events[i].month;
			cout << "Enter the year of event #" << i + 1 << ": ";
			cin >> events[i].year;
		}
	}
	void output()
	{
		cout << "Event details after calculations :-" << endl;
		for (int x = 0; x < size; x++)
		{
			cout << x + 1 << ". " << events[x].day << "/" << events[x].month << "/" << events[x].year << endl;
		}
	}
	void addDays()
	{
		int days, eventNum;
		cout << "How many days you want to add? ";
		cin >> days;
		cout << "Enter the event number to increment days: ";
		cin >> eventNum;
		events[eventNum - 1] += days;
	}
	void calculateDaysBetween()
	{
		int eventNum1, eventNum2, day1, day2, result;
		cout << "Enter the event numbers for which you want to calculate the days between them (respectively): ";
		cin >> eventNum1 >> eventNum2;
		day1 = events[eventNum1 - 1].day;
		day2 = events[eventNum2 - 1].day;
		if (day2 > day1)
		{
			result = day2 - day1;
		}
		else
		{
			result = day1 - day2;
		}
		cout << "Days between event #" << eventNum1 << " and event #" << eventNum2 << ": " << result << endl;
	}
};

int main()
{
	Calendar obj;
	obj.input();
	obj.addDays();
	obj.calculateDaysBetween();
	obj.output();

	system("pause");
	return 0;
}