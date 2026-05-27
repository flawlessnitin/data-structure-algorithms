# Problem    : Contains Duplicate
# Link       : https://leetcode.com/problems/contains-duplicate/
# Difficulty : Easy

from typing import List

class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        """
        Solution 1: HashSet Approach (Optimal)
        Time Complexity: O(n) - single pass through array
        Space Complexity: O(n) - set to store unique elements
        """
        seen = set()
        for num in nums:
            if num in seen:
                return True  # Duplicate found
            seen.add(num)
        return False  # No duplicates
