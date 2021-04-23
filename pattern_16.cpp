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
    int nst = n; // nst - no. of stars
    int nsp = n; // nsp - no. of spaces

    for (int row = 1; row <= 2 * n - 1; row++)
    {
        for (int csp = 1; csp <= nsp; csp++) // csp - no. of spaces in the column
        {
            cout << " ";
        }
        for (int cst = 1; cst <= nst; cst++) // cst - no. of stars in the column
        {
            cout << "*";
        }
        cout << endl;
        if (row < n)
        {
            nst--;
            nsp -= 1;
        }
        else
        {
            nst++;
            nsp += 1;
        }
    }
}