//#include <iostream>
//#include <cmath>
//using namespace std;
//
//class Point
//{
//    int* dimension;
//    int dimensionNum;
//
//public:
//    Point() : dimensionNum(0), dimension(nullptr) {};
//    Point(int d) : dimensionNum(d) {};
//    Point(int x, int y)
//    {
//        dimensionNum = 2;
//        dimension = new int[dimensionNum];
//        dimension[0] = x;
//        dimension[1] = y;
//    }
//    Point(int x, int y, int z)
//    {
//        dimensionNum = 3;
//        dimension = new int[dimensionNum];
//        dimension[0] = x;
//        dimension[1] = y;
//        dimension[2] = z;
//    }
//    Point(int x, int y, int z, int k)
//    {
//        dimensionNum = 4;
//        dimension = new int[dimensionNum];
//        dimension[0] = x;
//        dimension[1] = y;
//        dimension[2] = z;
//        dimension[3] = k;
//    }
//    Point(int x, int y, int z, int k, int p)
//    {
//        dimensionNum = 5;
//        dimension = new int[dimensionNum];
//        dimension[0] = x;
//        dimension[1] = y;
//        dimension[2] = z;
//        dimension[3] = k;
//        dimension[4] = p;
//    }
//    Point(const Point& obj)
//    {
//        dimensionNum = obj.dimensionNum;
//        dimension = new int[dimensionNum];
//        for (int i = 0; i < dimensionNum; i++)
//        {
//            dimension[i] = obj.dimension[i];
//        }
//    }
//    void computeFunction(const Point& obj)
//    {
//        double distance = 0.0;
//        for (int i = 0; i < dimensionNum; i++)
//        {
//            double calc = dimension[i] - obj.dimension[i];
//            distance += calc * calc;
//        }
//        double compute = sqrt(distance);
//        cout << "Distance between points: " << compute << endl;
//    }
//
//    ~Point()
//    {
//        delete[] dimension;
//    }
//};
//
//int main()
//{
//    int numdimen;
//    cout << "Enter the number of dimensions: ";
//    cin >> numdimen;
//
//    if (numdimen == 2)
//    {
//        cout << "--------- YOU CHOSE SECOND DIMENSION ---------" << endl;
//        Point p1(1, 2);
//        Point p2(2, 4);
//        p1.computeFunction(p2);
//    }
//    else if (numdimen == 3)
//    {
//        cout << "--------- YOU CHOSE THIRD DIMENSION ---------" << endl;
//        Point p3(4, 6, 7);
//        Point p4(1, 2, 3);
//        p3.computeFunction(p4);
//    }
//    else if (numdimen == 4)
//    {
//        cout << "--------- YOU CHOSE FOURTH DIMENSION ---------" << endl;
//        Point p5(1, 2, 3, 4);
//        Point p6(2, 3, 4, 5);
//        p5.computeFunction(p6);
//    }
//    else if (numdimen == 5)
//    {
//        cout << "--------- YOU CHOSE FIFTH DIMENSION ---------" << endl;
//        Point p7(9, 8, 7, 6, 5);
//        Point p8(1, 3, 3, 6, 5);
//        p7.computeFunction(p8);
//    }
//    else
//    {
//        cout << "Invalid dimensions!";
//    }
//
//    system("pause");
//    return 0;
//}