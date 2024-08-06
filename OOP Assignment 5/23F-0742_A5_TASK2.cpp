#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
	string nameOfEmployee, rankOfEmployee;
	double basicPay, medicalPay, houseRent, grossPay, nextYearPay;

public:
	Employee()
	{
		string nameOfEmployee, rankOfEmployee = "";
		double basicPay, medicalPay, houseRent, grossPay, nextYearPay = 0.00;
		cout << "Constructor." << endl;
	}
	~Employee()
	{
		cout << "Software developed by Mujtaba Ahmad" << endl;
	}

private:
	void display()
	{
		cout << "---------- EMPLOYEE DETAILS ----------" << endl;
		cout << "NAME = " << this->nameOfEmployee << endl;
		cout << "RANK = " << this->rankOfEmployee << endl;
		cout << "BASIC PAY = " << this->basicPay << endl;
		cout << "MEDICAL PAY = " << this->medicalPay << endl;
		cout << "GROSS PAY = " << this->grossPay << endl;
		cout << "NEXT YEAR PAY = " << this->nextYearPay << endl;
		cout << endl;
	}

	friend void Read_record(Employee& e);
	friend void Gross_pay(Employee& em);
	friend void Annual_increment(Employee& emp);
	friend void printAll(Employee& employ);
};

void Read_record(Employee& e)
{
	cout << "Enter name of employee: ";
	cin >> e.nameOfEmployee;
	cout << "Enter rank of employee: ";
	cin >> e.rankOfEmployee;
	cout << "Enter basic pay of employee: ";
	cin >> e.basicPay;
}

void Gross_pay(Employee& em)
{
	em.medicalPay = 0.60 * em.basicPay;
	em.houseRent = 0.30 * em.basicPay;
	em.grossPay = em.basicPay + em.medicalPay + em.houseRent;
}

void Annual_increment(Employee& emp)
{
	double amount;
	amount = 0.20 * emp.grossPay;
	emp.nextYearPay = emp.grossPay + amount;
}

void printAll(Employee& employ)
{
	employ.display();
}

int main()
{
	Employee object;

	Read_record(object);
	Gross_pay(object);
	Annual_increment(object);
	printAll(object);

	system("pause");
	return 0;
}