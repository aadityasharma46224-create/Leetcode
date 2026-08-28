class Solution {
public:
    string reverseWords(string s) {
        vector<string>sv;
        int n = s.size();
        string p = "";
        for(int i=0; i<n; i++)
        {
            if((s[i]>=48 && s[i]<=57) || (s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
            {
                p = p + s[i];
            }
            else if(p!="" && s[i]==' ')
            {
                sv.push_back(p);
                p = "";
            }
            if(i==n-1)
            {
                if(p!="")
                {
                    sv.push_back(p);
                }
            }
        }
        int m = sv.size();
        int i=m-1;
        string ans="";
        while(i>=0)
        {
            ans = ans + sv[i];
            if(i!=0)
            {
                ans = ans + " ";
            }
            i--;
        }
        return ans;
    }
};