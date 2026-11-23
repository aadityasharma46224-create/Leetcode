class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>st;
        for(int i=0; i<n; i++)
        {
            st.insert(nums[i]);
        }
        int x = st.size();
        int ans = 0;
        for(int i=0; i<=n-x; i++)
        {
            unordered_map<int, int>mp;
            for(int j=i; j<n; j++)
            {
                mp[nums[j]]++;
                if(mp.size()==x)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};