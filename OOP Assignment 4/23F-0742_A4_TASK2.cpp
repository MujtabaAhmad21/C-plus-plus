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
//int main()
//{
//	CustomerData object;
//	object.InputCustomerData();
//	object.DisplayCustomerData();
//
//	system("pause");
//	return 0;
//}