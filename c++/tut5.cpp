#include<iostream>
using namespace std;
//Using recursion to create a fibonacci sequence backwards and you can comment out the loop to get nth number of the fibonacci sequence.
int fib(int n){
    if (n<2)
    {
        /* code */
        return 1;
    }
    return fib(n-1)+fib(n-2);
    
}
int main() 
{
    int n;
    cin>>n;
    while(n>=1){

        cout<<fib(n);
        n--;
    }
    return 0;
}