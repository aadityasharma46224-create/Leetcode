class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int n = allowed.size();
        unordered_map<char, int>mp;
        for(int i=0; i<n; i++)
        {
            mp[allowed[i]]=i;
        }
        int m = words.size();
        int cnt=0;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<words[i].size(); j++)
            {
                if(mp.find(words[i][j])==mp.end())
                {
                    cnt++;
                    break;
                }
            }
        }
        return m-cnt;
    }
};