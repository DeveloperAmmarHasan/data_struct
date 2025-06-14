#include "bits/stdc++.h"
using namespace std;
// function to find the sum of the array
int sumofthearray(int arr[], int size)
{
    int sum;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
// driver's function
int main()
{
    int arr[5] = {2, 4, 6, 7, 8};
    int sum = sumofthearray(arr, 5);
    cout << "The sum of the array is :\t" << sum << endl;
    return 0;
}