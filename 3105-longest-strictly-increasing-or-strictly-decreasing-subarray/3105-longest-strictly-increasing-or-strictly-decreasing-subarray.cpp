class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();

        // strictly increasing 
        int ans = 0;
        for(int i=0; i<n; i++)
        {
            int cnt = 1;
            for(int j=i+1; j<n; j++)
            {
                if(nums[j]>nums[j-1])
                {
                    cnt++;
                }
                else
                {
                    break;
                }
            }
            ans = max(ans, cnt);
        }

        // strictly decreasing 
        for(int i=0; i<n; i++)
        {
            int cnt = 1;
            for(int j=i+1; j<n; j++)
            {
                if(nums[j]<nums[j-1])
                {
                    cnt++;
                }
                else
                {
                    break;
                }
            }
            ans = max(ans, cnt);
        }
        return ans;
    }
};