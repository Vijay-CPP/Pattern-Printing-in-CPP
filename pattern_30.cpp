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
    int nst = n;  // nst - no. of stars
    for (int row = 1; row <= n; row++)
    {
        int num = n;
        for(int cst=1; cst<=nst; cst++)  // cst - no. of stars in the column
        {
            cout << num << " ";
            num--;
        }
        cout<<endl;
    }
}