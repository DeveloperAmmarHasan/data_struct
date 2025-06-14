#include <iostream>
using namespace std;

// write a function to swap alternate numbers in an array
void swapalternate(int arr[], int size)
{
  for (int i = 0; i < size; i += 2)
  {
    if (i <= size)
    {
      swap(arr[i], arr[i + 2]);
    }
  }
}

void printarray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << "\t";
  }
  cout << endl;
}

int main(int argc, char *argv[])
{
  int arr[] = {4, 5, 3, 2, 6, 2, 3, 6};
  int size = sizeof(arr) / sizeof(arr[0]);
  printarray(arr, size);
  swapalternate(arr, size);
  printarray(arr, size);
  return 0;
}
