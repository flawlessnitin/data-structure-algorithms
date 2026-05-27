# Problem    : Valid Anagram
# Link       : https://leetcode.com/problems/valid-anagram/
# Difficulty : Easy


class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        count = {}
        for i in range(len(s)):
            if s[i] in count:
                count[s[i]] += 1
            else:
                count[s[i]] = 1
        print(count)
        for i in range(len(t)):
            if t[i] in count:
                count[t[i]] -= 1
            else:
                return False
        print(count)
        for key in count:
            if count[key] != 0:
                return False
        return True

# call the isAnagram
s = "anagram"
t = "nagaram"
solution = Solution()
print(solution.isAnagram(s, t))
