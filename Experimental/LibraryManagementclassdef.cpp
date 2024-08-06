//#include "Library.h"
//#include <iostream>
//#include <string>
//using namespace std;
//
//int Book::totalBooks = 0;
//
//Book::Book(int id, const string& t, const string& a, const string& g, int y, const string& isbn)
//{
//    bookID = id;
//    title = t;
//    author = a;
//    genre = g;
//    year = y;
//    ISBN = isbn;
//    totalBooks++;
//}
//
//Book::~Book()
//{
//    totalBooks--;
//}
//
//const void Book::display() 
//{
//    cout << "Book ID: " << bookID << endl;
//    cout << "Title: " << title << endl;
//    cout << "Author: " << author << endl;
//    cout << "Genre: " << genre << endl;
//    cout << "Year: " << year << endl;
//    cout << "ISBN: " << ISBN << endl;
//}
//
//const int Book::getID()
//{
//    return bookID;
//}
//
//void Book::setID(int id)
//{
//    bookID = id;
//}
//
//const string& Book::getTitle()
//{
//    return title;
//}
//
//void Book::setTitle(const string& t)
//{
//    title = t;
//}
//
//const string& Book::getAuthor()
//{
//    return author;
//}
//
//void Book::setAuthor(const string& a)
//{
//    author = a;
//}
//
//const string& Book::getGenre()
//{
//    return genre;
//}
//
//void Book::setGenre(const string& g)
//{
//    genre = g;
//}
//
//const int Book::getYear()
//{
//    return year;
//}
//
//void Book::setYear(int y)
//{
//    year = y;
//}
//
//const string& Book::getISBN()
//{
//    return ISBN;
//}
//
//void Book::setISBN(const string& isbn)
//{
//    ISBN = isbn;
//}
//
//int Book::getTotalBooks()
//{
//    return totalBooks;
//}
//
//Library::Library()
//{
//    bookCount = 0;
//}
//
//Library::~Library()
//{
//    for (int i = 0; i < bookCount; i++)
//    {
//        delete books[i];
//    }
//}
//
//void Library::addBook(int id, const string& title, const string& author, const string& genre, int year, const string& isbn) {
//    if (bookCount < 100)
//    {
//        books[bookCount++] = new Book(id, title, author, genre, year, isbn);
//        cout << "Book added successfully." << endl;
//    }
//    else
//    {
//        cout << "Cannot add more books. Library is full." << endl;
//    }
//}
//
//const void Library::displayBook(int id)
//{
//    for (int i = 0; i < bookCount; i++)
//    {
//        if (books[i]->getID() == id)
//        {
//            books[i]->display();
//            return;
//        }
//    }
//    cout << "Book not found." << endl;
//}
//
//const void Library::displayAllBooks()
//{
//    for (int i = 0; i < bookCount; i++)
//    {
//        books[i]->display();
//        cout << endl;
//    }
//}
//
//void Library::updateBook(int id, const string& title, const string& author, const string& genre, int year, const string& isbn)
//{
//    for (int i = 0; i < bookCount; i++)
//    {
//        if (books[i]->getID() == id)
//        {
//            books[i]->setTitle(title);
//            books[i]->setAuthor(author);
//            books[i]->setGenre(genre);
//            books[i]->setYear(year);
//            books[i]->setISBN(isbn);
//            cout << "Book details updated successfully." << endl;
//            return;
//        }
//    }
//    cout << "Book not found." << endl;
//}
//
//void Library::deleteBook(int id)
//{
//    for (int i = 0; i < bookCount; i++)
//    {
//        if (books[i]->getID() == id)
//        {
//            delete books[i];
//            for (int j = i; j < bookCount - 1; j++)
//            {
//                books[j] = books[j + 1];
//            }
//            bookCount--;
//            cout << "Book deleted successfully." << endl;
//            return;
//        }
//    }
//    cout << "Book not found." << endl;
//}
//
//const void Library::searchBook(const string& keyword)
//{
//    bool found = false;
//    for (int i = 0; i < bookCount; i++)
//    {
//        if (books[i]->getTitle().find(keyword) != string::npos ||
//            books[i]->getAuthor().find(keyword) != string::npos)
//        {
//            books[i]->display();
//            found = true;
//        }
//    }
//    if (!found)
//    {
//        cout << "Book not found." << endl;
//    }
//}
//
//const void Library::displayTotalBooks()
//{
//    cout << "Total number of books: " << Book::getTotalBooks() << endl;
//}
//
//Book* Library::getBook(int index)
//{
//    if (index >= 0 && index < bookCount)
//    {
//        return books[index];
//    }
//    return nullptr;
//}
//
//const int Library::getBookCount()
//{
//    return bookCount;
//}