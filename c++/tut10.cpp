#include <iostream>
using namespace std;

class Num
{
    static int a;

public:
    Num() {}
    Num(int x)
    {
        a = x;
    }
    Num(Num &y)
    {
        a = a + y.a;
    }
    void display(void)
    {
        cout << "The value of a is " << a << endl;
    }
};

int Num ::a = 0;
int main()
{
    Num o1(5), o2(3), o3(o1);
    o3.display();
    return 0;
}