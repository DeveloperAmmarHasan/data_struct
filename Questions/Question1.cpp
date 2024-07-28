#include "bits/stdc++.h"
using namespace std;
// write a program to calculate the perimeter of a rectangle
int main()
{
    float L, W, P;
    cout << "Enter two sides a and b to calculate the perimeter of rectangle " << endl;
    cin >> L >> W;
    P = 2 * (L + W);
    cout << "The perimeter of the rectangle is : " << endl;
        cout << P << endl;
    return 0;
}