#include "bits/stdc++.h"
using namespace std;
//write a funciton to perform linear search
int search(int arr[],int size,int key){
    for(int i = 0;i < size ;i++){
        if (arr[i] == key)
            return i;
    }
    return -1;
}
int main(){
    int arr[] = {5,6,8,7,1,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key;
    cout << "Enter the key to perform linear search "<< endl;
    cin >> key;
    int result = search(arr,size,key);
    (result == -1)
    ? cout << "The key is not present in the the array "
    : cout << "The key is present at index :" << result << endl;
    return 0;
}
