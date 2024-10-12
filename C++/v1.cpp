#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1;
    cout << "Enter the number of elements you would like to add: ";
    int n;
    cin >> n;
    cout << "Enter your numbers:\n";
    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v1.push_back(num);
    }

    // Display the numbers
    cout << "You entered: ";
    for(int i = 0; i < n; i++)
    {
        cout << v1[i] << " ";
    }

    return 0;
}
