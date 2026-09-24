class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0 || n==1)
        {
            return n;
        }
        int cnt=1;
        int ans = 0;
        sort(nums.begin(),nums.end());
        for(int i=1; i<n; i++)
        {
            if(nums[i]==nums[i-1])
            {
                ans = max(ans,cnt);
                continue;
            }
            else if(nums[i]-1==nums[i-1])
            {
                cnt++;
            }
            else
            {
                cnt = 1;
            }
            ans = max(ans,cnt);
        }
        return ans;
    }
};