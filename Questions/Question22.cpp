#include <iostream>
using namespace std;
// wirte a function to find the duplicate in an array
int duplicateofarr(int arr[], int size) {
  int ans = 0;
  for (int i = 0; i < size; i++) {
    ans = ans ^ arr[i];
  }
  for (int i = 0; i < size; i++) {
    ans = ans ^ i;
  }
  return ans;
}
int main(int argc, char *argv[]) {
  int arr[] = {1, 2, 2, 3, 4};
  int size = sizeof(arr) / sizeof(arr[0]);
  int duplicate = duplicateofarr(arr, size);
  cout << "The duplicate of the array is :" << duplicate << endl;

  return 0;
}
