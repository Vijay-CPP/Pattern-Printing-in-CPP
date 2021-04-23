//#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
using namespace std;

void printPattern(int n);

int main()
{
    int n;
    cout << "\nEnter the number of rows : ";
    cin >> n;
    printPattern(n);
    return 0;
}

void printPattern(int n)
{
    int nst = n / 2; // nst - no. of stars
    int nsp = 1;     // nsp - no. of spaces

    for (int row = 1; row <= n; row++)
    {
        for (int cst = 1; cst <= nst; cst++) // cst - no. of stars in the column
        {
            cout << "*";
        }
        for (int csp = 1; csp <= nsp; csp++) // csp - no. of spaces in the column
        {
            cout << " ";
        }
        for (int cst = 1; cst <= nst; cst++) // cst - no. of stars in the column
        {
            cout << "*";
        }
        cout << endl;
        if (row <= (n / 2))
        {
            nst--;
            nsp += 2;
        }
        else
        {
            nst++;
            nsp -= 2;
        }
    }
}