#include <iostream>
using namespace std;

int fibonacci(int num) {
  if(num <= 1) {
    return num;
  } 
  return fibonacci(num - 1) + fibonacci(num - 2);
}

int main() {
  int input;
  cin >> input;
  int value = fibonacci(2);
  cout << input << endl;
  cout << value << endl;
  // cout << "Hello world" << endl;
  return 0;
}

