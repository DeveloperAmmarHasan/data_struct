#include "bits/stdc++.h"
using namespace std;
// write a program to check if the given number is natural or not
int main()
{
    int nat;
    cout << "Enter a number to check if its natural or not" << endl;
    cin >> nat;
    if (nat > 0)
    {
        cout << "it is a natural number " << endl;
    }
    else
    {
        cout << "it is not natural number " << endl;
    }
    return 0;
}