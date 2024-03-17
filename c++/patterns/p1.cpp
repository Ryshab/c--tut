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
    cout << "\nThis is pattern1" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {

            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}

void pattern2(int n)
{
    cout << "\nThis is pattern2" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {

            cout << j + 1;
        }
        cout << endl;
    }
    cout << endl;
}

void pattern3(int n)
{
    cout << "\nThis is pattern3" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {

            cout << i + 1;
        }
        cout << endl;
    }
    cout << endl;
}

void pattern4(int n)
{
    cout << "\nThis is pattern4" << endl;
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
void pattern5(int n)
{
    cout << "\nThis is pattern5" << endl;
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

void pattern6(int n)
{
    cout << "\nThis is pattern6" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = (n - i); j > 1; j--)
        {
            cout << " ";
        }
        for (int k = 1; k < (2 * (i + 1)); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}

void pattern7(int n)
{
    cout << "\nThis is pattern7" << endl;
    for (int i = n; i > 0; i--)
    {
        for (int j = (n - i); j > 0; j--)
        {
            cout << " ";
        }
        for (int k = (2 * i); k > 1; k--)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}

void pattern8(int n)
{
    cout << "\nThis is pattern8" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = (n - i); j > 1; j--)
        {
            cout << " ";
        }
        for (int k = 1; k < (2 * (i + 1)); k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n; i > 0; i--)
    {
        for (int j = (n - i); j > 0; j--)
        {
            cout << " ";
        }
        for (int k = (2 * i); k > 1; k--)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}
// if exceeds 5 tb kam krne lg jao
void pattern9(int n)
{
    cout << "\nThis is pattern9" << endl;
    int i = 0;
    int k = n;
    int x = n;
    while (i <= x)
    {
        if (i < 5)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << "*";
            }
        }
        else
        {
            while (k > 0)
            {
                for (int i = k; i > 0; i--)
                {
                    cout << "*";
                }
                k--;
                cout << endl;
            }
        }
        cout << endl;
        i++;
    }
}

void pattern10(int n)
{
    int s = 1;
    cout << "\nThis is pattern10" << endl;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            s = 1;

        else
            s = 0;

        for (int j = 0; j <= i; j++)
        {
            cout << s;
            s = 1 - s;
        }
        cout << endl;
    }
    cout << endl;
}
void pattern11(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = (n - i) * 2; j > 0; j--)
        {
            cout << " ";
        }
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern12(int n)
{
    int s = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << s << " ";
            s++;
        }
        cout << endl;
    }
}
void pattern13(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            char ch = 65 + j;
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern14(int n)
{
    for (int i = n; i > 0; i--)
    {
        int s = 65;
        for (int j = i; j > 0; j--)
        {
            char ch = s;
            cout << ch << " ";
            s++;
        }
        cout << endl;
    }
}
void pattern15(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            char ch = 65 + i;
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern16(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            char ch = 65 + i;
            cout << ch << " ";
        }
        cout << endl;
    }
}

/*
//pseudocode

*/
int main()
{
    int n;
    cin >> n;
    // pattern1(n);
    // pattern2(n);
    // pattern3(n);
    // pattern4(n);
    // pattern5(n);
    // pattern6(n);
    // pattern7(n);
    // pattern8(n);
    // pattern9(n);
    // pattern11(n);
    // pattern10(n);
    // pattern12(n);
    // pattern13(n);
    // pattern14(n);
    // pattern15(n);
    pattern16(n);
}