#include <iostream>
using namespace std;

void checkLeapYear(int num) {
  if (num % 100 == 0 && num % 400 == 0) {
    cout << "Yes";
  } else if(num % 100 != 0 && num % 4 == 0) {
    cout << "Yes";
  } else {
    cout << "No";
  }
}

int main() {
  int num;
  cin >> num;
  checkLeapYear(num);
  return 0;
}
