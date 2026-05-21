#include <iostream>
using  namespace std;

int main() {
  int num;
  cin >> num;

  for(int row = 0; row < num; row++) {
    for(int column = 0; column < num - row - 1; column++) {
      cout << " ";
    }
    for(int sColumn = 0; sColumn <= row * 2; sColumn++) {
      if(sColumn == 0 || sColumn == row * 2) {
        cout << "*";
      } else if(row == num - 1 && sColumn % 2 == 0) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }

  return 0;
}
