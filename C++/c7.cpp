#include <iostream>
using namespace std;
template <typename T>
T large(T a,T b)
{
    if (a>b)
    {
        cout<<a;
    }
    else
    {
        cout<<b;
    }
}
int main()
{
    int x,y;
    cin>>x>>y;
    large(x,y);
    return 0;
}