class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sum;
        for(short i=0; i<nums.size()-1;i++)
        {
            for(short j = i+1; j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    sum.push_back(i);
                    sum.push_back(j);
                    break;
                }   
            }
        }
                return sum ;
    }
};
// Runtime: 401 ms, faster than 32.17% of C++ online submissions for Two Sum.
// Memory Usage: 10.2 MB, less than 68.90% of C++ online submissions for Two Sum.