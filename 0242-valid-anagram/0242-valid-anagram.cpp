class Solution {
public:
    bool isAnagram(string s, string t) {
        int m = s.size();
        int n = t.size();
        if(m!=n)
        {
            return false;
        }
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // for(int i=0; i<m; i++)
        // {
        //     if(s[i]!=t[i])
        //     {
        //         return false;
        //     }
        // }
        // return true;
        unordered_map<char,int>mp;
        for(auto i:s)
        {
            mp[i]++;
        }
        unordered_map<char,int>mp2;
        for(auto i:t)
        {
            mp2[i]++;
        }
        for(auto i:mp)
        {
            char x = i.first;
            int y = i.second;
            if(mp2.find(x)!=mp2.end())
            {
                int z = mp2[x];
                if(y!=z)
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};