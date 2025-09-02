#include <bits/stdc++.h>
using namespace std;

int binarySearch(int number, int size, int arr[])
{
  int start = 0;
  int end = size - 1;
  int mid = start + (end - start) / 2;
  while (start <= end)
  {
    if (arr[mid] == number)
    {
      return mid;
    }
    if (number > arr[mid])
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
    mid = start + (end - start) / 2; 
  }
  return -1; // Not found
}

int main()
{
  int even[6] = {1, 2, 3, 4, 5, 6};
  int odd[5] = {12, 23, 45, 78, 98};
  cout << "Index of 5 in even array: " << binarySearch(5, 6, even) << endl;
  cout << "Index of 23 in odd array: " << binarySearch(23, 5, odd) << endl;
  return 0;
}
