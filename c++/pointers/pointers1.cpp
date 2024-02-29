#include <iostream>
using namespace std;

class Base
{
public:
    virtual void display()
    {
        cout << "This is display function of base class" << endl;
    }
};

class Derived : public Base
{
public:
    void display1()
    {
        cout << "This is display function of derived class" << endl;
    }
};
int main()
{
    // int a=5;
    // int* b=&a;
    // cout<<b<<endl<<*b<<endl<<&b<<endl;
    // b=b+1;
    // cout<<b<<endl<<*b+1;
    Base *b1;
    Derived d;
    b1 = &d;
    b1->display();
    return 0;
}