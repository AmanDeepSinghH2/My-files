#include <iostream>
using namespace std;
class rectangle
{
    private:
    int length, breadth;
    public:
    void set(int l,int b)
    {
        length=l;
        breadth=b;
    }
    int get()
    {
        cout<<"Enter details:";
        cin>>length>>breadth;
    }
    int area()
    {
        int res;
        res=length*breadth;
        cout<<res;
    }
    int disp()
    {
        cout<<"the area of the rectangle is"<<" ";
        area();
    }
};
int main()
{
    int l,b;
    rectangle r;
    r.get();
    r.disp();
    return 0;
}