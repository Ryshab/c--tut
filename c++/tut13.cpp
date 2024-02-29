// This code is only for practice of inheritence
/*
A<---Base class
B<---Base class
C<---B&A
D<---C
E<---D
*/
#include <iostream>
using namespace std;

class A
{
    int a;

public:
    A()
    {
        cout << "This is the base class A" << endl;
    }
};

class B
{
    int b;

public:
    B()
    {
        cout << "This is base class B" << endl;
    }
};

class C : public B, public A
{
public:
    C()
    {
        cout << "This is class c which is derived from B and A" << endl;
    }
};

class D : public C
{
public:
    D()
    {
        cout << "This is class D which is derived from C" << endl;
    }
};

class E : public D, virtual public A
{
public:
    E()
    {
        cout << "This is class E which is derived from D." << endl;
    }
};
int main()
{
    E e;
    // A a;

    return 0;
}