#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
// write a function for performing the intersection of an array
vector<int> intersection(vector<int> arr1, vector<int> arr2) {
  sort(arr1.begin(), arr1.end());
  sort(arr2.begin(), arr2.end());
  vector<int> ans;
  for (int i = 0; i < arr1.size(); i++) {
    int element = arr1[i];
    for (int j = 0; j < arr2.size(); j++) {
      if (element < arr2[j]) {
        break;
      }
      if (arr2[j] == element) {
        ans.push_back(element);
        arr2[j] = -21479085;
      }
    }
  }
  return ans;
}
int main(int argc, char *argv[]) {
  vector<int> arr1 = {2, 3, 2, 5, 6, 5};
  vector<int> arr2 = {6, 3, 5, 4};
  vector<int> result = intersection(arr1, arr2);
  cout << "The intersecion of the array is : " << endl;
  for (int num : result) {
    cout << num << "\t";
  }
  cout << endl;
  return 0;
}
