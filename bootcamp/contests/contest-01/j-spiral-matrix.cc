#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int m, n;
  cin >> m >> n;

  vector<vector<int>> matrix(m, vector<int>(n));

  // Read the matrix
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> matrix[i][j];
    }
  }

  vector<int> result;
  int top = 0, bottom = m - 1, left = 0, right = n - 1;

  while (top <= bottom && left <= right)
  {
    // Move right along the top row
    for (int i = left; i <= right; i++)
    {
      result.push_back(matrix[top][i]);
    }
    top++;

    // Move down along the right column
    for (int i = top; i <= bottom; i++)
    {
      result.push_back(matrix[i][right]);
    }
    right--;

    // Move left along the bottom row (if there's still a row)
    if (top <= bottom)
    {
      for (int i = right; i >= left; i--)
      {
        result.push_back(matrix[bottom][i]);
      }
      bottom--;
    }

    // Move up along the left column (if there's still a column)
    if (left <= right)
    {
      for (int i = bottom; i >= top; i--)
      {
        result.push_back(matrix[i][left]);
      }
      left++;
    }
  }

  // Print the result
  for (int i = 0; i < result.size(); i++)
  {
    cout << result[i];
    if (i < result.size() - 1)
    {
      cout << " ";
    }
  }
  cout << endl;

  return 0;
}
