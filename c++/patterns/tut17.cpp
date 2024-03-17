#include <iostream>
using namespace std;

void reverse(int l[], int n, int r = 0)
{
    if (r >= n / 2) return;
    swap(l[r], l[n - 1-r]);
    // cout<<l[n]<<endl;
    reverse(l, n, ++r);
}

int main()
{
    int l[7] = {1, 2, 3, 4, 5, 6, 7};
    reverse(l, 7);

    for (int i = 0; i < 7; i++)
    {
        cout << l[i] << endl;
    }

    return 0;
}