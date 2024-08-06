#include<iostream>
#include<string>
using namespace std;

class Furniture
{
protected:
	string type;
	string size;

public:
	Furniture()
	{
		size = type = "0";
	}
	Furniture(string t, string s)
	{
		type = t;
		size = s;
	}

	virtual ~Furniture() {}

	virtual void printDetails()
	{
		cout << "Furniture with type: " << type << ", and size: " << size << endl;
	}
};

class Bed :public Furniture
{
public:

	Bed(string s)
	{
		size = s;
		type = "Bed";
	}
};
class Chair :public Furniture
{
protected:
	double height;

public:
	Chair()
	{
		height = 0.0;
	}
	Chair(string s, double h)
	{
		height = h;
		size = s;

	}

	void printDetails()
	{
		cout << "Chair with size: " << size << ", and height: " << height << endl;
	}
};

class PersonalizedChair :public Chair
{
	string name;

public:
	PersonalizedChair()
	{
		name = "0";
	}
	PersonalizedChair(string n, string s, double h)
	{
		name = n;
		size = s;
		height = h;
	}

	void printDetails()
	{
		cout << "Personalized chair with name: " << name << ", and size: " << size << ", and height: " << height << endl;
	}
};

int main()
{
	const int size = 5;
	Furniture** inventory = new Furniture * [size];
	inventory[0] = new Bed("Small");
	inventory[1] = new Chair("Medium", 0);
	inventory[2] = new Chair("Medium", 3);
	inventory[3] = new Bed("Large");
	inventory[4] = new PersonalizedChair("Ali", "small", 2);

	for (int i = 0; i < size; i++)
	{
		inventory[i]->printDetails();
		delete inventory[i];
	}

	delete[] inventory;

	system("pause");
	return 0;
}