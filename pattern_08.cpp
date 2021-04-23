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
    int nsp = 0; // nsp - no. of spaces

    for (int row = 1; row <= n; row++)
    {
        for (int cst = 1; cst <= nst; cst++) // cst - no. of stars in the column
        {
            if (cst==row || cst == n-row+1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}