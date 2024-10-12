#include <iostream>
using namespace std;
template <class T>
class calculation
{
    private:
    T a,b;
    public:
    calculation(T x,T y)
    {
        a=x;
        b=y;
    }
    T add()
    {
        return a+b;
    }
    T sub()
    {
        if(a>b)
        {
            return a-b;
        }
        else
        {
            return b-a;
        }
    }
    T mult()
    {
        return a*b;
    }
    T div()
    {
        if (b!=0)
        {
            return a/b;
        }
        else 
        {
            cout<<"Division by zero is not possible"<<endl;
            return 0;
        }
    }
};
int main()
{
    int x,y;
    cin>>x>>y;
    calculation<int> c1(x,y);
    cout<<c1.add()<<"\n";
    cout<<c1.sub()<<"\n";
    cout<<c1.mult()<<"\n";
    cout<<c1.div();
    return 0;
}