class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char>st1;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[' )
            {
                st1.push(s[i]);
            }
            else
            {
                if(st1.empty())
                {
                    return false;
                }
                else if(st1.top()=='(' && s[i]==')')
                {
                    st1.pop();
                }
                else if(st1.top()=='{' && s[i]=='}')
                {
                    st1.pop();
                }
                else if(st1.top()=='[' && s[i]==']')
                {
                    st1.pop();
                }
                else
                {
                    return false;
                }
            } 
        }
        return st1.empty();    // this inbuilt function is used to check whether stack is empty or not if it is then it will return true else false.
    }
};