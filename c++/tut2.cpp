#include <iostream>
using namespace std;

int main()
{
    int x,s=0;
    cout<<"Enter your no.:";
    cin>>x;
    if (x<=0) {
        cout<<"the result is 0";

    }
    else {
        for (int i = 0; i < x ; i++)
        {
            if ((i%3==0) or (i%5==0)){
                s=s+i;
            }
            
        }
        
    }
    cout<<s;
    return 0;
}
