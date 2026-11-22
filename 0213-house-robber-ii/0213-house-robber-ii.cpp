class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>v;
        vector<int>v2;
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
            return max(max(nums[0],nums[1]), nums[2]);
        }
        else
        {
            v.push_back(nums[0]);
            v.push_back(max(nums[0], nums[1]));
            v.push_back(nums[2]+nums[0]);
            for(int i=3; i<n-1; i++)
            {
                int val = max((nums[i]+v[i-2]), v[i-1]);
                v.push_back(val);
            }
            v2.push_back(nums[1]);
            v2.push_back(max(nums[2], nums[1]));
            v2.push_back(nums[3]+nums[1]);
            for(int i=4; i<n; i++)
            {
                int val = max((nums[i]+v2[i-3]), v2[i-2]);
                v2.push_back(val);
            }
        }
        int maxi = 0;
        for(int i=0; i<v.size(); i++)
        {
            maxi = max(maxi, v[i]);
        }
        int maxi2 = 0;
        for(int i=0; i<v2.size(); i++)
        {
            maxi2 = max(maxi2, v2[i]);
        }
        return max(maxi,maxi2);
    }
};