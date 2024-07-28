#include "bits/stdc++.h"
using namespace std;
int main()
{
    // write a program to print the average of 3 numbers
    float num1, num2, num3;
    cout << "Enter three numbers to print the average " << endl;
    cin >> num1 >> num2 >> num3;
    float num;
    num = (num1 + num2 + num3) / 3;
    cout << "The average of three numbers are : " << endl
         << num << endl;
         
    return 0;
}