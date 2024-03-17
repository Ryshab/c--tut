#include <iostream>
using namespace std;

void recur1(int n, int t, int c=1)
{
    if (c > t)
        return;
    cout << n * c << endl;
    recur1(n, t, c + 1);
}
void recur2(int n, int c=1)
{
    if (c > n)
        return;
    cout << c << endl;
    recur2(n, c + 1);
}
void recur3(int n)
{
    if (n==0)
        return;
    cout << n<< endl;
    recur3(n-1);
}
void recur4(int n)
{//backtracking recursion
    if (n==0) return;
    recur4(n-1);
    cout << n<< endl;
}

int main()
{
    // recur1(12, 10);
    // recur2(12);
    // recur3(12);
    // recur4(12);
    return 0;
}