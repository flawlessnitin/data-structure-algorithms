#include <iostream>
using namespace std;

void printSecondLastDigit(int num) {
  int active = 0;
  while(num > 0) {
    int digit = num % 10;
    num /= 10;
    active++;
    if(active == 2) {
      cout << digit;
    }
  }
}

int main() {
  int num;
  cin >> num;

  printSecondLastDigit(num);
  return 0;
}
