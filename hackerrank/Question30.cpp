#include <iostream>
#include <vector>
using namespace std;
// write a function to find the duplicates in an array
vector<int> findduplicates(vector<int> arr) {
  vector<int> temp;
  for (int i = 0; i < arr.size(); i++) {
    int ans = arr[i];
    for (int j = i + 1; j < arr.size(); j++) {
      if (ans == arr[j]) {
        temp.push_back(ans);
      } else {
        continue;
      }
    }
  }
  return temp;
}
int main() {
  vector<int> arr = {3, 4, 5, 6, 3, 4, 5, 6, 8};
  vector<int> result = findduplicates(arr);
  for (int num : result) {
    cout << num << "\t";
  }
  cout << endl;
  return 0;
}