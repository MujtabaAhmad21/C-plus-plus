//#include <iostream>
//using namespace std;
//
//class Vehicle
//{
//protected:
//	int no_of_tires, no_of_seats;
//public:
//	Vehicle()
//	{
//		no_of_tires = no_of_seats = 0;
//	}
//	Vehicle(int numTires, int numSeats)
//	{
//		no_of_tires = numTires;
//		no_of_seats = numSeats;
//	}
//	~Vehicle()
//	{
//		cout << "Vehicle object destroyed." << endl;
//	}
//	void setTires(int t)
//	{
//		no_of_tires = t;
//	}
//	void setSeats(int s)
//	{
//		no_of_seats = s;
//	}
//	int getTires()
//	{
//		return no_of_tires;
//	}
//	int getSeats()
//	{
//		return no_of_seats;
//	}
//	void print()
//	{
//		cout << "Number of Tires = " << no_of_tires << endl;
//		cout << "Number of Seats = " << no_of_seats << endl;
//	}
//};
//
//class Car : public Vehicle
//{
//protected:
//	int noOfDoors;
//	string color;
//public:
//	Car() 
//	{
//		noOfDoors = 0;
//		color = '\0';
//	}
//	Car(int numDoors, string col, int numSeats, int numTires) : Vehicle(numSeats, numTires)
//	{
//		noOfDoors = numDoors;
//		color = col;
//	}
//	~Car()
//	{
//		cout << "Car object destroyed." << endl;
//	}
//	void setDoors(int d)
//	{
//		noOfDoors = d;
//	}
//	void setColor(string c)
//	{
//		color = c;
//	}
//	int getDoors()
//	{
//		return noOfDoors;
//	}
//	string getColor()
//	{
//		return color;
//	}
//	void print()
//	{
//		Vehicle::print();
//		cout << "Number of Doors = " << noOfDoors << endl;
//		cout << "Color  = " << color << endl;
//	}
//};
//
//class Vitz : public Car
//{
//	string model;
//	int plate_number;
//public:
//	Vitz()
//	{
//		model = '\0';
//		plate_number = 0;
//	}
//	Vitz(string modelNum, int plateNum, int numDoors, string c, int seats, int tires) : Car(numDoors, c, seats, tires)
//	{
//		model = modelNum;
//		plate_number = plateNum;
//	}
//	~Vitz()
//	{
//		cout << "Vitz object destroyed." << endl;
//	}
//	void setModel(string m)
//	{
//		model = m;
//	}
//	void setPlateNum(int p)
//	{
//		plate_number = p;
//	}
//	string getModel()
//	{
//		return model;
//	}
//	int getPlateNum()
//	{
//		return plate_number;
//	}
//	void print()
//	{
//		Vehicle::print();
//		Car::print();
//		cout << "Model number = " << model << endl;
//		cout << "Plate number = " << plate_number << endl;
//	}
//};
//
//int main()
//{
//	Vitz object("2015", 3003, 4, "White", 4, 4);
//
//	cout << "********** CAR DETAILS **********" << endl;
//
//	object.print();
//
//	system("pause");
//	return 0;
//}