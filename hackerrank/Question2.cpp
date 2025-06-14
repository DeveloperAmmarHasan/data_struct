#include "bits/stdc++.h"
using namespace std;
//write a program to calculate the cube of a number 
int main()
{
    int n, cube;
    cout << "Enter a number to calculate the cube " << endl;
    cin >> n;
    cube = n * n * n;
    cout << "The cube of the " << n << " is : " << endl;
    cout << cube << endl;
    return 0;
}