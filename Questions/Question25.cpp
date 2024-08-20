#include <iostream>
using namespace std;

// write a function to sort arrays and zeroess
void sortOne(int arr[], int size) {
  int left{0}, right{size - 1};
  while (left < right) {
    if (arr[left] == 0) {
      left++;
    }
    if (arr[right] == 1) {
      right--;
    }
    // swaping the arr[right ] withh arr[left]
    swap(arr[left], arr[right]);
    left++;
    right--;
  }
}
void printarr(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << "\t";
  }
  cout << endl;
}
int main() {
  int arr[] = {0, 1, 0, 1, 1, 0, 0, 1};
  int size = sizeof(arr) / sizeof(arr[0]);
  printarr(arr, size);
  sortOne(arr, size);
  printarr(arr, size);
}
