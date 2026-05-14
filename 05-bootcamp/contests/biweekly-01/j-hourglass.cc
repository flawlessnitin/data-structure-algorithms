#include <iostream>
using namespace std;

void printUpperPattern(int num) {
  for(int row = 0; row < num; row++) {
    for(int space = 0; space < row; space++) {
      cout << " ";
    }
    for(int column = 0; column < num - row; column++) {
      cout << ".";
      if(column != num - row - 1) {
        cout << " ";
      }
    }
     cout << endl;
  }
}

void printLowerPattern(int num) {
  for(int row = 0; row < num - 1; row++) {
    for(int space = 0; space < num - row - 2; space++) {
      cout << " ";
    } 
    for(int column = 0; column < row + 2; column++) {
      cout << ".";
      if(column != row + 1) {
        cout << " ";
      }
    }
    cout << endl;
  }
}
int main() {
  int num;
  cin >> num;
  printUpperPattern(num);
  printLowerPattern(num);
  return 0;
}
