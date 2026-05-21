#include <iostream>
using namespace std;

int main() {
  int num;
  cin >> num;
  for(int row = 0; row < num; row++) {
    for(int space = 0; space < row; space++) {
      cout << " ";
    }
    for(int column = 0; column <= row; column++) {
      cout << "x";
    } cout << endl;
  }
  return 0;
}
