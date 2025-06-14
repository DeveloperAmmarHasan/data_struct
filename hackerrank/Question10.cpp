#include "bits/stdc++.h"
using namespace std;
// write a program to check if a number is prime or not
// function to check the prime number
int checkisprime(int n)
{
    bool isprime = false;
    if (n <= 1)
        isprime = false;

    for (int i = 2; i < n / 2; ++i)
    {
        if (n % i == 0)
        {
            isprime = false;
            break;
        }
        else
            isprime = true;
    }
    if (isprime)
        cout << n << " is a prime number " << endl;
    else
        cout << n << " is not a prime number" << endl;
    return 0;
}
int main()
{
    int number;
    cout << "Enter a number to check if the number is prime or not " << endl;
    cin >> number;
    checkisprime(number);
}