#include <iostream>
using namespace std;
// add function here
void selection_sort(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    int minIndex = i;
    for (int j = i + 1; j < size; j++) {
      if (arr[minIndex] > arr[j]) {
        minIndex = j;
      }
    }
    swap(arr[minIndex], arr[i]);
  }
}
void display(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << "\t";
  }
  cout << endl;
}
int main() {
  int arr[] = {7, 1, 4, 3, 9};
  int size = sizeof(arr) / sizeof(int);
  display(arr, size);
  selection_sort(arr, size);
  display(arr, size);
  return 0;
}