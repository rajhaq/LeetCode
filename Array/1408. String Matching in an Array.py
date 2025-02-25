class Solution(object):
    def stringMatching(self, words):
        """
        :type words: List[str]
        :rtype: List[str]
        """
        new = list()
        for word in words:
            for word2 in words:
                if word == word2:
                    continue
                if word in word2:
                    new.append(word)
                    break
        return new