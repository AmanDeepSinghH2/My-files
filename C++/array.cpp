#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int,10> a1;
    for(int i=0;i<=8;i++)
    {
        a1.at(i);
    }
    cout<<"the elements are:";
    for(auto it=a1.begin();it!=a1.end();it++)
    {
        cout<<(it);
    }
    return 0;

}