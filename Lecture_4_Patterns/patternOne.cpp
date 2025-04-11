#include <iostream>
using namespace std;

void patternOne(int number) {
  /*
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
  */
  int rowOne = 1;
  while (rowOne <= number) {
    int rowTwo = 1;
    while (rowTwo <= number) {
      cout << rowTwo << " ";
      rowTwo++;
    }
    cout << endl;
    rowOne++;
  }
}

void patternTwo(int number) {
  /*
  5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1'
*/
  int rowOne = 1;
  while (rowOne <= number) {
    int rowTwo = number;
    while (rowTwo >= 1) {
      cout << rowTwo << " ";
      rowTwo--;
    }
    cout << endl;
    rowOne++;
  }
}

void patternThree(int number) {
  /*
  1 2 3
4 5 6
7 8 9
  */
  int count = 1;
  int row = 1;
  while (number >= row) {
    int col = 1;
    while (col <= number) {
      cout << count << " ";
      count++;
      col++;
    }
    cout << endl;
    row++;
  }
}

void patternFour(int number) {
  int row = 1;
  while (row <= number) {
    int col = 1;
    while (col <= row) {
      cout << "* ";
      col++;
    }
    cout << endl;
    row++;
  }
}

void patternFive(int number) {
  int row = 1;
  while (row <= number) {
    int col = 1;
    while (col <= row) {
      cout << row << " ";
      col++;
    }
    cout << endl;
    row++;
  }
}

void patternSix(int number) {
  int row = 1;
  int count = 1;
  while (row <= number) {
    int col = 1;
    while (col <= row) {
      cout << count << " ";
      count++;
      col++;
    }
    cout << endl;
    row++;
  }
}

void patternSeven(int number) {
  int row = 1;
  while (row <= number) {
    int col = 1;
    while (col <= row) {
      cout << row + col - 1 << " ";
      col++;
    }
    cout << endl;
    row++;
  }
}

void patternEight(int number) {
  int row = 1;
  while (row <= number) {
    int col = row;
    while (col >= 1) {
      cout << col << " ";
      col--;
    }
    cout << endl;
    row++;
  }
}

void patternNine(int number) {
  int row = 1;
  while (row <= number) {
    char character = 'A' + row - 1;
    int col = 1;
    while (col <= number) {
      cout << character << " ";
      col++;
    }
    cout << endl;
    row++;
  }
}

int main() {
  int number;
  cout << "Enter the number of rows: ";
  cin >> number;
  // patternOne(number);
  // patternTwo(number);
  // patternThree(number);
  // patternFour(number);
  // patternFive(number);
  // patternSix(number);
  // patternSeven(number);
  patternNine(number);
  return 0;
}
