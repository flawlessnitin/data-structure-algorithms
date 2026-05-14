#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  long long diagonalSum = 0;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      int element;
      cin >> element;

      // Add to sum if it's on the main diagonal
      if (i == j)
      {
        diagonalSum += element;
      }
    }
  }

  cout << diagonalSum << endl;

  return 0;
}
