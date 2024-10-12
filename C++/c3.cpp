#include <iostream>
using namespace std;

class Shape
{
    public:
    int x, y;
    void getData()
    {
        cin >> x >> y;
    } 
};

class Rectangle : public Shape
{
    public:
    int area()
    {
        return x * y;
    }
    void printData()
    {
        cout << "Area of rectangle: " << area() << endl;
    }
};

class Circle : public Shape
{
    public:
    double area()
    {
        return 3.14 * x * y;
    }
    void printData()
    {
        cout << "Area of circle: " << area() << endl;
    }
};

int main()
{
    Rectangle r1;
    r1.getData();
    r1.printData();

    Circle c1;
    c1.getData();
    c1.printData();

    return 0;
}
