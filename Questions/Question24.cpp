#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// write a function to find the pair sum in an array
vector<vector<int>> pairsum(vector<int> arr, int s) {
  sort(arr.begin(), arr.end());
  vector<vector<int>> ans;
  for (int i = 0; i < arr.size(); i++) {
    for (int j = i + 1; j < arr.size(); j++) {
      if ((arr[i] + arr[j]) == s) {
        vector<int> temp;
        temp.push_back(min(arr[i], arr[j]));
        temp.push_back(max(arr[i], arr[j]));
        ans.push_back(temp);
      }
    }
  }
  sort(ans.begin(), ans.end());
  return ans;
}

int main(int argc, char *argv[]) {
  vector<int> arr = {2, -3, 3, 3, -2};
  int s = 0;
  vector<vector<int>> result = pairsum(arr, s);
  cout << "The pair sum of the given array is : " << endl;
  for (auto &pair : result) {
    cout << pair[0] << " " << pair[1] << endl;
    ;
  }
  return 0;
}
