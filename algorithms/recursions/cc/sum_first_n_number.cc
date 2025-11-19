#include <iostream>
using namespace std;


// void sumOfFirstNNumber(int num, int sum) {
//   if(num < 1) {
//     cout << sum << endl;
//     return;
//   }
//   sumOfFirstNNumber(num - 1, sum + num);
// }

int sumOfFirstNNumber(int num) {
  if(num == 0) {
    return 0;
  }
  return num + sumOfFirstNNumber(num - 1);
}
int main() {
  // sumOfFirstNNumber(5, 0);
  int sum = sumOfFirstNNumber(5);
  cout << sum << endl;
  return 0;
}
