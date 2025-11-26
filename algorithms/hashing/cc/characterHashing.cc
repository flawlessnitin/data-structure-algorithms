#include <bits/stdc++.h>
using namespace std;

int main() {
  // 1. Take input string
  string s;
  cout << "Enter string (lowercase a-z): ";
  cin >> s;

  // 2. Create hash aray of size 26, initialized to 0
  int hash[26] = {0};
  // For all character -> int hash[256];
  // 3. Precompute frequency of each character
  for(int i = 0; i < s.size(); i++) {
    char ch = s[i]; // current character
    int index = ch - 'a'; // map 'a' -> 0, 'b' -> 1, .... 'z' -> 25
    // for all 256 characters -> int index = (int)ch;
    hash[index]++; // increase its count
  }

  // 4. Answer queries
  int q;
  cout << "How many queries? ";
  cin >> q;
  while(q--) {
    char c;
    cout << "Enter character to query: ";
    cin >> c;

    int index = c - 'a';
    // for all 256 characters -> int index = (int)c;
    cout << "count of " << c << " = " << hash[index] << endl; // hash[c] 
  }
  return 0;
}
