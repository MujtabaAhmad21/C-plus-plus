#include <iostream>
using namespace std;

//  function which adds two arrays (locally made in main) using 
//  pointers and returns the pointer which is of float pointer 
//  data type.
float *addArrays(float* ptr1, float* ptr2, float* result, int SIZE)
{
	for (int z = 0; z < SIZE; z++)
	{
		result[z] = ptr1[z] + ptr2[z];
	}
	return result;
}

int main() 
{
	//  initialization and declaration of arrays and size
	const int size = 10;
	float array1[size] = { 2.9, 7.6, 5.5, 4.3, 1.0, 6.9, 3.6, 9.9, 0.1, 7.4 };
	float array2[size] = { 8.8, 1.3, 4.4, 7.8, 9.2, 6.2, 8.5, 0.5, 2.7, 3.3 };
	float result[size];

	cout << "Array 1: " << endl;
	for (int i = 0; i < size ; i++)
	{
		cout << array1[i] << " ";
	}

	cout << endl << "Array 2:" << endl;
	for (int x = 0 ; x < size ; x++)
	{
		cout << array2[x] << " ";
	}

	cout << endl << "Result array: " << endl;
	//  returned pointer value stored in a pointer to loop over the
	//  resultant pointer array.
	float* resultArr = addArrays(array1, array2, result, size);
	for (int i = 0; i < size; i++)
	{
		cout << result[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}