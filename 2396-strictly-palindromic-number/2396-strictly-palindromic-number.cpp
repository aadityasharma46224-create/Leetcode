class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        string s = "";
        for(int i=2; i<=n-2; i++)
        {
            int p = n;
            while(p>0)
            {
                int r = p%i;
                s = char(r) + s;
                p = p/2;
            }
            int siz = s.size();
            int k=0; 
            int j=siz-1;
            while(k<j)
            {
                if(s[k]!=s[j])
                {
                    return false;
                }
                k++;
                j--;
            }
        }
        return true;
    }
};