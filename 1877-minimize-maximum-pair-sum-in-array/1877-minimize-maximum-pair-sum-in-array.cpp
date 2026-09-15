class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int maxi = 0;
        int i=0;
        int j=n-1;
        while(i<j)
        {
            if((nums[i]+nums[j])>maxi)
            {
                maxi = nums[i]+nums[j];
            }
            i++;
            j--;
        }
        return maxi;
    }
};