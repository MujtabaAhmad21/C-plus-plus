//#pragma once
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Book
//{
//private:
//    int bookID;
//    string title;
//    string author;
//    string genre;
//    int year;
//    string ISBN;
//
//public:
//    static int totalBooks;
//    Book(int id, const string& t, const string& a, const string& g, int y, const string& isbn);
//    ~Book();
//    const void display();
//    const int getID();
//    void setID(int id);
//    const string& getTitle();
//    void setTitle(const string& t);
//    const string& getAuthor();
//    void setAuthor(const string& a);
//    const string& getGenre();
//    void setGenre(const string& g);
//    const int getYear();
//    void setYear(int y);
//    const string& getISBN();
//    void setISBN(const string& isbn);
//    static int getTotalBooks();
//};
//
//class Library {
//private:
//    Book* books[100]; // Assuming a maximum of 100 books
//    int bookCount;
//
//public:
//    Library();
//    ~Library();
//    void addBook(int id, const string& title, const string& author, const string& genre, int year, const string& isbn);
//    const void displayBook(int id);
//    const void displayAllBooks();
//    void updateBook(int id, const string& title, const string& author, const string& genre, int year, const string& isbn);
//    void deleteBook(int id);
//    const void searchBook(const string& keyword);
//    const void displayTotalBooks();
//    Book* getBook(int index);
//    const int getBookCount();
//};