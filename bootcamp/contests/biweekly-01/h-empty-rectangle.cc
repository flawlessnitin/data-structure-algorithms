#include <iostream>
using namespace std;


int main() {
  int rowCount, columnCount;
  cin >> rowCount >> columnCount;

  for(int row = 0; row < rowCount; row++) {
    for(int column = 0; column < columnCount; column++) {
      if(row == 0 || column == 0 || column == columnCount - 1 || row == rowCount - 1) {
        cout << "^";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
}
