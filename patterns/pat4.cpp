#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cout << "Enter value " << endl;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << col << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}