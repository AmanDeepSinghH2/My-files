#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int ar[]={1,2,3,2,4,2,5,2,6};
    vector<int> v(ar,ar+10);
    int c1=count(v.begin(),v.end(),2);
    return 0;
}