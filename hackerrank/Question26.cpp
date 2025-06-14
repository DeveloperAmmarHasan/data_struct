#include <iostream>
#include <limits.h>
#include <ostream>
using namespace std;

// write a function to print the largest three numbers in an array
void print3largest(int arr[], int size) {
  int first, second, third;
  first = second = third = INT_MIN;
  if (size <= 3) {
    cout << "invalid input " << endl;
    return;
  }
  for (int i = 0; i < size; i++) {
    if (arr[i] > first) {
      third = second;
      second = first;
      first = arr[i];
    } else if (arr[i] > second && arr[i] != first) {
      third = second;
      second = arr[i];

    } else if (arr[i] > third && arr[i] != second && arr[i] != first) {
      third = arr[i];
    }
  }
  cout << "The largest three elements are as follows : " << endl
       << first << "\t" << second << "\t" << third;
}
int main(int argc, char *argv[]) {
  int arr[] = {5, 3, 7, 8, 12, 34, 54, 56};
  int size = sizeof(arr) / sizeof(arr[0]);
  print3largest(arr, size);
  return 0;
}
