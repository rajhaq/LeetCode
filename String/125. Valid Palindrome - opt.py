class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        start = 0
        end = 0
        s_len= len(s)-1
        while (start+end)<s_len:
            if s[start].isalnum() and s[s_len-end].isalnum():
                if s[start].upper() in s[s_len-end].upper():
                    start+=1
                    end+=1
                else:
                    return False
            elif not s[start].isalnum():
                start+=1
            elif not s[s_len-end].isalnum():
                end+=1

        return True
        