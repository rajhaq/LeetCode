class Solution {
public:
    int minPartitions(string n) {
        int highest = 0;
        int temp = 0;
        for(short i = 0; i<n.size(); i++)
        {   
            stringstream ss;
            ss << n[i];
            ss >> temp; 
            if(highest < temp)
                highest = temp;
        }
        return highest;
    }
};
// Runtime: 460 ms, faster than 5.18% of C++ online submissions for Partitioning Into Minimum Number Of Deci-Binary Numbers.
// Memory Usage: 13.6 MB, less than 64.92% of C++ online submissions for Partitioning Into Minimum Number Of Deci-Binary Numbers.
