#include <iostream>
using namespace std;

void printFirstPattern(int num){
  for(int row = 0; row < num; row++) {
    for(int column = 0; column < num - row; column++) {
      cout << "*";
    }
    for(int space = 0; space <= row; space++) {
      cout << " ";
      if(space != row) {
        cout << " ";
      }
    }
    for(int column = 0; column < num - row; column++) {
      cout << "*";
    }
    cout << endl;
  }
};
void printSecondPattern(int num){
  for(int row = 0; row < num - 1; row++) {
    for(int column = 0; column <= row + 1; column++) {
      cout << "*";
    }
    for(int space = 0; space < (num *2) - (row + 1) * 2 - 1; space++) {
      cout << " ";

    }
    for(int column = 0; column <= row + 1; column++) {
      cout << "*";
    }
    cout << endl;
  }
};
int main() {
  int num;
  cin >> num;
  printFirstPattern(num);
  printSecondPattern(num);
  return 0;
}
