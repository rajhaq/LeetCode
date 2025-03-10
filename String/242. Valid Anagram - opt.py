class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        letters = [chr(i) for i in range(97, 123)]  

        for letter in letters:
            if s.count(letter) != t.count(letter):
                return False
        return True