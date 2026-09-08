class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int max=0;
        int maxi = 0;
        for(int i=0; i<n; i++)
        {
            if(nums[i]==1)
            {
                max++;
            }
            else
            {
                max = 0;
            }
            if(max>maxi)
            {
                maxi = max;
            }
        }
        return maxi;
    }
};