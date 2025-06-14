#include <iostream>
using namespace std;
// todo : write a function to perform binary search
void bubbble_sort(int arr[], int size) {
  for (int i = 0; i < size - 1; i++) {
    // for round to n - 1;
    for (int j = 0; j < size - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}
void display(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << "\t";
  }
  cout << endl;
}
int main() {
  int arr[] = {90, 34, 5, 56, 7, 21};
  int size = sizeof(arr) / sizeof(int);
  display(arr, size);
  bubbble_sort(arr, size);
  display(arr, size);
  return 0;
}