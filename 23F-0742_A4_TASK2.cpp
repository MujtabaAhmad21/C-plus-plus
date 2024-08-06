#include <iostream>
using namespace std;

void eliminateDuplicates(int a[], int& size);

int main()
{
    const int maxsize = 100;
    int A[maxsize];
    int size;
    cout << "How many numbers in array: ";
    cin >> size;
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; ++i)
    {
        cout << "arr[" << i << "]: ";
        cin >> A[i];
    }
    eliminateDuplicates(A, size);
    cout << "Array after elimination of duplicates:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}
void eliminateDuplicates(int a[], int& size)
{
    int newSize = 1;
    for (int i = 1; i < size; i++)
    {
        bool isDuplicate = false;
        for (int j = 0; j < newSize; j++)
        {
            if (a[i] == a[j])
            {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate)
        {
            a[newSize] = a[i];
            ++newSize;
        }
    }
    size = newSize;
}
