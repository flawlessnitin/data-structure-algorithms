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

    int D;
    cin >> D;

    // Handle edge case where D could be larger than n
    if (n > 0)
    {
      D = D % n;
    }

    // Print elements from index D to n-1
    for (int i = D; i < n; i++)
    {
      cout << arr[i] << " ";
    }

    // Print elements from index 0 to D-1
    for (int i = 0; i < D; i++)
    {
      cout << arr[i] << " ";
    }

    cout << endl;
  }

  return 0;
}
