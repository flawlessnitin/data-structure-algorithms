#include <bits/stdc++.h>
using namespace std;

int min(int numberOne, int numberTwo)
{
  if (numberOne > numberTwo)
  {
    return numberTwo;
  }
  return numberOne;
}

// Brute Force approach
/*
1. MaxFrequenccy
2. answer = MAX_INT
3. for(auto i: arr) {
  count = 0;
  for(auto j: arr) {
    if(arr[i] == arr[j]) {
    count++;
    }
  }
  if(maxfrequency < count) {
  maxfrequency = count;
  answer = arr[i];
  }
  if(count == maxfrequency) {
    answer = min(answer, nums[i])
  }

}

*/

int bruteForceSolution(int arr[], int size)
{
  int maxFrequency = 0;
  int answer = INT_MAX;
  for (int i = 0; i < size; i++)
  {
    int count = 0;
    for (int j = 0; j < size; j++)
    {
      if (arr[i] == arr[j])
      {
        count++;
      }
    }
    if (maxFrequency < count)
    {
      maxFrequency = count;
      answer = arr[i];
    }
    if (maxFrequency == count)
    {
      answer = min(answer, arr[i]);
    }
  }
  return answer;
}


// Better Approach

int betterApproach(vector<int>& nums) {
  int n = nums.size();
  // step 1: Sort the array
  sort(nums.begin(), nums.end());
  // Step 2: Initialize tracking variables
  int maxFreq = 1;
  int currentFreq = 1;
  int answer = nums[0];
}

int main()
{

  return 0;
}
