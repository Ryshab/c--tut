// #include<iostream>
// using namespace std;

// int main(){
//     // cout<<"hello world";
//     // cout<<"sdfskfhsk";
//     int h=2,a=56;
//     char ch;
//     if (h%2==0) ch=a;
//     cout<<a;
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int asciiValue ; // ASCII value of 'A'
    cin>>asciiValue;
    char character = asciiValue; // No explicit cast needed

    cout << "Character with ASCII value " << asciiValue << " is: " << character <<endl;

    return 0;
}
