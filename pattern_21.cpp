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
    int nst = 1;         // nst - no. of stars
    int nsp = 2 * n - 3; // nsp - no. of spaces

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

        if (row == n)        // to avoid extra star in last row
            nst = nst - 1;

        for (int cst = 1; cst <= nst; cst++) // cst - no. of stars in the column
        {
            cout << "*";
        }
        cout << endl;
        nst++;
        nsp -= 2;
    }
}