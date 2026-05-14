#include <iostream>
using namespace std;

void findPrime(int num) {
  for(int i = 2; i <= num; i++) {
    bool isPrime = true;
    for(int j = 2; j < i; j++) {
      if(i % j == 0) {
        isPrime = false;
      }
    }
    if(isPrime) {
      cout << i << " ";
    }
  }
}
int main() {
  int num;
  cin >> num;
  findPrime(num);
  return 0;
}
