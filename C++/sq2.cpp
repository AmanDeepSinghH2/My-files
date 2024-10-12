#include<iostream>
using namespace std;
class Rectangle
{
    private:
    int length,breadth;
    public: void input()
    {
        cout<<"Enter the length and breadth of rectangle: ";
        cin>>length>>breadth;
    }
    public: void area()
    {
        int area;
        area=length*breadth;
        cout<<"Area is: "<<area<<endl;
    }
    public: void perimeter()
    {
        int p;
        p=2*(length+breadth);
        cout<<"Perimeter is: "<<p<<endl;
    }
};
int main()
{
    Rectangle obj;
    obj.input();
    obj.area();
    obj.perimeter();
}