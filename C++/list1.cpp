#include <iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l1;
    for(int i=0;i<=9;i++)
    l1.push_back(i);
    
    cout<<"List L1: ";
    for(auto it = l1.begin();it!=l1.end();++it)
        cout << *it << " ";
    cout<<endl;
    return 0;
    
}