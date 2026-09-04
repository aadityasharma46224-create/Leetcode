class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        int m = items1.size();
        int n = items2.size();
        int cnt=0;
        map<int,int>mp;
        for(int i=0; i<m; i++)
        {
            mp[items1[i][0]]=items1[i][1];
        }
        for(int i=0; i<n; i++)
        {
            if(mp.find(items2[i][0])!=mp.end())
            {
                cnt++;
                mp[items2[i][0]] += items2[i][1];
            }
            else
            {
                mp[items2[i][0]]=items2[i][1];
            }
        }
        vector<vector<int>>vv;
        int z = m+n-cnt;
        for(auto i:mp)
        {
            vector<int>v;
            v.push_back(i.first);
            v.push_back(i.second);
            vv.push_back(v);
        }
        return vv;
    }
};