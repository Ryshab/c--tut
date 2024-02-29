#include <iostream>
using namespace std;
/*There are few options to make it work
-->either you can define the whole class as friend
-->you can also create calculator first and in that declare sumrealcomplex and later on define it outside the
class by using scope resolution (be sure to declare complex class also)
-->you can just create sumrealcomplex as independant function which is not part of any class but friend of complex
###Easiest would be to do the first one [friend class calculator]
                ----->>> I am doing the toughest one*/

class complex;

class calculator
{
public:
    int sum(int a, int b)
    {
        return a + b;
    }
    int sumrealcomplex(complex o1, complex o2);
    int sumimgcomplex(complex o1, complex o2);
};

class complex
{
    int a, b;
    friend int calculator ::sumrealcomplex(complex o1, complex o2);
    friend int calculator ::sumimgcomplex(complex o1, complex o2);
    // friend class calculator;
public:
    void assign(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void print()
    {
        cout << a << "+" << b << "i";
    }
};

int calculator ::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator ::sumimgcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex a1,a2;
    a1.assign(4,5);
    a2.assign(3,1);
    calculator c;
    c.sumrealcomplex(a1,a2);
    c.sumimgcomplex(a1,a2);
    a1.print();
    a2.print();
    return 0;
}