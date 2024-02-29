#include<iostream>
using namespace std;

class employee
{
    private:
        int a;
    public:
    int b, c;
        void setData(int a1, int b1, int c1)
        {
            a=a1;
            b=b1;
            c=c1;
            cout<<a<<b<<c;
            
        }
        void sum(int b, int c)
        {
            a=b+c;
            cout<<"The sum of b and c is "<<a<<endl;
        }
};

int main() 
{
    employee ry;
    int a1,b1,c1;
    cin>>a1>>b1>>c1;
    ry.setData( a1, b1, c1);
    ry.sum(b1,c1);
    return 0;
}