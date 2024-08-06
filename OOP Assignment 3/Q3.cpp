///*   This CountClass has a static member variable count that increments each time
//	 an instance of the class is created. This is done in the constructor of the
//	 class. The displayCount function then displays the number of instances created.
//*/
//
//#include <iostream>
//using namespace std;
//
//class CountClass
//{
//	int static count;
//public:
//	CountClass()
//	{
//		count++;
//	}
//	void displayCount()
//	{
//		cout << "Number of instances created are: " << count;
//		cout << endl;
//	}
//};
//
//int CountClass::count = 0;
//
//int main()
//{
//	CountClass obj1, obj2, obj3;
//	obj1.displayCount();
//	CountClass obj4, obj5, obj6, obj7;
//
//	cout << "After creating more objects, " << endl;
//	obj7.displayCount();
//
//	system("pause");
//	return 0;
//}
////   PART B error explanation:-
//
///*  
//      1) The constant keyword should be removed from the function which is
//	  trying to modify the value of "data" data member because a constant
//	  function cannot alter or modify the values. 
//
//	  2) The static member function is trying to access a non-static data
//	  member which will give error by compiler because static member functions
//	  are used to access only static data members.
//*/