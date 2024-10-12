#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int>dq;
    dq.push_back(10);
    cout << "Size of the Deque is :"<<dq.size();
    //Adding elements to the front of the queue using push_front function
    dq.push_front(20);
    cout << "\nFront element after adding 20 in front: ";
    if (dq.empty())
        cout << "Dequeue is Empty";
    else
        cout << dq.front();
    
    //Removing an element from the front using pop_front function
    dq.pop_front();
    cout << "\nAfter popping out the front element, Front element now is : ";
    if (dq.empty())
        cout << "Dequeue is Empty\n";
    else
        cout << dq.front();
        
    //Using iterator to print all the elements present in the Deque
    cout << "\nElements Present In The Deque are:\n";
    for (auto i = dq.begin(); i != dq.end(); ++i)
        cout << *i << " ";
	return 0;
}