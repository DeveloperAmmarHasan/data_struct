#include <iostream>
#include <vector>
using namespace std;
// write a function to push all zeroes to the end
vector<int> pushtoend(vector<int> arr) {
  int count = 0;
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] != 0) {
      arr[count++] = arr[i];
    }
  }
  while (count < arr.size()) {
    arr[count++] = 0;
  }
  return arr;
}

int main(int argc, char *argv[]) {
  vector<int> arr = {3, 0, 2, 0, 5, 0, 6, 3};
  vector<int> result = pushtoend(arr);
  for (int zero : result) {
    cout << zero << "\t";
  }
  cout << endl;
  return 0;
}
