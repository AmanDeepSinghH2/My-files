#include<iostream>
#include<string>
using namespace std;
class vehicle
{
    protected:
    int speed;
    protected: string color;  
};
class car: public vehicle
{
    public:
    void input(int sc,string cc)
    {
        speed=sc;color=cc;
    }
    void display()
    {
        cout<<"Car Details: "<<endl;
        cout<<"Speed: "<<speed<<endl;
        cout<<"Color: "<<color<<endl;
    }
};
class bike : public vehicle
{
    public:
    void input(int sb,string cb)
    {
        speed=sb;color=cb;
    }
    void display()
    {
        cout<<"Bike Details: "<<endl;
        cout<<"Speed: "<<speed<<endl;
        cout<<"Color: "<<color<<endl;
    }
};
int main()
{
    vehicle ob;
    car obj;
    bike obj1;
    int x;string y;
    cout<<"Enter the Car speed: ";
    cin>>x;
    cout<<"Enter car color: ";
    cin>>y;
    int a;string b;
    cout<<"Enter bike speed: ";
    cin>>a;
    cout<<"Enter bike color: ";
    cin>>b;
    obj.input(x,y);
    obj.display();
    obj1.input(a,b);
    obj1.display();
}