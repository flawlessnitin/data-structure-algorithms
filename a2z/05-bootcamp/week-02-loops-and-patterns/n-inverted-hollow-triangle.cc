#include <iostream>
using namespace std;

int main() {
  int num;
  cin >> num;

  for(int row = 0; row < num; row++) {
    for(int columnOne = 0; columnOne < row; columnOne++) {
      cout << " ";
    } 
    int space = num - row - 1;
    for(int columnTwo = 0; columnTwo < num - row; columnTwo++) {
      if(columnTwo == 0 || columnTwo == num - row - 1 || row == 0) {
        cout << "*";
      } else {
        cout << " ";
      }
      if(space > 0) {
        cout << " ";
        space--;
      }
    }
    cout << endl;
  }
  return  0;
}
