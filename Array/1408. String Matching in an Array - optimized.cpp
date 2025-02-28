class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector< string > temp;
        for( int i = 0; i<words.size(); i++ )
        {
            for( int j = 0; j<words.size(); j++ )
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