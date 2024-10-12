#include <iostream>
using namespace std;
template <typename t>
t large(t a,t b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<large(x,y);
    return 0;
}