#include "bits/stdc++.h"
using namespace std;
int main()
{
    // write a program to print the smallest number of the two
    int n, m;
    cout << "Enter two number respectively to the smallest number of the two" << endl;
    cin >> n >> m;
    if (m > n)
    {
        cout << "The smallest number is :" << n << endl;
    }
    else
    {
        cout << "The smallest number is : " << m << endl;
    }
    return 0; 
}