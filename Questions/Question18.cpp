#include "bits/stdc++.h"
using namespace std;
// function for printing max of an array
int maxofrarr(int arr[], int size)
{
    int max;
    for (int i = 0; i < size; i++)
    {

        if (arr[0] < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
int minofrarr(int arr[], int size)
{
    int min;
    for (int i = 0; i < size; i++)
    {
        if (arr[0] > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}
// function to print the array
void printarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    return;
}

int main()
{
    int arr[5] = {5, 6, 8, 4, 3};
    int min = minofrarr(arr, 5);
    int max = maxofrarr(arr, 5);
    printarr(arr, 5);
    cout << "The min of the arr is :\t" << min << endl;
    cout << "The max of the arr is :\t" << max << endl;
    return 0;
}
