#include <iostream>
#include <string>
using namespace std;

// bool checkPalindrome(string line, int start, int end) {
  
// }

int main() {
  string name="nitsin";
  int start = 0;
  int end = name.length() - 1;
  bool IsPalindrome = false;
  for(int i = 0; i < name.length(); i++) {
    start = start + i;
    end = end - i;
    if(start > name.length()/2) {
      break;
    }
    if(end < 0) {
      break;
    }
    if(name[start] != name[end]) {
      IsPalindrome = false;
      break;
    }
    if(name[start] == name[end]) {
      IsPalindrome = true;
    }
  }
  cout << IsPalindrome << endl;
  return 0;
}
