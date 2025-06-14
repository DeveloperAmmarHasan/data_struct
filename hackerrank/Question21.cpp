#include <iostream>
using namespace std;

//write a function to find the unique element in the array 
int findunique(int arr[], int size){
  int ans = 0;
  for (int i = 0; i < size; i++) {
    ans  = ans ^ arr[i];
  }
  return ans;
}
int main () {
  int arr[] = {3,2,4,4,2,1,1};
  int size = sizeof(arr) / sizeof(arr[0]);
  int unique = findunique(arr,size);
  cout << "The unique element in the array is :" << unique << endl;

  return 0;
}
