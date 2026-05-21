#include <iostream>
using namespace std;


int main() {
  char arr[] = {'a', 'e', 'i', 'o', 'u'};
  char a;
  cin >> a;
  bool isFound = false;
  for(int row = 0; row < 5; row++) {
    if(a == arr[row]) {
       isFound = true;
      break;
    }
  }
  if(isFound) {
    cout << "YES";
  } else {
    cout << "NO";
  }
}
