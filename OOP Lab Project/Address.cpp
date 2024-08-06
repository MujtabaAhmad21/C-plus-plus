#include "Address.h"
#include <iostream>
#include <string>
using namespace std;

Address::Address(const Address& other)
{
	this->house = other.house;
	this->street = other.street;
	this->city = other.city;
	this->country = other.country;
}

Address::Address(string house, string street, string city, string country)
{
	this->house = house;
	this->street = street;
	this->city = city;
	this->country = country;
}

void Address::SetHouse(string h)
{
	house = h;
}
void Address::SetStreet(string s)
{
	street = s;
}
void Address::SetCity(string c)
{
	city = c;
}
void Address::SetCountry(string ctr)
{
	country = ctr;
}
const string Address::GetHouse() const
{
	return house;
}

const string Address::GetStreet() const
{
	return street;
}

const string Address::GetCity() const
{
	return city;
}

const string Address::GetCountry() const
{
	return country;
}


/*
*	Implement the equals function that takes an Address object and checks if it is equal to
*	current object refered by (this pointer)
*	Two addresses are equal if all the attributes of addresses are equal
*/
const bool Address::Equals(const Address& address)
{
	if (address.house == this->house && address.street == this->street && address.city == this->city && address.country == this->country)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Address::PrintAddress() const
{
	cout << "Address = " << house << " " << street << " " << city << " " << country << "." << endl;
}


Address Address::CopyAddress()
{
	Address temp;
	temp.house = this->house;
	temp.city = this->city;
	temp.street = this->street;
	temp.country = this->country;
	return temp;
}

void Address::SetAddress(string house, string street, string city, string country)
{
	this->house = house;
	this->street = street;
	this->city = city;
	this->country = country;
}

const Address& Address::GetAddress() const
{
	return *this;
}
