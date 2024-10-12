#include <iostream> 
#include <algorithm> 
using namespace std;
int main () 
{
    int myints[] = { 10, 20, 30, 40 }; 
    int * p = find (myints, myints+4, 30);
    if (p != myints+4) 
    {
        cout << "Element found in myints: " << *p << '\n';
    } 
    else   
    {
        cout << "Element not found in myints\n";
    }
    return 0; 
}
