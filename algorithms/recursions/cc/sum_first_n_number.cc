#include <iostream>
using namespace std;


void sumOfFirstNNumber(int num, int sum) {
  if(num < 1) {
    cout << sum << endl;
    return;
  }
  sumOfFirstNNumber(num - 1, sum + num);
}
int main() {
  sumOfFirstNNumber(5, 0);
  return 0;
}
