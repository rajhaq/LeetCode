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