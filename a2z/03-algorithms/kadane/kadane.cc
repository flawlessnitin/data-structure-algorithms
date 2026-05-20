#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

// Kadane problem implementations (multiple approaches)
// Problem: Given an array of integers (can be negative), find the maximum
// possible sum of a contiguous subarray.
//
// This file contains three approaches:
// 1) Brute force O(n^3) — try every subarray and compute its sum.
// 2) Better O(n^2) — for every start index, accumulate sums for end indices.
// 3) Optimal O(n) — Kadane's algorithm (dynamic programming / greedy).
//
// Each function returns the maximum contiguous subarray sum. All functions
// correctly handle arrays containing all-negative values.

// Approach 1: Brute force — O(n^3)
// Explanation (in comments):
// - Enumerate all possible subarrays with two indices (i, j) representing
//   the inclusive start and end.
// - For each (i, j) pair, compute the sum of the elements from i to j
//   using an inner loop (k from i to j). This leads to three nested loops.
// - Time complexity: O(n^3). Space complexity: O(1).
// - Correct but extremely slow for large arrays; useful as a baseline.
long long maxSubarrayBrute(const vector<int> &arr)
{
  int n = static_cast<int>(arr.size());
  long long max_sum = LLONG_MIN; // handle all-negative arrays

  for (int i = 0; i < n; ++i)
  {
    for (int j = i; j < n; ++j)
    {
      long long sum = 0;
      // compute sum of subarray arr[i..j]
      for (int k = i; k <= j; ++k)
      {
        sum += arr[k];
      }
      if (sum > max_sum)
        max_sum = sum;
    }
  }
  return max_sum;
}

// Approach 2: Better — O(n^2)
// Explanation:
// - For each starting index i, keep a running sum as you extend the end index j
//   from i to n-1. That means you avoid the innermost loop of the brute-force
//   approach because the sum for arr[i..j+1] can be computed by adding arr[j+1]
//   to the previously computed sum for arr[i..j].
// - Time complexity: O(n^2). Space complexity: O(1).
long long maxSubarrayBetter(const vector<int> &arr)
{
  int n = static_cast<int>(arr.size());
  long long max_sum = LLONG_MIN;

  for (int i = 0; i < n; ++i)
  {
    long long sum = 0; // running sum for subarrays starting at i
    for (int j = i; j < n; ++j)
    {
      sum += arr[j];
      if (sum > max_sum)
        max_sum = sum;
    }
  }
  return max_sum;
}

// Approach 3: Optimal — Kadane's algorithm — O(n)
// Brief explanation of Kadane's algorithm (also in-line below):
// - Idea: as you scan the array left-to-right, maintain two values:
//   `max_ending_here` = maximum sum of a subarray that ends at the current index;
//   `max_so_far` = maximum sum seen across all positions so far.
// - Update rule at element x:
//   max_ending_here = max(x, max_ending_here + x)
//   max_so_far = max(max_so_far, max_ending_here)
// - Intuition: either it's better to extend the previous subarray, or start
//   fresh at the current element. This greedy/local decision produces the
//   globally optimal contiguous subarray sum.
// - Time complexity: O(n). Space: O(1).
long long maxSubarrayKadane(const vector<int> &arr)
{
  int n = static_cast<int>(arr.size());
  if (n == 0)
    return 0; // empty array: define as 0 (could also be undefined)

  long long max_ending_here = arr[0];
  long long max_so_far = arr[0];

  for (int i = 1; i < n; ++i)
  {
    // either extend the previous subarray or start a new one at arr[i]
    max_ending_here = max<long long>(arr[i], max_ending_here + arr[i]);
    max_so_far = max(max_so_far, max_ending_here);
  }
  return max_so_far;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int number;
  if (!(cin >> number))
  {
    cerr << "Error: expected array size as first input value\n";
    return 1;
  }

  vector<int> arr(number);
  for (int i = 0; i < number; ++i)
  {
    cin >> arr[i];
  }

  // Print results from all three implementations so the user can compare.
  cout << "Brute O(n^3): " << maxSubarrayBrute(arr) << '\n';
  cout << "Better O(n^2): " << maxSubarrayBetter(arr) << '\n';
  cout << "Kadane O(n): " << maxSubarrayKadane(arr) << '\n';

  return 0;
}
