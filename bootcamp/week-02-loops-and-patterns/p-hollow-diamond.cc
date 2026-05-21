#include <iostream>
using namespace std;

void printUpperPattern(int num)
{
  for (int row = 0; row < num; row++)
  {
    for (int column = 0; column < num - row - 1; column++)
    {
      cout << " ";
    }
    for (int columnTwo = 0; columnTwo <= row; columnTwo++)
    {
      if(columnTwo == 0 || columnTwo == row) {
        cout << "*";
      } else {
        cout << " ";
      }
      if (columnTwo != row)
      {
        cout << " ";
      }
    }
    cout << endl;
  }
}

void printLowerPattern(int num)
{
  for (int row = 0; row < num; row++)
  {
    for (int column = 0; column <= row; column++)
    {
      cout << " ";
    }
    for (int columnTwo = 0; columnTwo < num - row - 1; columnTwo++)
    {
      if(columnTwo == 0 || columnTwo == num - row - 2) {
        cout << "*";
      } else {
        cout << " ";
      }
      if (columnTwo != num - row - 2)
      {
        cout << " ";
      }
    }
    cout << endl;
  }
}

int main()
{
  int num;
  cin >> num;
  printUpperPattern(num);
  printLowerPattern(num);
  return 0;
}
