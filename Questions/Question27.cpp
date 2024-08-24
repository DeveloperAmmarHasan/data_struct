#include <iostream>
#include <limits.h>
using namespace std;

// write a function to print the second largest element in the array
void secondlargest(int arr[], int size) {
  int largest, secondlargest;
  largest = secondlargest = INT_MIN;
  for (int i = 0; i < size; i++) {
    if (arr[i] > largest) {
      secondlargest = largest;
      largest = arr[i];
    } else if (arr[i] > secondlargest && arr[i] != largest) {
      secondlargest = arr[i];
    }
  }
  cout << "The second largest element in the array is : " << endl
       << secondlargest;
}

int main(int argc, char *argv[]) {
  int arr[] = {5, 3, 6, 2, 7, 65, 34, 23, 76, 9, 0};
  int size = sizeof(arr) / sizeof(arr[0]);
  secondlargest(arr, size);
  return 0;
}
