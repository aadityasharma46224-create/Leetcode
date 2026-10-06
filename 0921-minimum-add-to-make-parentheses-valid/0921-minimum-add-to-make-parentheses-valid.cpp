class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st1;
        int n = s.size();
        for(auto i:s)
        {
            if(st1.empty())
            {
                st1.push(i);
            }
            else if(i==')'&& st1.top()=='(')
            {
                st1.pop();
            }
            else
            {
                st1.push(i);
            }
        }
        return st1.size();
    }
};