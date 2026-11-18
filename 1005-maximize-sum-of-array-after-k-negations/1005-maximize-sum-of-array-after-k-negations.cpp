class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i=0; i<k; i++)
        {
            sort(nums.begin(),nums.end());
            nums[0]= (-1)*nums[0];
        }
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            sum += nums[i];
        }
        return sum;
    }
};