//#include <iostream>
//#include <string>
//using namespace std;
//
//class PersonData
//{
//protected:
//	string FirstName, LastName, Address, City, State, Zip, PhoneNo;
//public:
//	void setFirstName(string f)
//	{
//		FirstName = f;
//	}
//	void setLastName(string l)
//	{
//		LastName = l;
//	}
//	void setAddress(string a)
//	{
//		Address = a;
//	}
//	void setCity(string c)
//	{
//		City = c;
//	}
//	void setState(string s)
//	{
//		State = s;
//	}
//	void setZip(string z)
//	{
//		Zip = z;
//	}
//	void setPhoneNo(string p)
//	{
//		PhoneNo = p;
//	}
//	string getFirstName()
//	{
//		return FirstName;
//	}
//	string getLastName()
//	{
//		return LastName;
//	}
//	string getAddress()
//	{
//		return Address;
//	}
//	string getCity()
//	{
//		return City;
//	}
//	string getState()
//	{
//		return State;
//	}
//	string getZip()
//	{
//		return Zip;
//	}
//	string getPhoneNo()
//	{
//		return PhoneNo;
//	}
//};
//
//class CustomerData : public PersonData
//{
//public:
//	int CustomerNumber;
//	bool MailingList;
//public:
//	void InputCustomerData()
//	{
//		cout << "--------ENTER DETAILS---------" << endl;
//		cout << "First Name: ";
//		cin >> FirstName;
//		cout << "Last Name: ";
//		cin >> LastName;
//		cout << "Address: ";
//		cin >> Address;
//		cout << "City: ";
//		cin >> City;
//		cout << "State: ";
//		cin >> State;
//		cout << "Zip: ";
//		cin >> Zip;
//		cout << "Phone NO: ";
//		cin >> PhoneNo;
//		cout << "Please enter your customer number: ";
//		cin >> CustomerNumber;
//		cout << "Do you wish to be on the mailing list? (press 1 for yes and 0 for no) ";
//		int input;
//		cin >> input;
//		while (input != 0 && input != 1)
//		{
//			cout << "Invalid input. Please enter 1 for yes and 0 for no: ";
//			cin >> input;
//		}
//		MailingList = input;
//	}
//	void DisplayCustomerData()
//	{
//		cout << "--------CUSTOMER DATA-------" << endl;
//		cout << "First Name = " << getFirstName() << endl;
//		cout << "Last Name = " << getLastName() << endl;
//		cout << "Address = " << getAddress() << endl;
//		cout << "City = " << getCity() << endl;
//		cout << "Stae = " << getState() << endl;
//		cout << "Zip = " << getZip() << endl;
//		cout << "Phone num = " << getPhoneNo() << endl;
//		cout << "Customer number = " << CustomerNumber << endl;
//		cout << "Mailing list = ";
//		if (MailingList == 1)
//		{
//			cout << " true" << endl;
//		}
//		else
//		{
//			cout << " false" << endl;
//		}
//	}
//};
//
//class PreferredCustomer : public CustomerData
//{
//	double purchaseAmount;
//	double discountLevel;
//	static int count;
//public:
//	PreferredCustomer()
//	{
//		purchaseAmount = discountLevel = 0;
//	}
//	void calcAmount()
//	{
//		double spending;
//		bool flag = true;
//		int choice;
//		while (flag == true)
//		{
//			cout << "Press 1 to carry on the programme. " << endl;
//			cout << "Press 0 to exit the programme. " << endl;
//			cout << "Press 2 to show purchase amount. " << endl;
//			cout << "Press 3 to show discount level. " << endl;
//			cin >> choice;
//			switch (choice)
//			{
//			case 0:
//			{
//				cout << "Thanks please come again." << endl;
//				flag = false;
//				break;
//			}
//			case 1:
//			{
//				cout << "How much has the cutomer spend? ";
//				cin >> spending;
//				while (spending < 0)
//				{
//					cout << "Amount cannot be less than 0. Please try again.";
//					cin >> spending;
//				}
//				if (spending >= 2000)
//				{
//					cout << "You got a discount of 10% on all future purchases!\n";
//					if (count == 0)
//					{
//						purchaseAmount += spending;
//					}
//					else
//					{
//						purchaseAmount += (spending * discountLevel);
//					}
//					discountLevel = 0.10;
//				}
//				else if (spending >= 1500 && spending < 2000)
//				{
//					cout << "You got a discount of 7% on all future purchases!\n";
//					if (count == 0)
//					{
//						purchaseAmount += spending;
//					}
//					else
//					{
//						purchaseAmount += (spending * discountLevel);
//					}
//					discountLevel = 0.7;
//				}
//				else if (spending >= 1000 && spending < 1500)
//				{
//					cout << "You got a discount of 6% on all future purchases!\n";
//					if (count == 0)
//					{
//						purchaseAmount += spending;
//					}
//					else
//					{
//						purchaseAmount += (spending * discountLevel);
//					}
//					discountLevel = 0.6;
//				}
//				else if (spending >= 500 && spending < 1000)
//				{
//					cout << "You got a discount of 5% on all future purchases!\n";
//					if (count == 0)
//					{
//						purchaseAmount += spending;
//					}
//					else
//					{
//						purchaseAmount += (spending * discountLevel);
//					}
//					discountLevel = 0.5;
//				}
//				else
//				{
//					purchaseAmount += spending;
//					discountLevel = 0;
//					cout << "Sorry! you got no discount.\n";
//				}
//				count++;
//				break;
//			}
//			case 2:
//			{
//				cout << "The purchase amount until now is = " << purchaseAmount << endl;
//				cout << "The amouont of times customer spend = " << count << endl;
//				break;
//			}
//			case 3:
//			{
//				cout << "The current discount level is = " << discountLevel << endl;
//				break;
//			}
//			default:
//			{
//				cout << "Invalid input. Please try again." << endl;
//				break;
//			}
//			}
//		}
//	}
//};
//
//int PreferredCustomer::count = 0;
//
//int main()
//{
//	CustomerData object;
//	object.InputCustomerData();
//	object.DisplayCustomerData();
//
//	PreferredCustomer object2;
//	object2.calcAmount();
//
//	system("pause");
//	return 0;
//}