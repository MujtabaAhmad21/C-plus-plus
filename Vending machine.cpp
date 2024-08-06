#include <iostream>
using namespace std;

int main() {
    int choice;

    while (true) {
        // Display the menu
        cout << "Menu:" << endl;
        cout << "1. Item 1 ($1.00)" << endl;
        cout << "2. Item 2 ($0.75)" << endl;
        cout << "3. Item 3 ($1.25)" << endl;
        cout << "4. Exit (-1)" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            // Handle the logic for Item 1
            // Check if the user has enough cash, display errors, and dispense the item if conditions are met
            break;
        case 2:
            // Handle the logic for Item 2
            break;
        case 3:
            // Handle the logic for Item 3
            break;
        case -1:
            // User wants to exit the vending machine loop
            cout << "Thank you for using the vending machine. Goodbye!" << endl;
            return 0; // Exit the program
        default:
            // Invalid choice, display an error message
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    }

    return 0;
}
