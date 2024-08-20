#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// write a function to print the interersection of two arrays
vector<int> interersection(vector<int> arr1, vector<int> arr2) {
  sort(arr1.begin(), arr1.end());
  sort(arr2.begin(), arr2.end());
  int i = 0, j = 0;
  vector<int> ans;
  while (i < arr1.size() && j < arr2.size()) {
    if (arr1[i] == arr2[j]) {
      ans.push_back(arr1[i]);
      i++;
      j++;
    } else if (arr1[i] < arr2[j]) {
      i++;
    } else {
      j++;
    }
  }
  return ans;
}

int main(int argc, char *argv[]) {
  vector<int> arr1 = {2, 3, 5, 6, 4, 1};
  vector<int> arr2 = {5, 3, 6, 7, 2};
  vector<int> result = interersection(arr1, arr2);
  cout << "The intersection of the element is :" << endl;
  for (int num : result) {
    cout << num << "\t";
  }
  cout << endl;

  return 0;
}
