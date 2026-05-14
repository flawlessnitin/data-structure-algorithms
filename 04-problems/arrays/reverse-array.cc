#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseArray(vector<int> arr)
{
  int vectorSize = arr.size();
  int i = 0;
  int j = vectorSize - 1;
  while (i <= j)
  {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;
    j--;
  }
  return arr;
}
int main()
{
  // initialize a vector and take a input for it's size and it's elements
  int number;
  cin >> number;
  vector<int> arr(number);
  for (int i = 0; i < number; i++)  {
    cin >> arr[i];
  }
  // call the reverse array function with the vector as an argument and store the result in a new vector
  vector<int> reversedArr = reverseArray(arr);
  // print the elements of the reversed vector
  for (int i = 0; i < number; i++) {
    cout << reversedArr[i] << " ";
  }

  return 0;
}
