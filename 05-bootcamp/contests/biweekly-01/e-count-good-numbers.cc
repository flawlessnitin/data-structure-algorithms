#include <iostream>
using namespace std;

void checkGoodNumbers(int num, int arr[]) {
  int count = 0;
  for(int row = 0; row < num; row++) {
    if(arr[row] != 0 && 18 % arr[row] == 0) {
      count++;
    } else if(arr[row] % 45 == 0) {
      count++;
    }
  }
  cout << count;
}

int main() {
  int num;
  cin >> num;
  int arr[num] = {0};
  for(int row = 0; row < num; row++) {
    cin >> arr[row];
  }


  checkGoodNumbers(num, arr);
  return 0;
}
