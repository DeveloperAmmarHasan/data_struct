#include <iostream>
using namespace std;
// write a code perform the kadanes algorithm
int kadanesAlgo(int arr[], int n) {
  int curr_sum = 0;
  int max_sum = INT_MIN;
  for (int i = 0; i < n; i++) {
    curr_sum += arr[i];
    max_sum = max(curr_sum, max_sum);
    if (curr_sum < 0) {
      curr_sum = 0;
    }
  }
  return max_sum;
}
int main() {
  int n;
  int arr[] = {3, -4, 5, 4, -1, -8};
  n = sizeof(arr) / sizeof(int);
  int max_sum = kadanesAlgo(arr, n);
  cout << "The maximum Subarray Sum of the given array is : " << max_sum
       << endl;
  return 0;
}
