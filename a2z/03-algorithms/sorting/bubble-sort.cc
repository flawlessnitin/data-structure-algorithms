#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int n, vector<int> arr) {}
int main() {
  // take size of array
  int n;
  cin >> n;
  vector<int> arr(n);

  // input array
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  bubbleSort(n, arr);

  return 0;
}
