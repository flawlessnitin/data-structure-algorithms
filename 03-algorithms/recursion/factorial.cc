#include <iostream>
using namespace std;

int factorialOfNNumber(int num) {
  if(num < 1) {
    return 1;
  }
  return num * factorialOfNNumber(num - 1);
}
int main() {
  int fact = factorialOfNNumber(5);
  cout << fact << endl;
  return 0;
}
