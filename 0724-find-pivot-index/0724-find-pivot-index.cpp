class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i=1; i<n; i++)
        {
            nums[i] = nums[i]+nums[i-1];
        }
        for(int i=0; i<n; i++)
        {
            int left = (i==0)?0:nums[i-1];
            int right = nums[n-1]-nums[i];
            if(left==right)
            {
                return i;
            }
        }
        return -1;
    }
};