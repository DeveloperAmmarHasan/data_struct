#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;
//write a program to find the first and the last occurance of an array 
int firstocc(vector<int> arr, int size, int key) {
  int start = 0;
  int end = size , ans = -1;
  int mid = start + (end - start) / 2;
  while (start <= end) {
    if (key == arr[mid]) {
      ans = mid;
      end = mid - 1;
    }
    if (key > arr[mid]) {
      start = mid + 1;
    } else if (key < arr[mid]) {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  return ans;
}
int lastocc(vector<int> arr, int size, int key) {
  int start = 0;
  int end = size , ans = -1;
  int mid = start + (end - start) / 2;
  while (start <= end) {
    if (key == arr[mid]) {
      ans = mid;
      start = mid + 1;
    }
    if (key > arr[mid]) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  return ans;
}
pair<int, int> firstandlast(vector<int> arr, int size, int key) {
  return {firstocc(arr, size, key), lastocc(arr, size, key)};
}
int main() {
  vector<int> arr;
  int temp, key, n;
  cout << "enter the value of key " << endl;
  cin >> key;
  cout << "Enter the size of the array " << endl;
  cin >> n;
  cout << "Enter the values of array " << endl;
  for (int i = 0; i < n; i++) {
    cin >> temp;
    arr.push_back(temp);
  }
  arr.shrink_to_fit();
  sort(arr.begin(), arr.end());
  int size = arr.size();
  pair<int, int> result = firstandlast(arr, size, key);
  cout << "The number at first index is : " << result.first
       << " and at last index is " << result.second << endl;
  return 0;
}