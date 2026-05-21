#include <iostream>
#include <string>
using namespace std;

int main()
{
  string N;
  cin >> N;

  long long sum = 0;
  for (int i = 0; i < N.length(); i++)
  {
    sum += (N[i] - '0');
  }

  cout << sum << endl;

  return 0;
}
