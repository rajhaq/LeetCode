class Solution
{
public:
    int finalValueAfterOperations(vector<string> &operations)
    {
        int x = 0;
        for (int i = 0; i < operations.size(); i++)
        {
            if (operations[i] == "++X")
                ++x;
            else if (operations[i] == "--X")
                --x;
            else if (operations[i] == "X++")
                x++;
            else if (operations[i] == "X--")
                x--;
        }
        return x;
    }
};
// "Runtime: 8 ms, faster than 59.13% of C++ online submissions for String Matching in an Array.
// Memory Usage: 8.3 MB, less than 87.66% of C++ online submissions for String Matching in an Array."