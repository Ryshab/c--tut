#include<iostream>
using namespace std;

class complex{
    public:
    static int a;
    static int b;
        // complex();
        complex(int, int);
        int addcomplex(complex , complex);
        int addreal(complex, complex);
        void printnum(void) {
            cout<<a<<"+"<<b<<"i"<<endl;
        }

};

// complex ::complex();

int complex ::a=0;
int complex ::b=0;

complex ::complex(int x, int y){
    a=a+x;
    b=b+y;
}
/*
int complex ::addcomplex(complex t1, complex t2){
    return (t1.b +t2.b);
}

int complex ::addreal(complex t1, complex t2){
    return (t1.a +t2.a);
}
*/
int main() 
{   
    complex o1(4,3);;
    o1.printnum();
    complex o2(4,3);;
    o2.printnum();
    // cout<<o3.addcomplex(o1,o2)<<endl<<o3.addreal(o1,o2)<<endl;
    complex o3(4,3);;
    o3.printnum();

    return 0;
}