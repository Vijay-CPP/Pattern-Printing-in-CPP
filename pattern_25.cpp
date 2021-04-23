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
    int nst = 1;      // nst - no. of stars
    int nsp = n - 1;  // nsp - no. of spaces
    int num = 1;
    for (int row = 1; row <= n; row++)
    {
        for (int csp = 1; csp <= nsp; csp++) // csp - no. of spaces in the column
        {
            cout << "  ";
        }
        for (int cst = 1; cst <= nst; cst++) // cst - no. of stars in the column
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
        nst += 2;
        nsp--;
    }
}