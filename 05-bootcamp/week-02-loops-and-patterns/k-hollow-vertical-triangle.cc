#include <iostream>
using namespace std;

void upperPattern(int num) {
  for(int row = 0; row < num; row++) {
    for(int column = 0; column <= row; column++) {
      if(column == 0 || column == row) {
        cout << "*";
      } else {
        cout << " ";
      }
      if(row != column) {
        cout << " ";
      }
    }
    cout << endl;
  }
}

void lowerPattern(int num) {
  for(int row = 0; row < num; row++) {
    for(int column = 0; column < ((num - row - 1) * 2) - 1; column++) {
     if(column == 0 || column ==  ((num - row - 1) * 2) - 2) {
      cout << "*";
     } else {
      cout << " ";
     }
    }
    cout << endl;
  }
}
int main() {
  int num;
  cin >> num;
upperPattern(num);
lowerPattern(num);
  return 0;
}
