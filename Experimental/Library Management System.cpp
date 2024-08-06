//#include "Library.h"
//#include <iostream>
//#include <string>
//#include <fstream> // Add this line for file operations
//using namespace std;
//
//int main()
//{
//    Library library;
//    int choice;
//
//    do {
//        cout << "Library Management System" << endl;
//        cout << "1. Add a new book\n";
//        cout << "2. Display details of a book\n";
//        cout << "3. Display details of all books\n";
//        cout << "4. Update details of a book\n";
//        cout << "5. Delete a book\n";
//        cout << "6. Search for a book\n";
//        cout << "7. Calculate and display total number of books\n";
//        cout << "8. Exit" << endl;
//        cout << "Enter your choice: ";
//        cin >> choice;
//        cin.ignore(); // Clear the input buffer
//
//        switch (choice)
//        {
//        case 1:
//        {
//            int id, year;
//            string title, author, genre, isbn;
//            cout << "Enter book ID: ";
//            cin >> id;
//            cin.ignore();
//            cout << "Enter title: ";
//            getline(cin, title);
//            cout << "Enter author: ";
//            getline(cin, author);
//            cout << "Enter genre: ";
//            getline(cin, genre);
//            cout << "Enter year of publication: ";
//            cin >> year;
//            cin.ignore();
//            cout << "Enter ISBN: ";
//            getline(cin, isbn);
//            library.addBook(id, title, author, genre, year, isbn);
//            break;
//        }
//        case 2:
//        {
//            int id;
//            cout << "Enter book ID: ";
//            cin >> id;
//            library.displayBook(id);
//            break;
//        }
//        case 3:
//        {
//            library.displayAllBooks();
//            break;
//        }
//        case 4:
//        {
//            int id, year;
//            string title, author, genre, isbn;
//            cout << "Enter book ID: ";
//            cin >> id;
//            cin.ignore();
//            cout << "Enter new title: ";
//            getline(cin, title);
//            cout << "Enter new author: ";
//            getline(cin, author);
//            cout << "Enter new genre: ";
//            getline(cin, genre);
//            cout << "Enter new year of publication: ";
//            cin >> year;
//            cin.ignore();
//            cout << "Enter new ISBN: ";
//            getline(cin, isbn);
//            library.updateBook(id, title, author, genre, year, isbn);
//            break;
//        }
//        case 5:
//        {
//            int id;
//            cout << "Enter book ID: ";
//            cin >> id;
//            library.deleteBook(id);
//            break;
//        }
//        case 6:
//        {
//            string keyword;
//            cout << "Enter keyword (title or author): ";
//            getline(cin, keyword);
//            library.searchBook(keyword);
//            break;
//        }
//        case 7:
//        {
//            library.displayTotalBooks();
//            break;
//        }
//        case 8:
//        {
//            // Save library data to a file
//            ofstream outFile("library.txt");
//            for (int i = 0; i < library.getBookCount(); i++)
//            {
//                outFile << library.getBook(i)->getID() << ","
//                    << library.getBook(i)->getTitle() << ","
//                    << library.getBook(i)->getAuthor() << ","
//                    << library.getBook(i)->getGenre() << ","
//                    << library.getBook(i)->getYear() << ","
//                    << library.getBook(i)->getISBN() << endl;
//            }
//            outFile.close();
//            cout << "Library data saved to library.txt\n";
//            break;
//        }
//        default:
//        {
//            cout << "Invalid choice. Please try again.\n";
//            break;
//        }
//        }
//    } while (choice != 8);
//
//    return 0;
//}