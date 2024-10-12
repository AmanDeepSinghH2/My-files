#include <iostream>
using namespace std;
template <class T>
class number
{
    private:
    T num;
    T num2;
    public:
    number(T n1,T n2)
    {
        num=n1;
        num2=n2;
    }
    T getnumber()
    {
        cout<<" your numbers are:"<<num<<" "<<num2;
    }
};
int mani()
{
    number <int> nu1(88);
    number <double> nu2(69.696);
    cout<<nu1.getnumber();
    cout<<nu2.getnumber();
    return 0;
}