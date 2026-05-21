#include <iostream>
using namespace std;

int findHCF(int num1, int num2) {
  int min;
  int max;
  if(num1 > num2) {
    max = num1;
    min = num2;
  } else {
    max = num2;
    min = num1;
  }
  int hcf = 0;
  for(int i = 1; i <= min; i++) {
    if(min % i == 0 && max % i == 0) {
      if(hcf < i) {
        hcf = i;
      }
    }
  }
  return hcf;
}

int main() {
  int num1, num2;
  cin >> num1 >> num2;

  cout << findHCF(num1, num2);
  return 0;
}
