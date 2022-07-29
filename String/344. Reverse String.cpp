class Solution {
public:
    void reverseString(vector<char>& s) {
        char temp; 
        unsigned int size = s.size();
            for(short i=0; i<(size/2); i++)
            {   
                temp=s[i];
                s[i]=s[size-(i+1)];
                s[size-(i+1)]=temp;
            }
    }
};
// Runtime: 37 ms
// Memory Usage: 23.2 MB