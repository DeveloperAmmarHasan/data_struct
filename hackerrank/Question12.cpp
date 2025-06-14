#include "bits/stdc++.h"
using namespace std;

// funciton for sum of digits
int sumofdigits(int number)
{
    int digit, sum = 0;
    while (number != 0) // loop to count the digit of the number
    {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }
    return sum;
}
// driver's function
int main()
{
    int number;
    cout << "Enter the number to count the digits and print the sum " << endl;
    cin >> number;
    int sum = sumofdigits(number);
    cout << "The sum of digit of the entered number is : " << sum << endl;
    return 0;
}