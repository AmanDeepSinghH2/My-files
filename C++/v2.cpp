#include <iostream>
#include<vector>
using namespace std;
void add()
{
    a:
    vector<int> v1;
    vector<int> v2;
    vector<int>:: iterator it;
    int n,m;
    cout<<"select vector:";
    cin>>m;
    cin>>n;
    cout<<"enter elements:";
    if(m=1)
    {
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        v1.push_back(num);
    }
    for(it=v1.begin();it!=v1.end();++it)
    {
        cout<<*it<<" ";
    }
    
    }
    else
    {for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        v2.push_back(num);
    }
    for(it=v2.begin();it!=v2.end();++it)
    {
        cout<<*it<<" ";
    }
    }
    goto a;
}
int main()
{
    add();
    return 0;
}