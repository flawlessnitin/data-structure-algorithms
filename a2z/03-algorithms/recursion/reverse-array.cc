#include <iostream>
#include <vector>
using namespace std;

vector<int> reverAnArray(int arr[], int start, int end) {
  if(start > end) {
    return vector<int>(arr, arr + end + 1);
  }
  int temp = arr[start];
  arr[start] = arr[end];
  arr[end] = temp;
  return reverAnArray(arr, start + 1, end - 1);
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  vector<int> result = reverAnArray(arr, 0, 4);
  for (int x : arr) {
    cout << x << " ";
}
  return 0;
}
