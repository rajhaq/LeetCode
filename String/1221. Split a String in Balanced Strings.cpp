class Solution {
public:
    int balancedStringSplit(string s) {
        short the_l = 0;
        short the_r = 0;
        short total = 0;
        for( short i = 0; i < s.size(); i++ )
        {
            if(s[i]=='L')
                the_l++;
            if(s[i]=='R')
                the_r++;
            if(the_l==the_r)
                total++;
        }
        return total;
        
    }
};

"Runtime: 4 ms, faster than 27.86% of C++ online submissions for Split a String in Balanced Strings.
Memory Usage: 6.2 MB, less than 39.97% of C++ online submissions for Split a String in Balanced Strings."