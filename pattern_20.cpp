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
    int nst = 1;          // nst - no. of stars
    int in_sp = -1;       // in_sp - no. of inside spaces
    int front_sp = n/2;   // front_sp - no. of front spaces

    for (int row = 1; row <= n; row++)
    {
        for (int csp = 1; csp <= front_sp; csp++) // csp - no. of spaces in the column
        {
            cout << " ";
        }
        for (int cst = 1; cst <= nst; cst++) // cst - no. of stars in the column
        {
            cout << "*";
        }
        for (int csp = 1; csp <= in_sp; csp++) // csp - no. of spaces in the column
        {
            cout << " ";
        }
        if(row>1 && row<n)
        for (int cst = 1; cst <= nst; cst++) // cst - no. of stars in the column
        {
            cout << "*";
        }
        cout << endl;

        if (row <=(n / 2))
        {
            in_sp += 2;
            front_sp--;
        } 
        else
        {
            front_sp++;
            in_sp -= 2;
        }
    }
}