#include <iostream>
using namespace std;

class Employee
{
public:
    int a, b;
    Employee() {}
    Employee(int inp)
    {
        a = inp;
    }
    void EmpInfo()
    {
        cout << "The Employee ID is " << a << " and their salary is " << b << endl;
    }
};

class Salary : public Employee
{
public:
    Salary() {}
    void salInp(int sal)
    {
        b = sal;
    }
};
int main()
{
    Employee rishi(5001);
    Salary s1;
    s1.salInp(55000);
    rishi.EmpInfo();
    s1.EmpInfo();
    return 0;
}