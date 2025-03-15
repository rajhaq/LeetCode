class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        letters = "abcdefghijklmnopqrstuvwxyz"
        for l in letters:
            if(magazine.count(l)>=ransomNote.count(l)):
                continue
            else:
                return False
        return True