#include <iostream>
using namespace std;

int fibonacci(int num) {
  if(num <= 1) {
    return num;
  }
  return fibonacci(num - 1) + fibonacci(num - 2);
}

int main() {
  int value = fibonacci(2);
  cout << value << endl;
  return 0;
}
