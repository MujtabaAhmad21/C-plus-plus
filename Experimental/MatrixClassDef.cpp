//#include "Matrix.h"
//#include<iostream>
//using namespace std;
//Matrix::Matrix()
//{
//	cout << "Default constructor is called. " << endl;
//	row = 2;
//	column = 3;
//	array = new int* [row];
//	for (int i = 0; i < row; i++)
//	{
//		array[i] = new int[column];
//
//		for (int j = 0; j < column; j++)
//		{
//			array[i][j] = 1;
//		}
//	}
//}
//
//Matrix::Matrix(int r, int c)
//{
//	cout << "Overloaded constructor is called." << endl;
//	row = r;
//	column = c;
//	array = new int* [row];
//	for (int i = 0; i < row; i++)
//	{
//		array[i] = new int[column];
//	}
//}
//
//Matrix::~Matrix()
//{
//	cout << "Destructor is called. " << endl;
//	for (int i = 0; i < row; i++)
//	{
//		delete[] array[i];
//	}
//	delete[] array;
//}
//
//void Matrix::inputData()
//{
//	cout << "Enter the elements for the matrix: " << endl;
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < column; j++)
//		{
//			cin >> array[i][j];
//		}
//	}
//}
//
//Matrix Matrix::AddMatrix(Matrix matrix2)
//{
//	Matrix result(row, column);
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < column; j++)
//		{
//			result.array[i][j] = array[i][j] + matrix2.array[i][j];
//		}
//	}
//	return result;
//}