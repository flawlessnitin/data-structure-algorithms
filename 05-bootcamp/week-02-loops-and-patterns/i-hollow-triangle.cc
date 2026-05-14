#include <bits/stdc++.h>
using namespace std;

int main()
{
  int number = 5;
  for (int row = 0; row < number; row++)
  {
    for (int space = 0; space < number - row - 1; space++)
    {
      cout << " ";
    }
    for (int star = 0; star <= row; star++)
    {
      if (row == number - 1)
      {
        cout << "*";
      }
      else if (star == 0 || star == row)
      {
        cout << "*";
      }
      else {
        cout << " ";
      }
      if (star != row)
      {
        cout << " ";
      }
    }
    cout << endl;
  }
  return 0;
}
