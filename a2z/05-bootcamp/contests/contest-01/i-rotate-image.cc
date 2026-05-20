#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<vector<int>> matrix(n, vector<int>(n));

  // Read the matrix
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> matrix[i][j];
    }
  }

  // Print the rotated matrix
  // For 90 degree clockwise rotation:
  // rotated[i][j] = original[n-1-j][i]
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << matrix[n - 1 - j][i] << " ";
    }
    cout << endl;
  }

  return 0;
}
