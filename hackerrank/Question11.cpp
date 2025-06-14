#include "bits/stdc++.h"
using namespace std;
//program was updated on 22-7-24
//function to check the prime numbers 
int primerange(int n)
{
    if (n == 1 || n == 0) // false if == 0
        return false;

    for (int i = 2; i <= n / 2; i++) // function to check the prime number
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

// driver's function
int main()
{
    int range_end,range_begin;
    cout << "Enter a number to start the range " << endl;
    cin >> range_begin;
    cout << "Enter the number to stop the range " << endl;
    cin >> range_end;
    for (int i = range_begin; i <= range_end; i++) // loop to print the prime numbers in range
    {
        if (primerange(i))
            cout << i << endl;
    }
    return 0;
}