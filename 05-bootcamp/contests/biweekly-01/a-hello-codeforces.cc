#include <iostream>
using namespace std;

void printCodeForces(int num) {
  for(int row = 1; row <= num; row++) {
    cout << "Hello Codeforces " << row << endl;
  }
}
int main() {
  int num;
  cin >> num;
  printCodeForces(num);
}
