#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;
    int row = 0;
    char ch = 'A';
    while (row < n)
    {
        int col = 0;
        while (col < n)
        {
            cout << ch << " ";
            col++;
        }
        cout << endl;
        ch++;
        row++;
    }
    return 0;
}