#include <iostream>
using namespace std;


int main() {
  int n;
  cin >> n;
  while(n > 0) {
    int j = n;
    while(j > 0) {
      cout << "*";
      j--;
    }
    cout << endl;
    n--;
  }
  return 0;
}
