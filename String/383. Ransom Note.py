class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        new=""
        for r in range(len(ransomNote)):
            for m in range(len(magazine)):
                if magazine[m]==ransomNote[r]:
                    new += magazine[m]
                    magazine = magazine.replace(magazine[m],"0",1)
                    break
        if new==ransomNote:
            return True
        else:
            return False