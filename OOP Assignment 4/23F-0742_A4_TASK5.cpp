//#include <iostream>
//using namespace std;
//
//class Shape
//{
//public:
//    void draw()
//    {
//        cout << "Shape drawn!" << endl;
//    }
//};
//
//class ColoredShape : virtual public Shape
//{
//protected:
//    string color;
//
//public:
//    ColoredShape(string col) 
//    {
//        color = col;
//    }
//    void draw() 
//    {
//        cout << "Colored Shape drawn with color: " << color << endl;
//    }
//};
//
//class TexturedShape : virtual public Shape
//{
//protected:
//    string texture;
//
//public:
//    TexturedShape(string tex)
//    {
//        texture = tex;
//    }
//    void draw() 
//    {
//        cout << "Textured Shape drawn with texture: " << texture << endl;
//    }
//};
//
//class TexturedColoredShape : public ColoredShape, public TexturedShape
//{
//public:
//    TexturedColoredShape(string col, string tex) : ColoredShape(col), TexturedShape(tex) {}
//    void draw() 
//    {
//        ColoredShape::draw();
//        TexturedShape::draw();
//    }
//};
//
//int main()
//{
//    TexturedColoredShape object("Blue", "Diamond");
//    object.draw();
//
//    system("pause");
//    return 0;
//}