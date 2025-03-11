class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        new= ""
        for char in s:
            if char.isalnum():
                new += char.upper()

        return new == new[::-1]
        