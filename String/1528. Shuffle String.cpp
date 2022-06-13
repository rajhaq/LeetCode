class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string new_s =s;
        for(int i=0;i<s.size();i++)
        {
            new_s[indices[i]]=s[i];
        }
        return new_s;
        
    }
};
// Runtime: 9 ms, faster than 72.63% of C++ online submissions for Shuffle String.
// Memory Usage: 15.1 MB, less than 77.64% of C++ online submissions for Shuffle String.
