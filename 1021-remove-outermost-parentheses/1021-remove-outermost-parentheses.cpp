class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        stack<int>stac;
        string ans = "";
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='(' && cnt==0)
            {
                cnt=1;
            }
            else if(s[i]=='(' && cnt==1)
            {
                stac.push(s[i]);
                ans = ans + s[i];
            }
            else if(s[i]==')' && cnt==1 && !stac.empty())
            {
                stac.pop();
                ans = ans + s[i];
            }
            else if(stac.empty())
            {
                cnt=0;
            }
        }
        return ans;
    }
};