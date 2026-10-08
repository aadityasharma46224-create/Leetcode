class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int start = 0;
        int ans = INT_MAX;
        for(int i=0; i<n; i++)
        {
            sum = sum + nums[i];
            while(sum>=target)
            {
                ans = min(ans,i-start+1);
                sum = sum - nums[start];
                start++;
            }
        }
        if(ans==INT_MAX)
        {
            return 0;
        }
        return ans;
    }
};