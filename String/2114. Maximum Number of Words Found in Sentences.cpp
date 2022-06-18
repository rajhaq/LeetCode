class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        short maximum_number = 0;
        short count;
        string str;
        
        for (short i = 0; i<sentences.size();i++)
        {
            count=0;
            str = sentences[i];
            for (short j = 0; j<str.size();j++)
            {
                if (str[j] == ' ')
                    count++;    
            }
            if(maximum_number<count)
                maximum_number=count;
        }
        return maximum_number+1;
        
    }
};
// Runtime: 13 ms, faster than 79.96% of C++ online submissions for Maximum Number of Words Found in Sentences.
// Memory Usage: 9.9 MB, less than 36.85% of C++ online submissions for Maximum Number of Words Found in Sentences.
