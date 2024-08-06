///*     This programme is menu driven and performs the system of a bank
//	   account. You can select from various option given in the menu whether
//	   to deposit your money or withdraw. For this setter and getter
//	   functions are used as well as a static data member to keep track of
//	   how many transactions have been made so far. The functions are called
//	   in the switch cases according to the user choice which is also in
//	   a while loop and it terminates when user wants to leave the bank account
//	   system.
//*/
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class BankAccount
//{
//private:
//	double balance;
//	double interestRate;
//	double interest;
//	double transactions = 0;
//	static int count;
//public:
//	BankAccount(double b, double intRate)
//	{
//		balance = b;
//		interest = intRate;
//	}
//	void setInterestRate(double intRate)
//	{
//		interestRate = intRate;
//	}
//	void makeDeposit(double depo)
//	{
//		balance = depo;
//	}
//	void withdraw(double bal)
//	{
//		if (bal > balance)
//		{
//			cout << "Error! Withdrawal amount is greater than balance." << endl;
//		}
//		else
//		{
//			balance -= bal;
//		}
//		transactions++;
//	}
//	void incCount()
//	{
//		count++;
//	}
//	void addInterestrate(double inter)
//	{
//		interestRate = inter;
//	}
//	void calcInterest()
//	{
//		interest = balance * interestRate;
//		balance += interest;
//	}
//	static int getCount()
//	{
//		return count;
//	}
//	const double getInterestRate()
//	{
//		return interestRate;
//	}
//	const double getBalance()
//	{
//		return balance;
//	}
//	const double getInterest()
//	{
//		return interest;
//	}
//	const double getTransactions()
//	{
//		return transactions;
//	}
//};
//
//int BankAccount::count = 0;
//
//void displayMenu(BankAccount obj)
//{
//	cout << "MENU" << endl;
//	cout << "------------------------------------" << endl;
//	cout << "A) Display the account balance" << endl;
//	cout << "B) Display the number of transactions" << endl;
//	cout << "C) Display the inerterest earned for this period" << endl;
//	cout << "D) Make a deposit" << endl;
//	cout << "E) Make a withdrawal" << endl;
//	cout << "F) Add interest for this period" << endl;
//	cout << "G) Exit the programme" << endl;
//}
//
//int main()
//{
//	char choice;
//	BankAccount data(0, 0.045);
//	bool flag = true;
//	int Choice_count = 0;
//
//	while (flag == true)
//	{
//		displayMenu(data);
//		cout << "Number of times this programme has taken choice: " << Choice_count << endl << endl;
//		cout << "Enter your choice: ";
//		cin >> choice;
//
//		switch (choice)
//		{
//		case 'A':
//		case 'a':
//		{
//			cout << "The current balance is : $" << data.getBalance() << endl;
//			break;
//		}
//		case 'B':
//		case 'b':
//		{
//			cout << "There have been : " << data.getTransactions() << " transactions so far " << endl;
//			break;
//		}
//		case 'C':
//		case 'c':
//		{
//			data.calcInterest();
//			cout << "Interest earned for this period : $" << data.getInterest() << endl;
//			break;
//		}
//		case 'D':
//		case 'd':
//		{
//			cout << "Enter the amount of the deposit : ";
//			double deposit;
//			cin >> deposit;
//			data.makeDeposit(deposit);
//			cout << endl;
//			break;
//		}
//		case 'E':
//		case 'e':
//		{
//			cout << "Enter the amount of withdrawal : ";
//			double withdrawal;
//			cin >> withdrawal;
//			data.withdraw(withdrawal);
//			cout << endl;
//			break;
//		}
//		case 'F':
//		case 'f':
//		{
//			cout << "Add interest for this period : ";
//			double curr_int;
//			cin >> curr_int;
//			data.addInterestrate(curr_int);
//			cout << endl;
//			break;
//		}
//		case 'G':
//		case 'g':
//		{
//			cout << "Thanks! Please come again." << endl;
//			flag = false;
//			break;
//		}
//		default:
//		{
//			cout << "Invalid input. Please try again." << endl;
//			break;
//		}
//		}
//		Choice_count++;
//	}
//
//	system("pause");
//	return 0;
//}