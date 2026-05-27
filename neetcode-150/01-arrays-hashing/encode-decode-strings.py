# Problem    : Encode and Decode Strings
# Link       : https://neetcode.io/problems/string-encode-and-decode
# Difficulty : Medium


# import List
from typing import List


"""
        Encodes a list of strings to a single string.
        Time Complexity: O(n) - where n is the total length of all strings
        Space Complexity: O(n) - for the encoded string
"""
"""
        Decodes a single string to a list of strings.
        Time Complexity: O(n) - where n is the length of the encoded string
        Space Complexity: O(n) - for the list of decoded strings
        """
class Solution:
    def encode(self, strs: List[str]) -> str:
        encoded_str = ""
        for s in strs:
            encoded_str += str(len(s)) + "#" + s
        return encoded_str
    
    def decode(self, s: str) -> List[str]:
        decoded_strs = []
        i = 0
        while i < len(s):
            # Find the position of the next '#'
            j = s.find('#', i)
            # Extract the length of the string
            length = int(s[i:j])
            # Extract the string using the length
            decoded_strs.append(s[j+1:j+1+length])
            # Move to the next encoded string
            i = j + 1 + length
        return decoded_strs
