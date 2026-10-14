class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt=0;
        vector<int>pre(n);
        pre[0]=nums[0];
        for(int i=1; i<n; i++)
        {
            pre[i] = pre[i-1] + nums[i];
        }
        unordered_map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            if(pre[i]==k)
            {
                cnt++;
            }
            int z = pre[i]-k;
            if(mp.find(z)!=mp.end())
            {
                cnt = cnt + mp[z];
            }
            mp[pre[i]]++;
        }
        return cnt;
    }
};