#include "ContactsBook.h"
#include "Address.h"
#include "Contact.h"
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

void ContactsBook::add_contact(const Contact& contact)
{
    if (full())
    {
        resize_list();
    }

    contacts_list[contacts_count] = contact;
}

// In ContactsBook full() method
bool ContactsBook::full()
{
    return contacts_count == size_of_contacts; 
}


int ContactsBook::total_contacts()
{
    return contacts_count;
}

Contact* ContactsBook::search_contact(string first_name, string last_name)
{
    for (int i = 0; i < contacts_count; i++)
    {
        if (contacts_list[i].GetFirstName() == first_name && contacts_list[i].GetLastName() == last_name)
        {
            return &contacts_list[i];
        }
    }
    return nullptr;
}

Contact* ContactsBook::search_contact(string phone)
{
    for (int i = 0; i < contacts_count; i++)
    {
        if (contacts_list[i].GetMobileNumber() == phone)
        {
            return &contacts_list[i];
        }
    }
    return nullptr;
}

Contact* ContactsBook::search_contact(const Address& address)
{
    for (int i = 0; i < contacts_count; i++)
    {
        if (contacts_list[i].GetHouse() == address.GetHouse() &&
            contacts_list[i].GetStreet() == address.GetStreet() &&
            contacts_list[i].GetCity() == address.GetCity() &&
            contacts_list[i].GetCountry() == address.GetCountry())
        {
            return &contacts_list[i];
        }
    }
    return nullptr;
}

void ContactsBook::print_contacts_sorted(string choice)
{
    Contact* sorted_contacts = new Contact[contacts_count];
    for (int i = 0; i < contacts_count; i++)
    {
        sorted_contacts[i] = contacts_list[i].CopyContact();
    }

    sort_contacts_list(sorted_contacts, choice);

    for (int i = 0; i < contacts_count; i++)
    {
        cout << "First Name: " << sorted_contacts[i].GetFirstName() << endl;
        cout << "Last Name: " << sorted_contacts[i].GetLastName() << endl;
        cout << "Mobile Number: " << sorted_contacts[i].GetMobileNumber() << endl;
        cout << "Email Address: " << sorted_contacts[i].GetEmailAddress() << endl;
        sorted_contacts[i].GetAddress().PrintAddress();
        cout << endl;
    }

    delete[] sorted_contacts;
}


void ContactsBook::sort_contacts_list(Contact* contacts_list, string choice)
{
    if (choice == "first_name")
    {
        sort(contacts_list, contacts_list + contacts_count, [](const Contact& a, const Contact& b)
            {
                return a.GetFirstName() < b.GetFirstName();
            });
    }
    else if (choice == "last_name")
    {
        sort(contacts_list, contacts_list + contacts_count, [](const Contact& a, const Contact& b)
            {
                return a.GetLastName() < b.GetLastName();
            });
    }
}

void ContactsBook::merge_duplicates()
{
    for (int i = 0; i < contacts_count; i++)
    {
        for (int j = i + 1; j < contacts_count; j++)
        {
            if (contacts_list[i].Equals(contacts_list[j]))
            {
                // Merge contacts_list[j] into contacts_list[i]
                // For simplicity, let's assume merging means deleting the duplicate
                // and updating the count
                for (int k = j + 1; k < contacts_count; k++)
                {
                    contacts_list[k - 1] = contacts_list[k];
                }
                contacts_count--;
                j--; // Decrement j to re-check the new contact at position j
            }
        }
    }
}

void ContactsBook::load_from_file(string file_name)
{
    ifstream infile(file_name);
    if (!infile)
    {
        cerr << "Error opening file" << endl;
        return;
    }

    infile >> contacts_count;
    for (int i = 0; i < contacts_count; i++)
    {
        string first_name, last_name, mobile_number, email_address;
        string house, street, city, country;

        getline(infile >> ws, first_name, ',');
        getline(infile, last_name, ',');
        getline(infile, mobile_number, ',');
        getline(infile, email_address, '\n');

        getline(infile >> ws, house, ',');
        getline(infile, street, ',');
        getline(infile, city, ',');
        getline(infile, country, '\n');

        Address address(house, street, city, country);
        Contact contact(first_name, last_name, mobile_number, email_address, &address);
        add_contact(contact);
    }

    infile.close();
}

void ContactsBook::save_to_file(string file_name)
{
    ofstream outfile(file_name);
    if (!outfile)
    {
        cerr << "Error opening file" << endl;
        return;
    }

    outfile << contacts_count << endl;
    for (int i = 0; i < contacts_count; i++)
    {
        outfile << contacts_list[i].GetFirstName() << ","
            << contacts_list[i].GetLastName() << ","
            << contacts_list[i].GetMobileNumber() << ","
            << contacts_list[i].GetEmailAddress() << endl;

        outfile << contacts_list[i].GetAddress().GetHouse() << ","
            << contacts_list[i].GetAddress().GetStreet() << ","
            << contacts_list[i].GetAddress().GetCity() << ","
            << contacts_list[i].GetAddress().GetCountry() << endl;
    }

    outfile.close();
}

ContactsBook::ContactsBook(int size_of_list)
{
    contacts_list = new Contact[size_of_list];
    size_of_contacts = size_of_list;
    contacts_count = 0;
}

ContactsBook::~ContactsBook()
{
    delete[] contacts_list;
}

void ContactsBook::resize_list()
{
    int new_size = size_of_contacts * 2; // Double the size

    Contact* new_contacts_list = new Contact[new_size];

    for (int i = 0; i < contacts_count; i++)
    {
        new_contacts_list[i] = contacts_list[i]; // Copy existing contacts
    }

    delete[] contacts_list; // Delete old array

    contacts_list = new_contacts_list; // Point to the new array
    size_of_contacts = new_size; // Update the size
}
