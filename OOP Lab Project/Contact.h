#pragma once

#ifndef BASIC_LIB
#define BASIC_LIB
	#include <iostream>
	#include <string>
    #include "Address.h"
    using namespace std;
#endif // !BASIC_LIB

class Contact 
{
private:
	string first_name;
	string last_name;
	string mobile_number;
	string email_address;
	Address *address;

public:
	const bool Equals(Contact contact);
	Contact CopyContact();

	void SetFirstName(string f);
	void SetLastName(string l);
	void SetMobileNumber(string m);
	void SetEmailAddress(string e);
	const string GetFirstName() const;
	const string GetLastName() const;
	const string GetMobileNumber();
	const string GetEmailAddress();
	void SetHouse(string h);
	void SetStreet(string s);
	void SetCity(string c);
	void SetCountry(string ctr);
	const string GetHouse();
	const string GetStreet();
	const string GetCity();
	const string GetCountry();
	const Address& GetAddress() const;

	Contact();
	Contact(string first_name, string last_name, string mobile_number, string email_address, Address *address);
	~Contact();
};