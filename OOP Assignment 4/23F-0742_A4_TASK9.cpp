//#include <iostream>
//#include <string>
//#include <cmath>
//using namespace std;
//
//class Shapes
//{
//protected:
//    double length, width;
//public:
//    Shapes(double l = 0, double w = 0)
//    {
//        length = l;
//        width = w;
//    }
//    virtual double area() 
//    { 
//        return length * width;
//    }
//};
//
//class TwoDShapes : public Shapes
//{
//public:
//    TwoDShapes(double l = 0, double w = 0) : Shapes(l, w) {}
//};
//
//class ThreeDShapes : public Shapes
//{
//public:
//    ThreeDShapes(double l = 0, double w = 0) : Shapes(l, w) {}
//    virtual double volume() = 0;
//};
//
//
//class Circle : public TwoDShapes
//{
//private:
//    double radius;
//    string color;
//public:
//    Circle(double r, string c)
//    {
//        radius = r;
//        color = c;
//    }
//    double area()
//    {
//        return 3.14 * radius * radius;
//    }
//};
//
//class Square : public TwoDShapes 
//{
//private:
//    double side;
//    string color;
//public:
//    Square(double s, string c)
//    {
//        side = s;
//        color = c;
//    }
//    double area()
//    {
//        return side * side;
//    }
//};
//
//class Cube : public ThreeDShapes
//{
//private:
//    double height;
//public:
//    Cube(double l, double w, double h) : ThreeDShapes(l, w)
//    {
//        height = h;
//    }
//    double area() override 
//    {
//        return 2 * (length * width + width * height + height * length);
//    }
//    double volume() override 
//    { 
//        return length * width * height;
//    }
//};
//
//class Pyramid : public ThreeDShapes
//{
//private:
//    double base, height;
//public:
//    Pyramid(double b, double h)
//    {
//        base = b;
//        height = h;
//    }
//    double area() override
//    {
//        return base * base + 2 * base * sqrt((base / 2) * (base / 2) + height * height); 
//    }
//    double volume() override 
//    {
//        return (base * base * height) / 3;
//    }
//};
//
//int main() 
//{
//    Circle object1(5, "Red");
//    cout << "Area of circle: " << object1.area() << endl;
//
//    Square object2(4, "Blue");
//    cout << "Area of square: " << object2.area() << endl;
//
//    Cube object3(3, 3, 3);
//    cout << "Area of cube: " << object3.area() << endl;
//    std::cout << "Volume of cube: " << object3.volume() << std::endl;
//
//    Pyramid object4(4, 6);
//    cout << "Area of pyramid: " << object4.area() << endl;
//    cout << "Volume of pyramid: " << object4.volume() << endl;
//
//    system("pause");
//    return 0;
//}