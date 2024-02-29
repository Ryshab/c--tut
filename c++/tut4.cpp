#include<iostream>
using namespace std;

int main() 
{
    int n;
    cout<<"Enter no. of lines:";
    cin>>n;
    for (int i = 0; i <= n; i++)
    {
        int f=i;
        while (f<n)
       {
            cout<<" ";
            f++;
       }
        for (int j = 0; j<i; j++)
        {
            cout<<"*";
        }
        for (int k = 1; k < i; k++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    return 0;

}