#include <iostream>
using namespace std;

int main() {
  int length;
  cin >> length;
  int arr[length];
  for(int m = 0; m < length; m++) {
    cin >> arr[m];
  }
  int reverseArr[length];
  int j = 0;
  for(int i = length - 1; i >= 0; i--) {
    reverseArr[j] = arr[i];
    j++;
  }

  for(int i = 0; i < length; i++) {
    cout << reverseArr[i] << " ";
  }
  return 0;
}
