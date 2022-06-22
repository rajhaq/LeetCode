class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        short highest = 0;
        short sum = 0;
        for(short i=0;i<accounts.size();i++)
        {
            sum=0;
            for(short j=0; j<accounts[i].size();j++)
            {
                sum = sum + accounts[i][j];
                
            }
            if(sum>highest)
                highest=sum;
        }
        return highest;
        
    }
};
// Runtime: 11 ms, faster than 25.52% of C++ online submissions for Richest Customer Wealth.
// Memory Usage: 7.8 MB, less than 86.38% of C++ online submissions for Richest Customer Wealth.