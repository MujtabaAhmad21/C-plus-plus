#include <iostream>
using namespace std;

class tollbooth
{
private:
	unsigned int cartotal;
	double cashtotal;
public:
	tollbooth()
	{
		cartotal = 0;
		cashtotal = 0;
	}
	void payCar()
	{
		cartotal++;
		cashtotal += 0.50;
	}
	void noPayCar()
	{
		cartotal++;
	}
	void display() const
	{
		cout << "Total cars: " << cartotal << ", Total cash: $" << cashtotal << endl;
	}
	unsigned int getCarTotal() const
	{
		return cartotal;
	}
	double getCashTotal() const
	{
		return cashtotal;
	}
};

int main() {
	tollbooth instance;
	bool flag = true;
	char check;

	while (flag == true)
	{
		
		cout << "Press P for paying car." << endl;
		cout << "Press N for non-paying car." << endl;
		cout << "Press E to exit the programme." << endl;
		cin >> check;

		switch (check)
		{
		case 'n':
		case 'N':
		{
			instance.noPayCar();
			break;
		}
		case 'p':
		case 'P':
		{
			instance.payCar();
			break;
		}
		case 'E':
		case 'e':
		{
			flag = false;
			instance.display();
			break;
		}
		default:
		{
			cout << "Invalid key, try again." << endl;
			break;
		}
		}
	}

	system("pause");
	return 0;
}