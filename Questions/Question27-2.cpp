#include <iostream>
using namespace std;

// write a function to print the second largest number
int secondlargest(int arr[], int size) {
  int first = 0, second = -1;
  for (int i = 0; i < size; i++) {
    if (arr[i] > arr[first]) {
      second = first;
      first = i;
    } else if (arr[i] < arr[first]) {
      if (second == -1 || arr[second] < arr[i]) {
        second = i;
      }
    }
  }
  return second;
}

int main(int argc, char *argv[]) {
  int arr[] = {34, 65, 78, 97, 12, 110, 100};
  int size = sizeof(arr) / sizeof(arr[0]);
  int index = secondlargest(arr, size);
  if (index == -1) {
    cout << "The second largest element is not found in element " << endl;

  } else {
    cout << "The second largest element is the :" << endl << arr[index] << endl;
  }
  return 0;
}
