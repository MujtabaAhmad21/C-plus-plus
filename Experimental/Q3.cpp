//#include <iostream>
//using namespace std;
//
//char* _strnCat(char* destination, const char* source, int n)
//{
//	int i = 0, j = 0;
//
//	while (destination[i] != '\0')
//	{
//		i++;
//	}
//
//	//   same logic as in simple _strCat function but added another condition to run
//	//   the loop till the size user wanted to append.
//	while (j < n && source[j] != '\0')
//	{
//		destination[i] = source[j];
//		i++;
//		j++;
//	}
//	destination[i] = '\0';
//
//	return destination;
//}
//
//
//char* _strCat(char* destination, const char* source)
//{
//	int i = 0, j = 0;
//
//	//   i counts the number of characters in array.
//	while (destination[i] != '\0')
//	{
//		i++;
//	}
//
//	//   here the characters start to append from the index of i incremented in the previous loop.
//	while (source[j] != '\0')
//	{
//		destination[i] = source[j];
//		i++;
//		j++;
//	}
//	destination[i] = '\0';
//
//	return destination;
//}
//
////    copies size of the array into another as the size wanted by user.
//char* strnCpy(char* s1, const char* s2, int n)
//{
//	//   assigns the size of array from one array to another index by index.
//	for (int i = 0; i < n; i++)
//	{
//		s1[i] = s2[i];
//	}
//	return s1;
//}
//
////    copies the whole char array index by index into other char array.
//char* strCpy(char* s1, const char* s2)
//{
//	int i = 0;
//	while (s2[i] != '\0')
//	{
//		s1[i] = s2[i];
//		i++;
//	}
//	return s1;
//}
//
////    compares the two arrays index by index and side by side and return 1 if all the
////    characters match and 0 otherwise till the size user entered
//int strnCmp(const char* s1, const char* s2, int n)
//{
//	int i = 0;
//	
//	while (s1 != '\0' && s2 != '\0')
//	{
//		if (s1[i] == s2[i])
//		{
//			continue;
//		}
//		else
//		{
//			break;
//			return 0;
//		}
//	}
//	
//	return 1;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
////    compared two string index by index and return 1 if all the characters match otherwise 0.
//int strCmp(const char* s1, const char* s2) 
//{
//	int i = 0;
//	while ((s1[i] && s2[i]) != '\0')
//	{
//		if (s1[i] == s2[i])
//		{
//			i++;
//		}
//		else
//		{
//			break;
//			return 0;
//		}
//	}
//	return 1;
//}
//
////   runs a loop until a null character is faced during which i gets incremented telling the size 
////   the array and returnig the value of i.
//int strlen(char *s)
//{
//	int i = 0;
//	while (s[i]!='\0')
//	{
//		i++;
//	}
//	return i;
//}
//
//int main()
//{
//	int size;
//	char array[100];
//	cout << "Please enter your line: ";
//	cin.getline(array, 100);
//
//	char array2[100];
//	cout << "Please enter another line: ";
//	cin.getline(array2, 100);
//
//	cout << "Enter the size of string you want to compare: ";
//	cin >> size;
//
//	
//
//
//	cout << "length of string is : ";
//	cout << strlen(array) << endl;
//
//	cout << "Array compared: (1 means true, 0 means false) " << strCmp(array, array2) << endl;
//	cout << "Array compared to size you entered: (1 means true, 0 means false) " << strnCmp(array, array2, size) << endl;
//
//	char* ptr2 = strCpy(array, array2);
//	int x = 0;
//	cout << "Copied array: ";
//	while (ptr2[x] != '\0')
//	{
//		cout << ptr2[x];
//		x++;
//	}
//	cout << endl;
//
//	cout << "Enter the size of string you want to copy: ";
//	cin >> size;
//	char* ptr3 = strnCpy(array, array2, size);
//	for (int i = 0; i < size; i++)
//	{
//		cout << ptr3[i];
//	}
//	cout << endl;
//
//	cout << "Concatenated array: " << endl;
//	char* ptr4 = _strCat(array, array2);
//	int i = 0;
//	while (ptr4[i] != '\0')
//	{
//		cout << ptr4[i];
//		i++;
//	}
//	cout << endl;
//
//	cout << "Enter the size of the array you want to concatenate with other array: ";
//	cin >> size;
//	char* ptr5 = _strnCat(array, array2, size);
//	int z = 0;
//	while (ptr5[z] != '\0')
//	{
//		cout << ptr5[z];
//		z++;
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}