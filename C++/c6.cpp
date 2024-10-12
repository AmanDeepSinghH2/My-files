#include<iostream>
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
        cout<<a+b;
    }
    T sub()
    {
        cout<<a-b;
    }
    T mult()
    {
        cout<<a*b;
    } 
    T div ()
    {
        cout<<a/b;
    }
    T show()
    {
        int n;
        cout<<"1.add\n2.sub\n3.mult\n4.div\n";
        cin>>n;
        switch(n)
        {
            case 1:
            add();
            break;
            case 2:
            sub();
            break;
            case 3:
            mult();
            break;
            case 4:
            div();
            break;
        }
    }
};
int main()
{
    int x,y;
    cin>>x>>y;
    calculation<int> c1(x,y);
    c1.show();
    return 0;
}