class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector< string > temp;
        vector< string > temp2;
        int i,j=0;
        for( i = 0; i<words.size(); i++ )
        {
            for( j = 0; j<words.size(); j++ )
            {
                if(i==j)
                    continue;
                if(strstr(words[j].c_str(),words[i].c_str()))
                {
                    temp.push_back(words[i]);
                    break;
                }
                    

            }
            
        }
        return temp;
        
    }
};