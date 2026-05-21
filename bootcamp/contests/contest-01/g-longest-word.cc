#include <iostream>
#include <string>
using namespace std;

int main()
{
  string S;
  getline(cin, S);

  int maxLength = 0;
  int currentLength = 0;

  for (int i = 0; i < S.length(); i++)
  {
    if (S[i] != ' ')
    {
      currentLength++;
    }
    else
    {
      maxLength = max(maxLength, currentLength);
      currentLength = 0;
    }
  }

  // Don't forget the last word
  maxLength = max(maxLength, currentLength);

  cout << maxLength << endl;

  return 0;
}
