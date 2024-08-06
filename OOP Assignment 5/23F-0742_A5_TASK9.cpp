#include<iostream>
using namespace std;
class LandMeasurement
{
protected:
    double value;
public:
    LandMeasurement() : value(0.0) {};
    LandMeasurement(double v) : value(v) {};

    friend ostream& operator<<(ostream& output, LandMeasurement obj);
    friend istream& operator>>(istream& input, LandMeasurement& obj);

    double getValue() const
    {
        return value;
    }
    LandMeasurement operator+(LandMeasurement& obj)
    {
        return LandMeasurement(value + obj.value);
    }
    LandMeasurement operator-(LandMeasurement& obj)
    {
        return LandMeasurement(value - obj.value);
    }
    bool operator>=(LandMeasurement obj)
    {
        return value >= obj.value;
    }

    bool operator<=(LandMeasurement obj)
    {
        return value <= obj.value;
    }

};
ostream& operator<<(ostream& output, LandMeasurement obj)
{
    output << obj.value;
    return output;
}

istream& operator>>(istream& input, LandMeasurement& obj)
{
    input >> obj.value;
    return input;
}
class Acre : public LandMeasurement
{
public:
    Acre(double v) : LandMeasurement(v) {};
};

class Hectare : public LandMeasurement
{
public:
    Hectare(double v) : LandMeasurement(v) {}
};

class LocalUnit : public LandMeasurement
{
public:
    LocalUnit(double v) : LandMeasurement(v) {}
};
int main()
{
    Acre acreobj(2.5);
    Hectare hecobj(5.0);
    LocalUnit localobj(9.0);
    cout << "\n\n\t\t------------Enter a land measurement-----------\n\n";
    LandMeasurement obj;
    cin >> obj;
    cout << "land measurement : " << obj << endl;

    LandMeasurement sum = acreobj + hecobj;
    cout << "Sum: " << sum << endl;

    LandMeasurement sub = hecobj - acreobj;
    cout << "Difference: " << sub << endl;

    if (acreobj >= localobj)
    {
        cout << "Acre is greater than or equal to Local Unit" << endl;
    }
    else
    {
        cout << "Acre is less than Local Unit" << endl;
    }

    system("pause");
    return 0;
}