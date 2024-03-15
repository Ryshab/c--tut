// starting with patterns
/*
 *
 **
 ***
 ****
 */
#include <iostream>
using namespace std;

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {

            cout << "*";
        }
        cout << endl;
    }
    cout<<endl;
}

void pattern2(int n){
        for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {

            cout << j+1;
        }
        cout << endl;
    }
    cout<<endl;
}
void pattern3(int n){
        for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {

            cout << i+1;
        }
        cout << endl;
    }
        cout << endl;
}
void pattern4(int n){
        for (int i = n; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {

            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}
void pattern5(int n){
        for (int i = n; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {

            cout << j;
        }
        cout << endl;
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    pattern5(n);
}