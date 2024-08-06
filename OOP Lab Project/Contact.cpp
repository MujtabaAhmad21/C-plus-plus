#include "Contact.h"
#include "Address.h"
#include <string>
#include <iostream>
using namespace std;

/*
*	Implement a constructor that initializes all the Contact parts, including address. Call the setter to set values
*	as they have the logic to check correct input
*	Declaration is given in Contact.h
*/

// In Contact constructor
Contact::Contact()
{
	first_name = last_name = mobile_number = email_address = "";
	address = nullptr; // Initialize address pointer to nullptr
}

Contact::~Contact()
{
	delete address;
}

Contact::Contact(string first_name, string last_name, string mobile_number, string email_address, Address* address)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->mobile_number = mobile_number;
	this->email_address = email_address;
	if (address != nullptr) {
		this->address = new Address(*address);
	}
	else {
		this->address = nullptr;
	}
}

/*
*	Implement getter/setters for all the member variables of Contact. Also declare them in the Contact.h header file
*	In each setter, do not set value if string is empty ("" 0 size). 
*   Check in phone number setter, Phone number must be 11 digits
*/

void Contact::SetFirstName(string f)
{
	first_name = f;
}
void Contact::SetLastName(string l)
{
	last_name = l;
}
void Contact::SetMobileNumber(string m)
{
	size_t length = m.size();
	if (length == 11)
	{
		mobile_number = m;
	}
}
void Contact::SetEmailAddress(string e)
{
	email_address = e;
}
const string Contact::GetFirstName() const
{
	return first_name;
}

const string Contact::GetLastName() const
{
	return last_name;
}
const string Contact::GetMobileNumber()
{
	return mobile_number;
}
const string Contact::GetEmailAddress()
{
	return email_address;
}
const Address& Contact::GetAddress() const
{
	return *address;
}
void Contact::SetHouse(string h)
{
	this->address->house = h;
}
void Contact::SetStreet(string s)
{
	this->address->street = s;
}
void Contact::SetCity(string c)
{
	this->address->city = c;
}
void Contact::SetCountry(string ctr)
{
	this->address->country = ctr;
}
const string Contact::GetHouse()
{
	return this->address->house;
}
const string Contact::GetStreet()
{
	return this->address->street;
}
const string Contact::GetCity()
{
	return this->address->city;
}
const string Contact::GetCountry()
{
	return this->address->country;
}

/*
*	Implement the equals function(as declared in header file) that takes a 
*   Contact object and checks if it is equal to current object refered by (this pointer). 
*   Compare all the attributes.
*   For comparing address of contact you can call the equals function of the Address object;
*   For example: this.address.equals
*/

const bool Contact::Equals(Contact contact)
{
	if (contact.first_name == this->first_name && contact.address == this->address && contact.email_address == this->email_address && contact.mobile_number == this->mobile_number)
	{
		return true;
	}
	else
	{
		return false;
	}
}

Contact Contact::CopyContact()
{
	// Create a new Contact object
	Contact newContact;

	// Copy the data from the current contact to the new contact
	newContact.first_name = this->first_name;
	newContact.last_name = this->last_name;
	newContact.mobile_number = this->mobile_number;
	newContact.email_address = this->email_address; // Assuming Address has a copy constructor or operator=

	// Return the new contact
	return newContact;
}
