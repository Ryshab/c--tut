#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    int n, j;
    cout << "Enter the no. of elements you want in the list:" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element:" << endl;
        cin >> j;
        l.push_back(j);
    }
    cout<<endl;
    list<int>::iterator iter;
    iter = l.begin();
    for (int i = 0; i < l.size(); i++)
    {
        cout << *iter << "  ";
        iter++;
    }
    cout<<endl;
    l.sort();
    iter = l.begin();
    for (int i = 0; i < l.size(); i++)
    {
        cout << *iter << "  ";
        iter++;
    }

    return 0;
    // cout << "Original list:" << endl;
    // for (int elem : l)
    // {
    //     cout << elem << " ";
    // }
    // cout << endl;

    // l.sort();

    // cout << "Sorted list:" << endl;
    // for (int elem : l)
    // {
    //     cout << elem << " ";
    // }
    // cout << endl;
    // return 0;
}