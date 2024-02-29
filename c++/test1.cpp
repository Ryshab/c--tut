#include <iostream>
using namespace std;
//Find the no. of the vowels in a sentence or a string 
int main()
{
    int n=0;
    string x;
    cout<<"Enter your sentence:\n";
    getline(cin,x);
    for (int i = 0; i < x.size(); i++)
    {
        // char l[5]={'a','e','i','o','u'};
        string l="aeiou";
        for (int j=0; j < 5; j++) 
        {
            if (x[i]==l[j]) 
            {
                n++;
            

            }
        }
    }
    cout<<n;

    return 0;
}
