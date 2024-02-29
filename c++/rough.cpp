// #include<iostream>
// using namespace std;

// void swapf(int* x, int* y)
// {
//     int temp=*x;
//     *x=*y;
//     *y=temp;
// }

// class Employee 
// {
//     public:
//         int count;
//         void setData(){
//             cout<<"Hello world "<<count<<endl;
//             count++;
//         }
// };
// int main() 
// {
//     // int num1,num2;
//     // cin>>num1;
//     // cin>>num2;
//     // swapf(&num1, &num2);
//     // // swap(num1,num2);
//     // cout<<"your first number is :"<<num1<<endl<<"your second number is:"<<num2;


    
//     // int a[4];
//     // for (int i = 0; i < 4; i++)
//     // {
//     //     cout<<"Enter the "<<i+1<<" element";
//     //     cin>>a[i];

//     // }
//     // cout<<a[0]<<endl;
//     // cout<<a[1]<<endl;
//     // cout<<a[2]<<endl;
//     // cout<<a[3]<<endl;



//     // Employee 4;                      This wont work
//     // 4.setData();

//     return 0;

// }






#include<iostream>
#include <string>
using namespace std;

class sum{
    static int a;
    public: 
        sum(){};
        sum(int z){
            a+=z;
        }
        // void sumnum(sum obj){
        //     a+=obj.a;
        // }
        void printNum(){
            cout<<"The value is "<<a<<endl;
        }
};

// int sum :: a;
// int main() 
// {
//     sum o1(5),o2(3),o3(92),res;
//     // o2.sumnum(o1);
//     res.printNum();
//     return 0;
// }


class Base {
public:
    virtual void display() const {
        cout << "Base class display" << endl;
    }
};

class Derived : public Base {
public:
    void display() const override { // This line explicitly specifies overriding
        cout << "Derived class display" << endl;
    }
};


int main() {

    Derived d;
    d.display();
    Base b;
    b.display();
    return 0;
}
