#include <iostream>
using namespace std;
 
// hint: Break the pattern into sub patterns
 
int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 1; j <= n - i - 1; j++)
    {
      cout << " ";
    }
    for (int k = 0; k <= i; k++)
    {
      cout << "*";
      if (k != i)
        cout << " ";
    }
    cout << endl;
  }
 
  return 0;
}
