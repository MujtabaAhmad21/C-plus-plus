#include <iostream>
using namespace std;

int main()
{
	float amount, price7up = 0.80, priceCocacola = 0.90, pricePepsi = 0.85, priceSprite = 0.75, priceFanta = 0.80, remainingAmount = 0;
	int selection;
	int stock7up = 6, stockCocacola = 6, stockPepsi = 6, stockSprite = 6, stockFanta = 6;

	cout << " --------------- WELCOME TO THE VENDING MACHINE! ---------------- " << endl << endl;
	cout << "    Price of drinks:-          " << endl << "    7up: " << price7up << endl;
	cout << "    CocaCola: " << endl << "    Pepsi: " << pricePepsi << endl << "    Sprite: " << priceSprite << endl;
	cout << "    Fanta: " << priceFanta << endl << endl;



	while (true) {

		cout << "Please enter your amount: " << endl;
		cin >> amount;
		while (amount <= 0.75)
		{
			if (amount <= 0.75)
			{
				cout << "Insufficient amount. Please enter amount above 0.75$ " << endl;
				cin >> amount;
			}
		}

		cout << endl << "Please select the drink you want: " << endl << "Enter 1 for 7up, 2 for CocaCola, 3 for Pepsi, 4 for Sprite, 5 for Fanta. ";
		cout << endl << "Enter -1 if you want to exit" << endl;
		cout << endl << "Stock of drinks = " << "Pepsi stock: " << stockPepsi << endl << "CocaCola stock: " << stockCocacola << endl << "7up stock: " << stock7up << endl << "Sprite stock: " << stockSprite << endl << "Fanta stock: " << stockFanta << endl;
		cout << endl << endl << "Select: ";

		cin >> selection;

		switch (selection)
		{
		case 1:
			if (amount >= price7up)
			{
				remainingAmount = amount - price7up;
				stock7up -= 1;
			}
			else
			{
				cout << "Insufficient amount. ";
				cin >> amount;
			}
			break;
		case 2:
			if (amount >= priceCocacola)
			{
				remainingAmount = amount - priceCocacola;
				stockCocacola -= 1;
			}
			else
			{
				cout << "Insufficient amount. ";
				cin >> amount;
			}
			break;
		case 3:
			if (amount >= pricePepsi)
			{
				remainingAmount = amount - pricePepsi;
				stockPepsi -= 1;
			}
			else
			{
				cout << "Insufficient amount. ";
				cin >> amount;
			}
			break;
		case 4:
			if (amount >= priceSprite)
			{
				remainingAmount = amount - priceSprite;
				stockPepsi -= 1;
			}
			else
			{
				cout << "Insufficient amount. ";
				cin >> amount;
			}
			break;
		case 5:
			if (amount >= priceFanta)
			{
				remainingAmount = amount - priceFanta;
				stockFanta -= 1;
			}
			else
			{
				cout << "Insufficient amount. ";
				cin >> amount;
			}
			break;
		case -1:
		    {
			cout << "Thank you for using the Vending Machine! Please Come again. " << endl;
			system("pause");
			return 0;
		    }
		default:
		    {
			cout << "Invalid selection. Please select from the given numbers. " << endl;
			break;
		    }
		}

		cout << "Please pick up your drink " << endl << "Remaining amount: " << remainingAmount << endl;

	}


}