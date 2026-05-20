#include <iostream>
using namespace std;

void printFirstPattern(int num) {
  for(int row = 0; row < num; row++) {
    for(int column = 0; column <= row; column++) {
      cout << "*";
    } 
    for(int columnTwo = 1; columnTwo < (num * 2) - (row * 2) - 1; columnTwo++) {
      cout << " ";
    }
    for(int column = 0; column <= row; column++) {
      cout << "*";
    } 
    cout << endl;
  }
}
void printSecondPattern(int num) {
  for(int row = 0; row < num - 1; row++) {
    for(int column = 0; column < num - row - 1; column++) {
      cout << "*";
    }
    for(int space = 0; space < row + row + 2; space++) {
      cout << " ";
    } 
    for(int column = 0; column < num - row - 1; column++) {
      cout << "*";
    }
    cout << endl;
  }
}
int main() {
  int num;
  cin >> num;
  printFirstPattern(num);
  printSecondPattern(num);
  return 0;
}
