#include <iostream>
#include <string>
using namespace std;

class Media
{
protected:
	string title;
public:
	Media(string t)
	{
		title = t;
	}
	virtual void display() = 0;
};

class Book : virtual public Media
{
	string authorName, ISBN;
public:
	Book(string a,string i,string t) : Media(t)
	{
		authorName = a;
		ISBN = i;
	}
	void display()
	{
		cout << "Title of Book = " << title << ", Name of Author = " << authorName << ", ISBN = " << ISBN << endl;
	}
};

class Magazine : virtual public Media
{
	string monthName;
	int year;
public:
	Magazine(string m,string t, int y) : Media(t)
	{
		monthName = m;
		year = y;
	}
	void display()
	{
		cout << "Title of Magazine = " << title << ", Name of Month = " << monthName << ", Year = " << year << endl;
	}
};

class CD : virtual public Media
{
	int capacityMB;
public:
	CD(string t, int c) : Media(t)
	{
		capacityMB = c;
	}
	void display()
	{
		cout << "Title of CD = " << title << ", Capacity = " << capacityMB << endl;
	}
};

class Shelf
{
	Media** Items;
	int currSize, maxSize;
public:
	Shelf(int mSize)
	{
		maxSize = mSize;
		Items = new Media * [maxSize];
		currSize = 0;
	}
	~Shelf() 
	{
		for (int i = 0; i < currSize; i++)
		{
			delete Items[i];
		}
		delete[] Items;
	}
	void insert(Media* item)
	{
		if (currSize < maxSize)
		{
			Items[currSize] = item;
			currSize++;
		}
		else
		{
			cout << "Maximum storage reached. Unable to add more items." << endl;
		}
	}
	void display()
	{
		for (int i = 0; i < currSize; i++)
		{
			Items[i]->display();
		}
	}
};

int main()
{
	int capacity;
	cout << "Enter the desired number of media items: ";
	cin >> capacity;
	Shelf shelf(capacity);

	while (true) {
		cout << "\nMenu:\n";
		cout << "1. Create a Book\n";
		cout << "2. Create a Magazine\n";
		cout << "3. Create a CD\n";
		cout << "4. Display Shelf Contents\n";
		cout << "5. Exit\n";
		cout << "Enter your choice: ";
		int choice;
		cin >> choice;

		if (choice == 1) {
			string title, author, isbn;
			cout << "Enter book title: ";
			cin >> title;
			cout << "Enter author name: ";
			cin >> author;
			cout << "Enter ISBN: ";
			cin >> isbn;
			shelf.insert(new Book(author, isbn, title));
		}
		else if (choice == 2) {
			string title, month;
			int year;
			cout << "Enter magazine title: ";
			cin >> title;
			cout << "Enter month of publication: ";
			cin >> month;
			cout << "Enter year of publication: ";
			cin >> year;
			shelf.insert(new Magazine(month, title, year));
		}
		else if (choice == 3) {
			string title;
			int capacity;
			cout << "Enter CD title: ";
			cin >> title;
			cout << "Enter CD capacity in MB: ";
			cin >> capacity;
			shelf.insert(new CD(title, capacity));
		}
		else if (choice == 4) {
			shelf.display();
		}
		else if (choice == 5) 
		{
			cout << "Exiting the programme.." << endl;
			break;
		}
		else {
			cout << "Invalid choice. Please try again.\n";
		}
	}

	return 0;
}