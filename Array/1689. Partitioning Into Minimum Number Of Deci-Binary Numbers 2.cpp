#include <string>
class Solution {
public:
    int minPartitions(string n) {
        int temp=0;
        sort( n.begin(),  n.end());
        stringstream ss;
            ss << n.back();
            ss >> temp; 
        return temp;
    }
};
// Runtime: 136 ms, faster than 5.18% of C++ online submissions for Partitioning Into Minimum Number Of Deci-Binary Numbers.
// Memory Usage: 13.6 MB, less than 17.88% of C++ online submissions for Partitioning Into Minimum Number Of Deci-Binary Numbers.