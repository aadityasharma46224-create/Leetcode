class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<vector<int>>vv;
        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            mp[nums[i]]++;
        }
        int max = 0;
        for(auto i:mp)
        {
            if(i.second>max)
            {
                max = i.second;
            }
        }
        for(int i=0; i<max; i++)
        {
            vector<int>v;
            for(auto i:mp)
            {
                if(i.second>0)
                {
                    v.push_back(i.first);
                }
                mp[i.first]--;
            }
            vv.push_back(v);
        }
        return vv;
    }
};