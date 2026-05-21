#include <iostream>
#include <string>
using namespace std;

int main()
{
  int T;
  cin >> T;

  while (T--)
  {
    string S;
    cin >> S;

    string compressed = "";
    int i = 0;

    while (i < S.length())
    {
      char currentChar = S[i];
      int count = 1;

      // Count consecutive occurrences of the same character
      while (i + count < S.length() && S[i + count] == currentChar)
      {
        count++;
      }

      // Add character to compressed string
      compressed += currentChar;

      // Add count only if greater than 1
      if (count > 1)
      {
        compressed += to_string(count);
      }

      // Move to the next different character
      i += count;
    }

    cout << compressed << endl;
  }

  return 0;
}
