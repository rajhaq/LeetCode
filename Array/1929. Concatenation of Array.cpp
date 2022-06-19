class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>& ans = nums;
        ans.insert(ans.end(),nums.begin(), nums.end());
        return ans;

    }
};
// Runtime: 10 ms, faster than 77.15% of C++ online submissions for Concatenation of Array.
// Memory Usage: 12.9 MB, less than 38.76% of C++ online submissions for Concatenation of Array.