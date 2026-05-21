#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    // Separate non-zero elements and count zeros
    vector<int> nonZero;
    int zeroCount = 0;

    for (int i = 0; i < n; i++)
    {
      if (arr[i] != 0)
      {
        nonZero.push_back(arr[i]);
      }
      else
      {
        zeroCount++;
      }
    }

    // Print non-zero elements first
    for (int i = 0; i < nonZero.size(); i++)
    {
      cout << nonZero[i];
      if (i < nonZero.size() - 1 || zeroCount > 0)
      {
        cout << " ";
      }
    }

    // Print zeros at the end
    for (int i = 0; i < zeroCount; i++)
    {
      cout << 0;
      if (i < zeroCount - 1)
      {
        cout << " ";
      }
    }

    cout << endl;
  }

  return 0;
}
