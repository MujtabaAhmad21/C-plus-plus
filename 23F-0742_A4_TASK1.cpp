#include <iostream>
using namespace std;

bool inverseMatrixCheck(int A[][3], int B[][3], int rowsize = 3, int colsize = 3);

int main()
{
    const int size1 = 3;
    const int size2 = 3;
    int a[size1][size2], b[size1][size2];
    cout << "Enter numbers in Matrix A: " << endl;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            cout << "A[" << i << "] [" << j << "] :";
            cin >> a[i][j];
        }
    }
    cout << "Enter numbers in Matrix B: " << endl;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            cout << "B[" << i << "] [" << j << "] :";
            cin >> b[i][j];
        }
    }
    if (inverseMatrixCheck(a, b, size1, size2) == false)
    {
        cout << "B is not an inverse of A" << endl;
    }
    else
    {
        cout << "B is an inverse of A" << endl;
    }
}
bool inverseMatrixCheck(int A[][3], int B[][3], int rowsize, int colsize)
{
    int result[3][3] = {};
    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < colsize; j++)
        {
            for (int k = 0; k < colsize; k++)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < colsize; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < colsize; j++)
        {
            if ((i == j && result[i][j] != 1) || (i != j && result[i][j] != 0))
            {
                return false;
            }
            else
            {
                return true;
            }
        }
    }
}