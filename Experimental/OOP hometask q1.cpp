///*       This programme is used to make an inventory system of products using a structure which
//         has the member functions mimicking product details which are product ID, name, quantity
//		 & price. There are 6 different functions for every manipulation in the inventory.
//		 After the desired manipulation, the data is again updated in the inventory.txt
//		 file with the updated and removed products etc.
//*/
//
//#include <iostream>
//#include <string>
//#include <fstream>
//using namespace std;
//
//struct inventory
//{
//	int ID;
//	string name;
//	int quantity;
//	float price;
//}product[10];
//
//void dataFromFile(ifstream& file, inventory* product)
//{
//	file.open("inventory.txt");
//	int i = 0;
//	if (file.is_open())
//	{
//		while (i < 5 && file >> product[i].ID >> product[i].name >> product[i].quantity >> product[i].price)
//		{
//			cout << "Product " << i + 1 << " : " << product[i].ID << " " << product[i].name << " " << product[i].quantity << " " << product[i].price << endl;
//			i++;
//		}
//	}
//	else
//	{
//		cout << "file not open\n";
//	}
//
//	file.close();
//}
//
//void searchForProduct(inventory* product)
//{
//	bool flag = true;
//	int choice;
//	int id;
//	string name;
//	cout << "Search for product: \nEnter 1 for id and 2 for name.";
//	cin >> choice;
//	while (flag == true)
//	{
//		switch (choice)
//		{
//		case 1:
//		{
//			cout << "Enter: ";
//			cin >> id;
//			for (int x = 0; x < 10; x++)
//			{
//				if (id == product[x].ID)
//				{
//					cout << "----Details----" << endl;
//					cout << "ID: " << product[x].ID << endl;
//					cout << "Name: " << product[x].name << endl;
//					cout << "Quantity: " << product[x].quantity << endl;
//					cout << "Price: " << product[x].price << endl;
//				}
//				else
//				{
//					cout << "Product not found." << endl;
//					break;
//				}
//			}
//			flag = false;
//			break;
//		}
//		case 2:
//		{
//			cout << "Enter: ";
//			cin >> name;
//			for (int x = 0; x < 10; x++)
//			{
//				if (name == product[x].name)
//				{
//					cout << "----Details----" << endl;
//					cout << "ID: " << product[x].ID << endl;
//					cout << "Name: " << product[x].name << endl;
//					cout << "Quantity: " << product[x].quantity << endl;
//					cout << "Price: " << product[x].price << endl;
//				}
//				else
//				{
//					cout << "Product not found." << endl;
//					break;
//				}
//			}
//			flag = false;
//			break;
//		}
//		default:
//			cout << "Invalid input. Please try again: ";
//			cin >> choice;
//		}
//	}
//
//}
//
//void addProduct(inventory* product)
//{
//	cout << "Enter the details for the product to be added in inventory: " << endl;
//	cout << "ID (4 digits): ";
//	cin >> product[5].ID;
//	cout << "Name: ";
//	cin >> product[5].name;
//	cout << "Quantity: ";
//	cin >> product[5].quantity;
//	cout << "Price: ";
//	cin >> product[5].price;
//}
//
//void updateQuantity(inventory* product)
//{
//	int choice;
//	int id;
//	string name;
//	cout << "Enter 1 for name and 2 for id to update the product quantity: ";
//	cin >> choice;
//	switch (choice)
//	{
//	case 1:
//	{
//		for (int z = 0; z < 10; z++)
//		{
//			if (name == product[z].name)
//			{
//				cout << "Enter quantity: ";
//				cin >> product[z].quantity;
//				cout << "Updated quantity successfully." << endl;
//			}
//		}
//	}
//	}
//}
//
//void removeProduct(inventory* product)
//{
//	int choice;
//	int id;
//	string name;
//	cout << "Enter the name (1) or id(2) of the product to be removed from the inventory: ";
//	cin >> choice;
//	switch (choice)
//	{
//	case 1:
//	{
//		cout << "Enter: ";
//		cin >> name;
//		for (int i = 0; i < 10; i++)
//		{
//			if (name == product[i].name)
//			{
//				product[i].name = "";
//				product[i].ID = 0;
//				product[i].price = 0;
//				product[i].quantity = 0;
//			}
//		}
//		break;
//	}
//	case 2:
//	{
//		cout << "Enter: ";
//		cin >> id;
//		for (int i = 0; i < 10; i++)
//		{
//			if (id == product[i].ID)
//			{
//				product[i].name = "";
//				product[i].ID = 0;
//				product[i].price = 0;
//				product[i].quantity = 0;
//			}
//		}
//		break;
//	}
//	default:
//		break;
//	}
//	
//}
//
//void dataToFile(ofstream& file, inventory* product)
//{
//	file.open("inventory.txt");
//
//	if (file.is_open())
//	{
//		for (int i = 0; i < 6; i++)
//		{
//			file << product[i].ID << " " << product[i].name << " " << product[i].quantity << " " << product[i].price << "\n";
//		}
//	}
//	else
//	{
//		cout << "Unable to open file. " << endl;
//	}
//
//	file.close();
//}
//
//
//int main()
//{
//	ifstream readFromFile;
//	ofstream writeInFile;
//
//	int choice;
//	bool flag = true;
//	cout << "--------MENU-------" << endl;
//	cout << "1. Read From File. \n";
//	cout << "2. Search for product. \n";
//	cout << "3. Add a product. \n";
//	cout << "4. Update quantity of a product. \n";
//	cout << "5. Remove product. \n";
//	cout << "6. Write data back into file. \n";
//	cout << "Enter 0 to exit the programme. \n";
//	while (flag == true)
//	{
//		cin >> choice;
//		switch (choice)
//		{
//		case 0:
//		{
//			cout << "Thank you for using the programme. \n";
//			flag = false;
//			break;
//		}
//		case 1:
//		{
//			dataFromFile(readFromFile, product);
//			break;
//		}
//		case 2:
//		{
//			searchForProduct(product);
//			break;
//		}
//		case 3:
//		{
//			addProduct(product);
//			break;
//		}
//		case 4:
//		{
//			updateQuantity(product);
//			break;
//		}
//		case 5:
//		{
//			removeProduct(product);
//			break;
//		}
//		case 6:
//		{
//			dataToFile(writeInFile, product);
//			break;
//		}
//		default:
//		{
//			cout << "Invalid choice. Please try again. \n";
//			break;
//		}
//		}
//	}
//
//			
//
//	system("pause");
//	return 0;
//}