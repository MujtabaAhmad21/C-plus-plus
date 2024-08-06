//#include <iostream>
//#include <string>
//#include <algorithm> 
//#include <cmath> 
//using namespace std;
//
//template <typename T>
//T findMax(T a, T b)
//{
//    if (a > b)
//    {
//        return a;
//    }
//    else
//    {
//        return b;
//    }
//}
//
//template <typename T>
//T findMin(T a, T b) 
//{
//    if (a < b)
//    {
//        return a;
//    }
//    else
//    {
//        return b;
//    }
//}
//
//template <typename T>
//T add(T a, T b) 
//{
//    return a + b;
//}
//
//template <typename T>
//T subtract(T a, T b) 
//{
//    return a - b;
//}
//
//
//template <typename T>
//T calculateAverage(T arr[], int size)
//{
//    T sum = 0;
//    for (int i = 0; i < size; i++)
//    {
//        sum = add(sum, arr[i]);
//    }
//    return sum / size;
//}
//
//template <typename T>
//T calculateMedian(T arr[], int size) 
//{
//    sort(arr, arr + size);
//    if (size % 2 == 0) 
//    {
//        return (arr[size / 2 - 1] + arr[size / 2]) / 2;
//    }
//    else 
//    {
//        return arr[size / 2];
//    }
//}
//
//template <typename T>
//class Circle
//{
//public:
//    T radius;
//    Circle(T r)
//    {
//        radius = r;
//    }
//    T calculateArea()
//    {
//        return 3.142 * radius * radius;
//    }
//    T calculatePerimeter() 
//    {
//        return 2 * 3.142 * radius;
//    }
//};
//
//template <typename T>
//class Rectangle 
//{
//public:
//    T length, width;
//    Rectangle(T l, T w)
//    {
//        length = l;
//        width = w;
//    }
//    T calculateArea()
//    {
//        return length * width;
//    }
//    T calculatePerimeter() 
//    {
//        return 2 * (length + width);
//    }
//};
//
//template <typename T>
//class Triangle 
//{
//public:
//    T base, height;
//    Triangle(T b, T h)
//    {
//        base = b;
//        height = h;
//    }
//    T calculateArea() 
//    {
//        return 0.5 * base * height;
//    }
//    T calculatePerimeter()
//    {
//        T hypotenuse = sqrt(base * base + height * height);
//        return base + height + hypotenuse;
//    }
//};
//
//int main() 
//{
//    cout << "Please enter any two numbers of your likings: ";
//    int x, y;
//    cin >> x >> y;
//    cout << "Maximum num = " << findMax(x, y) << endl;
//    cout << "Minimum num = " << findMin(x, y) << endl;
//    cout << "Addition of both = " << add(x, y) << endl;
//    cout << "Subtraction of both = " << subtract(x, y) << endl;
//    cout << endl;
//    int arr[] = { 1, 3, 5, 9, 7 };
//    int size = sizeof(arr) / sizeof(arr[0]);
//    cout << "Array = ";
//    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]) ; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//    cout << "Average = " << calculateAverage(arr, size) << endl;
//    cout << "Median = " << calculateMedian(arr, size) << endl;
//
//    Triangle<int> triangle(12, 16);
//    cout << "Area of Triangle = " << triangle.calculateArea() << endl;
//    cout << "Perimeter of Triangle = " << triangle.calculatePerimeter() << endl;
//
//    Circle<int> circle(9);
//    cout << "Area of circle = " << circle.calculateArea() << endl;
//    cout << "Perimeter of circle = " << circle.calculatePerimeter() << endl;
//
//    Rectangle<int> rectangle(10, 10);
//    cout << "Area of Rectangle = " << rectangle.calculateArea() << endl;
//    cout << "Perimeter of Rectangle = " << rectangle.calculatePerimeter() << endl;
//
//    system("pause");
//    return 0;
//}