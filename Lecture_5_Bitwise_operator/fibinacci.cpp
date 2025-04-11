#include <iostream>
using namespace std;

int main() {
  int number = 10;
  int a = 0;
  int b = 1;
  cout << a << " " << b << " ";
  for (int i = 0; i < 10; i++) {
    int nextFibNumber = a + b;
    a = b;
    b = nextFibNumber;
    cout << nextFibNumber << " ";
  }
  return 0;
} 
