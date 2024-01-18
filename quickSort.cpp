// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
  int pivot = arr[low];
  int i = low;
  int j = high;
  while (i < j) {
    while (arr[i] <= pivot && i <= high - 1) {
      i++;
    }
    while (arr[j] > pivot && j >= low + 1) {
      j--;
    }
    if (i < j) {
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[low],arr[j]);
  return j;
 
}

void qS(vector<int> &arr, int low, int high) {
  if (low < high) {
    int pI = partition(arr, low, high);
    qS(arr, low, pI-1);
    qS(arr, pI + 1, high);
  }
}

int main() {
    vector<int> arr{9,8,6,2,1,2};
    qS(arr,0,5);
    for(int i=0;i<6;i++){
        cout<<arr[i];
    }

    return 0;
}
