#include "bits/stdc++.h"
using namespace std;
//write a program to check if the given char is digit or not
int main()
{
    char ch;
    cout << "Enter character to check if its digit or not " << endl;
    cin >> ch;
    if (ch >= '0' && ch <= '9')
    {
        cout << "The character is digit" <<endl;
    }
    else
    {
        cout << "The character is not digit" << endl;
    }
    return 0;
}