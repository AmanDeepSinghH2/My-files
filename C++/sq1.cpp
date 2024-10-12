#include <iostream>
#include "sq1.h"
using namespace std;
class circle
{
    private:
    int radius;
    public:
    float pi=3.14;
    void circle::set(int r);
    int area() 
    {
        return pi*radius*radius;
    }
    int circumference()
    {
        return 2*pi*radius;
    }
};
int main()
{
    int n;
    cout<< "enter radius: ";
    cin>>n;
    circle r1;
    r1.set(n);
    int area1=r1.area();
    
}