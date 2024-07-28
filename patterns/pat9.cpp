#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int k = 1;
        while (k<= n-i){
            cout << "  ";
            k++;
        }
        int j = 1;
        while (j <= i)
        {
            cout << "*"<<" ";
            j++;
        }
        int l = 1;
        while (l <= i - 1)
        {
            cout << "*"<<" ";
            l++;
        }
        cout << endl;
        i++;
    }
    return 0;
}