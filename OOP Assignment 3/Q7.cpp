//#include <iostream>
//#include <string>
//using namespace std;
//
//class Car
//{
//	string carName;
//	int model;
//	string plateNumber;
//	string Color;
//public:
//	Car(string name, int m, string plate, string col)  
//	{                                // Parameterized constructor to set
//		carName = name;              // car info.
//		model = m;
//		plateNumber = plate;
//		Color = col;
//	}
//	Car(Car& m);          //  definition of copy constructor.
//
//	void showData()      // display info of car.
//	{
//		cout << "Name: " << carName << endl;
//		cout << "Plate number: " << plateNumber << endl;
//		cout << "Color: " << Color << endl;
//		cout << "Model: " << model << endl;
//	}
//};
//
//Car::Car(Car& m)       // declaration of copy constructor.
//{
//	carName = m.carName;
//	model = m.model;
//	plateNumber = m.plateNumber;
//	Color = m.Color;
//}
//
//int main()
//{
//	string nameOfCar;
//	int carModel;
//	string numberPlate;
//	string carColor;
//
//	cout << "Enter car name: ";
//	cin >> nameOfCar;
//	cout << "Enter car model: ";
//	cin >> carModel;
//	cout << "Enter number plate of car: ";
//	cin >> numberPlate;
//	cout << "Enter car color: ";
//	cin >> carColor;
//
//	Car car1(nameOfCar, carModel, numberPlate, carColor);
//	Car car2(car1);    // copy constructor copying info.
//	cout << "Using copy constructor to copy information..." << endl;
//	cout << "Displaying info using Car 1 object" << endl;
//	car1.showData();
//	cout << "Displaying info using Car 2 object" << endl;
//	car2.showData();
//
//	system("pause");
//	return 0;
//}