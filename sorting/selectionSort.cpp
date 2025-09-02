#include <bits/stdc++.h>
using namespace std;

int selectionSort(int arr[]) {
  int length = sizeof(arr) / sizeof(arr[0]);
  for(int i = 0; i < length - 2; i++) {
    int minimumNumberIndex = i;
    for(int j = i+1; j < length - 1; j++) {
      if(arr[j] < arr[minimumNumberIndex]) {
        minimumNumberIndex = j;
      }
    }
  }
}

int main()
{  // Selection Sort
  int arr[5] = {33, 34, 90, 22, 12};
  selectionSort(n, arr);
  return 0;
}
