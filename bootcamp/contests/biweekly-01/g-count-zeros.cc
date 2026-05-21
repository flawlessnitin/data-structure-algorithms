#include <iostream>
using namespace std;

int main()
{
  long long num;
  cin >> num;
  long long temp = num;
  long long countZeros = 0;
  
  while (num > 0)
  {
    int digit = num % 10;
    if (digit == 0)
    {
      countZeros++;
    }
    num /= 10;
  }
  if (temp == 0)
  {
    cout << 1;
  } else {
    cout << countZeros;
  }
  return 0;
}
