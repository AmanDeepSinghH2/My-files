#include <iostream>
using namespace std;
class object
{
    private:
    int side,radius,height;
    public:
    void set(int a,int r,int h)
    {
        side=a;
        radius=r;
        height=h;
    }
    void v(int a)
    {
        cout<<"the volume of the cube is:"<<side*side*side;
    }
    void v(int r,int h)
    {
        cout<<"the volume of the cylinder is:"<<3.14*radius*radius*height;
    }
    void v(int r,int a=1)
    {
        cout<<"the volume of a sphere is:"<<(4/3)*3.14*radius*radius*radius*side;
    }
};
int main()
{
    object o;
    o.set(12,3,6);
    o.v(12);
    o.v(3,6);
    o.v(3);
    return 0;
}
