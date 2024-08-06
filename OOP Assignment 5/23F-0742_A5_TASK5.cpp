#include <iostream>
#include <string>
using namespace std;

class Matrix 
{
private:
    int** array;
    int rows;
    int cols;

public:
    Matrix(int r, int c) : rows(r), cols(c) 
    {
        array = new int* [rows];
        for (int i = 0; i < rows; ++i) 
        {
            array[i] = new int[cols];
            for (int j = 0; j < cols; ++j)
            {
                array[i][j] = 0; // Initialize all elements to 0
            }
        }
    }

    // Destructor to free memory
    ~Matrix()
    {
        for (int i = 0; i < rows; ++i) 
        {
            delete[] array[i];
        }
        delete[] array;
    }

    // Overload * operator for matrix multiplication
    Matrix operator*(const Matrix& other)
    {
        Matrix result(rows, other.cols);
        for (int i = 0; i < rows; ++i) 
        {
            for (int j = 0; j < other.cols; ++j) 
            {
                for (int k = 0; k < cols; ++k)
                {
                    result.array[i][j] += array[i][k] * other.array[k][j];
                }
            }
        }
        return result;
    }

    // Overload + operator for matrix addition
    Matrix operator+(const Matrix& other)
    {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) 
        {
            for (int j = 0; j < cols; ++j)
            {
                result.array[i][j] = array[i][j] + other.array[i][j];
            }
        }
        return result;
    }

    // Overload - operator for matrix subtraction
    Matrix operator-(const Matrix& other)
    {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                result.array[i][j] = array[i][j] - other.array[i][j];
            }
        }
        return result;
    }

    // Overload [] operator for element access
    int* operator[](int index) 
    {
        return array[index];
    }

    // Display the matrix
    void display() 
    {
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                std::cout << array[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() 
{
    Matrix m1(2, 3);
    m1[0][0] = 1;
    m1[0][1] = 2;
    m1[0][2] = 3;
    m1[1][0] = 4;
    m1[1][1] = 5;
    m1[1][2] = 6;

    Matrix m2(3, 2);
    m2[0][0] = 1;
    m2[0][1] = 2;
    m2[1][0] = 3;
    m2[1][1] = 4;
    m2[2][0] = 5;
    m2[2][1] = 6;

    Matrix result = m1 * m2;

    result.display();

    system("pause");
    return 0;
}