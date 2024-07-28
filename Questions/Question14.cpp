#include "bits/stdc++.h"
using namespace std;
// write a program to print hot and cold depending upon the temperature user enters
// function for temperature
int temperature(int n)
{
    if (n < 25)
    {
        cout << "it is very hot " << endl;
    }
    else if (n > 25 && n < 37)
    {
        cout << "it is normal temperature" << endl;
    }
    else
    {
        cout << "temperature is hot" << endl;
    }
    return 0;
}
int main()
{
    int n;
    cout << "Enter the temperature in you area" << endl;
    cin >> n;
    temperature(n);
    return 0;
}