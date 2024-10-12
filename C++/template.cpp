#include <iostream>
using namespace std;
template <typename T>
T add(T num1,T num2)
{
    return num1+num2;
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    cout<<"the sum is:"<<add(n1,n2);
    return 0;
}