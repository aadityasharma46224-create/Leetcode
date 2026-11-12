class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>v;
        if(n==1)
        {
            return nums[0];
        }
        else if(n==2)
        {
            return max(nums[0], nums[1]);
        }
        else if(n==3)
        {
            return max((nums[0]+nums[2]), nums[1]);
        }
        else
        {
            v.push_back(nums[0]);
            v.push_back(max(nums[0], nums[1]));
            v.push_back(nums[2]+nums[0]);
            for(int i=3; i<n; i++)
            {
                int val = max((nums[i]+v[i-2]), (nums[i]+v[i-3]));
                v.push_back(val);
            }
        }
        int maxi = 0;
        for(int i=0; i<n; i++)
        {
            maxi = max(maxi, v[i]);
        }
        return maxi;
    }
};