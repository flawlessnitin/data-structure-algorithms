#include <iostream>
using namespace std;

int countZeros(long long num) {
  int count = 0;
  if(num == 0) {
    return 1;
  }
  while(num > 0) {
    int digit = num % 10;
    if(digit == 0) {
      count++;
    }
    num = num / 10;
  }
  return count;
}

int main() {
  long long num;
  cin >> num;

  cout << countZeros(num);

  return 0;
}
