class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st1;
        int n = s.size();
        for(int i=0; i<n; i++)
        {
            if(st1.empty())
            {
                st1.push(s[i]);
            }
            else if(s[i]==')'&& st1.top()=='(')
            {
                st1.pop();
            }
            else
            {
                st1.push(s[i]);
            }
        }
        return st1.size();
    }
};