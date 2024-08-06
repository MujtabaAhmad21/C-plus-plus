//#include <iostream>
//using namespace std;
//
//class Scientist
//{
//protected:      // protected members which can be accessed by child class.
//	int id;	
//	string name;
//	string DOB;
//	string graduatedFrom;
//	string pickedDomain;
//public:
//	void inputData()
//	{
//		cout << "Enter your name: ";
//		cin >> name;
//		cout << "Enter your id: ";
//		cin >> id;
//		cout << "Enter your Date Of birth: ";
//		cin >> DOB;
//		cout << "Enter where you graduated from: ";
//		cin >> graduatedFrom;
//		cout << "Enter the domain you picked: ";
//		cin >> pickedDomain;
//	}
//	void displayData()
//	{
//		cout << "-------DATA-------" << endl;
//		cout << "Name = " << name << endl;
//		cout << "ID = " << id << endl;
//		cout << "Date of birth = " << DOB << endl;
//		cout << "Graduated From = " << graduatedFrom << endl;
//		cout << "Picked Domain = " << pickedDomain << endl;
//	}
//};
//
//class Chemist : public Scientist      // The public keyword is an access specifier, 
//{                                     // which states that all public members of the Scientist 
//	string favouriteChemical;         // class are public members of the Chemist class as well.
//	string chemRank;
//public:
//	void inputData()
//	{
//		cout << "Enter your name: ";
//		cin >> name;
//		cout << "Enter your id: ";
//		cin >> id;
//		cout << "Enter your Date Of birth: ";
//		cin >> DOB;
//		cout << "Enter where you graduated from: ";
//		cin >> graduatedFrom;
//		cout << "Enter the domain you picked: ";
//		cin >> pickedDomain;
//		cout << "Enter your favourite chemical: ";
//		cin >> favouriteChemical;
//		cout << "Enter your chem Rank: ";
//		cin >> chemRank;
//	}
//	void displayData()
//	{
//		cout << "-------DATA-------" << endl;
//		cout << "Name = " << name << endl;
//		cout << "ID = " << id << endl;
//		cout << "Date of birth = " << DOB << endl;
//		cout << "Graduated From = " << graduatedFrom << endl;
//		cout << "Picked Domain = " << pickedDomain << endl;
//		cout << "Favourite Chemical = " << favouriteChemical << endl;
//		cout << "Chem Rank = " << chemRank << endl;
//	}
//};
//
//int main()
//{
//	Chemist obj1;
//	obj1.inputData();
//	obj1.displayData();
//
//	system("pause");
//	return 0;
//}