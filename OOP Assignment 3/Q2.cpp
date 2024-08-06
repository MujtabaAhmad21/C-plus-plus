//#include <iostream>
//#include <string>
//using namespace std;
//
//class Jagged
//{
//	int rows;
//	int* cols;
//	int** array;
//public:
//	void input()
//	{
//		cout << "How many rows do you want to create? ";
//		cin >> rows;
//		array = new int* [rows];
//		cols = new int[rows];
//
//		for (int i = 0; i < rows; i++)
//		{
//			cout << "Enter columns for row " << i + 1 << " = ";
//			cin >> cols[i];
//			array[i] = new int[cols[i]];
//
//			for (int j = 0; j < cols[i]; j++)
//			{
//				cout << "Enter value for row " << i + 1 << ", column " << j + 1 << " : ";
//				cin >> array[i][j];
//			}
//		}
//	}
//
//	void display()
//	{
//		cout << "---------OUTPUT---------\n\n";
//		for (int i = 0; i < rows; i++)
//		{
//			for (int j = 0; j < cols[i]; j++)
//			{
//				cout << array[i][j] << " ";
//			}
//			cout << endl;
//		}
//	}
//};
//
//int main()
//{
//	Jagged obj;
//	obj.input();
//	obj.display();
//
//	system("pause");
//	return 0;
//}
