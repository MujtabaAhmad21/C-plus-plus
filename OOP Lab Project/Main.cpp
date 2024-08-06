#include <iostream>
#include "ContactsBook.h"
#include "Contact.h"
#include "Address.h"
using namespace std;

Address createAddress() {
    string house, street, city, country;
    cout << "Enter House: ";
    getline(cin >> ws, house);
    cout << "Enter Street: ";
    getline(cin >> ws, street);
    cout << "Enter City: ";
    getline(cin >> ws, city);
    cout << "Enter Country: ";
    getline(cin >> ws, country);

    return Address(house, street, city, country);
}


int main() {
    // Scenario 1
    cout << "Scenario 1" << endl;
    ContactsBook contactsBook(5);
    for (int i = 0; i < 5; i++) {
        string first_name, last_name, mobile_number, email_address;
        Address address;

        cout << "Enter First Name for contact " << i + 1 << ": ";
        getline(cin >> ws, first_name);
        cout << "Enter Last Name for contact " << i + 1 << ": ";
        getline(cin >> ws, last_name);
        cout << "Enter Mobile Number for contact " << i + 1 << ": ";
        getline(cin >> ws, mobile_number);
        cout << "Enter Email Address for contact " << i + 1 << ": ";
        getline(cin >> ws, email_address);
        address = createAddress();

        Contact contact(first_name, last_name, mobile_number, email_address, &address);
        contactsBook.add_contact(contact);
    }

    cout << "Contacts sorted by First Name:" << endl;
    contactsBook.print_contacts_sorted("first_name");

    cout << endl << "Unsorted Contacts:" << endl;
    contactsBook.print_contacts_sorted("none");

    // Scenario 2
    cout << "Scenario 2" << endl;
    cout << "Total Contacts: " << contactsBook.total_contacts() << endl;

    for (int i = 0; i < 2; i++) {
        string first_name, last_name, mobile_number, email_address;
        Address address;

        cout << "Enter First Name for new contact: ";
        getline(cin >> ws, first_name);
        cout << "Enter Last Name for new contact: ";
        getline(cin >> ws, last_name);
        cout << "Enter Mobile Number for new contact: ";
        getline(cin >> ws, mobile_number);
        cout << "Enter Email Address for new contact: ";
        getline(cin >> ws, email_address);
        address = createAddress();

        Contact contact(first_name, last_name, mobile_number, email_address, &address);
        contactsBook.add_contact(contact);
    }

    cout << "Total Contacts: " << contactsBook.total_contacts() << endl;

    // Scenario 3
    cout << "Scenario 3" << endl;
    for (int i = 0; i < 5; i++) {
        string first_name, last_name, mobile_number, email_address;
        Address address;

        cout << "Enter First Name for contact " << i + 1 << ": ";
        getline(cin >> ws, first_name);
        cout << "Enter Last Name for contact " << i + 1 << ": ";
        getline(cin >> ws, last_name);
        cout << "Enter Mobile Number for contact " << i + 1 << ": ";
        getline(cin >> ws, mobile_number);
        cout << "Enter Email Address for contact " << i + 1 << ": ";
        getline(cin >> ws, email_address);
        address = createAddress();

        Contact contact(first_name, last_name, mobile_number, email_address, &address);
        contactsBook.add_contact(contact);
    }

    cout << "Contacts sorted by First Name (Before Merging):" << endl;
    contactsBook.print_contacts_sorted("first_name");

    cout << "Merging Duplicates..." << endl;
    contactsBook.merge_duplicates();

    cout << "Contacts sorted by First Name (After Merging):" << endl;
    contactsBook.print_contacts_sorted("first_name");

    // Scenario 4
    cout << "Scenario 4" << endl;
    cout << "Saving Contacts to File..." << endl;
    contactsBook.save_to_file("contacts.txt");

    cout << "Loading Contacts from File..." << endl;
    ContactsBook loadedContactsBook(5);
    loadedContactsBook.load_from_file("contacts.txt");

    cout << "Contacts loaded from File:" << endl;
    loadedContactsBook.print_contacts_sorted("first_name");

    return 0;
}
