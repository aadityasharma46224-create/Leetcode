class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        // 2, 5 , 12 17 27;
        int n = nums.size();
        vector<long long>v(n);
        int max = 0;
        for(int i=0; i<n; i++)
        {
            if(nums[i]>max)
            {
                max = nums[i];
            }
            v[i] = nums[i] + max;
        }
        for(int i=1; i<n; i++)
        {
            v[i]=v[i]+v[i-1];
        }
        return v;
    }
};