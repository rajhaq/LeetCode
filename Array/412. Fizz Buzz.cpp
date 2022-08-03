class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> dataArray;
        string t="";
        for( int i = 1; i <= n; i++ ) {
            if(i%3==0 && i%5==0)
            {
                dataArray.push_back("FizzBuzz");
            }
            else if(i%3==0)
            {
                dataArray.push_back("Fizz");
            }
            else if(i%5==0)
            {
                dataArray.push_back("Buzz");
            }
            else
            {
                t = to_string(i);
                                
                dataArray.push_back( t );                

            }
            
        }
        return dataArray;
    }
};
// Runtime: 8 ms
// Memory Usage: 7.8 MB