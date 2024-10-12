#include<iostream>
#include  <bits/stdc++.h>
#include<string>
using namespace std;
class student
{
    public:
    string name;
    public:
    int n,marks[100],x;
    void input()
    {
        std::cout<<"Enter student's name: ";
        cin>>name;
        cout<<"Enter the number of subjects: ";
        cin>>n;
        cout<<"Enter student's marks: ";
        for(int i=1;i<=n;i++)
        {
            cin>>marks[i];
        }
    }
    void average()
    {
        int s=0;
        for(int i=1;i<=n;i++)
        {
            s=s+marks[i];
        }
        double average;
        average=s/n;
        cout<<"\nAverage Marks: "<<average<<endl;
    }
    void add()
    {
        string n;
        cout<<"Enter student's name: ";
        cin>>n;
        cout<<"Enter the number of subjects: ";
        cin>>x;
        int marks[x];
        cout<<"Enter student's marks: ";
        for(int j=1;j<=x;j++)
        {
            cin>>marks[j];
        }
    }
    void avergae_new()
    {
         int s1=0;
        for(int i=1;i<=x;i++)
        {
            s1=s1+marks[i];
        }
        double avg;
        avg=s1/n;
        cout<<"\nAverage Marks of the new student added: "<<avg<<endl;
    }
    void display()
    {
        cout<<"Student's Name: "<<name<<endl;
    }
};
int start()
{b:
    student obj;
    int choice;
    cout<<"Hello Baccho!\n";
    do
    {
        
    cout<<"1. Enter student's name and his/her marks"<<endl;
    cout<<"2. Calculate averge marks\n";
    cout<<"3. Add new student\n";
    cout<<"4. Calculate average marks of added student\n";
    cout<<"5. Display student's Details\n";
    cout<<"6. Exit\n";
    cout<<"Enter your choice: ";
    cin>>choice;
        if(choice==1)
        {
            obj.input();
            goto b;
        }
        else if(choice==2)
        {
            obj.average();
            goto b;
        }
        else if(choice==3)
        {
            obj.add();
            goto b;
        }
        else if(choice==4)
        {
            obj.avergae_new();
            goto b;
        }
        else if(choice==5)
        {
            obj.display();
            goto b;
        }
        else 
        {
            cout<<"Invalid choice\n";
            goto b;
        }
    } while (choice!=6);
return 0;
}
int main()
{
    start();
}