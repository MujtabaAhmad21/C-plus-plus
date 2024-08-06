#pragma once
#include <iostream>
#include <string>
using namespace std;

class Address
{
	friend class Contact;
private:
	string house;
	string street;
	string city;
	string country;

public:
	const bool Equals(const Address& address);
	void PrintAddress() const;
	Address CopyAddress();
	void SetHouse(string h);
	void SetStreet(string s);
	void SetCity(string c);
	void SetCountry(string ctr);
	const string GetHouse() const;
	const string GetStreet() const;
	const string GetCity() const;
	const string GetCountry() const;
	void SetAddress(string house, string street, string city, string country);
	const Address& GetAddress() const;

	Address(string house, string street, string city, string country);
	Address() {}
	Address(const Address& other);
};