#include <iostream>
#include <string>
using namespace std;
/*
to check if the string is pallindrome or not
*/
void palin(string s, int i = 0)
{
    int t = s.size();
    if (i >= t / 2)
    {
        cout << "This is pallindrome";
        return;
    }
    // check for palindrome
    else if (s[i] == s[t - 1-i])
    {
        palin(s, i + 1);
    }
    else
    {
        cout << "This is not palindrome";
        return;
    }
}
int main()
{
    string s;
    cin >> s;
    palin(s);
    return 0;
}