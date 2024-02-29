#include <iostream>
using namespace std;

class calculator;

class complex
{
    int a, b;
    friend class calculator;
public:
    void assign(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void print(int x,int y )
    {
        cout << x << "+" << y << "i";
    }
};

class calculator
{
public:
    int sum(int a, int b)
    {
        return a + b;
    }
    int sumrealcomplex(complex o1, complex o2)
    {
        return (o1.a + o2.a);
    }
    int sumimgcomplex(complex o1, complex o2)
    {
        return (o1.b + o2.b);
    }
};

int main()
{
    complex a1,a2,res;
    a1.assign(4,5);
    a2.assign(3,1);
    calculator c;
    // int r=c.sumrealcomplex(a1,a2);
    // int r1=c.sumimgcomplex(a1,a2);
    // res.print(r,r1);
    res.print(c.sumrealcomplex(a1,a2),c.sumimgcomplex(a1,a2));
    return 0;
}