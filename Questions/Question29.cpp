#include <iostream>
using namespace std;

void pushToEnd(int arr[], int size) {
  int count = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] != 0) {
      arr[count++] = arr[i];
    }
  }
  for (int i = count; i < size; i++) {
    arr[i] = 0;
  }
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int arr[] = {3, 0, 7, 5, 0, 6, 9, 0, 6, 4, 0};
  int size = sizeof(arr) / sizeof(arr[0]);
  pushToEnd(arr, size);
  return 0;
}