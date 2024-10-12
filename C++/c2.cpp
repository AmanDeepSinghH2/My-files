#include <iostream>
using namespace std;
class Traingle
{
    private:
    int base, height;
    public:
    void set(int b, int h)
    {
        base=b;
        height=h;
    }
    int area()
    {
        cout<<0.5*base*height;
    }
};
int main()
{
    int b,h;
    cin>>b>>h;
    Traingle T;
    T.area();
    return 0;
}