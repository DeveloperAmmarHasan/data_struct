#include <iostream>
using namespace std;

// code for binary search
int binaryseach(int arr[], int size, int key) {
  int start = 0;
  int end = size - 1;
  int mid = start + (end - start) / 2;
  while (start <= end) {
    if (arr[mid] == key) {
      return mid;
    }
    if (key > arr[mid]) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
    mid = (start + end) / 2;
  }
  return -1;
}
int main() {
  int even[6] = {2, 5, 6, 7, 8, 10};
  int odd[5] = {3, 6, 7, 9, 11};
  int indexe = binaryseach(even, 6, 8);
  int indexo = binaryseach(odd, 5, 9);
  cout << "the index of given number in the even[] is : " << indexe << endl;
  cout << "the index of given number in the odd[] is : " << indexo << endl;
  return 0;
}