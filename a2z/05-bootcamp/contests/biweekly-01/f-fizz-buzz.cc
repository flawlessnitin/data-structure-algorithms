#include <iostream>
using namespace std;

int main() {
  int num;
  cin >> num;
  for(int row = 1; row <= num; row++) {
    if(row % 3 == 0 && row % 5 != 0) {
      cout << "Fizz" << endl;
      continue;
    } else if(row % 5 == 0 && row % 3 != 0) {
      cout << "Buzz" << endl;
      continue;
    } else if( row % 3 == 0 && row % 5 == 0) {
      cout << "FizzBuzz" << endl;
      continue;
    } else {
      cout << row << endl;
    }
  }
  return 0;
}
