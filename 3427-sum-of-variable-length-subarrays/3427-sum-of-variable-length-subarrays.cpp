class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int n = nums.size();
        vector<int>v(n);
        v[0]=nums[0];
        for(int i=1; i<n; i++)
        {
            v[i]=nums[i]+v[i-1];
        }
        int ans = v[0];
        for(int i=1; i<n; i++)
        {
            int start = max(0, i-nums[i]);
            if(start==0)
            {
                ans = ans + v[i];
            }
            else
            {
                ans = ans + v[i]-v[start-1];
            }
        }
        return ans;
    }
};