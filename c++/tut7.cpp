#include <iostream>
#include <string>
using namespace std;

class Employee
{

public:
    static int count;
    string name;
    void inp()
    {
        cout << "Enter the no.\t";
        cin >> name;
    }
    void EmpId(void)
    {
        cout << "The Employee ID is " << count + 1 << endl;
        count++;
    }
};

int Employee ::count;
int main()
{
    Employee a[4];
    // string a[4];
    for (int i = 0; i < 4; i++)
    {
        // cout<<"Enter the name of the employee ";
        // cin>>a[i];
        // cout<<a[i]<<endl;
        // Employee a[i];
        a[i].inp();
        // a[i].EmpId();
    }
    // For printing the value of a[i]
    for (int i = 0; i < 4; i++)
    {
        cout <<endl<< a[i].name << endl;
        a[i].EmpId();
    }
    // cout<<a[3].name;
    return 0;
}