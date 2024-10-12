#include <iostream>
using namespace std;

class Rectangle
{
    int width, length;
    public:
    // Default constructor
    Rectangle()
    {
        width = 1;
        length = 1;
    }
    // Parameterized constructor
    Rectangle(int w, int l)
    {
        width = w;
        length = l;
    }
    // Accessor for width
    int get_width()
    {
        return width;
    }
    // Accessor for length
    int get_length()
    {
        return length;
    }
    // Mutator for width
    void set_width(int w)
    {
        width = w;
    }
    // Mutator for length
    void set_length(int l)
    {
        length = l;
    }
    // Function to calculate area
    int area()
    {
        return width * length;
    }
    // Function to calculate perimeter
    int perimeter()
    {
        return 2 * (width + length);
    }
};

int main()
{
    // Create two Rectangle objects using constructors
    Rectangle r1(10, 20);
    Rectangle r2(15, 25);

    // Display the results for each object
    cout << "Area of r1: " << r1.area() << endl;
    cout << "Perimeter of r1: " << r1.perimeter() << endl;
    cout << "Area of r2: " << r2.area() << endl;
    cout << "Perimeter of r2: " << r2.perimeter() << endl;

    // End the main function with a return statement
    return 0;
}
